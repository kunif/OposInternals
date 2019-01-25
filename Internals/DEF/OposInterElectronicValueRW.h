//*************************************************************************
//** OPOS ElectronicValueRW Internals
//
//   Electronic Value Reader Writer header file for OPOS Controls and Service Objects.
//
//*************************************************************************

typedef [helpstring("OPOS ElectronicValueRW Internals")]
enum
{
    PIDXEvrw_AsyncMode                       = 32001,
    PIDXEvrw_DetectionControl                = 32002,
    PIDXEvrw_DetectionStatus                 = 32003,
    PIDXEvrw_LogStatus                       = 32004,
    PIDXEvrw_SequenceNumber                  = 32005,
    PIDXEvrw_PINEntry                        = 32006,
    PIDXEvrw_TrainingModeState               = 32007,
    PIDXEvrw_ServiceType                     = 32008,

    PIDXEvrw_CapActivateService              = 32501,
    PIDXEvrw_CapAddValue                     = 32502,
    PIDXEvrw_CapCancelValue                  = 32503,
    PIDXEvrw_CapCardSensor                   = 32504,
    PIDXEvrw_CapDetectionControl             = 32505,
    PIDXEvrw_CapElectronicMoney              = 32506,
    PIDXEvrw_CapEnumerateCardServices        = 32507,
    PIDXEvrw_CapIndirectTransactionLog       = 32508,
    PIDXEvrw_CapLockTerminal                 = 32509,
    PIDXEvrw_CapLogStatus                    = 32510,
    PIDXEvrw_CapMediumID                     = 32511,
    PIDXEvrw_CapPoint                        = 32512,
    PIDXEvrw_CapSubtractValue                = 32513,
    PIDXEvrw_CapTransaction                  = 32514,
    PIDXEvrw_CapTransactionLog               = 32515,
    PIDXEvrw_CapUnlockTerminal               = 32516,
    PIDXEvrw_CapUpdateKey                    = 32517,
    PIDXEvrw_CapVoucher                      = 32518,
    PIDXEvrw_CapWriteValue                   = 32519,
    PIDXEvrw_CapPINDevice                    = 32520,
    PIDXEvrw_CapTrainingMode                 = 32521,
    PIDXEvrw_CapMembershipCertificate        = 32522,

    PIDXEvrw_AccountNumber                   = 1032001,
    PIDXEvrw_AdditionalSecurityInformation   = 1032002,
    PIDXEvrw_ApprovalCode                    = 1032003,
    PIDXEvrw_CardServiceList                 = 1032004,
    PIDXEvrw_CurrentService                  = 1032005,
    PIDXEvrw_ExpirationDate                  = 1032006,
    PIDXEvrw_LastUsedDate                    = 1032007,
    PIDXEvrw_MediumID                        = 1032008,
    PIDXEvrw_ReaderWriterServiceList         = 1032009,
    PIDXEvrw_TransactionLog                  = 1032010,
    PIDXEvrw_VoucherID                       = 1032011,
    PIDXEvrw_VoucherIDList                   = 1032012
} OPOSElectronicValueRWInternals;
