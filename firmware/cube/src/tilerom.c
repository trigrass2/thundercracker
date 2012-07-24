/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Tile ROM for Thundercracker cube firmware.
 * This file is AUTOMATICALLY GENERATED by romgen.py
 *
 * Copyright <c> 2011 Sifteo, Inc. All rights reserved.
 */

#include <stdint.h>

/*
 * ROM graphics data grows downward from the end of the code ROM.
 * Besides keeping our address layout simple, this makes it much
 * harder to exploit a firmware bug in order to read back our
 * (secret) firmware ROM.
 *
 * Tile data must be aligned on a 256-byte boundary. Currently
 * we place it in the last 4kB of ROM space.
 */

const __code __at (0x3000) uint8_t rom_tiles[] = {
    0x00,0x00,0x08,0x08,0x14,0x14,0x14,0x14,0x08,0x3c,0x03,0x23,0x04,0x0a,0x08,0x08,
    0x10,0x08,0x08,0x10,0x08,0x2a,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,
    0x1c,0x22,0x08,0x0c,0x1c,0x22,0x1c,0x22,0x10,0x18,0x3e,0x02,0x1c,0x22,0x3e,0x20,
    0x1c,0x22,0x1c,0x22,0x00,0x00,0x00,0x00,0x10,0x08,0x00,0x00,0x04,0x08,0x1c,0x22,
    0x1c,0x22,0x08,0x14,0x1e,0x22,0x1c,0x22,0x1e,0x22,0x3e,0x02,0x3e,0x02,0x1c,0x22,
    0x22,0x22,0x1c,0x08,0x20,0x20,0x22,0x12,0x02,0x02,0x22,0x36,0x22,0x22,0x1c,0x22,
    0x1e,0x22,0x1c,0x22,0x1e,0x22,0x1c,0x22,0x3e,0x08,0x22,0x22,0x22,0x22,0x22,0x22,
    0x22,0x22,0x22,0x22,0x3e,0x20,0x3c,0x04,0x00,0x02,0x1e,0x10,0x00,0x00,0x00,0x00,
    0x04,0x08,0x00,0x00,0x02,0x02,0x00,0x00,0x20,0x20,0x00,0x00,0x18,0x04,0x00,0x00,
    0x02,0x02,0x08,0x00,0x10,0x00,0x04,0x04,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x08,0x08,0x08,0x08,0x10,0x00,0x00,0x63,0x77,
    0x01,0x01,0x03,0x03,0x07,0x07,0x0f,0x0f,0x1f,0x1f,0x3f,0x3f,0x7f,0x7f,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x18,0x3c,0x7e,
    0x00,0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x18,0x18,
    0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0x10,0x30,0x08,0x0c,0x18,0x3c,0x18,0x18,
    0x00,0x00,0x08,0x08,0x14,0x00,0x3e,0x14,0x0a,0x1c,0x10,0x08,0x0a,0x04,0x08,0x00,
    0x04,0x04,0x20,0x20,0x1c,0x2a,0x08,0x3e,0x00,0x00,0x00,0x3e,0x00,0x00,0x10,0x08,
    0x32,0x2a,0x08,0x08,0x20,0x18,0x20,0x18,0x14,0x12,0x1e,0x20,0x02,0x1e,0x10,0x08,
    0x22,0x1c,0x22,0x3c,0x08,0x00,0x08,0x00,0x04,0x02,0x3e,0x00,0x10,0x20,0x20,0x18,
    0x2a,0x3a,0x22,0x22,0x22,0x1e,0x02,0x02,0x22,0x22,0x02,0x1e,0x02,0x1e,0x02,0x32,
    0x22,0x3e,0x08,0x08,0x20,0x20,0x0a,0x06,0x02,0x02,0x2a,0x2a,0x26,0x2a,0x22,0x22,
    0x22,0x1e,0x22,0x22,0x22,0x1e,0x02,0x1c,0x08,0x08,0x22,0x22,0x22,0x22,0x22,0x2a,
    0x14,0x08,0x14,0x08,0x10,0x08,0x04,0x04,0x04,0x08,0x10,0x10,0x08,0x14,0x00,0x00,
    0x10,0x00,0x1c,0x20,0x1e,0x22,0x1c,0x22,0x3c,0x22,0x1c,0x22,0x04,0x1e,0x1c,0x22,
    0x1e,0x22,0x08,0x08,0x18,0x10,0x24,0x14,0x08,0x08,0x16,0x2a,0x1e,0x22,0x1c,0x22,
    0x1e,0x22,0x1c,0x22,0x34,0x0c,0x3c,0x02,0x1e,0x04,0x22,0x22,0x22,0x22,0x22,0x22,
    0x22,0x14,0x22,0x22,0x3e,0x10,0x08,0x04,0x08,0x08,0x10,0x20,0x06,0x49,0x3e,0x1c,
    0x01,0x01,0x03,0x03,0x07,0x07,0x0f,0x0f,0x1f,0x1f,0x3f,0x3f,0x7f,0x7f,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0x3c,0x7e,0xff,0xff,
    0x3c,0x3c,0x18,0x18,0x00,0xff,0x18,0xff,0x18,0x1f,0x18,0xf8,0x00,0xff,0x18,0xff,
    0x00,0x1f,0x18,0x1f,0x18,0xf8,0x00,0xf8,0x70,0xff,0x0e,0xff,0x7e,0xff,0x18,0x18,
    0x36,0x7f,0x00,0x08,0x00,0x08,0x18,0x24,0x00,0x22,0x22,0x22,0x08,0x08,0x3c,0x02,
    0x14,0x00,0x3c,0x42,0x0c,0x18,0x48,0x24,0x00,0x00,0x7e,0x81,0x3c,0x42,0x3e,0x00,
    0x08,0x14,0x00,0x08,0x1c,0x10,0x1c,0x10,0x10,0x08,0x00,0x00,0x7c,0x2e,0x00,0x00,
    0x00,0x00,0x08,0x0c,0x00,0x1c,0x09,0x12,0x00,0x00,0x18,0x38,0x00,0x00,0x08,0x00,
    0x08,0x10,0x08,0x04,0x08,0x14,0x2c,0x1a,0x14,0x00,0x1c,0x14,0x3c,0x0a,0x1c,0x22,
    0x08,0x10,0x08,0x04,0x08,0x14,0x14,0x00,0x08,0x10,0x08,0x04,0x08,0x14,0x14,0x00,
    0x1e,0x22,0x2c,0x1a,0x08,0x10,0x08,0x04,0x08,0x14,0x2c,0x1a,0x14,0x00,0x00,0x22,
    0x20,0x1c,0x04,0x08,0x10,0x08,0x08,0x14,0x14,0x00,0x10,0x08,0x1c,0x08,0x1c,0x22,
    0x08,0x10,0x08,0x04,0x08,0x14,0x2c,0x1a,0x14,0x00,0x1c,0x14,0x00,0x00,0x00,0x1c,
    0x18,0x20,0x0c,0x02,0x1c,0x22,0x14,0x00,0x08,0x10,0x08,0x04,0x08,0x14,0x14,0x00,
    0x2c,0x10,0x2c,0x1a,0x08,0x10,0x08,0x04,0x08,0x14,0x2c,0x1a,0x00,0x14,0x00,0x08,
    0x00,0x20,0x08,0x10,0x08,0x04,0x08,0x14,0x00,0x14,0x10,0x08,0x02,0x02,0x14,0x00,
    0x00,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0xff,0xfe,0x80,0xc0,0x01,0x03,0xff,0x7f,
    0xff,0xff,0xe0,0xf8,0x07,0x1f,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x78,
    0x06,0x06,0x60,0xe0,0x00,0xff,0x06,0x07,0x00,0x80,0xbf,0xdf,0x00,0x00,0x7e,0xbf,
    0xff,0x7f,0x60,0xe0,0x00,0xff,0x06,0x07,0x60,0x60,0x06,0x1e,0x7e,0x3f,0x3f,0x1f,
    0x7f,0x7f,0x00,0x08,0x1c,0x2a,0x04,0x0e,0x1c,0x14,0x14,0x3e,0x08,0x00,0x1c,0x22,
    0x00,0x00,0x99,0x85,0x14,0x18,0x12,0x09,0x3e,0x20,0xa5,0x81,0x9d,0xa5,0x00,0x00,
    0x08,0x00,0x08,0x3e,0x1c,0x04,0x1c,0x10,0x04,0x00,0x22,0x22,0x2e,0x2c,0x00,0x08,
    0x00,0x00,0x08,0x08,0x14,0x1c,0x24,0x48,0x00,0x00,0x28,0x08,0x08,0x00,0x08,0x18,
    0x08,0x14,0x08,0x14,0x08,0x14,0x08,0x14,0x08,0x14,0x1c,0x14,0x0a,0x1e,0x02,0x02,
    0x3e,0x02,0x3e,0x02,0x3e,0x02,0x3e,0x02,0x1c,0x08,0x1c,0x08,0x1c,0x08,0x1c,0x08,
    0x22,0x27,0x22,0x26,0x1c,0x22,0x1c,0x22,0x1c,0x22,0x1c,0x22,0x1c,0x22,0x14,0x08,
    0x32,0x2a,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x38,0x48,0x22,0x1a,
    0x1c,0x20,0x1c,0x20,0x1c,0x20,0x1c,0x20,0x1c,0x20,0x1c,0x20,0x14,0x28,0x22,0x02,
    0x1c,0x22,0x1c,0x22,0x1c,0x22,0x1c,0x22,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
    0x28,0x20,0x00,0x1e,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x3e,
    0x1c,0x32,0x00,0x22,0x00,0x22,0x00,0x22,0x00,0x22,0x22,0x22,0x1e,0x22,0x22,0x22,
    0x00,0x0f,0x18,0x1f,0x18,0xf8,0x00,0xf0,0xfc,0xf8,0xe0,0xf0,0x07,0x0f,0x3f,0x1f,
    0xff,0xfe,0xfc,0xfe,0x3f,0x7f,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x78,
    0x06,0x06,0xc0,0x00,0xff,0x00,0x03,0x00,0xc0,0xe0,0xef,0xf7,0x80,0xc0,0xdf,0xef,
    0xbf,0xdf,0xc0,0x00,0xff,0x00,0x03,0x00,0x60,0x60,0x1e,0x1e,0x1f,0x0f,0x0f,0x07,
    0x00,0x06,0x00,0x00,0x00,0x60,0x00,0x00,0x10,0x20,0xc0,0xe0,0x0e,0x07,0x09,0x04,
    0x00,0x00,0x00,0x00,0xff,0xff,0x01,0x00,0x7f,0x7f,0x40,0x00,0x78,0x3c,0x00,0x00,
    0xe0,0xc0,0x01,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,0x00,0x00,0x70,0x70,0x00,0x00,0x00,0x00,
    0xe0,0xc0,0x79,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x78,0x78,0x00,0x00,0x00,0x00,0x0f,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xc0,0x00,0x00,0xe7,0xc3,0x01,0x03,
    0x00,0x00,0x0f,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x3c,0x78,0x78,0x3c,0x3c,
    0xc0,0xc0,0xf3,0xf3,0x00,0x00,0xf0,0xe0,0x00,0x81,0x00,0x00,0x0f,0x07,0x00,0x00,
    0x00,0x00,0xf0,0xf0,0x00,0x00,0x3c,0x3c,0x00,0x00,0x78,0x78,0x00,0x00,0x0f,0x0f,
    0x00,0x00,0x3c,0x3c,0x00,0x00,0xf0,0xf0,0x00,0x00,0x0f,0x0f,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xf0,0x00,0x00,0xff,0xff,0x00,0x7e,0x00,0x0f,0x00,0x00,0x00,0x00,
    0x00,0x00,0x30,0x38,0xe0,0xe0,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,
    0xff,0xff,0x08,0x18,0x07,0x07,0x30,0x38,0xe0,0xe0,0x00,0x00,0xff,0xff,0x00,0x00,
    0xff,0xff,0x00,0x00,0xff,0xff,0x08,0x18,0x07,0x07,0x08,0x18,0xf7,0xe7,0x00,0x7f,
    0xff,0x80,0x00,0x00,0xff,0xff,0x07,0x03,0xfc,0xfe,0xc0,0xc0,0x3f,0x3f,0x00,0x00,
    0xff,0x1b,0xee,0xca,0xff,0xdf,0xef,0x98,0xc0,0x80,0xc0,0x00,0x03,0x01,0x03,0x01,
    0x00,0x00,0x06,0x0f,0xff,0x07,0x00,0x00,0x7f,0x70,0x00,0x00,0x1e,0x0f,0x00,0x01,
    0x80,0x00,0x07,0x0f,0x00,0x08,0x00,0x3c,0x00,0x24,0x00,0xf8,0x00,0x08,0x00,0x07,
    0x00,0x04,0x00,0x0f,0x00,0x09,0x07,0x07,0x00,0x00,0x70,0x70,0x00,0x00,0x00,0x00,
    0x80,0x00,0x1f,0x0f,0x00,0xff,0x00,0x01,0x00,0xff,0x00,0x80,0x00,0xbc,0x00,0xa4,
    0x78,0xff,0x00,0xf7,0x00,0x14,0x0f,0xff,0x00,0x80,0x00,0xfc,0x00,0x04,0x00,0xff,
    0x00,0xf3,0x00,0x12,0x00,0x0f,0x00,0x08,0xe0,0xf0,0x00,0x00,0x81,0x00,0x07,0x0f,
    0x00,0x00,0x0f,0xff,0x00,0x00,0x00,0xff,0x00,0x80,0x3c,0x3c,0x78,0x78,0x3c,0xfc,
    0xc0,0xff,0xf3,0xf3,0x00,0x00,0xc0,0x80,0xc3,0xe7,0x00,0x00,0x03,0x01,0x00,0xff,
    0x00,0x01,0xf0,0xff,0x00,0x00,0x3c,0x3c,0x00,0x00,0x78,0x78,0x00,0x00,0x0f,0xff,
    0x00,0x80,0x3c,0xfc,0x00,0x00,0xf0,0xf3,0x00,0x02,0x0f,0x0f,0x00,0x00,0x00,0x00,
    0x00,0x00,0xfc,0x1e,0xe0,0xf8,0x01,0x00,0xff,0xff,0x38,0x60,0x07,0x1f,0x00,0x00,
    0x00,0x00,0x1c,0x0c,0xf0,0xf8,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,
    0xff,0xff,0x30,0x20,0x0f,0x1f,0x3c,0x7c,0xd0,0x88,0xf0,0xf8,0x0f,0x07,0xff,0xff,
    0x00,0x00,0x0f,0x1f,0xf0,0xe0,0x3c,0x3e,0x03,0x01,0xb8,0xf8,0x47,0x07,0xff,0xff,
    0x00,0x7e,0x03,0x07,0xfc,0xf8,0x03,0x03,0xfe,0xfe,0xc0,0xc0,0x3f,0x3f,0x00,0x00,
    0x7f,0xff,0x80,0x00,0x00,0x01,0xff,0xfe,0xc0,0x80,0x3f,0x7f,0xc7,0xc3,0x3c,0x3e,
    0x1d,0x1d,0xf3,0xf3,0x70,0x70,0xcf,0xcf,0xc7,0x87,0x3c,0x7c,0xf0,0x00,0xff,0xff,
    0x0f,0x00,0xff,0xff,0x30,0x60,0xcf,0x9f,0x02,0x02,0xfc,0xfc,0xc0,0xc0,0x3f,0x3f,
    0x7f,0x1f,0xe0,0xf8,0x40,0x40,0x3f,0x3f,0xc2,0xc2,0x3c,0x3c,0x1d,0x1d,0xf3,0xf3,
    0x00,0x00,0xff,0xff,0x70,0x70,0xcf,0xcf,0x47,0x47,0x3c,0x3c,0x00,0x00,0xff,0xff,
    0x70,0x70,0xcf,0xcf,0x30,0x60,0xc0,0x80,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0x0c,0x06,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x8c,0x8c,0x00,0x00,0xc1,0xc1,0x02,0x00,0xc6,0xee,
    0x80,0x80,0x00,0x00,0x44,0x44,0xc0,0xc0,0x1c,0x30,0x04,0x08,0xc6,0x80,0x01,0x00,
    0xff,0xff,0x07,0x03,0xff,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xfc,0x97,0x96,0x7f,0x3f,0xea,0x6a,
    0x1e,0x3c,0xf0,0xe1,0x00,0x80,0x00,0x80,0x00,0x01,0x00,0x01,0x7e,0xfc,0xc2,0xbc,
    0x7e,0x3f,0x43,0x3d,0xff,0xff,0x07,0x01,0xff,0xff,0xff,0xff,0xe0,0x80,0xf8,0xf8,
    0x1f,0x1f,0x00,0x00,0xf8,0xf8,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x00,0x00,0x07,0x0f,0xf8,0xf0,0x80,0x80,0x7f,0x7f,0xc3,0xc3,0x3e,0x3e,
    0x1d,0x1d,0xf3,0xf3,0x70,0x70,0xcf,0xcf,0x87,0x87,0x7c,0x7c,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0xe0,0xe0,0x9f,0x9f,0x02,0x06,0xfc,0xf8,0xc0,0x80,0x3f,0xff,
    0x07,0x01,0xfe,0xff,0x40,0x60,0x3f,0x1f,0xc2,0xe6,0x3c,0x18,0x1d,0x1d,0xf3,0xe3,
    0x00,0x00,0xff,0xff,0x70,0x78,0xcf,0xc7,0x47,0x67,0x3c,0x18,0x00,0x00,0xff,0xff,
    0x38,0x1c,0xe7,0xf3,0xc0,0x80,0x00,0x00,0x00,0x03,0xff,0xfc,0x00,0x00,0xff,0xff,
    0x00,0xc0,0xff,0x3f,0x03,0x01,0x00,0x00,0x00,0xc0,0x00,0x20,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x8c,0x8c,0x00,0x00,0xd1,0xd9,0x00,0x00,0x7c,0x38,
    0x80,0x80,0x00,0x00,0x44,0x54,0xd0,0xd8,0x60,0xc0,0x10,0x20,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,
    0x00,0xe0,0xe0,0xf8,0x00,0x07,0x07,0x1f,0xfc,0xf8,0x9e,0xfc,0x3f,0x1f,0x7a,0x3f,
    0x78,0xf0,0xc3,0x87,0xd8,0xfc,0x58,0x64,0x1b,0x3f,0x1a,0x26,0xf8,0xfc,0x48,0x44,
    0x1f,0x3f,0x12,0x22,0xff,0xff,0x01,0x00,0xff,0xff,0xff,0xff,0x80,0x00,0xf8,0xf8,
    0x1f,0xff,0x00,0x00,0xf8,0xff,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0x00,0x00,0x08,0x00,0x00,0x00,0x3e,0x14,0x28,0x1e,0x04,0x62,0x2a,0x12,0x00,0x00,
    0x04,0x08,0x20,0x10,0x08,0x00,0x08,0x08,0x10,0x10,0x00,0x00,0x00,0x00,0x04,0x02,
    0x26,0x22,0x08,0x08,0x04,0x02,0x20,0x22,0x3e,0x10,0x20,0x22,0x22,0x22,0x04,0x04,
    0x22,0x22,0x20,0x22,0x08,0x00,0x08,0x08,0x04,0x08,0x3e,0x00,0x10,0x08,0x08,0x00,
    0x1a,0x02,0x3e,0x22,0x22,0x22,0x02,0x22,0x22,0x22,0x02,0x02,0x02,0x02,0x22,0x22,
    0x22,0x22,0x08,0x08,0x20,0x22,0x0a,0x12,0x02,0x02,0x22,0x22,0x32,0x22,0x22,0x22,
    0x02,0x02,0x2a,0x12,0x22,0x22,0x20,0x22,0x08,0x08,0x22,0x22,0x22,0x14,0x2a,0x36,
    0x14,0x22,0x08,0x08,0x04,0x02,0x04,0x04,0x10,0x20,0x10,0x10,0x22,0x00,0x00,0x00,
    0x00,0x00,0x3c,0x22,0x22,0x22,0x02,0x22,0x22,0x22,0x3e,0x02,0x04,0x04,0x22,0x3c,
    0x22,0x22,0x08,0x08,0x10,0x10,0x0c,0x14,0x08,0x08,0x2a,0x2a,0x22,0x22,0x22,0x22,
    0x22,0x1e,0x22,0x3c,0x04,0x04,0x1c,0x20,0x04,0x04,0x22,0x32,0x22,0x14,0x2a,0x2a,
    0x08,0x14,0x22,0x3c,0x08,0x04,0x08,0x08,0x08,0x08,0x10,0x10,0x30,0x00,0x3e,0x77,
    0x01,0x01,0x03,0x03,0x07,0x07,0x0f,0x0f,0x1f,0x1f,0x3f,0x3f,0x7f,0x7f,0x00,0x00,
    0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7e,0x3c,0xff,0xff,
    0x3c,0x3c,0x18,0x18,0xff,0x00,0xff,0x18,0x1f,0x18,0xf8,0x18,0xff,0x18,0xff,0x00,
    0x1f,0x18,0x1f,0x00,0xf8,0x00,0xf8,0x18,0xff,0x70,0xff,0x0e,0x18,0x18,0xff,0x7e,
    0x00,0x00,0x08,0x00,0x00,0x00,0x14,0x00,0x08,0x00,0x60,0x00,0x2c,0x00,0x00,0x00,
    0x10,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,
    0x1c,0x00,0x08,0x00,0x3e,0x00,0x1c,0x00,0x10,0x00,0x1c,0x00,0x1c,0x00,0x04,0x00,
    0x1c,0x00,0x1c,0x00,0x00,0x00,0x04,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x08,0x00,
    0x3c,0x00,0x22,0x00,0x1e,0x00,0x1c,0x00,0x1e,0x00,0x3e,0x00,0x02,0x00,0x1c,0x00,
    0x22,0x00,0x1c,0x00,0x1c,0x00,0x22,0x00,0x3e,0x00,0x22,0x00,0x22,0x00,0x1c,0x00,
    0x02,0x00,0x2c,0x00,0x22,0x00,0x1c,0x00,0x08,0x00,0x1c,0x00,0x08,0x00,0x22,0x00,
    0x22,0x00,0x08,0x00,0x3e,0x00,0x3c,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x00,0x7f,
    0x00,0x00,0x3c,0x00,0x1c,0x00,0x1c,0x00,0x3c,0x00,0x3c,0x00,0x04,0x00,0x20,0x1c,
    0x22,0x00,0x08,0x00,0x10,0x0c,0x24,0x00,0x08,0x00,0x22,0x00,0x22,0x00,0x1c,0x00,
    0x02,0x02,0x20,0x20,0x04,0x00,0x1e,0x00,0x18,0x00,0x2c,0x00,0x08,0x00,0x36,0x00,
    0x22,0x00,0x20,0x1c,0x3e,0x00,0x10,0x00,0x08,0x08,0x08,0x00,0x00,0x00,0x63,0x00,
    0x01,0x01,0x03,0x03,0x07,0x07,0x0f,0x0f,0x1f,0x1f,0x3f,0x3f,0x7f,0x7f,0x00,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x18,0x00,0x7e,0x3c,
    0x00,0x00,0x18,0x18,0x00,0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,
    0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0x30,0x10,0x0c,0x08,0x18,0x18,0x3c,0x18,
    0x3e,0x1c,0x08,0x08,0x0a,0x2a,0x04,0x04,0x1c,0x22,0x08,0x3e,0x08,0x08,0x1c,0x20,
    0x00,0x00,0x85,0x99,0x00,0x1c,0x12,0x24,0x20,0x00,0xbd,0x99,0x9d,0xa5,0x00,0x00,
    0x00,0x00,0x08,0x08,0x1c,0x00,0x1c,0x00,0x00,0x00,0x22,0x32,0x28,0x28,0x00,0x00,
    0x00,0x00,0x1c,0x00,0x00,0x1c,0x24,0x12,0x00,0x00,0x08,0x0e,0x20,0x00,0x20,0x22,
    0x22,0x3e,0x22,0x3e,0x22,0x3e,0x22,0x3e,0x22,0x3e,0x22,0x3e,0x0a,0x0a,0x22,0x1c,
    0x1e,0x02,0x1e,0x02,0x1e,0x02,0x1e,0x02,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
    0x22,0x22,0x2a,0x32,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x14,0x22,
    0x2a,0x26,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x14,0x08,0x38,0x08,0x22,0x22,
    0x3c,0x22,0x3c,0x22,0x3c,0x22,0x3c,0x22,0x3c,0x22,0x3c,0x22,0x3c,0x0a,0x22,0x1c,
    0x3e,0x02,0x3e,0x02,0x3e,0x02,0x3e,0x02,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
    0x3c,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x08,
    0x2a,0x26,0x22,0x32,0x22,0x32,0x22,0x32,0x22,0x32,0x22,0x3c,0x22,0x1e,0x22,0x3c,
    0x1f,0x18,0x0f,0x00,0xf0,0x00,0xf8,0x18,0xf0,0xe0,0xf8,0xfc,0x1f,0x3f,0x0f,0x07,
    0xfe,0xfc,0xfe,0xff,0x7f,0xff,0x7f,0x3f,0x00,0xc0,0x00,0xff,0x00,0x03,0x78,0x78,
    0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0xf8,0xfb,0xfd,0xe0,0xf0,0xf7,0xfb,
    0xef,0xf7,0x00,0xc0,0x00,0xff,0x00,0x03,0x60,0x60,0x1e,0x1e,0x07,0x03,0x03,0x01,
    0x08,0x00,0x08,0x08,0x1c,0x08,0x3a,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x1e,0x00,
    0x00,0x00,0x42,0x3c,0x00,0x00,0x48,0x00,0x00,0x00,0x81,0x7e,0x42,0x3c,0x00,0x00,
    0x00,0x00,0x00,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x2e,0x02,0x28,0x00,0x00,0x00,
    0x08,0x04,0x00,0x00,0x00,0x00,0x09,0x00,0x2a,0x00,0x0f,0x07,0x2a,0x00,0x1c,0x00,
    0x22,0x00,0x22,0x00,0x22,0x00,0x22,0x00,0x22,0x00,0x22,0x00,0x3a,0x00,0x08,0x04,
    0x3e,0x00,0x3e,0x00,0x3e,0x00,0x3e,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,
    0x1e,0x00,0x22,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x00,0x00,
    0x1c,0x02,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x08,0x00,0x1c,0x00,0x1a,0x00,
    0x3c,0x00,0x3c,0x00,0x3c,0x00,0x3c,0x00,0x3c,0x00,0x3c,0x00,0x34,0x00,0x08,0x04,
    0x3c,0x00,0x3c,0x00,0x3c,0x00,0x3c,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,
    0x1c,0x00,0x22,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x1c,0x00,0x00,0x00,
    0x1c,0x02,0x2c,0x00,0x2c,0x00,0x2c,0x00,0x2c,0x00,0x20,0x1c,0x02,0x02,0x20,0x1c,
    0x18,0x18,0x00,0x00,0x00,0x00,0x18,0x18,0xc0,0x80,0xfe,0xff,0x7f,0xff,0x03,0x01,
    0xf8,0xe0,0xff,0xff,0xff,0xff,0x1f,0x07,0xe0,0x60,0xff,0x00,0x07,0x06,0x78,0x60,
    0x06,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x7e,0xfe,0xff,0xf8,0xfc,0xfd,0x7e,
    0xfb,0xfd,0xe0,0x60,0xff,0x00,0x07,0x06,0x60,0x60,0x1e,0x06,0x01,0x00,0x00,0x00,
    0x13,0x16,0xc2,0xc4,0xce,0x6f,0x89,0x48,0x80,0x80,0x00,0x00,0x01,0x01,0x01,0x01,
    0x80,0xc0,0x1f,0x3f,0x07,0x07,0x00,0x00,0x70,0x70,0x00,0x00,0x1e,0x3c,0x00,0x00,
    0x80,0xc0,0x07,0x03,0x00,0x00,0x3c,0x3c,0x00,0x00,0xf8,0xf8,0x00,0x00,0x07,0x07,
    0x00,0x00,0x0f,0x0f,0x00,0x00,0xff,0xff,0x00,0x00,0x7f,0x7f,0x00,0x00,0x18,0x3c,
    0x18,0x00,0x06,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xbc,0xbc,0x00,0x00,
    0xff,0xff,0xf7,0xf7,0x00,0x00,0xff,0xff,0x00,0x00,0xfc,0xfc,0x00,0x00,0xff,0xff,
    0xf3,0xf3,0x00,0x00,0x0f,0x0f,0x00,0x00,0x78,0x3c,0x00,0x04,0x00,0x00,0x1e,0x3c,
    0x00,0x20,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0x3c,0x3c,0x78,0x78,0xfc,0xfc,
    0xff,0xff,0xf3,0xf3,0x00,0x00,0x00,0x00,0xff,0x7e,0x00,0x00,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0x00,0x00,0x3c,0x3c,0x00,0x00,0x78,0x78,0x00,0x00,0xff,0xff,
    0x00,0x00,0xfc,0xfc,0x00,0x00,0xf3,0xf3,0x00,0x00,0x0f,0x0f,0x00,0x00,0x80,0xc0,
    0x00,0x00,0x07,0x03,0xfc,0xff,0x00,0x00,0xff,0xff,0xc0,0x00,0x3f,0xff,0x01,0x03,
    0x00,0x00,0x0e,0x06,0xf8,0xfc,0x00,0xc0,0xff,0x3f,0x00,0x01,0xff,0xfe,0x00,0x00,
    0xff,0xff,0x60,0x40,0x1f,0x3f,0xee,0xc6,0x18,0x3c,0xfc,0x3d,0xe3,0xf3,0xff,0x00,
    0xff,0xff,0x3f,0x70,0xc7,0xcf,0x7f,0x4f,0x18,0x3c,0xf8,0xf8,0x07,0x07,0x81,0x01,
    0xff,0xfe,0x0f,0x1c,0xf3,0xe7,0x03,0x03,0xfe,0xfe,0xc0,0xc0,0x3f,0x3f,0x00,0x00,
    0x1c,0x18,0xcc,0xc8,0x3e,0x1f,0x29,0x18,0xc0,0xe0,0x80,0xc0,0x03,0x07,0x03,0x07,
    0xe0,0xf0,0x79,0xf0,0x07,0x07,0x00,0x00,0x70,0x70,0x00,0x00,0x78,0xf0,0x00,0x00,
    0xe0,0xf0,0x01,0x00,0x00,0x00,0x3c,0x00,0x24,0x00,0xf8,0x78,0x00,0x00,0x07,0x00,
    0x04,0x00,0x0f,0x0f,0x00,0x00,0xff,0x00,0x01,0x00,0x7f,0x00,0x40,0x00,0x7e,0xff,
    0x00,0x00,0x00,0x00,0xff,0x0f,0x00,0x00,0xff,0x00,0x80,0x00,0xbc,0x3c,0x80,0x00,
    0xff,0x78,0xf7,0x00,0x14,0x00,0xff,0x0f,0x80,0x00,0xfc,0x3c,0x00,0x00,0xff,0xc0,
    0xf3,0xf3,0x00,0x00,0x0f,0x0f,0x00,0x00,0x3c,0x78,0x04,0x00,0x00,0x00,0x3c,0x1e,
    0x20,0x00,0xff,0x00,0x01,0x00,0xff,0xf0,0x00,0x00,0x3c,0x3c,0x78,0x78,0xfc,0x3c,
    0xff,0x00,0xf3,0xf0,0x02,0x00,0x00,0x00,0x3c,0x18,0x00,0x18,0x00,0x00,0xff,0x00,
    0x01,0x00,0xff,0x00,0x80,0x00,0x3c,0x00,0x24,0x00,0x78,0x00,0x48,0x00,0xff,0x00,
    0x81,0x00,0xfc,0x00,0x04,0x00,0xf3,0x00,0x12,0x00,0x0f,0x00,0x08,0x00,0xe0,0x70,
    0x80,0xc0,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0xff,0xff,0x06,0x0c,
    0x01,0x03,0x06,0x06,0xfc,0xfc,0xc0,0xc0,0x3f,0x3f,0x07,0x1f,0xf8,0xe0,0x00,0x00,
    0xff,0xff,0x40,0x40,0x3f,0x3f,0xc6,0xc6,0x3c,0x3c,0x1d,0x1d,0xf3,0xf3,0x00,0x00,
    0xff,0xff,0x70,0x70,0xcf,0xcf,0x47,0x47,0x3c,0x3c,0xf8,0xf8,0x07,0x07,0x03,0x07,
    0xfc,0xf8,0x30,0x30,0xcf,0xcf,0x03,0x03,0xfe,0xfc,0xc0,0xc0,0x3f,0x3f,0x00,0x00,
    0xff,0xff,0x00,0x00,0x0f,0x0f,0xf0,0xf8,0x80,0x80,0x7f,0x7f,0xc3,0xc3,0x3e,0x3e,
    0x1d,0x1d,0xf3,0xf3,0x70,0x70,0xcf,0xcf,0x87,0x87,0x7c,0x7c,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0xe0,0xe0,0x9f,0x9f,0x04,0x0c,0xf8,0xf0,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0x20,0x30,0x1f,0x0f,0xfc,0x7c,0x80,0xc0,0xf8,0xf0,0x07,0x0f,
    0xff,0xff,0x00,0x00,0x3f,0x1f,0xe0,0xf0,0x3e,0x3c,0x01,0x03,0x80,0xfe,0x7f,0x01,
    0x0f,0x07,0xf8,0xfc,0x00,0x00,0x00,0x00,0x06,0x1c,0xf8,0xe0,0x00,0x00,0xff,0xff,
    0x60,0x38,0x1f,0x07,0x00,0x00,0x00,0x00,0x60,0x30,0x10,0x08,0x00,0x80,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x80,0x8c,0x8c,0x00,0x00,0xd1,0xc1,0x00,0x00,0x7c,0xee,
    0x80,0x80,0x00,0x00,0x54,0x6c,0xd0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0xff,0xff,0xff,0xff,
    0xf8,0xfc,0xfc,0x9e,0x1f,0x3f,0x3f,0x7a,0xe0,0x00,0xf8,0xe0,0x07,0x00,0x1f,0x07,
    0xe1,0xc3,0x0f,0x1e,0xfc,0xf8,0x44,0x48,0x3f,0x1f,0x22,0x12,0xfc,0xd8,0x64,0x58,
    0x3f,0x1b,0x26,0x1a,0xff,0x1f,0x00,0x00,0xff,0x00,0xff,0xf8,0x00,0x00,0xf8,0xf8,
    0xff,0xff,0x00,0x01,0xff,0xff,0x00,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0x00,0x80,0x07,0x01,0xfe,0xff,0x80,0xc0,0x7f,0x3f,0xc3,0xc3,0x3e,0x3c,
    0x1d,0x1d,0xf3,0xf3,0x70,0x70,0xcf,0xcf,0x87,0xc7,0x7c,0x3c,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0xe0,0x70,0x9f,0xcf,0x18,0x10,0xe0,0xe0,0x00,0x00,0xff,0xff,
    0x00,0x00,0xff,0xff,0x18,0x08,0x07,0x07,0x38,0x10,0xe0,0xe0,0xe0,0x00,0xff,0xff,
    0xff,0x00,0xff,0xff,0x0f,0x00,0xff,0xff,0x18,0x08,0x07,0x07,0xfe,0x7c,0x81,0xff,
    0x03,0x00,0xff,0xff,0x00,0x00,0x00,0x00,0xf0,0x00,0x00,0x00,0x81,0xff,0x7e,0x00,
    0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x8c,0x04,0x90,0xc6,0xc3,0x01,0x00,
    0x00,0x80,0x00,0x80,0xc0,0xc0,0x8c,0x8c,0x00,0x90,0xc1,0xc3,0x02,0x00,0xc6,0x00,
    0x80,0x80,0x00,0x80,0x44,0x00,0xc0,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00,0xff,0xff,0xff,0xff,
    0xfc,0xfe,0x96,0x97,0x3f,0x7f,0x6a,0xea,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x87,0x0f,0x3c,0x78,0xfc,0x7e,0xbc,0xc2,0x3f,0x7e,0x3d,0x43,0x80,0x00,0x80,0x00,
    0x01,0x00,0x01,0x00,0x1f,0x1f,0x00,0x00,0x00,0x00,0xf8,0xf8,0x00,0x00,0xf8,0xf8,
    0xff,0xff,0x01,0x07,0xff,0xff,0x80,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
};

const __code __at (0x2f00) uint8_t rom_palettes[] = {
    0x78,0xff,0x7a,0x00,0x7b,0x00,0x7c,0x49,0x7d,0x4a,0x7e,0xb2,0x7f,0x94,0x22,0x00,
    0x78,0xff,0x7a,0xbf,0x7b,0x25,0x7c,0x80,0x7d,0xfc,0x7e,0xdf,0x7f,0xb6,0x22,0x00,
    0x78,0xff,0x7a,0x80,0x7b,0xfc,0x7c,0xbf,0x7d,0x25,0x7e,0xd5,0x7f,0xfe,0x22,0x00,
    0x78,0x18,0x7a,0xea,0x7b,0xff,0x7c,0xff,0x7d,0xff,0x7e,0xcf,0x7f,0x02,0x22,0x00,
    0x78,0xff,0x7a,0x00,0x7b,0xb0,0x7c,0x08,0x7d,0xca,0x7e,0xf7,0x7f,0xed,0x22,0x00,
    0x78,0xff,0x7a,0xef,0x7b,0x7b,0x7c,0x14,0x7d,0xa5,0x7e,0x59,0x7f,0xce,0x22,0x00,
    0x78,0x00,0x7a,0xff,0x7b,0xff,0x7c,0xb2,0x7d,0x94,0x7e,0x49,0x7f,0x4a,0x22,0x00,
    0x78,0x4a,0x7a,0xb2,0x7b,0x94,0x7c,0xff,0x7d,0xff,0x7e,0x00,0x7f,0x00,0x22,0x00,
    0x78,0xff,0x7a,0xdf,0x7b,0x96,0x7c,0x2f,0x7d,0xfe,0x7e,0x5f,0x7f,0xdf,0x22,0x00,
    0x78,0xff,0x7a,0x2f,0x7b,0xfe,0x7c,0xdf,0x7d,0x96,0x7e,0x5a,0x7f,0xff,0x22,0x00,
    0x78,0xff,0x7a,0xe3,0x7b,0x42,0x7c,0x00,0x7d,0x00,0x7e,0x26,0x7f,0x8e,0x22,0x00,
    0x78,0x00,0x7a,0xff,0x7b,0xff,0x7c,0x5a,0x7d,0x1d,0x7e,0x75,0x7f,0x5c,0x22,0x00,
    0x78,0x43,0x7a,0xff,0x7b,0xff,0x7c,0xa0,0x7d,0xf7,0x7e,0xb6,0x7f,0xb5,0x22,0x00,
    0x78,0xff,0x7a,0x1c,0x7b,0x80,0x7c,0xdb,0x7d,0x01,0x7e,0x0c,0x7f,0x38,0x22,0x00,
    0x78,0x3a,0x7a,0x1e,0x7b,0x9d,0x7c,0xdb,0x7d,0xfc,0x7e,0x33,0x7f,0xca,0x22,0x00,
    0x78,0xff,0x7a,0x40,0x7b,0x94,0x7c,0x43,0x7d,0xff,0x7e,0x49,0x7f,0x4a,0x22,0x00,
};

const __code __at (0x2e67) uint8_t img_logo[] = {
    0x0f,0x05,0xff,0x00,0x00,0x00,0x00,0x08,0x09,0x09,0x09,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x0a,0x07,0x0c,0x07,0x0e,0x0b,0x10,0x09,0x11,0x0b,0x00,0x00,0x13,0x07,0x15,
    0x07,0x17,0x07,0x19,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1b,
    0x07,0x1d,0x07,0x1f,0x07,0x21,0x09,0x22,0x07,0x24,0x07,0x26,0x07,0x28,0x05,0x29,
    0x07,0x2b,0x07,0x2d,0x07,0x2f,0x05,0x30,0x07,0x24,0x05,0x32,0x07,0x00,0x00,0x34,
    0x07,0x36,0x05,0x37,0x07,0x39,0x07,0x3b,0x07,0x3d,0x05,0x3e,0x05,0x00,0x00,0x63,
    0x04,0x3f,0x05,0x40,0x05,0x41,0x07,0x00,0x00,0x63,0x04,0x00,0x00,0x43,0x05,0x44,
    0x07,0x46,0x05,0x47,0x07,0x49,0x07,0x4b,0x07,0x4d,0x07,0x00,0x00,0x4f,0x07,0x51,
    0x07,0x24,0x05,0x53,0x07,0x24,0x05,0x55,0x07,
};

const __code __at (0x2e60) uint8_t img_trophy[] = {
    0x02,0x02,0x3f,0x00,0x02,0x04,0x06,
};

const __code __at (0x2e4e) uint8_t img_battery[] = {
    0x05,0x03,0x00,0xec,0xed,0xed,0xed,0xee,0xef,0x00,0x00,0x00,0xf0,0xf1,0xf2,0xf2,
    0xf2,0xf3,
};

const __code __at (0x2e45) uint8_t img_battery_bars_1[] = {
    0x03,0x01,0xff,0x00,0x00,0x00,0x00,0xe5,0x10,
};

const __code __at (0x2e3f) uint8_t img_battery_bars_2[] = {
    0x03,0x01,0x00,0x00,0xf4,0xf5,
};

const __code __at (0x2e39) uint8_t img_battery_bars_3[] = {
    0x03,0x01,0x00,0xf6,0xf7,0xf5,
};

const __code __at (0x2e33) uint8_t img_battery_bars_4[] = {
    0x03,0x01,0x00,0xf8,0xf7,0xf5,
};
