# ConcurrentBleConnections

**Bluetooth Framework** demo application shows how to connect to more than one BLE GATT enabled device.

### Description

The demo shows how to connect to more than one BLE GATT enable device. The demo uses the **wclThread** class to run each connection in separate thread.

The code simple discovers available nearby BLE GATT enabled devices and then connect to each found device in separate thread. Once connected the demo reads device's services.

When Stop button clicked the demo disconnects from each connected device by terminating the connection threads.

You can download **Bluetooth Framework** on our site by this link: https://www.btframework.com/bluetoothframework.htm

Should you have any questions please contact us: https://www.btframework.com/contacts.htm
