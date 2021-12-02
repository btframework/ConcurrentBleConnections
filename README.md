# ConcurrentBleConnections

The demo shows how to connect to more than one BLE GATT enable device. The demo uses the wclThread class to run each connection in separate thread.

The code simple discovers available nearby BLE GATT enabled devices and then connect to each found device in separate thread. Once connected the demo reads device's services.

When Stop button clicked the demo disconnects from each connected device by terminating the connection threads.
