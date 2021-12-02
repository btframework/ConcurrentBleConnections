using System;
using System.Windows.Forms;

using wclCommon;
using wclBluetooth;

namespace ConcurrentBleConnections
{
    public class GattConnections : wclThread
    {
        private Int64 FAddress;
        private wclGattClient FClient;
        private wclBluetoothRadio FRadio;
        private ListBox FLog;

        private void Trace(String Msg)
        {
            Synchronize(FAddress.ToString("X12") + ":: " + Msg);
        }

        private void FClient_OnConnect(Object Sender, Int32 Error)
        {
            if (Error != wclErrors.WCL_E_SUCCESS)
                Trace("Connection error: " + Error.ToString("X8"));
            else
            {
                Trace("Client connected");

                wclGattService[] Services;
                Int32 Res = FClient.ReadServices(wclGattOperationFlag.goNone, out Services);
                if (Res != wclErrors.WCL_E_SUCCESS)
                    Trace("Failed to read services: " + Res.ToString("X8"));
                else
                    Trace("Services have been read with success");
            }
        }

        protected override Boolean OnInitialize()
        {
            FClient = new wclGattClient();
            FClient.OnConnect += FClient_OnConnect;
            FClient.Address = FAddress;
            Int32 Res = FClient.Connect(FRadio);
            if (Res != wclErrors.WCL_E_SUCCESS)
            {
                Trace("Start connection failed: " + Res.ToString("X8"));
                FClient = null;
                return false;
            }
            return true;
        }

        protected override void OnTerminate()
        {
            if (FClient != null)
            {
                FClient.Disconnect();
                FClient = null;
            }
        }

        protected override void OnSynchronize(object Param)
        {
            FLog.Items.Add(Param as String);
        }
        
        public GattConnections(wclBluetoothRadio Radio, Int64 Address, ListBox Log)
            : base()
        {
            FAddress = Address;
            FRadio = Radio;
            FLog = Log;
        }

        public Int64 Address { get { return FAddress; } }
    };
}
