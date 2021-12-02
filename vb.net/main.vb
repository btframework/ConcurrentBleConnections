Public Class fmMain
    Private FClients As List(Of GattConnections)
    Private FDevices As List(Of Int64)
    Private WithEvents FManager As wclBluetoothManager
    Private FRadio As wclBluetoothRadio

    Private Sub [Stop]()
        If FClients.Count > 0 Then
            For I As Integer = 0 To FClients.Count - 1
                FClients(I).Terminate()
            Next I
            FClients.Clear()
        End If

        If Not FRadio Is Nothing Then
            FRadio.Terminate()
            FRadio = Nothing
        End If

        If FManager.Active Then
            FManager.Close()
        End If

        FDevices.Clear()
    End Sub

    Private Sub btClear_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btClear.Click
        lbLog.Items.Clear()
    End Sub

    Private Sub fmMain_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        FClients = New List(Of GattConnections)
        FDevices = New List(Of Int64)
        FManager = New wclBluetoothManager()
        FRadio = Nothing
    End Sub

    Private Sub btStart_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btStart.Click
        If FManager.Active Then
            MessageBox.Show("Connections is already running")
        Else
            Dim Res As Integer = FManager.Open()
            If Res <> wclErrors.WCL_E_SUCCESS Then
                MessageBox.Show("Bluetooth Manager open failed: 0x" + Res.ToString("X8"))
            Else
                FRadio = Nothing

                If FManager.Count = 0 Then
                    MessageBox.Show("No Bluetooth hardware was found")
                Else
                    For I As Integer = 0 To FManager.Count - 1
                        If FManager(I).Available Then
                            FRadio = FManager(I)
                            Exit For
                        End If
                    Next

                    If FRadio Is Nothing Then
                        MessageBox.Show("No available Bluetooth hardware found")
                    Else
                        Res = FRadio.Discover(10, wclBluetoothDiscoverKind.dkBle)
                        If Res <> wclErrors.WCL_E_SUCCESS Then
                            MessageBox.Show("Failed to start discovering: 0x" + Res.ToString("X8"))
                            FRadio = Nothing
                        End If
                    End If
                End If

                If FRadio Is Nothing Then
                    FManager.Close()
                End If
            End If
        End If
    End Sub

    Private Sub FManager_AfterOpen(ByVal sender As Object, ByVal e As System.EventArgs) Handles FManager.AfterOpen
        lbLog.Items.Add("Bluetooth Manager has been opened")
    End Sub

    Private Sub FManager_BeforeClose(ByVal sender As Object, ByVal e As System.EventArgs) Handles FManager.BeforeClose
        lbLog.Items.Add("Bluetooth Manager is closing")
    End Sub

    Private Sub FManager_OnDeviceFound(ByVal Sender As Object, ByVal Radio As wclBluetooth.wclBluetoothRadio, ByVal Address As Long) Handles FManager.OnDeviceFound
        lbLog.Items.Add("Device found: " + Address.ToString("X12"))
        FDevices.Add(Address)
    End Sub

    Private Sub FManager_OnDiscoveringCompleted(ByVal Sender As Object, ByVal Radio As wclBluetooth.wclBluetoothRadio, ByVal [Error] As Integer) Handles FManager.OnDiscoveringCompleted
        lbLog.Items.Add("Discovering completed with result: 0x" + [Error].ToString("X8"))
        If FDevices.Count = 0 Then
            lbLog.Items.Add("No BLE devices were found")
            [Stop]()
        Else
            lbLog.Items.Add("Found " + FDevices.Count.ToString() + " BLE devices")
            lbLog.Items.Add("Start connecting to GATT devices")

            For I As Integer = 0 To FDevices.Count - 1
                Dim Client As GattConnections = New GattConnections(FRadio, FDevices(I), lbLog)
                Dim Res As Integer = Client.Run()
                If Res = wclErrors.WCL_E_SUCCESS Then
                    FClients.Add(Client)
                End If
            Next I
        End If
    End Sub

    Private Sub FManager_OnDiscoveringStarted(ByVal Sender As Object, ByVal Radio As wclBluetooth.wclBluetoothRadio) Handles FManager.OnDiscoveringStarted
        lbLog.Items.Add("Discovering BLE devices has been started")
        FDevices.Clear()
    End Sub

    Private Sub btStop_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btStop.Click
        If Not FManager.Active Then
            MessageBox.Show("Connection is not running")
        Else
            [Stop]()
        End If
    End Sub

    Private Sub fmMain_FormClosing(ByVal sender As System.Object, ByVal e As System.Windows.Forms.FormClosingEventArgs) Handles MyBase.FormClosing
        [Stop]()
    End Sub
End Class
