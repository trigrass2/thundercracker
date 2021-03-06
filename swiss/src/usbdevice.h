/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * swiss - your Sifteo utility knife
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

#ifndef _USB_DEVICE_H_
#define _USB_DEVICE_H_

#include "libusb.h"
#include "iodevice.h"

#include <list>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

namespace Usb {

    static int init() {
        return libusb_init(NULL);
    }

    static void deinit() {
        libusb_exit(NULL);
    }

    static void setDebug(unsigned level) {

        // older versions of libusb.h don't define LIBUSB_LOG_LEVEL_DEBUG
        // so do it here to work around
        static const unsigned LOG_LEVEL_DEBUG = 4;
        if (level > LOG_LEVEL_DEBUG) {
            level = LOG_LEVEL_DEBUG;
        }
        libusb_set_debug(NULL, level);
    }

} // namespace Usb


class UsbDevice : public IODevice {
public:
    UsbDevice();

    int processEvents(unsigned timeoutMillis = 0) {
        struct timeval tv = {
            0,                      // tv_sec
            timeoutMillis * 1000    // tv_usec
        };
        return libusb_handle_events_timeout_completed(0, &tv, 0);
    }

    bool open(uint16_t vendorId, uint16_t productId, uint8_t interface = 0);
    void close();
    bool isOpen() const;

    unsigned maxINPacketSize() const {
        return mInEndpoint.maxPacketSize;
    }

    unsigned maxOUTPacketSize() const {
        return mOutEndpoint.maxPacketSize;
    }

    unsigned numPendingINPackets() const {
        return mBufferedINPackets.size();
    }
    int readPacket(uint8_t *buf, unsigned maxlen, unsigned &rxlen);
    int readPacketSync(uint8_t *buf, int maxlen, int *transferred, unsigned timeout = -1);

    unsigned numPendingOUTPackets() const {
        return mOutEndpoint.pendingTransfers.size();
    }
    int writePacket(const uint8_t *buf, unsigned len);
    int writePacketSync(const uint8_t *buf, int maxlen, int *transferred, unsigned timeout = -1);

private:
    static const unsigned NUM_CONCURRENT_IN_TRANSFERS = 16;

    bool populateDeviceInfo(libusb_config_descriptor *cfg);
    bool submitINTransfer();

    static void LIBUSB_CALL onRxComplete(libusb_transfer *);
    static void LIBUSB_CALL onTxComplete(libusb_transfer *);

    void handleRx(libusb_transfer *t);
    void handleTx(libusb_transfer *t);

    struct Endpoint {
        uint8_t address;
        uint16_t maxPacketSize;
        std::list<libusb_transfer*> pendingTransfers;
    };

    Endpoint mInEndpoint;
    Endpoint mOutEndpoint;

    void removeTransfer(Endpoint &ep, libusb_transfer *t);
    void releaseTransfers(Endpoint &ep);

    int mInterface;
    libusb_device_handle *mHandle;

    struct RxPacket {
        uint8_t *buf;
        unsigned len;
        int status;

        RxPacket(libusb_transfer *t) :
            buf((uint8_t*)malloc(t->actual_length)),
            len(t->actual_length),
            status(t->status)
        {
            memcpy(buf, t->buffer, t->actual_length);
        }
    };
    std::list<RxPacket> mBufferedINPackets;
};

#endif // _USB_DEVICE_H_
