object fmMain: TfmMain
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Concurrent BLE connections demo'
  ClientHeight = 309
  ClientWidth = 468
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object btStart: TButton
    Left = 8
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 0
    OnClick = btStartClick
  end
  object btStop: TButton
    Left = 96
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 1
    OnClick = btStopClick
  end
  object lbLog: TListBox
    Left = 8
    Top = 40
    Width = 449
    Height = 257
    ItemHeight = 13
    TabOrder = 2
  end
  object btClear: TButton
    Left = 384
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Clear'
    TabOrder = 3
    OnClick = btClearClick
  end
  object wclBluetoothManager: TwclBluetoothManager
    AfterOpen = wclBluetoothManagerAfterOpen
    BeforeClose = wclBluetoothManagerBeforeClose
    OnDeviceFound = wclBluetoothManagerDeviceFound
    OnDiscoveringCompleted = wclBluetoothManagerDiscoveringCompleted
    OnDiscoveringStarted = wclBluetoothManagerDiscoveringStarted
    Left = 128
    Top = 88
  end
end
