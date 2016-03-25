// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_MOCK_USB_SERVICE_H_
#define DEVICE_USB_MOCK_USB_SERVICE_H_

#include "device/usb/usb_service.h"

#include "testing/gmock/include/gmock/gmock.h"

namespace device {

class MockUsbService : public UsbService {
 public:
  MockUsbService();
  ~MockUsbService() override;

  void AddDevice(scoped_refptr<UsbDevice> device);
  void RemoveDevice(scoped_refptr<UsbDevice> device);

 protected:
  // UsbService implementation:
  scoped_refptr<UsbDevice> GetDevice(const std::string& guid) override;
  void GetDevices(const GetDevicesCallback& callback) override;

  std::map<std::string, scoped_refptr<UsbDevice>> devices_;
};

}  // namespace device

#endif  // DEVICE_USB_MOCK_USB_SERVICE_H_
