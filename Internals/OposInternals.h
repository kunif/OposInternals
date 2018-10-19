

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for OposInternals.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0620 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __OposInternals_h__
#define __OposInternals_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __OPOSINTERNALSLib_LIBRARY_DEFINED__
#define __OPOSINTERNALSLib_LIBRARY_DEFINED__

/* library OPOSINTERNALSLib */
/* [helpstring][version][uuid] */ 

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0001
    {
        PIDX_Claimed	= 1,
        PIDX_DataEventEnabled	= 2,
        PIDX_DeviceEnabled	= 3,
        PIDX_FreezeEvents	= 4,
        PIDX_OutputID	= 5,
        PIDX_ResultCode	= 6,
        PIDX_ResultCodeExtended	= 7,
        PIDX_ServiceObjectVersion	= 8,
        PIDX_State	= 9,
        PIDX_AutoDisable	= 10,
        PIDX_BinaryConversion	= 11,
        PIDX_DataCount	= 12,
        PIDX_PowerNotify	= 13,
        PIDX_PowerState	= 14,
        PIDX_CapPowerReporting	= 501,
        PIDX_CapStatisticsReporting	= 502,
        PIDX_CapUpdateStatistics	= 503,
        PIDX_CapCompareFirmwareVersion	= 504,
        PIDX_CapUpdateFirmware	= 505,
        PIDX_CheckHealthText	= 1000001,
        PIDX_DeviceDescription	= 1000002,
        PIDX_DeviceName	= 1000003,
        PIDX_ServiceObjectDescription	= 1000004,
        PIDX_NUMBER	= 0,
        PIDX_STRING	= 1000000,
        PIDX_CASH	= 1000,
        PIDX_COIN	= 2000,
        PIDX_TOT	= 3000,
        PIDX_LOCK	= 4000,
        PIDX_DISP	= 5000,
        PIDX_MICR	= 6000,
        PIDX_MSR	= 7000,
        PIDX_PTR	= 8000,
        PIDX_SCAL	= 9000,
        PIDX_SCAN	= 10000,
        PIDX_SIG	= 11000,
        PIDX_KBD	= 12000,
        PIDX_CHAN	= 13000,
        PIDX_TONE	= 14000,
        PIDX_BB	= 15000,
        PIDX_FPTR	= 16000,
        PIDX_PPAD	= 17000,
        PIDX_ROD	= 18000,
        PIDX_CAT	= 19000,
        PIDX_PCRW	= 20000,
        PIDX_PWR	= 21000,
        PIDX_CHK	= 22000,
        PIDX_MOTION	= 23000,
        PIDX_SCRW	= 24000,
        PIDX_BIO	= 25000,
        PIDX_EJ	= 26000,
        PIDX_BACC	= 27000,
        PIDX_BDSP	= 28000,
        PIDX_CACC	= 29000,
        PIDX_IMG	= 30000,
        PIDX_BELT	= 31000,
        PIDX_EVRW	= 32000,
        PIDX_GATE	= 33000,
        PIDX_ITEM	= 34000,
        PIDX_LGT	= 35000,
        PIDX_RFID	= 36000
    } 	OPOS_Internals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0002
    {
        PIDXBelt_AutoStopBackward	= 31001,
        PIDXBelt_AutoStopBackwardDelayTime	= 31002,
        PIDXBelt_AutoStopBackwardItemCount	= 31003,
        PIDXBelt_AutoStopForward	= 31004,
        PIDXBelt_AutoStopForwardDelayTime	= 31005,
        PIDXBelt_AutoStopForwardItemCount	= 31006,
        PIDXBelt_LightBarrierBackwardInterrupted	= 31007,
        PIDXBelt_LightBarrierForwardInterrupted	= 31008,
        PIDXBelt_MotionStatus	= 31009,
        PIDXBelt_SecurityFlapBackwardOpened	= 31010,
        PIDXBelt_SecurityFlapForwardOpened	= 31011,
        PIDXBelt_CapAutoStopBackward	= 31501,
        PIDXBelt_CapAutoStopBackwardItemCount	= 31502,
        PIDXBelt_CapAutoStopForward	= 31503,
        PIDXBelt_CapAutoStopForwardItemCount	= 31504,
        PIDXBelt_CapLightBarrierBackward	= 31505,
        PIDXBelt_CapLightBarrierForward	= 31506,
        PIDXBelt_CapMoveBackward	= 31507,
        PIDXBelt_CapSecurityFlapBackward	= 31508,
        PIDXBelt_CapSecurityFlapForward	= 31509,
        PIDXBelt_CapSpeedStepsBackward	= 31510,
        PIDXBelt_CapSpeedStepsForward	= 31511
    } 	OPOSBeltInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0003
    {
        PIDXBacc_DepositAmount	= 27001,
        PIDXBacc_DepositStatus	= 27002,
        PIDXBacc_FullStatus	= 27003,
        PIDXBacc_RealTimeDataEnabled	= 27004,
        PIDXBacc_CapDiscrepancy	= 27501,
        PIDXBacc_CapFullSensor	= 27502,
        PIDXBacc_CapJamSensor	= 27503,
        PIDXBacc_CapNearFullSensor	= 27504,
        PIDXBacc_CapPauseDeposit	= 27505,
        PIDXBacc_CapRealTimeData	= 27506,
        PIDXBacc_CurrencyCode	= 127001,
        PIDXBacc_DepositCashList	= 127002,
        PIDXBacc_DepositCodeList	= 127003,
        PIDXBacc_DepositCounts	= 127004
    } 	OPOSBillAcceptorInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0004
    {
        PIDXBdsp_AsyncMode	= 28001,
        PIDXBdsp_AsyncResultCode	= 28002,
        PIDXBdsp_AsyncResultCodeExtended	= 28003,
        PIDXBdsp_CurrentExit	= 28004,
        PIDXBdsp_DeviceExits	= 28005,
        PIDXBdsp_DeviceStatus	= 28006,
        PIDXBdsp_CapDiscrepancy	= 28501,
        PIDXBdsp_CapFullSensor	= 28502,
        PIDXBdsp_CapJamSensor	= 28503,
        PIDXBdsp_CapNearFullSensor	= 28504,
        PIDXBdsp_CurrencyCashList	= 128001,
        PIDXBdsp_CurrencyCode	= 128002,
        PIDXBdsp_CurrencyCodeList	= 128003,
        PIDXBdsp_ExitCashList	= 128004
    } 	OPOSBillDispenserInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0005
    {
        PIDXBio_Algorithm	= 25001,
        PIDXBio_RealTimeDataEnabled	= 25002,
        PIDXBio_SensorBPP	= 25003,
        PIDXBio_SensorColor	= 25004,
        PIDXBio_SensorHeight	= 25005,
        PIDXBio_SensorOrientation	= 25006,
        PIDXBio_SensorType	= 25007,
        PIDXBio_SensorWidth	= 25008,
        PIDXBio_CapPrematchData	= 25501,
        PIDXBio_CapRawSensorData	= 25502,
        PIDXBio_CapRealTimeData	= 25503,
        PIDXBio_CapSensorColor	= 25504,
        PIDXBio_CapSensorOrientation	= 25505,
        PIDXBio_CapSensorType	= 25506,
        PIDXBio_CapTemplateAdaptation	= 25507,
        PIDXBio_AlgorithmList	= 125001,
        PIDXBio_BIR	= 125002,
        PIDXBio_RawSensorData	= 125003
    } 	OPOSBiometricsInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0006
    {
        PIDXBb_AsyncMode	= 15001,
        PIDXBb_AutoToneDuration	= 15002,
        PIDXBb_AutoToneFrequency	= 15003,
        PIDXBb_BumpBarDataCount	= 15004,
        PIDXBb_CurrentUnitID	= 15005,
        PIDXBb_ErrorUnits	= 15006,
        PIDXBb_EventUnitID	= 15007,
        PIDXBb_EventUnits	= 15008,
        PIDXBb_Keys	= 15009,
        PIDXBb_Timeout	= 15010,
        PIDXBb_UnitsOnline	= 15011,
        PIDXBb_CapTone	= 15501,
        PIDXBb_ErrorString	= 115001,
        PIDXBb_EventString	= 115002
    } 	OPOSBumpBarInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0007
    {
        PIDXChan_AsyncMode	= 13001,
        PIDXChan_AsyncResultCode	= 13002,
        PIDXChan_AsyncResultCodeExtended	= 13003,
        PIDXChan_CurrentExit	= 13004,
        PIDXChan_DeviceExits	= 13005,
        PIDXChan_DeviceStatus	= 13006,
        PIDXChan_FullStatus	= 13007,
        PIDXChan_DepositAmount	= 13008,
        PIDXChan_DepositStatus	= 13009,
        PIDXChan_CurrentService	= 13010,
        PIDXChan_RealTimeDataEnabled	= 13011,
        PIDXChan_ServiceCount	= 13012,
        PIDXChan_ServiceIndex	= 13013,
        PIDXChan_CapDiscrepancy	= 13501,
        PIDXChan_CapEmptySensor	= 13502,
        PIDXChan_CapFullSensor	= 13503,
        PIDXChan_CapNearEmptySensor	= 13504,
        PIDXChan_CapNearFullSensor	= 13505,
        PIDXChan_CapDeposit	= 13506,
        PIDXChan_CapDepositDataEvent	= 13507,
        PIDXChan_CapPauseDeposit	= 13508,
        PIDXChan_CapRepayDeposit	= 13509,
        PIDXChan_CapJamSensor	= 13510,
        PIDXChan_CapRealTimeData	= 13511,
        PIDXChan_CurrencyCashList	= 113001,
        PIDXChan_CurrencyCode	= 113002,
        PIDXChan_CurrencyCodeList	= 113003,
        PIDXChan_ExitCashList	= 113004,
        PIDXChan_DepositCashList	= 113005,
        PIDXChan_DepositCodeList	= 113006,
        PIDXChan_DepositCounts	= 113007
    } 	OPOSCashChangerInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0008
    {
        PIDXCash_DrawerOpened	= 1001,
        PIDXCash_CapStatus	= 1501,
        PIDXCash_CapStatusMultiDrawerDetect	= 1502
    } 	OPOSCashDrawerInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0009
    {
        PIDXCat_AsyncMode	= 19001,
        PIDXCat_TrainingMode	= 19002,
        PIDXCat_TransactionType	= 19003,
        PIDXCat_PaymentMedia	= 19004,
        PIDXCat_LogStatus	= 19005,
        PIDXCat_CapAdditionalSecurityInformation	= 19501,
        PIDXCat_CapAuthorizeCompletion	= 19502,
        PIDXCat_CapAuthorizePreSales	= 19503,
        PIDXCat_CapAuthorizeRefund	= 19504,
        PIDXCat_CapAuthorizeVoid	= 19505,
        PIDXCat_CapAuthorizeVoidPreSales	= 19506,
        PIDXCat_CapCenterResultCode	= 19507,
        PIDXCat_CapCheckCard	= 19508,
        PIDXCat_CapDailyLog	= 19509,
        PIDXCat_CapInstallments	= 19510,
        PIDXCat_CapPaymentDetail	= 19511,
        PIDXCat_CapTaxOthers	= 19512,
        PIDXCat_CapTransactionNumber	= 19513,
        PIDXCat_CapTrainingMode	= 19514,
        PIDXCat_CapCashDeposit	= 19515,
        PIDXCat_CapLockTerminal	= 19516,
        PIDXCat_CapLogStatus	= 19517,
        PIDXCat_CapUnlockTerminal	= 19518,
        PIDXCat_AccountNumber	= 119001,
        PIDXCat_AdditionalSecurityInformation	= 119002,
        PIDXCat_ApprovalCode	= 119003,
        PIDXCat_CardCompanyID	= 119004,
        PIDXCat_CenterResultCode	= 119005,
        PIDXCat_DailyLog	= 119006,
        PIDXCat_PaymentCondition	= 119007,
        PIDXCat_PaymentDetail	= 119008,
        PIDXCat_SequenceNumber	= 119009,
        PIDXCat_SlipNumber	= 119010,
        PIDXCat_TransactionNumber	= 119011
    } 	OPOSCATInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0010
    {
        PIDXChk_Color	= 22001,
        PIDXChk_ConcurrentMICR	= 22002,
        PIDXChk_CropAreaCount	= 22003,
        PIDXChk_DocumentHeight	= 22004,
        PIDXChk_DocumentWidth	= 22005,
        PIDXChk_FileIndex	= 22006,
        PIDXChk_ImageFormat	= 22007,
        PIDXChk_ImageMemoryStatus	= 22008,
        PIDXChk_MapMode	= 22009,
        PIDXChk_MaxCropAreas	= 22010,
        PIDXChk_Quality	= 22011,
        PIDXChk_RemainingImagesEstimate	= 22012,
        PIDXChk_Contrast	= 22013,
        PIDXChk_CapAutoGenerateFileID	= 22501,
        PIDXChk_CapAutoGenerateImageTagData	= 22502,
        PIDXChk_CapAutoSize	= 22503,
        PIDXChk_CapColor	= 22504,
        PIDXChk_CapConcurrentMICR	= 22505,
        PIDXChk_CapDefineCropArea	= 22506,
        PIDXChk_CapImageFormat	= 22507,
        PIDXChk_CapImageTagData	= 22508,
        PIDXChk_CapMICRDevice	= 22509,
        PIDXChk_CapStoreImageFiles	= 22510,
        PIDXChk_CapValidationDevice	= 22511,
        PIDXChk_CapAutoContrast	= 22512,
        PIDXChk_CapContrast	= 22513,
        PIDXChk_FileID	= 122001,
        PIDXChk_ImageData	= 122002,
        PIDXChk_ImageTagData	= 122003,
        PIDXChk_QualityList	= 122004
    } 	OPOSCheckScannerInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0011
    {
        PIDXCacc_DepositAmount	= 29001,
        PIDXCacc_DepositStatus	= 29002,
        PIDXCacc_FullStatus	= 29003,
        PIDXCacc_RealTimeDataEnabled	= 29004,
        PIDXCacc_CapDiscrepancy	= 29501,
        PIDXCacc_CapFullSensor	= 29502,
        PIDXCacc_CapJamSensor	= 29503,
        PIDXCacc_CapNearFullSensor	= 29504,
        PIDXCacc_CapPauseDeposit	= 29505,
        PIDXCacc_CapRealTimeData	= 29506,
        PIDXCacc_CurrencyCode	= 129001,
        PIDXCacc_DepositCashList	= 129002,
        PIDXCacc_DepositCodeList	= 129003,
        PIDXCacc_DepositCounts	= 129004
    } 	OPOSCoinAcceptorInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0012
    {
        PIDXCoin_DispenserStatus	= 2001,
        PIDXCoin_CapEmptySensor	= 2501,
        PIDXCoin_CapJamSensor	= 2502,
        PIDXCoin_CapNearEmptySensor	= 2503
    } 	OPOSCoinDispenserInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0013
    {
        PIDXEj_AsyncMode	= 26001,
        PIDXEj_FlagWhenIdle	= 26002,
        PIDXEj_MediumIsAvailable	= 26003,
        PIDXEj_Station	= 26004,
        PIDXEj_StorageEnabled	= 26005,
        PIDXEj_Suspended	= 26006,
        PIDXEj_WaterMark	= 26007,
        PIDXEj_CapAddMarker	= 26501,
        PIDXEj_CapErasableMedium	= 26502,
        PIDXEj_CapInitializeMedium	= 26503,
        PIDXEj_CapMediumIsAvailable	= 26504,
        PIDXEj_CapPrintContent	= 26505,
        PIDXEj_CapPrintContentFile	= 26506,
        PIDXEj_CapRetrieveCurrentMarker	= 26507,
        PIDXEj_CapRetrieveMarker	= 26508,
        PIDXEj_CapRetrieveMarkerByDateTime	= 26509,
        PIDXEj_CapRetrieveMarkersDateTime	= 26510,
        PIDXEj_CapStation	= 26511,
        PIDXEj_CapStorageEnabled	= 26512,
        PIDXEj_CapSuspendPrintContent	= 26513,
        PIDXEj_CapSuspendQueryContent	= 26514,
        PIDXEj_CapWaterMark	= 26515,
        PIDXEj_MediumID	= 126001
    } 	OPOSElectronicJournalInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0014
    {
        PIDXEvrw_AsyncMode	= 32001,
        PIDXEvrw_DetectionControl	= 32002,
        PIDXEvrw_DetectionStatus	= 32003,
        PIDXEvrw_LogStatus	= 32004,
        PIDXEvrw_SequenceNumber	= 32005,
        PIDXEvrw_PINEntry	= 32006,
        PIDXEvrw_TrainingModeState	= 32007,
        PIDXEvrw_ServiceType	= 32008,
        PIDXEvrw_CapActivateService	= 32501,
        PIDXEvrw_CapAddValue	= 32502,
        PIDXEvrw_CapCancelValue	= 32503,
        PIDXEvrw_CapCardSensor	= 32504,
        PIDXEvrw_CapDetectionControl	= 32505,
        PIDXEvrw_CapElectronicMoney	= 32506,
        PIDXEvrw_CapEnumerateCardServices	= 32507,
        PIDXEvrw_CapIndirectTransactionLog	= 32508,
        PIDXEvrw_CapLockTerminal	= 32509,
        PIDXEvrw_CapLogStatus	= 32510,
        PIDXEvrw_CapMediumID	= 32511,
        PIDXEvrw_CapPoint	= 32512,
        PIDXEvrw_CapSubtractValue	= 32513,
        PIDXEvrw_CapTransaction	= 32514,
        PIDXEvrw_CapTransactionLog	= 32515,
        PIDXEvrw_CapUnlockTerminal	= 32516,
        PIDXEvrw_CapUpdateKey	= 32517,
        PIDXEvrw_CapVoucher	= 32518,
        PIDXEvrw_CapWriteValue	= 32519,
        PIDXEvrw_CapPINDevice	= 32520,
        PIDXEvrw_CapTrainingMode	= 32521,
        PIDXEvrw_CapMembershipCertificate	= 32522,
        PIDXEvrw_AccountNumber	= 132001,
        PIDXEvrw_AdditionalSecurityInformation	= 132002,
        PIDXEvrw_ApprovalCode	= 132003,
        PIDXEvrw_CardServiceList	= 132004,
        PIDXEvrw_CurrentService	= 132005,
        PIDXEvrw_ExpirationDate	= 132006,
        PIDXEvrw_LastUsedDate	= 132007,
        PIDXEvrw_MediumID	= 132008,
        PIDXEvrw_ReaderWriterServiceList	= 132009,
        PIDXEvrw_TransactionLog	= 132010,
        PIDXEvrw_VoucherID	= 132011,
        PIDXEvrw_VoucherIDList	= 132012
    } 	OPOSElectronicValueRWInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0015
    {
        PIDXFptr_AmountDecimalPlaces	= 16001,
        PIDXFptr_AsyncMode	= 16002,
        PIDXFptr_CheckTotal	= 16003,
        PIDXFptr_CountryCode	= 16004,
        PIDXFptr_CoverOpen	= 16005,
        PIDXFptr_DayOpened	= 16006,
        PIDXFptr_DescriptionLength	= 16007,
        PIDXFptr_DuplicateReceipt	= 16008,
        PIDXFptr_ErrorLevel	= 16009,
        PIDXFptr_ErrorOutID	= 16010,
        PIDXFptr_ErrorState	= 16011,
        PIDXFptr_ErrorStation	= 16012,
        PIDXFptr_FlagWhenIdle	= 16013,
        PIDXFptr_JrnEmpty	= 16014,
        PIDXFptr_JrnNearEnd	= 16015,
        PIDXFptr_MessageLength	= 16016,
        PIDXFptr_NumHeaderLines	= 16017,
        PIDXFptr_NumTrailerLines	= 16018,
        PIDXFptr_NumVatRates	= 16019,
        PIDXFptr_PrinterState	= 16020,
        PIDXFptr_QuantityDecimalPlaces	= 16021,
        PIDXFptr_QuantityLength	= 16022,
        PIDXFptr_RecEmpty	= 16023,
        PIDXFptr_RecNearEnd	= 16024,
        PIDXFptr_RemainingFiscalMemory	= 16025,
        PIDXFptr_SlpEmpty	= 16026,
        PIDXFptr_SlpNearEnd	= 16027,
        PIDXFptr_SlipSelection	= 16028,
        PIDXFptr_TrainingModeActive	= 16029,
        PIDXFptr_ActualCurrency	= 16030,
        PIDXFptr_ContractorId	= 16031,
        PIDXFptr_DateType	= 16032,
        PIDXFptr_FiscalReceiptStation	= 16033,
        PIDXFptr_FiscalReceiptType	= 16034,
        PIDXFptr_MessageType	= 16035,
        PIDXFptr_TotalizerType	= 16036,
        PIDXFptr_CapAdditionalLines	= 16501,
        PIDXFptr_CapAmountAdjustment	= 16502,
        PIDXFptr_CapAmountNotPaid	= 16503,
        PIDXFptr_CapCheckTotal	= 16504,
        PIDXFptr_CapCoverSensor	= 16505,
        PIDXFptr_CapDoubleWidth	= 16506,
        PIDXFptr_CapDuplicateReceipt	= 16507,
        PIDXFptr_CapFixedOutput	= 16508,
        PIDXFptr_CapHasVatTable	= 16509,
        PIDXFptr_CapIndependentHeader	= 16510,
        PIDXFptr_CapItemList	= 16511,
        PIDXFptr_CapJrnEmptySensor	= 16512,
        PIDXFptr_CapJrnNearEndSensor	= 16513,
        PIDXFptr_CapJrnPresent	= 16514,
        PIDXFptr_CapNonFiscalMode	= 16515,
        PIDXFptr_CapOrderAdjustmentFirst	= 16516,
        PIDXFptr_CapPercentAdjustment	= 16517,
        PIDXFptr_CapPositiveAdjustment	= 16518,
        PIDXFptr_CapPowerLossReport	= 16519,
        PIDXFptr_CapPredefinedPaymentLines	= 16520,
        PIDXFptr_CapReceiptNotPaid	= 16521,
        PIDXFptr_CapRecEmptySensor	= 16522,
        PIDXFptr_CapRecNearEndSensor	= 16523,
        PIDXFptr_CapRecPresent	= 16524,
        PIDXFptr_CapRemainingFiscalMemory	= 16525,
        PIDXFptr_CapReservedWord	= 16526,
        PIDXFptr_CapSetHeader	= 16527,
        PIDXFptr_CapSetPOSID	= 16528,
        PIDXFptr_CapSetStoreFiscalID	= 16529,
        PIDXFptr_CapSetTrailer	= 16530,
        PIDXFptr_CapSetVatTable	= 16531,
        PIDXFptr_CapSlpEmptySensor	= 16532,
        PIDXFptr_CapSlpFiscalDocument	= 16533,
        PIDXFptr_CapSlpFullSlip	= 16534,
        PIDXFptr_CapSlpNearEndSensor	= 16535,
        PIDXFptr_CapSlpPresent	= 16536,
        PIDXFptr_CapSlpValidation	= 16537,
        PIDXFptr_CapSubAmountAdjustment	= 16538,
        PIDXFptr_CapSubPercentAdjustment	= 16539,
        PIDXFptr_CapSubtotal	= 16540,
        PIDXFptr_CapTrainingMode	= 16541,
        PIDXFptr_CapValidateJournal	= 16542,
        PIDXFptr_CapXReport	= 16543,
        PIDXFptr_CapAdditionalHeader	= 16544,
        PIDXFptr_CapAdditionalTrailer	= 16545,
        PIDXFptr_CapChangeDue	= 16546,
        PIDXFptr_CapEmptyReceiptIsVoidable	= 16547,
        PIDXFptr_CapFiscalReceiptStation	= 16548,
        PIDXFptr_CapFiscalReceiptType	= 16549,
        PIDXFptr_CapMultiContractor	= 16550,
        PIDXFptr_CapOnlyVoidLastItem	= 16551,
        PIDXFptr_CapPackageAdjustment	= 16552,
        PIDXFptr_CapPostPreLine	= 16553,
        PIDXFptr_CapSetCurrency	= 16554,
        PIDXFptr_CapTotalizerType	= 16555,
        PIDXFptr_CapPositiveSubtotalAdjustment	= 16556,
        PIDXFptr_ErrorString	= 16001,
        PIDXFptr_PredefinedPaymentLines	= 116002,
        PIDXFptr_ReservedWord	= 116003,
        PIDXFptr_AdditionalHeader	= 116004,
        PIDXFptr_AdditionalTrailer	= 116005,
        PIDXFptr_ChangeDue	= 116006,
        PIDXFptr_PostLine	= 116007,
        PIDXFptr_PreLine	= 116008
    } 	OPOSFiscalPrinterInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0016
    {
        PIDXGate_GateStatus	= 33001,
        PIDXGate_CapGateStatus	= 33501
    } 	OPOSGateInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0017
    {
        PIDXImg_AimMode	= 30001,
        PIDXImg_BitsPerPixel	= 30002,
        PIDXImg_FrameType	= 30003,
        PIDXImg_IlluminateMode	= 30004,
        PIDXImg_ImageHeight	= 30005,
        PIDXImg_ImageLength	= 30006,
        PIDXImg_ImageMode	= 30007,
        PIDXImg_ImageQuality	= 30008,
        PIDXImg_ImageType	= 30009,
        PIDXImg_ImageWidth	= 30010,
        PIDXImg_VideoCount	= 30011,
        PIDXImg_VideoRate	= 30012,
        PIDXImg_CapAim	= 30501,
        PIDXImg_CapDecodeData	= 30502,
        PIDXImg_CapHostTriggered	= 30503,
        PIDXImg_CapIlluminate	= 30504,
        PIDXImg_CapImageData	= 30505,
        PIDXImg_CapImageQuality	= 30506,
        PIDXImg_CapVideoData	= 30507,
        PIDXImg_FrameData	= 130001
    } 	OPOSImageScannerInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0018
    {
        PIDXItem_DispenserStatus	= 34001,
        PIDXItem_MaxSlots	= 34002,
        PIDXItem_CapEmptySensor	= 34501,
        PIDXItem_CapIndividualSlotStatus	= 34502,
        PIDXItem_CapJamSensor	= 34503,
        PIDXItem_CapNearEmptySensor	= 34504
    } 	OPOSItemDispenserInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0019
    {
        PIDXLock_KeyPosition	= 4001,
        PIDXLock_PositionCount	= 4002,
        PIDXLock_CapKeylockType	= 4501,
        PIDXLock_ElectronicKeyValue	= 104001
    } 	OPOSKeylockInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0020
    {
        PIDXLgt_MaxLights	= 35001,
        PIDXLgt_CapAlarm	= 35501,
        PIDXLgt_CapBlink	= 35502,
        PIDXLgt_CapColor	= 35503
    } 	OPOSLightsInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0021
    {
        PIDXDisp_CharacterSet	= 5001,
        PIDXDisp_Columns	= 5002,
        PIDXDisp_CurrentWindow	= 5003,
        PIDXDisp_CursorColumn	= 5004,
        PIDXDisp_CursorRow	= 5005,
        PIDXDisp_CursorUpdate	= 5006,
        PIDXDisp_DeviceBrightness	= 5007,
        PIDXDisp_DeviceColumns	= 5008,
        PIDXDisp_DeviceDescriptors	= 5009,
        PIDXDisp_DeviceRows	= 5010,
        PIDXDisp_DeviceWindows	= 5011,
        PIDXDisp_InterCharacterWait	= 5012,
        PIDXDisp_MarqueeRepeatWait	= 5013,
        PIDXDisp_MarqueeType	= 5014,
        PIDXDisp_MarqueeUnitWait	= 5015,
        PIDXDisp_Rows	= 5016,
        PIDXDisp_MarqueeFormat	= 5017,
        PIDXDisp_BlinkRate	= 5018,
        PIDXDisp_CursorType	= 5019,
        PIDXDisp_GlyphHeight	= 5020,
        PIDXDisp_GlyphWidth	= 5021,
        PIDXDisp_MapCharacterSet	= 5022,
        PIDXDisp_MaximumX	= 5023,
        PIDXDisp_MaximumY	= 5024,
        PIDXDisp_ScreenMode	= 5025,
        PIDXDisp_CapBlink	= 5501,
        PIDXDisp_CapBrightness	= 5502,
        PIDXDisp_CapCharacterSet	= 5503,
        PIDXDisp_CapDescriptors	= 5504,
        PIDXDisp_CapHMarquee	= 5505,
        PIDXDisp_CapICharWait	= 5506,
        PIDXDisp_CapVMarquee	= 5507,
        PIDXDisp_CapBlinkRate	= 5508,
        PIDXDisp_CapCursorType	= 5509,
        PIDXDisp_CapCustomGlyph	= 5510,
        PIDXDisp_CapReadBack	= 5511,
        PIDXDisp_CapReverse	= 5512,
        PIDXDisp_CapBitmap	= 5513,
        PIDXDisp_CapMapCharacterSet	= 5514,
        PIDXDisp_CapScreenMode	= 5515,
        PIDXDisp_CharacterSetList	= 105001,
        PIDXDisp_CustomGlyphList	= 105002,
        PIDXDisp_ScreenModeList	= 105003
    } 	OPOSLineDisplayInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0022
    {
        PIDXMicr_CheckType	= 6001,
        PIDXMicr_CountryCode	= 6002,
        PIDXMicr_CapValidationDevice	= 6501,
        PIDXMicr_AccountNumber	= 106001,
        PIDXMicr_Amount	= 106002,
        PIDXMicr_BankNumber	= 106003,
        PIDXMicr_EPC	= 106004,
        PIDXMicr_RawData	= 106005,
        PIDXMicr_SerialNumber	= 106006,
        PIDXMicr_TransitNumber	= 106007
    } 	OPOSMICRInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0023
    {
        PIDXMotion_Timeout	= 23001,
        PIDXMotion_Motion	= 23002
    } 	OPOSMotionSensorInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0024
    {
        PIDXMsr_DecodeData	= 7001,
        PIDXMsr_ParseDecodeData	= 7002,
        PIDXMsr_TracksToRead	= 7003,
        PIDXMsr_ParseDecodedData	= 7002,
        PIDXMsr_ErrorReportingType	= 7004,
        PIDXMsr_TransmitSentinels	= 7005,
        PIDXMsr_EncodingMaxLength	= 7006,
        PIDXMsr_TracksToWrite	= 7007,
        PIDXMsr_CardAuthenticationDataLength	= 7008,
        PIDXMsr_DataEncryptionAlgorithm	= 7009,
        PIDXMsr_DeviceAuthenticated	= 7010,
        PIDXMsr_DeviceAuthenticationProtocol	= 7011,
        PIDXMsr_Track1EncryptedDataLength	= 7012,
        PIDXMsr_Track2EncryptedDataLength	= 7013,
        PIDXMsr_Track3EncryptedDataLength	= 7014,
        PIDXMsr_Track4EncryptedDataLength	= 7015,
        PIDXMsr_CapISO	= 7501,
        PIDXMsr_CapJISOne	= 7502,
        PIDXMsr_CapJISTwo	= 7503,
        PIDXMsr_CapTransmitSentinels	= 7504,
        PIDXMsr_CapWritableTracks	= 7505,
        PIDXMsr_CapDataEncryption	= 7506,
        PIDXMsr_CapDeviceAuthentication	= 7507,
        PIDXMsr_CapTrackDataMasking	= 7508,
        PIDXMsr_AccountNumber	= 107001,
        PIDXMsr_ExpirationDate	= 107002,
        PIDXMsr_FirstName	= 107003,
        PIDXMsr_MiddleInitial	= 107004,
        PIDXMsr_ServiceCode	= 107005,
        PIDXMsr_Suffix	= 107006,
        PIDXMsr_Surname	= 107007,
        PIDXMsr_Title	= 107008,
        PIDXMsr_Track1Data	= 107009,
        PIDXMsr_Track1DiscretionaryData	= 107010,
        PIDXMsr_Track2Data	= 107011,
        PIDXMsr_Track2DiscretionaryData	= 107012,
        PIDXMsr_Track3Data	= 107013,
        PIDXMsr_Track4Data	= 107014,
        PIDXMsr_AdditionalSecurityInformation	= 107015,
        PIDXMsr_CapCardAuthentication	= 107016,
        PIDXMsr_CardAuthenticationData	= 107017,
        PIDXMsr_CardPropertyList	= 107018,
        PIDXMsr_CardType	= 107019,
        PIDXMsr_CardTypeList	= 107020,
        PIDXMsr_Track1EncryptedData	= 107021,
        PIDXMsr_Track2EncryptedData	= 107022,
        PIDXMsr_Track3EncryptedData	= 107023,
        PIDXMsr_Track4EncryptedData	= 107024,
        PIDXMsr_WriteCardType	= 107025
    } 	OPOSMSRInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0025
    {
        PIDXPpad_MaximumPINLength	= 17001,
        PIDXPpad_MinimumPINLength	= 17002,
        PIDXPpad_PINEntryEnabled	= 17003,
        PIDXPpad_Prompt	= 17004,
        PIDXPpad_PromptLanguage	= 17005,
        PIDXPpad_TransactionType	= 17006,
        PIDXPpad_CapDisplay	= 17501,
        PIDXPpad_CapKeyboard	= 17502,
        PIDXPpad_CapLanguage	= 17503,
        PIDXPpad_CapMACCalculation	= 17504,
        PIDXPpad_CapTone	= 17505,
        PIDXPpad_AccountNumber	= 117001,
        PIDXPpad_AdditionalSecurityInformation	= 117002,
        PIDXPpad_AvailableLanguagesList	= 117003,
        PIDXPpad_AvailablePromptsList	= 117005,
        PIDXPpad_EncryptedPIN	= 117006,
        PIDXPpad_MerchantID	= 117007,
        PIDXPpad_TerminalID	= 117008,
        PIDXPpad_Track1Data	= 117009,
        PIDXPpad_Track2Data	= 117010,
        PIDXPpad_Track3Data	= 117011,
        PIDXPpad_Track4Data	= 117012
    } 	OPOSPINPadInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0026
    {
        PIDXPcrw_CardState	= 20001,
        PIDXPcrw_CharacterSet	= 20002,
        PIDXPcrw_LineChars	= 20003,
        PIDXPcrw_LineHeight	= 20004,
        PIDXPcrw_LineSpacing	= 20005,
        PIDXPcrw_LineWidth	= 20006,
        PIDXPcrw_MapMode	= 20007,
        PIDXPcrw_MaxLine	= 20008,
        PIDXPcrw_PrintHeight	= 20009,
        PIDXPcrw_ReadState1	= 20010,
        PIDXPcrw_ReadState2	= 20011,
        PIDXPcrw_RecvLength1	= 20012,
        PIDXPcrw_RecvLength2	= 20013,
        PIDXPcrw_SidewaysMaxChars	= 20014,
        PIDXPcrw_SidewaysMaxLines	= 20015,
        PIDXPcrw_TracksToRead	= 20016,
        PIDXPcrw_TracksToWrite	= 20017,
        PIDXPcrw_WriteState1	= 20018,
        PIDXPcrw_WriteState2	= 20019,
        PIDXPcrw_MapCharacterSet	= 20020,
        PIDXPcrw_CapBold	= 20501,
        PIDXPcrw_CapCardEntranceSensor	= 20502,
        PIDXPcrw_CapCharacterSet	= 20503,
        PIDXPcrw_CapCleanCard	= 20504,
        PIDXPcrw_CapClearPrint	= 20505,
        PIDXPcrw_CapDhigh	= 20506,
        PIDXPcrw_CapDwide	= 20507,
        PIDXPcrw_CapDwideDhigh	= 20508,
        PIDXPcrw_CapItalic	= 20509,
        PIDXPcrw_CapLeft90	= 20510,
        PIDXPcrw_CapPrint	= 20511,
        PIDXPcrw_CapPrintMode	= 20512,
        PIDXPcrw_CapRight90	= 20513,
        PIDXPcrw_CapRotate180	= 20514,
        PIDXPcrw_CapTracksToRead	= 20515,
        PIDXPcrw_CapTracksToWrite	= 20516,
        PIDXPcrw_CapMapCharacterSet	= 20517,
        PIDXPcrw_CharacterSetList	= 120001,
        PIDXPcrw_FontTypeFaceList	= 120002,
        PIDXPcrw_LineCharsList	= 120003,
        PIDXPcrw_Track1Data	= 120004,
        PIDXPcrw_Track2Data	= 120005,
        PIDXPcrw_Track3Data	= 120006,
        PIDXPcrw_Track4Data	= 120007,
        PIDXPcrw_Track5Data	= 120008,
        PIDXPcrw_Track6Data	= 120009,
        PIDXPcrw_Write1Data	= 120010,
        PIDXPcrw_Write2Data	= 120011,
        PIDXPcrw_Write3Data	= 120012,
        PIDXPcrw_Write4Data	= 120013,
        PIDXPcrw_Write5Data	= 120014,
        PIDXPcrw_Write6Data	= 120015
    } 	OPOSPointCardRWInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0027
    {
        PIDXKbd_POSKeyData	= 12001,
        PIDXKbd_EventTypes	= 12002,
        PIDXKbd_POSKeyEventType	= 12003,
        PIDXKbd_CapKeyUp	= 12501
    } 	OPOSPOSKeyboardInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0028
    {
        PIDXPwr_EnforcedShutdownDelayTime	= 21001,
        PIDXPwr_PowerFailDelayTime	= 21002,
        PIDXPwr_QuickChargeMode	= 21003,
        PIDXPwr_QuickChargeTime	= 21004,
        PIDXPwr_UPSChargeState	= 21005,
        PIDXPwr_BatteryCapacityRemaining	= 21006,
        PIDXPwr_BatteryCriticallyLowThreshold	= 21007,
        PIDXPwr_BatteryLowThreshold	= 21008,
        PIDXPwr_PowerSource	= 21009,
        PIDXPwr_CapFanAlarm	= 21501,
        PIDXPwr_CapHeatAlarm	= 21502,
        PIDXPwr_CapQuickCharge	= 21503,
        PIDXPwr_CapShutdownPOS	= 21504,
        PIDXPwr_CapUPSChargeState	= 21505,
        PIDXPwr_CapBatteryCapacityRemaining	= 21506,
        PIDXPwr_CapRestartPOS	= 21507,
        PIDXPwr_CapStandbyPOS	= 21508,
        PIDXPwr_CapSuspendPOS	= 21509,
        PIDXPwr_CapVariableBatteryCriticallyLowThreshold	= 21510,
        PIDXPwr_CapVariableBatteryLowThreshold	= 21511
    } 	OPOSPOSPowerInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0029
    {
        PIDXPtr_AsyncMode	= 8001,
        PIDXPtr_CharacterSet	= 8002,
        PIDXPtr_CoverOpen	= 8003,
        PIDXPtr_ErrorStation	= 8004,
        PIDXPtr_FlagWhenIdle	= 8005,
        PIDXPtr_JrnEmpty	= 8006,
        PIDXPtr_JrnLetterQuality	= 8007,
        PIDXPtr_JrnLineChars	= 8008,
        PIDXPtr_JrnLineHeight	= 8009,
        PIDXPtr_JrnLineSpacing	= 8010,
        PIDXPtr_JrnLineWidth	= 8011,
        PIDXPtr_JrnNearEnd	= 8012,
        PIDXPtr_MapMode	= 8013,
        PIDXPtr_RecEmpty	= 8014,
        PIDXPtr_RecLetterQuality	= 8015,
        PIDXPtr_RecLineChars	= 8016,
        PIDXPtr_RecLineHeight	= 8017,
        PIDXPtr_RecLineSpacing	= 8018,
        PIDXPtr_RecLinesToPaperCut	= 8019,
        PIDXPtr_RecLineWidth	= 8020,
        PIDXPtr_RecNearEnd	= 8021,
        PIDXPtr_RecSidewaysMaxChars	= 8022,
        PIDXPtr_RecSidewaysMaxLines	= 8023,
        PIDXPtr_SlpEmpty	= 8024,
        PIDXPtr_SlpLetterQuality	= 8025,
        PIDXPtr_SlpLineChars	= 8026,
        PIDXPtr_SlpLineHeight	= 8027,
        PIDXPtr_SlpLinesNearEndToEnd	= 8028,
        PIDXPtr_SlpLineSpacing	= 8029,
        PIDXPtr_SlpLineWidth	= 8030,
        PIDXPtr_SlpMaxLines	= 8031,
        PIDXPtr_SlpNearEnd	= 8032,
        PIDXPtr_SlpSidewaysMaxChars	= 8033,
        PIDXPtr_SlpSidewaysMaxLines	= 8034,
        PIDXPtr_ErrorLevel	= 8035,
        PIDXPtr_RotateSpecial	= 8036,
        PIDXPtr_CartridgeNotify	= 8037,
        PIDXPtr_JrnCartridgeState	= 8038,
        PIDXPtr_JrnCurrentCartridge	= 8039,
        PIDXPtr_RecCartridgeState	= 8040,
        PIDXPtr_RecCurrentCartridge	= 8041,
        PIDXPtr_SlpPrintSide	= 8042,
        PIDXPtr_SlpCartridgeState	= 8043,
        PIDXPtr_SlpCurrentCartridge	= 8044,
        PIDXPtr_MapCharacterSet	= 8045,
        PIDXPtr_PageModeDescriptor	= 8046,
        PIDXPtr_PageModeHorizontalPosition	= 8047,
        PIDXPtr_PageModePrintDirection	= 8048,
        PIDXPtr_PageModeStation	= 8049,
        PIDXPtr_PageModeVerticalPosition	= 8050,
        PIDXPtr_CapConcurrentJrnRec	= 8501,
        PIDXPtr_CapConcurrentJrnSlp	= 8502,
        PIDXPtr_CapConcurrentRecSlp	= 8503,
        PIDXPtr_CapCoverSensor	= 8504,
        PIDXPtr_CapJrn2Color	= 8505,
        PIDXPtr_CapJrnBold	= 8506,
        PIDXPtr_CapJrnDhigh	= 8507,
        PIDXPtr_CapJrnDwide	= 8508,
        PIDXPtr_CapJrnDwideDhigh	= 8509,
        PIDXPtr_CapJrnEmptySensor	= 8510,
        PIDXPtr_CapJrnItalic	= 8511,
        PIDXPtr_CapJrnNearEndSensor	= 8512,
        PIDXPtr_CapJrnPresent	= 8513,
        PIDXPtr_CapJrnUnderline	= 8514,
        PIDXPtr_CapRec2Color	= 8515,
        PIDXPtr_CapRecBarCode	= 8516,
        PIDXPtr_CapRecBitmap	= 8517,
        PIDXPtr_CapRecBold	= 8518,
        PIDXPtr_CapRecDhigh	= 8519,
        PIDXPtr_CapRecDwide	= 8520,
        PIDXPtr_CapRecDwideDhigh	= 8521,
        PIDXPtr_CapRecEmptySensor	= 8522,
        PIDXPtr_CapRecItalic	= 8523,
        PIDXPtr_CapRecLeft90	= 8524,
        PIDXPtr_CapRecNearEndSensor	= 8525,
        PIDXPtr_CapRecPapercut	= 8526,
        PIDXPtr_CapRecPresent	= 8527,
        PIDXPtr_CapRecRight90	= 8528,
        PIDXPtr_CapRecRotate180	= 8529,
        PIDXPtr_CapRecStamp	= 8530,
        PIDXPtr_CapRecUnderline	= 8531,
        PIDXPtr_CapSlp2Color	= 8532,
        PIDXPtr_CapSlpBarCode	= 8533,
        PIDXPtr_CapSlpBitmap	= 8534,
        PIDXPtr_CapSlpBold	= 8535,
        PIDXPtr_CapSlpDhigh	= 8536,
        PIDXPtr_CapSlpDwide	= 8537,
        PIDXPtr_CapSlpDwideDhigh	= 8538,
        PIDXPtr_CapSlpEmptySensor	= 8539,
        PIDXPtr_CapSlpFullslip	= 8540,
        PIDXPtr_CapSlpItalic	= 8541,
        PIDXPtr_CapSlpLeft90	= 8542,
        PIDXPtr_CapSlpNearEndSensor	= 8543,
        PIDXPtr_CapSlpPresent	= 8544,
        PIDXPtr_CapSlpRight90	= 8545,
        PIDXPtr_CapSlpRotate180	= 8546,
        PIDXPtr_CapSlpUnderline	= 8547,
        PIDXPtr_CapCharacterSet	= 8548,
        PIDXPtr_CapTransaction	= 8549,
        PIDXPtr_CapJrnCartridgeSensor	= 8550,
        PIDXPtr_CapJrnColor	= 8551,
        PIDXPtr_CapRecCartridgeSensor	= 8552,
        PIDXPtr_CapRecColor	= 8553,
        PIDXPtr_CapRecMarkFeed	= 8554,
        PIDXPtr_CapSlpBothSidesPrint	= 8555,
        PIDXPtr_CapSlpCartridgeSensor	= 8556,
        PIDXPtr_CapSlpColor	= 8557,
        PIDXPtr_CapMapCharacterSet	= 8558,
        PIDXPtr_CapConcurrentPageMode	= 8559,
        PIDXPtr_CapRecPageMode	= 8560,
        PIDXPtr_CapSlpPageMode	= 8561,
        PIDXPtr_CapRecRuledLine	= 8562,
        PIDXPtr_CapSlpRuledLine	= 8563,
        PIDXPtr_CharacterSetList	= 108001,
        PIDXPtr_JrnLineCharsList	= 108002,
        PIDXPtr_RecLineCharsList	= 108003,
        PIDXPtr_SlpLineCharsList	= 108004,
        PIDXPtr_ErrorString	= 108005,
        PIDXPtr_FontTypefaceList	= 108006,
        PIDXPtr_RecBarCodeRotationList	= 108007,
        PIDXPtr_SlpBarCodeRotationList	= 108008,
        PIDXPtr_RecBitmapRotationList	= 108009,
        PIDXPtr_SlpBitmapRotationList	= 108010,
        PIDXPtr_PageModeArea	= 108011,
        PIDXPtr_PageModePrintArea	= 108012
    } 	OPOSPOSPrinterInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0030
    {
        PIDXRod_AsyncMode	= 18001,
        PIDXRod_AutoToneDuration	= 18002,
        PIDXRod_AutoToneFrequency	= 18003,
        PIDXRod_CharacterSet	= 18004,
        PIDXRod_Clocks	= 18005,
        PIDXRod_CurrentUnitID	= 18006,
        PIDXRod_ErrorUnits	= 18007,
        PIDXRod_EventType	= 18008,
        PIDXRod_EventUnitID	= 18009,
        PIDXRod_EventUnits	= 18010,
        PIDXRod_SystemClocks	= 18011,
        PIDXRod_SystemVideoSaveBuffers	= 18012,
        PIDXRod_Timeout	= 18013,
        PIDXRod_UnitsOnline	= 18014,
        PIDXRod_VideoDataCount	= 18015,
        PIDXRod_VideoMode	= 18016,
        PIDXRod_VideoSaveBuffers	= 18017,
        PIDXRod_MapCharacterSet	= 18018,
        PIDXRod_CapSelectCharacterSet	= 18501,
        PIDXRod_CapTone	= 18502,
        PIDXRod_CapTouch	= 18503,
        PIDXRod_CapTransaction	= 18504,
        PIDXRod_CapMapCharacterSet	= 18505,
        PIDXRod_CharacterSetList	= 118001,
        PIDXRod_ErrorString	= 118002,
        PIDXRod_EventString	= 118003,
        PIDXRod_VideoModesList	= 118004
    } 	OPOSRemoteOrderDisplayInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0031
    {
        PIDXRfid_ContinuousReadMode	= 36001,
        PIDXRfid_CurrentTagProtocol	= 36002,
        PIDXRfid_ProtocolMask	= 36003,
        PIDXRfid_ReadTimerInterval	= 36004,
        PIDXRfid_TagCount	= 36005,
        PIDXRfid_CapContinuousRead	= 36501,
        PIDXRfid_CapDisableTag	= 36502,
        PIDXRfid_CapLockTag	= 36503,
        PIDXRfid_CapMultipleProtocols	= 36504,
        PIDXRfid_CapReadTimer	= 36505,
        PIDXRfid_CapWriteTag	= 36506,
        PIDXRfid_CurrentTagID	= 136001,
        PIDXRfid_CurrentTagUserData	= 136002
    } 	OPOSRFIDScannerInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0032
    {
        PIDXScal_MaximumWeight	= 9001,
        PIDXScal_WeightUnits	= 9002,
        PIDXScal_WeightUnit	= 9002,
        PIDXScal_AsyncMode	= 9003,
        PIDXScal_MaxDisplayTextChars	= 9004,
        PIDXScal_TareWeight	= 9005,
        PIDXScal_ScaleLiveWeight	= 9006,
        PIDXScal_StatusNotify	= 9007,
        PIDXScal_ZeroValid	= 9008,
        PIDXScal_MinimumWeight	= 9009,
        PIDXScal_CapDisplay	= 9501,
        PIDXScal_CapDisplayText	= 9502,
        PIDXScal_CapPriceCalculating	= 9503,
        PIDXScal_CapTareWeight	= 9504,
        PIDXScal_CapZeroScale	= 9505,
        PIDXScal_CapStatusUpdate	= 9506,
        PIDXScal_CapFreezeValue	= 9507,
        PIDXScal_CapReadLiveWeightWithTare	= 9508,
        PIDXScal_CapSetPriceCalculationMode	= 9509,
        PIDXScal_CapSetUnitPriceWithWeightUnit	= 9510,
        PIDXScal_CapSpecialTare	= 9511,
        PIDXScal_CapTarePriority	= 9512
    } 	OPOSScaleInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0033
    {
        PIDXScan_DecodeData	= 10001,
        PIDXScan_ScanDataType	= 10002,
        PIDXScan_ScanData	= 110001,
        PIDXScan_ScanDataLabel	= 110002
    } 	OPOSScannerInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0034
    {
        PIDXSig_MaximumX	= 11001,
        PIDXSig_MaximumY	= 11002,
        PIDXSig_TotalPoints	= 11003,
        PIDXSig_RealTimeDataEnabled	= 11004,
        PIDXSig_CapDisplay	= 11501,
        PIDXSig_CapUserTerminated	= 11502,
        PIDXSig_CapRealTimeData	= 11503,
        PIDXSig_RawData	= 111001,
        PIDXSig_PointArray	= 111002
    } 	OPOSSigCapInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0035
    {
        PIDXScrw_InterfaceMode	= 24001,
        PIDXScrw_IsoEmvMode	= 24002,
        PIDXScrw_SCPresentSensor	= 24003,
        PIDXScrw_SCSlot	= 24004,
        PIDXScrw_TransactionInProgress	= 24005,
        PIDXScrw_TransmissionProtocol	= 24006,
        PIDXScrw_CapCardErrorDetection	= 24501,
        PIDXScrw_CapInterfaceMode	= 24502,
        PIDXScrw_CapIsoEmvMode	= 24503,
        PIDXScrw_CapSCPresentSensor	= 24504,
        PIDXScrw_CapSCSlots	= 24505,
        PIDXScrw_CapTransmissionProtocol	= 24506
    } 	OPOSSmartCardRWInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0036
    {
        PIDXTone_AsyncMode	= 14001,
        PIDXTone_Tone1Pitch	= 14002,
        PIDXTone_Tone1Volume	= 14003,
        PIDXTone_Tone1Duration	= 14004,
        PIDXTone_Tone2Pitch	= 14005,
        PIDXTone_Tone2Volume	= 14006,
        PIDXTone_Tone2Duration	= 14007,
        PIDXTone_InterToneWait	= 14008,
        PIDXTone_MelodyType	= 14009,
        PIDXTone_MelodyVolume	= 14010,
        PIDXTone_CapPitch	= 14501,
        PIDXTone_CapVolume	= 14502,
        PIDXTone_CapMelody	= 14503
    } 	OPOSToneIndicatorInternals;

typedef /* [public][helpstring] */ 
enum __MIDL___MIDL_itf_OposInternals_0000_0000_0037
    {
        PIDXTot_FreeData	= 3001,
        PIDXTot_NumberOfFiles	= 3002,
        PIDXTot_TotalsSize	= 3003,
        PIDXTot_TransactionInProgress	= 3004,
        PIDXTot_CapErrorDetection	= 3501,
        PIDXTot_CapSingleFile	= 3502,
        PIDXTot_CapTransactions	= 3503
    } 	OPOSTotalsInternals;


EXTERN_C const IID LIBID_OPOSINTERNALSLib;
#endif /* __OPOSINTERNALSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


