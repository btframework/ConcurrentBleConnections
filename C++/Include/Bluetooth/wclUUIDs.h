////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//   Wireless Communication Library 7                                         //
//                                                                            //
//   Copyright (C) 2006-2023 Mike Petrichenko                                 //
//                           Soft Service Company                             //
//                           All Rights Reserved                              //
//                                                                            //
//   http://www.btframework.com                                               //
//                                                                            //
//   support@btframework.com                                                  //
//   shop@btframework.com                                                     //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#pragma once

namespace wclBluetooth
{

/// <summary> Bluetooth_Base_UUID </summary>
const GUID Bluetooth_Base_UUID = { 0x00000000, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };

/* Protocol UUIDs. */

/// <summary> SDP_PROTOCOL_UUID </summary>
const GUID SDP_PROTOCOL_UUID = { 0x00000001, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> UDP_PROTOCOL_UUID </summary>
const GUID UDP_PROTOCOL_UUID = { 0x00000002, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> RFCOMM_PROTOCOL_UUID </summary>
const GUID RFCOMM_PROTOCOL_UUID = { 0x00000003, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> TCP_PROTOCOL_UUID </summary>
const GUID TCP_PROTOCOL_UUID = { 0x00000004, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> TCSBIN_PROTOCOL_UUID </summary>
const GUID TCSBIN_PROTOCOL_UUID = { 0x00000005, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> TCSAT_PROTOCOL_UUID </summary>
const GUID TCSAT_PROTOCOL_UUID = { 0x00000006, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> OBEX_PROTOCOL_UUID </summary>
const GUID OBEX_PROTOCOL_UUID = { 0x00000008, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> IP_PROTOCOL_UUID </summary>
const GUID IP_PROTOCOL_UUID = { 0x00000009, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> FTP_PROTOCOL_UUID </summary>
const GUID FTP_PROTOCOL_UUID = { 0x0000000A, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
///<summary> HTTP_PROTOCOL_UUID </summary>
const GUID HTTP_PROTOCOL_UUID = { 0x0000000C, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> WSP_PROTOCOL_UUID </summary>
const GUID WSP_PROTOCOL_UUID = { 0x0000000E, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> BNEP_PROTOCOL_UUID </summary>
const GUID BNEP_PROTOCOL_UUID = { 0x0000000F, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> UPNP_PROTOCOL_UUID </summary>
const GUID UPNP_PROTOCOL_UUID = { 0x00000010, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HID_PROTOCOL_UUID </summary>
const GUID HID_PROTOCOL_UUID = { 0x00000011, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HCCC_PROTOCOL_UUID </summary>
const GUID HCCC_PROTOCOL_UUID = { 0x00000012, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HCDC_PROTOCOL_UUID </summary>
const GUID HCDC_PROTOCOL_UUID = { 0x00000014, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HN_PROTOCOL_UUID </summary>
const GUID HN_PROTOCOL_UUID = { 0x00000016, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AVCTP_PROTOCOL_UUID </summary>
const GUID AVCTP_PROTOCOL_UUID = { 0x00000017, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AVDTP_PROTOCOL_UUID </summary>
const GUID AVDTP_PROTOCOL_UUID = { 0x00000019, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> CMPT_PROTOCOL_UUID </summary>
const GUID CMPT_PROTOCOL_UUID = { 0x0000001B, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> UDI_C_PLANE_PROTOCOL_UUID </summary>
const GUID UDI_C_PLANE_PROTOCOL_UUID = { 0x0000001D, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> L2CAP_PROTOCOL_UUID </summary>
const GUID L2CAP_PROTOCOL_UUID = { 0x00000100, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };

///<summary> SDP_PROTOCOL_UUID16 </summary>
#define SDP_PROTOCOL_UUID16			(0x0001)
///<summary> UDP_PROTOCOL_UUID16 </summary>
#define UDP_PROTOCOL_UUID16			(0x0002)
///<summary> RFCOMM_PROTOCOL_UUID16 </summary>
#define RFCOMM_PROTOCOL_UUID16		(0x0003)
///<summary> TCP_PROTOCOL_UUID16 </summary>
#define TCP_PROTOCOL_UUID16			(0x0004)
///<summary> TCSBIN_PROTOCOL_UUID16 </summary>
#define TCSBIN_PROTOCOL_UUID16		(0x0005)
///<summary> TCSAT_PROTOCOL_UUID16 </summary>
#define TCSAT_PROTOCOL_UUID16		(0x0006)
///<summary> OBEX_PROTOCOL_UUID16 </summary>
#define OBEX_PROTOCOL_UUID16		(0x0008)
///<summary> IP_PROTOCOL_UUID16 </summary>
#define IP_PROTOCOL_UUID16			(0x0009)
///<summary> FTP_PROTOCOL_UUID16 </summary>
#define FTP_PROTOCOL_UUID16			(0x000A)
///<summary> HTTP_PROTOCOL_UUID16 </summary>
#define HTTP_PROTOCOL_UUID16		(0x000C)
///<summary> WSP_PROTOCOL_UUID16 </summary>
#define WSP_PROTOCOL_UUID16			(0x000E)
///<summary> BNEP_PROTOCOL_UUID16 </summary>
#define BNEP_PROTOCOL_UUID16		(0x000F)
///<summary> UPNP_PROTOCOL_UUID16 </summary>
#define UPNP_PROTOCOL_UUID16		(0x0010)
///<summary> HID_PROTOCOL_UUID16 </summary>
#define HID_PROTOCOL_UUID16			(0x0011)
///<summary> HCCC_PROTOCOL_UUID16 </summary>
#define HCCC_PROTOCOL_UUID16		(0x0012)
///<summary> HCDC_PROTOCOL_UUID16 </summary>
#define HCDC_PROTOCOL_UUID16		(0x0014)
///<summary> HN_PROTOCOL_UUID16 </summary>
#define HN_PROTOCOL_UUID16			(0x0016)
///<summary> AVCTP_PROTOCOL_UUID16 </summary>
#define AVCTP_PROTOCOL_UUID16		(0x0017)
///<summary> AVDTP_PROTOCOL_UUID16 </summary>
#define AVDTP_PROTOCOL_UUID16		(0x0019)
///<summary> CMPT_PROTOCOL_UUID16 </summary>
#define CMPT_PROTOCOL_UUID16		(0x001B)
///<summary> UDI_C_PLANE_PROTOCOL_UUID16 </summary>
#define UDI_C_PLANE_PROTOCOL_UUID16	(0x001D)
///<summary> L2CAP_PROTOCOL_UUID16 </summary>
#define L2CAP_PROTOCOL_UUID16		(0x0100)

/* Service Class UUIDs. */

/// <summary> ServiceDiscoveryServerServiceClassID_UUID </summary>
const GUID ServiceDiscoveryServerServiceClassID_UUID = { 0x00001000, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> BrowseGroupDescriptorServiceClassID_UUID </summary>
const GUID BrowseGroupDescriptorServiceClassID_UUID = { 0x00001001, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> PublicBrowseGroupServiceClass_UUID </summary>
const GUID PublicBrowseGroupServiceClass_UUID = { 0x00001002, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> SerialPortServiceClass_UUID </summary>
const GUID SerialPortServiceClass_UUID = { 0x00001101, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> LANAccessUsingPPPServiceClass_UUID </summary>
const GUID LANAccessUsingPPPServiceClass_UUID = { 0x00001102, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> DialupNetworkingServiceClass_UUID </summary>
const GUID DialupNetworkingServiceClass_UUID = { 0x00001103, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> IrMCSyncServiceClass_UUID </summary>
const GUID IrMCSyncServiceClass_UUID = { 0x00001104, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> OBEXObjectPushServiceClass_UUID </summary>
const GUID OBEXObjectPushServiceClass_UUID = { 0x00001105, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> OBEXFileTransferServiceClass_UUID </summary>
const GUID OBEXFileTransferServiceClass_UUID = { 0x00001106, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> IrMCSyncCommandServiceClass_UUID </summary>
const GUID IrMCSyncCommandServiceClass_UUID = { 0x00001107, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HeadsetServiceClass_UUID </summary>
const GUID HeadsetServiceClass_UUID = { 0x00001108, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> CordlessTelephonyServiceClass_UUID </summary>
const GUID CordlessTelephonyServiceClass_UUID = { 0x00001109, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AudioSourceServiceClass_UUID </summary>
const GUID AudioSourceServiceClass_UUID = { 0x0000110A, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AudioSinkServiceClass_UUID </summary>
const GUID AudioSinkServiceClass_UUID = { 0x0000110B, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AVRemoteControlTargetServiceClass_UUID </summary>
const GUID AVRemoteControlTargetServiceClass_UUID = { 0x0000110C, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AdvancedAudioDistributionServiceClass_UUID </summary>
const GUID AdvancedAudioDistributionServiceClass_UUID = { 0x0000110D, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AVRemoteControlServiceClass_UUID </summary>
const GUID AVRemoteControlServiceClass_UUID = { 0x0000110E, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> VideoConferencingServiceClass_UUID </summary>
const GUID VideoConferencingServiceClass_UUID = { 0x0000110F, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> IntercomServiceClass_UUID </summary>
const GUID IntercomServiceClass_UUID = { 0x00001110, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> FaxServiceClass_UUID </summary>
const GUID FaxServiceClass_UUID = { 0x00001111, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HeadsetAudioGatewayServiceClass_UUID </summary>
const GUID HeadsetAudioGatewayServiceClass_UUID = { 0x00001112, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> WAPServiceClass_UUID </summary>
const GUID WAPServiceClass_UUID = { 0x00001113, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> WAPClientServiceClass_UUID </summary>
const GUID WAPClientServiceClass_UUID = { 0x00001114, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> PANUServiceClass_UUID </summary>
const GUID PANUServiceClass_UUID = { 0x00001115, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> NAPServiceClass_UUID </summary>
const GUID NAPServiceClass_UUID = { 0x00001116, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> GNServiceClass_UUID </summary>
const GUID GNServiceClass_UUID = { 0x00001117, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> DirectPrintingServiceClass_UUID </summary>
const GUID DirectPrintingServiceClass_UUID = { 0x00001118, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ReferencePrintingServiceClass_UUID </summary>
const GUID ReferencePrintingServiceClass_UUID = { 0x00001119, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ImagingServiceClass_UUID </summary>
const GUID ImagingServiceClass_UUID = { 0x0000111A, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ImagingResponderServiceClass_UUID </summary>
const GUID ImagingResponderServiceClass_UUID = { 0x0000111B, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ImagingAutomaticArchiveServiceClass_UUID </summary>
const GUID ImagingAutomaticArchiveServiceClass_UUID = { 0x0000111C, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ImagingReferenceObjectsServiceClass_UUID </summary>
const GUID ImagingReferenceObjectsServiceClass_UUID = { 0x0000111D, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HandsfreeServiceClass_UUID </summary>
const GUID HandsfreeServiceClass_UUID = { 0x0000111E, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HandsfreeAudioGatewayServiceClass_UUID </summary>
const GUID HandsfreeAudioGatewayServiceClass_UUID = { 0x0000111F, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> DirectPrintingReferenceObjectsServiceClass_UUID </summary>
const GUID DirectPrintingReferenceObjectsServiceClass_UUID = { 0x00001120, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ReflectedUIServiceClass_UUID </summary>
const GUID ReflectedUIServiceClass_UUID = { 0x00001121, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> BasicPrintingServiceClass_UUID </summary>
const GUID BasicPrintingServiceClass_UUID = { 0x00001122, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> PrintingStatusServiceClass_UUID </summary>
const GUID PrintingStatusServiceClass_UUID = { 0x00001123, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HumanInterfaceDeviceServiceClass_UUID </summary>
const GUID HumanInterfaceDeviceServiceClass_UUID = { 0x00001124, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HardcopyCableReplacementServiceClass_UUID </summary>
const GUID HardcopyCableReplacementServiceClass_UUID = { 0x00001125, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HCRPrintServiceClass_UUID </summary>
const GUID HCRPrintServiceClass_UUID = { 0x00001126, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> HCRScanServiceClass_UUID </summary>
const GUID HCRScanServiceClass_UUID = { 0x00001127, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> CommonISDNAccessServiceClass_UUID </summary>
const GUID CommonISDNAccessServiceClass_UUID = { 0x00001128, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> VideoConferencingGWServiceClass_UUID </summary>
const GUID VideoConferencingGWServiceClass_UUID = { 0x00001129, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> UDIMTServiceClass_UUID </summary>
const GUID UDIMTServiceClass_UUID = { 0x0000112A, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> UDITAServiceClass_UUID </summary>
const GUID UDITAServiceClass_UUID = { 0x0000112B, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> AudioVideoServiceClass_UUID </summary>
const GUID AudioVideoServiceClass_UUID = { 0x0000112C, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> SimAccessServiceClass_UUID </summary>
const GUID SimAccessServiceClass_UUID = { 0x0000112D, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> PhonebookClientEquipmentServiceClass_UUID </summary>
const GUID PhonebookClientEquipmentServiceClass_UUID = { 0x0000112E, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> PhonebookServerEquipmentServiceClass_UUID </summary>
const GUID PhonebookServerEquipmentServiceClass_UUID = { 0x0000112F, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> PhonebookServiceClass_UUID </summary>
const GUID PhonebookServiceClass_UUID = { 0x00001130, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> MessageAccessServerServiceClass_UUID </summary>
const GUID MessageAccessServerServiceClass_UUID = { 0x00001132, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> MessageNotificationServerServiceClass_UUID </summary>
const GUID MessageNotificationServerServiceClass_UUID = { 0x00001133, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> MessageAccessProfileServiceClass_UUID </summary>
const GUID MessageAccessProfileServiceClass_UUID = { 0x00001134, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> PnPInformationServiceClass_UUID </summary>
const GUID PnPInformationServiceClass_UUID = { 0x00001200, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> GenericNetworkingServiceClass_UUID </summary>
const GUID GenericNetworkingServiceClass_UUID = { 0x00001201, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> GenericFileTransferServiceClass_UUID </summary>
const GUID GenericFileTransferServiceClass_UUID = { 0x00001202, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> GenericAudioServiceClass_UUID </summary>
const GUID GenericAudioServiceClass_UUID = { 0x00001203, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> GenericTelephonyServiceClass_UUID </summary>
const GUID GenericTelephonyServiceClass_UUID = { 0x00001204, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> UPnpServiceClass_UUID </summary>
const GUID UPnpServiceClass_UUID = { 0x00001205, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> UPnpIpServiceClass_UUID </summary>
const GUID UPnpIpServiceClass_UUID = { 0x00001206, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ESdpUpnpIpPanServiceClass_UUID </summary>
const GUID ESdpUpnpIpPanServiceClass_UUID = { 0x00001300, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ESdpUpnpIpLapServiceClass_UUID </summary>
const GUID ESdpUpnpIpLapServiceClass_UUID = { 0x00001301, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> ESdpUpnpL2capServiceClass_UUID </summary>
const GUID ESdpUpnpL2capServiceClass_UUID = { 0x00001302, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> VideoSourceServiceClass_UUID </summary>
const GUID VideoSourceServiceClass_UUID = { 0x00001303, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> VideoSinkServiceClass_UUID </summary>
const GUID VideoSinkServiceClass_UUID = { 0x00001304, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };
/// <summary> VideoDistributionServiceClass_UUID </summary>
const GUID VideoDistributionServiceClass_UUID = { 0x00001305, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };

/// <summary> SyncMLServerServiceClass_UUID </summary>
const GUID SyncMLServerServiceClass_UUID = { 0x00000001, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x02, 0xEE, 0x00, 0x00, 0x02 };
/// <summary> SyncMLClientServiceClass_UUID </summary>
const GUID SyncMLClientServiceClass_UUID = { 0x00000002, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x02, 0xEE, 0x00, 0x00, 0x02 };
/// <summary> NokiaOBEXPCSuiteServiceClass_UUID </summary>
const GUID NokiaOBEXPCSuiteServiceClass_UUID = { 0x00005005, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x02, 0xEE, 0x00, 0x00, 0x01 };

/// <summary> ServiceDiscoveryServerServiceClassID_UUID16 </summary>
#define ServiceDiscoveryServerServiceClassID_UUID16				(0x1000)
/// <summary> BrowseGroupDescriptorServiceClassID_UUID16 </summary>
#define BrowseGroupDescriptorServiceClassID_UUID16				(0x1001)
/// <summary> PublicBrowseGroupServiceClass_UUID16 </summary>
#define PublicBrowseGroupServiceClass_UUID16					(0x1002)
/// <summary> SerialPortServiceClass_UUID16 </summary>
#define SerialPortServiceClass_UUID16							(0x1101)
/// <summary> LANAccessUsingPPPServiceClass_UUID16 </summary>
#define LANAccessUsingPPPServiceClass_UUID16					(0x1102)
/// <summary> DialupNetworkingServiceClass_UUID16 </summary>
#define DialupNetworkingServiceClass_UUID16						(0x1103)
/// <summary> IrMCSyncServiceClass_UUID16 </summary>
#define IrMCSyncServiceClass_UUID16								(0x1104)
/// <summary> OBEXObjectPushServiceClass_UUID16 </summary>
#define OBEXObjectPushServiceClass_UUID16						(0x1105)
/// <summary> OBEXFileTransferServiceClass_UUID16 </summary>
#define OBEXFileTransferServiceClass_UUID16						(0x1106)
/// <summary> IrMCSyncCommandServiceClass_UUID16 </summary>
#define IrMCSyncCommandServiceClass_UUID16						(0x1107)
/// <summary> HeadsetServiceClass_UUID16 </summary>
#define HeadsetServiceClass_UUID16								(0x1108)
/// <summary> CordlessTelephonyServiceClass_UUID16 </summary>
#define CordlessTelephonyServiceClass_UUID16					(0x1109)
/// <summary> AudioSourceServiceClass_UUID16 </summary>
#define AudioSourceServiceClass_UUID16							(0x110A)
/// <summary> AudioSinkServiceClass_UUID16 </summary>
#define AudioSinkServiceClass_UUID16							(0x110B)
/// <summary> AVRemoteControlTargetServiceClass_UUID16 </summary>
#define AVRemoteControlTargetServiceClass_UUID16				(0x110C)
/// <summary> AdvancedAudioDistributionServiceClass_UUID16 </summary>
#define AdvancedAudioDistributionServiceClass_UUID16			(0x110D)
/// <summary> AVRemoteControlServiceClass_UUID16 </summary>
#define AVRemoteControlServiceClass_UUID16						(0x110E)
/// <summary> VideoConferencingServiceClass_UUID16 </summary>
#define VideoConferencingServiceClass_UUID16					(0x110F)
/// <summary> IntercomServiceClass_UUID16 </summary>
#define IntercomServiceClass_UUID16								(0x1110)
/// <summary> FaxServiceClass_UUID16 </summary>
#define FaxServiceClass_UUID16									(0x1111)
/// <summary> HeadsetAudioGatewayServiceClass_UUID16 </summary>
#define HeadsetAudioGatewayServiceClass_UUID16					(0x1112)
/// <summary> WAPServiceClass_UUID16 </summary>
#define WAPServiceClass_UUID16									(0x1113)
/// <summary> WAPClientServiceClass_UUID16 </summary>
#define WAPClientServiceClass_UUID16							(0x1114)
/// <summary> PANUServiceClass_UUID16 </summary>
#define PANUServiceClass_UUID16									(0x1115)
/// <summary> NAPServiceClass_UUID16 </summary>
#define NAPServiceClass_UUID16									(0x1116)
/// <summary> GNServiceClass_UUID16 </summary>
#define GNServiceClass_UUID16									(0x1117)
/// <summary> DirectPrintingServiceClass_UUID16 </summary>
#define DirectPrintingServiceClass_UUID16						(0x1118)
/// <summary> ReferencePrintingServiceClass_UUID16 </summary>
#define ReferencePrintingServiceClass_UUID16					(0x1119)
/// <summary> ImagingServiceClass_UUID16 </summary>
#define ImagingServiceClass_UUID16								(0x111A)
/// <summary> ImagingResponderServiceClass_UUID16 </summary>
#define ImagingResponderServiceClass_UUID16						(0x111B)
/// <summary> ImagingAutomaticArchiveServiceClass_UUID16 </summary>
#define ImagingAutomaticArchiveServiceClass_UUID16				(0x111C)
/// <summary> ImagingReferenceObjectsServiceClass_UUID16 </summary>
#define ImagingReferenceObjectsServiceClass_UUID16				(0x111D)
/// <summary> HandsfreeServiceClass_UUID16 </summary>
#define HandsfreeServiceClass_UUID16							(0x111E)
/// <summary> HandsfreeAudioGatewayServiceClass_UUID16 </summary>
#define HandsfreeAudioGatewayServiceClass_UUID16				(0x111F)
/// <summary> DirectPrintingReferenceObjectsServiceClass_UUID16 </summary>
#define DirectPrintingReferenceObjectsServiceClass_UUID16		(0x1120)
/// <summary> ReflectedUIServiceClass_UUID16 </summary>
#define ReflectedUIServiceClass_UUID16							(0x1121)
/// <summary> BasicPrintingServiceClass_UUID16 </summary>
#define BasicPrintingServiceClass_UUID16						(0x1122)
/// <summary> PrintingStatusServiceClass_UUID16 </summary>
#define PrintingStatusServiceClass_UUID16						(0x1123)
/// <summary> HumanInterfaceDeviceServiceClass_UUID16 </summary>
#define HumanInterfaceDeviceServiceClass_UUID16					(0x1124)
/// <summary> HardcopyCableReplacementServiceClass_UUID16 </summary>
#define HardcopyCableReplacementServiceClass_UUID16				(0x1125)
/// <summary> HCRPrintServiceClass_UUID16 </summary>
#define HCRPrintServiceClass_UUID16								(0x1126)
/// <summary> HCRScanServiceClass_UUID16 </summary>
#define HCRScanServiceClass_UUID16								(0x1127)
/// <summary> CommonISDNAccessServiceClass_UUID16 </summary>
#define CommonISDNAccessServiceClass_UUID16						(0x1128)
/// <summary> VideoConferencingGWServiceClass_UUID16 </summary>
#define VideoConferencingGWServiceClass_UUID16					(0x1129)
/// <summary> UDIMTServiceClass_UUID16 </summary>
#define UDIMTServiceClass_UUID16								(0x112A)
/// <summary> UDITAServiceClass_UUID16 </summary>
#define UDITAServiceClass_UUID16								(0x112B)
/// <summary> AudioVideoServiceClass_UUID16 </summary>
#define AudioVideoServiceClass_UUID16							(0x112C)
/// <summary> SimAccessServiceClass_UUID16 </summary>
#define SimAccessServiceClass_UUID16							(0x112D)
/// <summary> PhonebookClientEquipmentServiceClass_UUID16 </summary>
#define PhonebookClientEquipmentServiceClass_UUID16				(0x112E)
/// <summary> PhonebookServerEquipmentServiceClass_UUID16 </summary>
#define PhonebookServerEquipmentServiceClass_UUID16				(0x112F)
/// <summary> PhonebookServiceClass_UUID16 </summary>
#define PhonebookServiceClass_UUID16							(0x1130)
/// <summary> MessageAccessServerServiceClass_UUID16 </summary>
#define MessageAccessServerServiceClass_UUID16					(0x1132)
/// <summary> MessageNotificationServerServiceClass_UUID16 </summary>
#define MessageNotificationServerServiceClass_UUID16			(0x1133)
/// <summary> MessageAccessProfileServiceClass_UUID16 </summary>
#define MessageAccessProfileServiceClass_UUID16					(0x1134)
/// <summary> PnPInformationServiceClass_UUID16 </summary>
#define PnPInformationServiceClass_UUID16						(0x1200)
/// <summary> GenericNetworkingServiceClass_UUID16 </summary>
#define GenericNetworkingServiceClass_UUID16					(0x1201)
/// <summary> GenericFileTransferServiceClass_UUID16 </summary>
#define GenericFileTransferServiceClass_UUID16					(0x1202)
/// <summary> GenericAudioServiceClass_UUID16 </summary>
#define GenericAudioServiceClass_UUID16							(0x1203)
/// <summary> GenericTelephonyServiceClass_UUID16 </summary>
#define GenericTelephonyServiceClass_UUID16						(0x1204)
/// <summary> UPnpServiceClass_UUID16 </summary>
#define UPnpServiceClass_UUID16									(0x1205)
/// <summary> UPnpIpServiceClass_UUID16 </summary>
#define UPnpIpServiceClass_UUID16								(0x1206)
/// <summary> ESdpUpnpIpPanServiceClass_UUID16 </summary>
#define ESdpUpnpIpPanServiceClass_UUID16						(0x1300)
/// <summary> ESdpUpnpIpLapServiceClass_UUID16 </summary>
#define ESdpUpnpIpLapServiceClass_UUID16						(0x1301)
/// <summary> ESdpUpnpL2capServiceClass_UUID16 </summary>
#define ESdpUpnpL2capServiceClass_UUID16						(0x1302)
/// <summary> VideoSourceServiceClass_UUID16 </summary>
#define VideoSourceServiceClass_UUID16							(0x1303)
/// <summary> VideoSinkServiceClass_UUID16 </summary>
#define VideoSinkServiceClass_UUID16							(0x1304)
/// <summary> VideoDistributionServiceClass_UUID16 </summary>
#define VideoDistributionServiceClass_UUID16					(0x1305)

/* PSM IDs. */

#define PSM_SDP					0x0001
#define PSM_RFCOMM				0x0003
#define PSM_TCS_BIN				0x0005
#define PSM_TCS_BIN_CORDLESS	0x0007
#define PSM_BNEP				0x000F
#define PSM_HID_CONTROL			0x0011
#define PSM_HID_INTERRUPT		0x0013
#define PSM_UPNP				0x0015
#define PSM_AVCTP				0x0017
#define PSM_AVDTP				0x0019
#define PSM_AVCTP_BROWSE		0x001B
#define PSM_UDI_C_PLANE			0x001D
#define PSM_ATT					0x001F
#define PSM_3DSP				0x0021
#define PSM_LE_IPSP				0x0023

/* LE Services UUIDs. */

const GUID LE_ATT_BLUETOOTH_BASE_GUID = { 0x00000000, 0x0000, 0x1000, 0x80, 0x00, 0x00, 0x80, 0x5F, 0x9B, 0x34, 0xFB };

#define LE_SERVICE_GAP		0x1800
#define LE_SERVICE_GATT		0x1801

/* GATT attribute types. */

#define LE_GATT_ATTRIBUTE_TYPE_PRIMARY_SERVICE		0x2800
#define LE_GATT_ATTRIBUTE_TYPE_SECONDARY_SERVICE	0x2801
#define LE_GATT_ATTRIBUTE_TYPE_INCLUDE				0x2802
#define LE_GATT_ATTRIBUTE_TYPE_CHARACTERISTIC		0x2803

/* GATT Characteristic Descriptors. */

#define LE_GATT_CHARACTERISTIC_DESCRIPTOR_EXTENDED_PROPERTIES	0x2900
#define LE_GATT_CHARACTERISTIC_DESCRIPTOR_USER_DESCRIPTION		0x2901
#define LE_GATT_CHARACTERISTIC_DESCRIPTOR_CLIENT_CONFIGURATION	0x2902
#define LE_GATT_CHARACTERISTIC_DESCRIPTOR_SERVER_CONFIGURATION	0x2903
#define LE_GATT_CHARACTERISTIC_DESCRIPTOR_FORMAT				0x2904
#define LE_GATT_CHARACTERISTIC_DESCRIPTOR_AGGREGATE_FORMAT		0x2905

/* GATT Characteristic Types. */

#define LE_GATT_CHARACTERISTIC_TYPE_DEVICE_NAME									0x2A00
#define LE_GATT_CHARACTERISTIC_TYPE_APPEARANCE									0x2A01
#define LE_GATT_CHARACTERISTIC_TYPE_PERIPHERAL_PRIVACY_FLAG						0x2A02
#define LE_GATT_CHARACTERISTIC_TYPE_RECONNECTION_ADDRESS						0x2A03
#define LE_GATT_CHARACTERISTIC_TYPE_PERIPHERAL_PREFERED_CONNECTION_PARAMETER	0x2A04
#define LE_GATT_CHARACTERISTIC_TYPE_SERVICE_CHANGED								0x2A05

/* GAP Appearance. */

#define LE_GAP_APPEARANCE_CATEGORY_OFFSET	0x6
#define LE_GAP_APPEARANCE_CATEGORY_MASK		0x3ff

#define LE_GAP_APPEARANCE_SUB_CATEGORY_MASK	0x3f

#define LE_GAP_APPEARANCE_CATEGORY_UNCATEGORIZED			0x0000
#define LE_GAP_APPEARANCE_CATEGORY_PHONE					0x0001
#define LE_GAP_APPEARANCE_CATEGORY_COMPUTER					0x0002
#define LE_GAP_APPEARANCE_CATEGORY_WATCH					0x0003
#define LE_GAP_APPEARANCE_CATEGORY_CLOCK					0x0004
#define LE_GAP_APPEARANCE_CATEGORY_DISPLAY					0x0005
#define LE_GAP_APPEARANCE_CATEGORY_REMOTE_CONTROL			0x0006
#define LE_GAP_APPEARANCE_CATEGORY_EYE_GLASSES				0x0007
#define LE_GAP_APPEARANCE_CATEGORY_TAG						0x0008
#define LE_GAP_APPEARANCE_CATEGORY_KEYRING					0x0009
#define LE_GAP_APPEARANCE_CATEGORY_MEDIA_PLAYER				0x000a
#define LE_GAP_APPEARANCE_CATEGORY_BARCODE_SCANNER			0x000b
#define LE_GAP_APPEARANCE_CATEGORY_THERMOMETER				0x000c
#define LE_GAP_APPEARANCE_CATEGORY_HEART_RATE				0x000d
#define LE_GAP_APPEARANCE_CATEGORY_BLOOD_PRESSURE			0x000e
#define LE_GAP_APPEARANCE_CATEGORY_HID						0x000f
#define LE_GAP_APPEARANCE_CATEGORY_GLUCOSE_METER			0x0010
#define LE_GAP_APPEARANCE_CATEGORY_RUNNING_WALKING_SENSOR	0x0011
#define LE_GAP_APPEARANCE_CATEGORY_CYCLING					0x0012

#define LE_GAP_APPEARANCE_CATEGORY_PLUSE_OXIMETER			0x0031
#define LE_GAP_APPEARANCE_CATEGORY_WEIGHT_SCALE				0x0032
#define LE_GAP_APPEARANCE_CATEGORY_OUTDOOR_SPORTS_ACTIVITY	0x0051

#define LE_GAP_APPEARANCE_SUBCATEGORY_GENERIC	0x00

#define LE_GAP_APPEARANCE_WATCH_SUBCATEGORY_SPORTS_WATCH	0x01

#define LE_GAP_APPEARANCE_THERMOMETER_SUBCATEGORY_EAR	0x01

#define LE_GAP_APPEARANCE_HEART_RATE_SUBCATEGORY_HEART_RATE_BELT	0x01

#define LE_GAP_APPEARANCE_BLOOD_PRESSURE_SUBCATEGORY_ARM	0x01
#define LE_GAP_APPEARANCE_BLOOD_PRESSURE_SUBCATEGORY_WRIST	0x02

#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_KEYBOARD			0x01
#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_MOUSE				0x02
#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_JOYSTICK			0x03
#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_GAMEPAD			0x04
#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_DIGITIZER_TABLET	0x05
#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_CARD_READER		0x06
#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_DIGITAL_PEN		0x07
#define LE_GAP_APPEARANCE_HID_SUBCATEGORY_BARCODE_SCANNER	0x08

#define LE_GAP_APPEARANCE_RUNNING_WALKING_SENSOR_SUBCATEGORY_IN_SHOE	0x01
#define LE_GAP_APPEARANCE_RUNNING_WALKING_SENSOR_SUBCATEGORY_ON_SHOE	0x02
#define LE_GAP_APPEARANCE_RUNNING_WALKING_SENSOR_SUBCATEGORY_ON_HIP		0x03

#define LE_GAP_APPEARANCE_CYCLING_SUBCATEGORY_CYCLING_COMPUTER			0x01
#define LE_GAP_APPEARANCE_CYCLING_SUBCATEGORY_SPEED_SENSOR				0x02
#define LE_GAP_APPEARANCE_CYCLING_SUBCATEGORY_CADENCE_SENSOR			0x03
#define LE_GAP_APPEARANCE_CYCLING_SUBCATEGORY_POWER_SENSOR				0x04
#define LE_GAP_APPEARANCE_CYCLING_SUBCATEGORY_SPEED_AND_CADENCE_SENSOR	0x05

#define LE_GAP_APPEARANCE_PULSE_OXIMETER_SUBCATEGORY_FINGERTIP		0x01
#define LE_GAP_APPEARANCE_PULSE_OXIMETER_SUBCATEGORY_WRIST_WORN		0x02

#define LE_GAP_APPEARANCE_OUTDOOR_SPORTS_ACTIVITY_SUBCATEGORY_LOCATION_DISPLAY_DEVICE				0x01
#define LE_GAP_APPEARANCE_OUTDOOR_SPORTS_ACTIVITY_SUBCATEGORY_LOCATION_NAVIGATION_DISPLAY_DEVICE	0x02
#define LE_GAP_APPEARANCE_OUTDOOR_SPORTS_ACTIVITY_SUBCATEGORY_LOCATION_POD							0x03
#define LE_GAP_APPEARANCE_OUTDOOR_SPORTS_ACTIVITY_SUBCATEGORY_LOCATION_NAVIGATION_POD				0x04

/* GAP Advertisement Types. */

/// <summary> None or invalid. </summary>
#define LE_GAP_AD_TYPE_NONE						0x00
/// <summary> Flags. </summary>
#define LE_GAP_AD_TYPE_FLAGS					0x01
/// <summary> Incomplete List of 16-bit Service Class UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICES_16_MORE			0x02
/// <summary> Complete List of 16-bit Service Class UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICES_16_ALL			0x03
/// <summary> Incomplete List of 32-bit Service Class UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICES_32_MORE			0x04
/// <summary> Complete List of 32-bit Service Class UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICES_32_ALL			0x05
/// <summary> Incomplete List of 128-bit Service Class UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICES_128_MORE		0x06
/// <summary> Complete List of 128-bit Service Class UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICES_128_ALL			0x07
/// <summary> Shortened Local Name. </summary>
#define LE_GAP_AD_TYPE_LOCAL_NAME_SHORT			0x08
/// <summary> Complete Local Name. </summary>
#define LE_GAP_AD_TYPE_LOCAL_NAME_COMPLETE		0x09
/// <summary> TX Power Level. </summary>
#define LE_GAP_AD_TYPE_TXPOWER					0x0A
/// <summary> Class of Device. </summary>
#define LE_GAP_AD_TYPE_COD						0x0D
/// <summary> Simple Pairing Hash C. </summary>
#define LE_GAP_AD_TYPE_PAIRING_HASH_C			0x0E
/// <summary> Simple Pairing Randomizer R. </summary>
#define LE_GAP_AD_TYPE_PAIRING_RAND_R			0x0F
/// <summary> Device ID. </summary>
#define LE_GAP_AD_TYPE_DEVICE_ID				0x10
/// <summary> Security Manager Out of Band Flags. </summary>
#define LE_GAP_AD_TYPE_SM_OOB_FLAGS				0x11
/// <summary> Slave Connection Interval Range. </summary>
#define LE_GAP_AD_TYPE_CON_INTERVALS			0x12
/// <summary> List of 16-bit Service Solicitation UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICE_SOL_UUIDS_16		0x14
/// <summary> List of 128-bit Service Solicitation UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICE_SOL_UUIDS_128	0x15
/// <summary> Service Data 16-bit UUID. </summary>
#define LE_GAP_AD_TYPE_SERVICE_DATA_16			0x16
/// <summary> Public Target Address. </summary>
#define LE_GAP_AD_TYPE_PUBLIC_TARGET_ADDRESS	0x17
/// <summary> Random Target Address. </summary>
#define LE_GAP_AD_TYPE_RANDOM_TARGET_ADDRESS	0x18
/// <summary> Appearance. </summary>
#define LE_GAP_AD_TYPE_APPEARANCE				0x19
/// <summary> Advertising Interval. </summary>
#define LE_GAP_AD_TYPE_ADV_INTERVAL				0x1A
/// <summary> LE Bluetooth Device Address. </summary>
#define LE_GAP_AD_TYPE_ADDRESS					0x1B
/// <summary> LE Role. </summary>
#define LE_GAP_AD_TYPE_ROLE						0x1C
/// <summary> Simple Pairing Hash C-256. </summary>
#define LE_GAP_AD_TYPE_PAIRING_HASH_C_256		0x1D
/// <summary> Simple Pairing Randomizer R-256. </summary>
#define LE_GAP_AD_TYPE_PAIRING_RAND_R_256		0x1E
/// <summary> List of 32-bit Service Solicitation UUIDs. </summary>
#define LE_GAP_AD_TYPE_SERVICE_SOL_UUIDS_32		0x1F
/// <summary> Service Data - 32-bit UUID. </summary>
#define LE_GAP_AD_TYPE_SERVICE_DATA_32			0x20
/// <summary> Service Data - 128-bit UUID. </summary>
#define LE_GAP_AD_TYPE_SERVICE_DATA_128			0x21
/// <summary> LE Secure Connections Confirmation Value. </summary>
#define LE_GAP_AD_TYPE_SECURE_CONFIRM			0x22
/// <summary> LE Secure Connections Random Value. </summary>
#define LE_GAP_AD_TYPE_SECURE_RAND				0x23
/// <summary> URI. </summary>
#define LE_GAP_AD_TYPE_URI						0x24
/// <summary> Indoor Positioning. </summary>
#define LE_GAP_AD_TYPE_INDOOR_POS				0x25
/// <summary> Transport Discovery Data. </summary>
#define LE_GAP_AD_TYPE_TRANS_DISC_DATA			0x26
/// <summary> LE Supported Features. </summary>
#define LE_GAP_AD_TYPE_FEATURES					0x27
/// <summary> Channel Map Update Indication. </summary>
#define LE_GAP_AD_TYPE_CH_MAP					0x28
/// <summary> PB-ADV. </summary>
#define LE_GAP_AD_TYPE_PB_ADV					0x29
/// <summary> Mesh Message. </summary>
#define LE_GAP_AD_TYPE_MESH_MSG					0x2A
/// <summary> Mesh Beacon. </summary>
#define LE_GAP_AD_TYPE_MESH_BEACON				0x2B
/// <summary> BIGInfo. </summary>
#define LE_GAP_AD_TYPE_BIG_INGO					0x2C
/// <summary> Broadcast Code. </summary>
#define LE_GAP_AD_TYPE_BROADCAST_CODE			0x2D
/// <summary> 3D Information Data. </summary>
#define LE_GAP_AD_TYPE_3D_INFO					0x3D
/// <summary> Manufacturer Specific Data. </summary>
#define LE_GAP_AD_TYPE_MANUFACTURER				0xFF

/* LE Beacons UUIDs. */

/// <summary> Eddystone Beacon service UUID. </summary>
#define EDDYSTONE_BEACON_UUID_16	0xFEAA

/// <summary> Eddystone UID beacon frame ID. </summary>
/// <remarks> This constant is defined for internal use only. </remarks>
#define EDDYSTONE_UID_FRAME_ID	0x00
/// <summary> Eddystone URL beacon frame ID. </summary>
/// <remarks> This constant is defined for internal use only. </remarks>
#define EDDYSTONE_URL_FRAME_ID	0x10
/// <summary> Eddystone TLM beacon frame ID. </summary>
/// <remarks> This constant is defined for internal use only. </remarks>
#define EDDYSTONE_TLM_FRAME_ID	0x20

}