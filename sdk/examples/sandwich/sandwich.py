# implementation of sandwich kingdom content specification

from sandwich_map import *
from sandwich_dialog import *
from sandwich_script import *

import lxml.etree
import os
import os.path
import re
import tmx
import misc
import sys
import traceback

def load():
	try:
		return World(".")
	except:
		log_error()

def export():
	try:
		World(".").export()
	except:
		log_error()

def log_error():
	typ,val,bt = sys.exc_info()
	print "\n\nUnexpected error:", val
	print "-----------"
	traceback.print_tb(bt)

class World:
	def __init__(self, dir):
		self.dir = dir
		self.script = GameScript(self, os.path.join(dir, "game-script.xml"))
		self.dialog = DialogDatabase(self, os.path.join(dir, "dialog-database.xml"))

		# list maps in alphabetical order
		maps_by_name = [ (map.id, map) for map in (Map(self, os.path.join(dir, path)) for path in os.listdir(dir) if path.endswith(".tmx")) ]
		maps_by_name.sort();
		self.maps = [ map for _,map in maps_by_name ]
		self.map_dict = dict(maps_by_name)
		for i,m in enumerate(self.maps):
			m.index = i
		
		#validate maps
		if len(self.maps) == 0:
			raise Exception("No maps!")
		# validate map links
		for map in self.maps:
			for gate in map.list_triggers_of_type(TRIGGER_GATEWAY):
				if not gate.target_map in self.map_dict:
					raise Exception("Link to non-existent map: " + gate.target_map)
				tmap = self.map_dict[gate.target_map]
				found = False
				for othergate in tmap.list_triggers_of_type(TRIGGER_GATEWAY):
					if othergate.id == gate.target_gate:
						found = True
						break
				if not found:
					raise Exception("Link to non-existent gate: " + gate.target_gate)
		# validate quests
		for quest in self.script.quests:
			if not quest.map in self.map_dict:
				raise Exception("Unknown map in game script: " + quest.map)
		# log for good measure
		print len(self.script.quests), " quests found: ", [q.id for q in self.script.quests]
		print len(self.dialog.dialogs), " dialogs found: ", [d for d in self.dialog.dialogs]
		print len(self.maps), " maps found: ", [m.id for m in self.maps]

	def export(self):
		with open(os.path.join(self.dir,"content.gen.lua"), "w") as lua:
			lua.write("--GENERATED BY SANDWICH.PY, DO NOT EDIT BY HAND\n")
			lua.write("\n-- MAP IMAGES\n")
			for filename in (os.path.basename(path) for path in os.listdir(self.dir) if path.endswith(".tmx")):
				name = filename[:-4]
				lua.write("TileSet_%s = image{ \"%s.png\", width=16, height=16 }\n" % (name,name))
				if os.path.exists(name + "_overlay.png"):
					lua.write("Overlay_%s = image{ \"%s_overlay.png\", width=16, height=16 }\n" % (name,name))
				lua.write("Blank_%s = image{ \"%s_blank.png\", width=128, height=128 }\n" % (name,name))
			lua.write("\n-- DIALOG IMAGES\n")
			for name in self.dialog.list_npc_image_names():
				lua.write("NPC_%s = image{ \"%s.png\", width=32, height=32, pinned=true }\n" % (name,name))
			for name in self.dialog.list_detail_image_names():
				lua.write("NPC_Detail_%s = image{ \"%s.png\" }\n" % (name,name))
		
		with open(os.path.join(self.dir,"content.gen.cpp"), "w") as src:
			src.write("// GENERATED BY SANDWICH.PY, NO NOT EDIT BY HAND\n")
			src.write("#include \"Content.h\"\n#include \"assets.gen.h\"\n\n")
			src.write("const unsigned gMapCount = %d;\n" % len(self.maps))
			src.write("const unsigned gQuestCount = %d;\n" % len(self.script.quests))
			src.write("const unsigned gDialogCount = %d;\n\n" % len(self.dialog.dialogs))
			for map in self.maps:
				map.write_source_to(src)
			src.write("\nconst MapData gMapData[] = {\n")
			for map in self.maps:
				map.write_decl_to(src)
			src.write("};\n\n")

			src.write("const QuestData gQuestData[] = {\n")
			for q in self.script.quests:
				src.write("    { %d },\n" % self.map_dict[q.map].index)
			src.write("};\n\n")
			src.write("const DialogData gDialogData[] = {};\n\n")


