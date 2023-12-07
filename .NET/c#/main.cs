using System;
using System.Collections.Generic;
using System.Windows.Forms;

using wclCommon;
using wclCommunication;
using wclBluetooth;

namespace ConcurrentBleConnections
{
    public partial class fmMain : Form
    {
        private List<GattConnections> FClients;
        private List<Int64> FDevices;
        private wclBluetoothManager FManager;
        private wclBluetoothRadio FRadio;

        private void Stop()
        {
            if (FClients.Count > 0)
            {
                for (Int32 I = 0; I < FClients.Count; I++)
                    FClients[I].Terminate();
                FClients.Clear();
            }

            if (FRadio != null)
            {
                FRadio.Terminate();
                FRadio = null;
            }

            if (FManager.Active)
                FManager.Close();

            FDevices.Clear();
        }

        public fmMain()
        {
            InitializeComponent();
        }

        private void btClear_Click(object sender, EventArgs e)
        {
            lbLog.Items.Clear();
        }

        private void fmMain_Load(object sender, EventArgs e)
        {
            FClients = new List<GattConnections>();
            FDevices = new List<Int64>();
            FManager = new wclBluetoothManager();
            FManager.AfterOpen += FManager_AfterOpen;
            FManager.BeforeClose += FManager_BeforeClose;
            FManager.OnDeviceFound += FManager_OnDeviceFound;
            FManager.OnDiscoveringCompleted += FManager_OnDiscoveringCompleted;
            FManager.OnDiscoveringStarted += FManager_OnDiscoveringStarted;
            FRadio = null;
        }

        private void FManager_OnDiscoveringStarted(object Sender, wclBluetoothRadio Radio)
        {
            lbLog.Items.Add("Discovering BLE devices has been started");
            FDevices.Clear();
        }

        private void FManager_OnDiscoveringCompleted(object Sender, wclBluetoothRadio Radio, int Error)
        {
            lbLog.Items.Add("Discovering completed with result: 0x" + Error.ToString("X8"));
            if (Error != wclErrors.WCL_E_SUCCESS)
                return;

            if (FDevices.Count == 0)
            {
                lbLog.Items.Add("No BLE devices were found");
                Stop();
            }
            else
            {
                lbLog.Items.Add("Found " + FDevices.Count.ToString() + " BLE devices");
                lbLog.Items.Add("Start connecting to GATT devices");

                for (Int32 I = 0; I < FDevices.Count; I++)
                {
                    GattConnections Client = new GattConnections(FRadio, FDevices[I], lbLog);
                    Int32 Res = Client.Run();
                    if (Res == wclErrors.WCL_E_SUCCESS)
                        FClients.Add(Client);
                }
            }
        }

        private void FManager_OnDeviceFound(object Sender, wclBluetoothRadio Radio, long Address)
        {
            lbLog.Items.Add("Device found: " + Address.ToString("X12"));
            FDevices.Add(Address);
        }

        private void FManager_BeforeClose(object sender, EventArgs e)
        {
            lbLog.Items.Add("Bluetooth Manager is closing");
        }

        private void FManager_AfterOpen(object sender, EventArgs e)
        {
            lbLog.Items.Add("Bluetooth Manager has been opened");
        }

        private void btStart_Click(object sender, EventArgs e)
        {
            if (FManager.Active)
                MessageBox.Show("Connections is already running");
            else
            {
                Int32 Res = FManager.Open();
                if (Res != wclErrors.WCL_E_SUCCESS)
                    MessageBox.Show("Bluetooth Manager open failed: 0x" + Res.ToString("X8"));
                else
                {
                    FRadio = null;

                    if (FManager.Count == 0)
                        MessageBox.Show("No Bluetooth hardware was found");
                    else
                    {
                        for (Int32 I = 0; I < FManager.Count; I++)
                        {
                            if (FManager[I].Available)
                            {
                                FRadio = FManager[I];
                                break;
                            }
                        }

                        if (FRadio == null)
                            MessageBox.Show("No available Bluetooth hardware found");
                        else
                        {
                            Res = FRadio.Discover(10, wclBluetoothDiscoverKind.dkBle);
                            if (Res != wclErrors.WCL_E_SUCCESS)
                            {
                                MessageBox.Show("Failed to start discovering: 0x" + Res.ToString("X8"));
                                FRadio = null;
                            }
                        }
                    }

                    if (FRadio == null)
                        FManager.Close();
                }
            }
        }

        private void btStop_Click(object sender, EventArgs e)
        {
            if (!FManager.Active)
                MessageBox.Show("Connection is not running");
            else
                Stop();
        }

        private void fmMain_FormClosing(object sender, FormClosingEventArgs e)
        {
            Stop();
        }
    }
}