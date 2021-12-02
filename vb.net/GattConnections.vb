Public Class GattConnections : Inherits wclThread
    Private FAddress As Int64
    Private WithEvents FClient As wclGattClient
    Private FRadio As wclBluetoothRadio
    Private FLog As ListBox

    Private Delegate Sub UpdateLogDelegate(ByVal Msg As String)

    Private Sub UpdateLog(ByVal Msg As String)
        FLog.Items.Add(Msg)
    End Sub

    Private Sub Trace(ByVal Msg As String)
        Dim d As New UpdateLogDelegate(AddressOf UpdateLog)
        FLog.Invoke(d, FAddress.ToString("X12") + ":: " + Msg)
    End Sub

    Private Sub FClient_OnConnect(ByVal Sender As Object, ByVal [Error] As Integer) Handles FClient.OnConnect
        If [Error] <> wclErrors.WCL_E_SUCCESS Then
            Trace("Connection error: " + [Error].ToString("X8"))
        Else
            Trace("Client connected")

            Dim Services() As wclGattService = Nothing
            Dim Res As Integer = FClient.ReadServices(wclGattOperationFlag.goNone, Services)
            If Res <> wclErrors.WCL_E_SUCCESS Then
                Trace("Failed to read services: " + Res.ToString("X8"))
            Else
                Trace("Services have been read with success")
            End If
        End If
    End Sub

    Protected Overrides Function OnInitialize() As Boolean
        FClient = New wclGattClient()
        FClient.Address = FAddress
        Dim Res As Integer = FClient.Connect(FRadio)
        If Res <> wclErrors.WCL_E_SUCCESS Then
            Trace("Start connection failed: " + Res.ToString("X8"))
            FClient = Nothing
            Return False
        Else
            Return True
        End If
    End Function

    Protected Overrides Sub OnTerminate()
        If Not FClient Is Nothing Then
            FClient.Disconnect()
            FClient = Nothing
        End If
    End Sub

    Public Sub New(ByVal Radio As wclBluetoothRadio, ByVal Address As Int64, ByVal Log As ListBox)
        MyBase.New()

        FAddress = Address
        FRadio = Radio
        FLog = Log
    End Sub

    Public ReadOnly Property Address() As Int64
        Get
            Return FAddress
        End Get
    End Property
End Class
