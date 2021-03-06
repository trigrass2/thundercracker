/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Sifteo Thundercracker simulator
 * Micah Elizabeth Scott <micah@misc.name>
 *
 * Copyright <c> 2012 Sifteo, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/*
 * This is a centralized storage for all simulated flash memory.
 *
 * All of this storage is defined in a fixed-layout structure, which
 * can be backed either by anonymous RAM or by a mapped file.
 */

#ifndef _FLASH_STORAGE_H
#define _FLASH_STORAGE_H

#include <stdint.h>
#include <stdio.h>
#include <sifteo/abi.h>
#include "cube_flash_model.h"
#include "flash_device.h"


class FlashStorage {
 public:

    struct CubeRecord {
        uint8_t nvm[1024];                      // Nordic nonvolatile memory
        uint8_t ext[Cube::FlashModel::SIZE];    // External NOR flash

        // Out-of-band endurance data
        uint64_t eraseCounts[Cube::FlashModel::SIZE / Cube::FlashModel::SECTOR_SIZE];
    };

    struct MasterRecord {
        uint8_t bytes[FlashDevice::CAPACITY];

        // Out-of-band endurance data
        uint64_t eraseCounts[FlashDevice::CAPACITY / FlashDevice::ERASE_BLOCK_SIZE];
    };

    struct HeaderRecord {
        union {
            uint8_t bytes[FlashDevice::PAGE_SIZE];    // Pad to one full page

            struct {
                uint64_t    magic;
                uint32_t    version;
                uint32_t    fileSize;
                uint32_t    cube_count;
                uint32_t    cube_nvmSize;
                uint32_t    cube_extSize;
                uint32_t    cube_sectorSize;
                uint32_t    mc_pageSize;
                uint32_t    mc_blockSize;
                uint32_t    mc_capacity;
                uint32_t    uniqueID;
            };
        };

        static const uint64_t MAGIC             = 0x534c467974666953LLU;
        static const uint32_t CURRENT_VERSION   = 1;
    };

    struct FileRecord {
        HeaderRecord   header;
        MasterRecord   master;
        CubeRecord     cubes[_SYS_NUM_CUBE_SLOTS];
    };

    FileRecord *data;

    FlashStorage();
    ~FlashStorage();

    bool init(const char *filename=NULL);
    bool installLauncher(const char *filename=NULL);
    void exit();

 private:
    bool isInitialized;
    bool isFileBacked;
    uintptr_t fileHandle;
    uintptr_t mappingHandle;

    bool mapFile(const char *filename);
    void unmapFile();

    void initData();
    bool checkData();

    void initHeader();
    void initMC();
    void initCubes();
};


#endif
