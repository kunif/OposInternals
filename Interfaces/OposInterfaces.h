

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0620 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for OposInterfaces.idl:
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


#ifndef __OposInterfaces_h__
#define __OposInterfaces_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IOPOSCO_FWD_DEFINED__
#define __IOPOSCO_FWD_DEFINED__
typedef interface IOPOSCO IOPOSCO;

#endif 	/* __IOPOSCO_FWD_DEFINED__ */


#ifndef __IOPOSBeltSO_FWD_DEFINED__
#define __IOPOSBeltSO_FWD_DEFINED__
typedef interface IOPOSBeltSO IOPOSBeltSO;

#endif 	/* __IOPOSBeltSO_FWD_DEFINED__ */


#ifndef __IOPOSBillAcceptorSO_FWD_DEFINED__
#define __IOPOSBillAcceptorSO_FWD_DEFINED__
typedef interface IOPOSBillAcceptorSO IOPOSBillAcceptorSO;

#endif 	/* __IOPOSBillAcceptorSO_FWD_DEFINED__ */


#ifndef __IOPOSBillDispenserSO_FWD_DEFINED__
#define __IOPOSBillDispenserSO_FWD_DEFINED__
typedef interface IOPOSBillDispenserSO IOPOSBillDispenserSO;

#endif 	/* __IOPOSBillDispenserSO_FWD_DEFINED__ */


#ifndef __IOPOSBiometricsSO_FWD_DEFINED__
#define __IOPOSBiometricsSO_FWD_DEFINED__
typedef interface IOPOSBiometricsSO IOPOSBiometricsSO;

#endif 	/* __IOPOSBiometricsSO_FWD_DEFINED__ */


#ifndef __IOPOSBumpBarSO_FWD_DEFINED__
#define __IOPOSBumpBarSO_FWD_DEFINED__
typedef interface IOPOSBumpBarSO IOPOSBumpBarSO;

#endif 	/* __IOPOSBumpBarSO_FWD_DEFINED__ */


#ifndef __IOPOSCashChangerSO_FWD_DEFINED__
#define __IOPOSCashChangerSO_FWD_DEFINED__
typedef interface IOPOSCashChangerSO IOPOSCashChangerSO;

#endif 	/* __IOPOSCashChangerSO_FWD_DEFINED__ */


#ifndef __IOPOSCashDrawerSO_FWD_DEFINED__
#define __IOPOSCashDrawerSO_FWD_DEFINED__
typedef interface IOPOSCashDrawerSO IOPOSCashDrawerSO;

#endif 	/* __IOPOSCashDrawerSO_FWD_DEFINED__ */


#ifndef __IOPOSCATSO_FWD_DEFINED__
#define __IOPOSCATSO_FWD_DEFINED__
typedef interface IOPOSCATSO IOPOSCATSO;

#endif 	/* __IOPOSCATSO_FWD_DEFINED__ */


#ifndef __IOPOSCheckScannerSO_FWD_DEFINED__
#define __IOPOSCheckScannerSO_FWD_DEFINED__
typedef interface IOPOSCheckScannerSO IOPOSCheckScannerSO;

#endif 	/* __IOPOSCheckScannerSO_FWD_DEFINED__ */


#ifndef __IOPOSCoinAcceptorSO_FWD_DEFINED__
#define __IOPOSCoinAcceptorSO_FWD_DEFINED__
typedef interface IOPOSCoinAcceptorSO IOPOSCoinAcceptorSO;

#endif 	/* __IOPOSCoinAcceptorSO_FWD_DEFINED__ */


#ifndef __IOPOSCoinDispenserSO_FWD_DEFINED__
#define __IOPOSCoinDispenserSO_FWD_DEFINED__
typedef interface IOPOSCoinDispenserSO IOPOSCoinDispenserSO;

#endif 	/* __IOPOSCoinDispenserSO_FWD_DEFINED__ */


#ifndef __IOPOSElectronicJournalSO_FWD_DEFINED__
#define __IOPOSElectronicJournalSO_FWD_DEFINED__
typedef interface IOPOSElectronicJournalSO IOPOSElectronicJournalSO;

#endif 	/* __IOPOSElectronicJournalSO_FWD_DEFINED__ */


#ifndef __IOPOSElectronicValueRWSO_FWD_DEFINED__
#define __IOPOSElectronicValueRWSO_FWD_DEFINED__
typedef interface IOPOSElectronicValueRWSO IOPOSElectronicValueRWSO;

#endif 	/* __IOPOSElectronicValueRWSO_FWD_DEFINED__ */


#ifndef __IOPOSFiscalPrinterSO_FWD_DEFINED__
#define __IOPOSFiscalPrinterSO_FWD_DEFINED__
typedef interface IOPOSFiscalPrinterSO IOPOSFiscalPrinterSO;

#endif 	/* __IOPOSFiscalPrinterSO_FWD_DEFINED__ */


#ifndef __IOPOSGateSO_FWD_DEFINED__
#define __IOPOSGateSO_FWD_DEFINED__
typedef interface IOPOSGateSO IOPOSGateSO;

#endif 	/* __IOPOSGateSO_FWD_DEFINED__ */


#ifndef __IOPOSImageScannerSO_FWD_DEFINED__
#define __IOPOSImageScannerSO_FWD_DEFINED__
typedef interface IOPOSImageScannerSO IOPOSImageScannerSO;

#endif 	/* __IOPOSImageScannerSO_FWD_DEFINED__ */


#ifndef __IOPOSItemDispenserSO_FWD_DEFINED__
#define __IOPOSItemDispenserSO_FWD_DEFINED__
typedef interface IOPOSItemDispenserSO IOPOSItemDispenserSO;

#endif 	/* __IOPOSItemDispenserSO_FWD_DEFINED__ */


#ifndef __IOPOSKeylockSO_FWD_DEFINED__
#define __IOPOSKeylockSO_FWD_DEFINED__
typedef interface IOPOSKeylockSO IOPOSKeylockSO;

#endif 	/* __IOPOSKeylockSO_FWD_DEFINED__ */


#ifndef __IOPOSLightsSO_FWD_DEFINED__
#define __IOPOSLightsSO_FWD_DEFINED__
typedef interface IOPOSLightsSO IOPOSLightsSO;

#endif 	/* __IOPOSLightsSO_FWD_DEFINED__ */


#ifndef __IOPOSLineDisplaySO_FWD_DEFINED__
#define __IOPOSLineDisplaySO_FWD_DEFINED__
typedef interface IOPOSLineDisplaySO IOPOSLineDisplaySO;

#endif 	/* __IOPOSLineDisplaySO_FWD_DEFINED__ */


#ifndef __IOPOSMICRSO_FWD_DEFINED__
#define __IOPOSMICRSO_FWD_DEFINED__
typedef interface IOPOSMICRSO IOPOSMICRSO;

#endif 	/* __IOPOSMICRSO_FWD_DEFINED__ */


#ifndef __IOPOSMotionSensorSO_FWD_DEFINED__
#define __IOPOSMotionSensorSO_FWD_DEFINED__
typedef interface IOPOSMotionSensorSO IOPOSMotionSensorSO;

#endif 	/* __IOPOSMotionSensorSO_FWD_DEFINED__ */


#ifndef __IOPOSMSRSO_FWD_DEFINED__
#define __IOPOSMSRSO_FWD_DEFINED__
typedef interface IOPOSMSRSO IOPOSMSRSO;

#endif 	/* __IOPOSMSRSO_FWD_DEFINED__ */


#ifndef __IOPOSPINPadSO_FWD_DEFINED__
#define __IOPOSPINPadSO_FWD_DEFINED__
typedef interface IOPOSPINPadSO IOPOSPINPadSO;

#endif 	/* __IOPOSPINPadSO_FWD_DEFINED__ */


#ifndef __IOPOSPointCardRWSO_FWD_DEFINED__
#define __IOPOSPointCardRWSO_FWD_DEFINED__
typedef interface IOPOSPointCardRWSO IOPOSPointCardRWSO;

#endif 	/* __IOPOSPointCardRWSO_FWD_DEFINED__ */


#ifndef __IOPOSPOSKeyboardSO_FWD_DEFINED__
#define __IOPOSPOSKeyboardSO_FWD_DEFINED__
typedef interface IOPOSPOSKeyboardSO IOPOSPOSKeyboardSO;

#endif 	/* __IOPOSPOSKeyboardSO_FWD_DEFINED__ */


#ifndef __IOPOSPOSPowerSO_FWD_DEFINED__
#define __IOPOSPOSPowerSO_FWD_DEFINED__
typedef interface IOPOSPOSPowerSO IOPOSPOSPowerSO;

#endif 	/* __IOPOSPOSPowerSO_FWD_DEFINED__ */


#ifndef __IOPOSPOSPrinterSO_FWD_DEFINED__
#define __IOPOSPOSPrinterSO_FWD_DEFINED__
typedef interface IOPOSPOSPrinterSO IOPOSPOSPrinterSO;

#endif 	/* __IOPOSPOSPrinterSO_FWD_DEFINED__ */


#ifndef __IOPOSRemoteOrderDisplaySO_FWD_DEFINED__
#define __IOPOSRemoteOrderDisplaySO_FWD_DEFINED__
typedef interface IOPOSRemoteOrderDisplaySO IOPOSRemoteOrderDisplaySO;

#endif 	/* __IOPOSRemoteOrderDisplaySO_FWD_DEFINED__ */


#ifndef __IOPOSRFIDScannerSO_FWD_DEFINED__
#define __IOPOSRFIDScannerSO_FWD_DEFINED__
typedef interface IOPOSRFIDScannerSO IOPOSRFIDScannerSO;

#endif 	/* __IOPOSRFIDScannerSO_FWD_DEFINED__ */


#ifndef __IOPOSScaleSO_FWD_DEFINED__
#define __IOPOSScaleSO_FWD_DEFINED__
typedef interface IOPOSScaleSO IOPOSScaleSO;

#endif 	/* __IOPOSScaleSO_FWD_DEFINED__ */


#ifndef __IOPOSScannerSO_FWD_DEFINED__
#define __IOPOSScannerSO_FWD_DEFINED__
typedef interface IOPOSScannerSO IOPOSScannerSO;

#endif 	/* __IOPOSScannerSO_FWD_DEFINED__ */


#ifndef __IOPOSSignatureCaptureSO_FWD_DEFINED__
#define __IOPOSSignatureCaptureSO_FWD_DEFINED__
typedef interface IOPOSSignatureCaptureSO IOPOSSignatureCaptureSO;

#endif 	/* __IOPOSSignatureCaptureSO_FWD_DEFINED__ */


#ifndef __IOPOSSmartCardRWSO_FWD_DEFINED__
#define __IOPOSSmartCardRWSO_FWD_DEFINED__
typedef interface IOPOSSmartCardRWSO IOPOSSmartCardRWSO;

#endif 	/* __IOPOSSmartCardRWSO_FWD_DEFINED__ */


#ifndef __IOPOSToneIndicatorSO_FWD_DEFINED__
#define __IOPOSToneIndicatorSO_FWD_DEFINED__
typedef interface IOPOSToneIndicatorSO IOPOSToneIndicatorSO;

#endif 	/* __IOPOSToneIndicatorSO_FWD_DEFINED__ */


#ifndef __IOPOSHardTotalsSO_FWD_DEFINED__
#define __IOPOSHardTotalsSO_FWD_DEFINED__
typedef interface IOPOSHardTotalsSO IOPOSHardTotalsSO;

#endif 	/* __IOPOSHardTotalsSO_FWD_DEFINED__ */


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


EXTERN_C const IID LIBID_OPOSINTERNALSLib;

#ifndef __IOPOSCO_DISPINTERFACE_DEFINED__
#define __IOPOSCO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSCO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSCO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0000-B81E-11D2-AB74-0040054C3719")
    IOPOSCO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSCOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSCO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSCO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSCO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSCO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSCO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSCO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSCO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSCOVtbl;

    interface IOPOSCO
    {
        CONST_VTBL struct IOPOSCOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSCO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSCO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSCO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSCO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSCO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSCO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSCO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSCO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSBeltSO_DISPINTERFACE_DEFINED__
#define __IOPOSBeltSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSBeltSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSBeltSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0320-B81E-11D2-AB74-0040054C3719")
    IOPOSBeltSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSBeltSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSBeltSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSBeltSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSBeltSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSBeltSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSBeltSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSBeltSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSBeltSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSBeltSOVtbl;

    interface IOPOSBeltSO
    {
        CONST_VTBL struct IOPOSBeltSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSBeltSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSBeltSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSBeltSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSBeltSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSBeltSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSBeltSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSBeltSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSBeltSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSBillAcceptorSO_DISPINTERFACE_DEFINED__
#define __IOPOSBillAcceptorSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSBillAcceptorSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSBillAcceptorSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0280-B81E-11D2-AB74-0040054C3719")
    IOPOSBillAcceptorSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSBillAcceptorSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSBillAcceptorSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSBillAcceptorSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSBillAcceptorSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSBillAcceptorSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSBillAcceptorSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSBillAcceptorSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSBillAcceptorSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSBillAcceptorSOVtbl;

    interface IOPOSBillAcceptorSO
    {
        CONST_VTBL struct IOPOSBillAcceptorSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSBillAcceptorSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSBillAcceptorSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSBillAcceptorSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSBillAcceptorSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSBillAcceptorSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSBillAcceptorSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSBillAcceptorSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSBillAcceptorSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSBillDispenserSO_DISPINTERFACE_DEFINED__
#define __IOPOSBillDispenserSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSBillDispenserSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSBillDispenserSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0290-B81E-11D2-AB74-0040054C3719")
    IOPOSBillDispenserSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSBillDispenserSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSBillDispenserSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSBillDispenserSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSBillDispenserSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSBillDispenserSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSBillDispenserSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSBillDispenserSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSBillDispenserSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSBillDispenserSOVtbl;

    interface IOPOSBillDispenserSO
    {
        CONST_VTBL struct IOPOSBillDispenserSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSBillDispenserSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSBillDispenserSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSBillDispenserSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSBillDispenserSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSBillDispenserSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSBillDispenserSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSBillDispenserSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSBillDispenserSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSBiometricsSO_DISPINTERFACE_DEFINED__
#define __IOPOSBiometricsSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSBiometricsSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSBiometricsSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0260-B81E-11D2-AB74-0040054C3719")
    IOPOSBiometricsSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSBiometricsSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSBiometricsSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSBiometricsSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSBiometricsSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSBiometricsSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSBiometricsSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSBiometricsSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSBiometricsSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSBiometricsSOVtbl;

    interface IOPOSBiometricsSO
    {
        CONST_VTBL struct IOPOSBiometricsSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSBiometricsSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSBiometricsSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSBiometricsSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSBiometricsSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSBiometricsSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSBiometricsSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSBiometricsSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSBiometricsSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSBumpBarSO_DISPINTERFACE_DEFINED__
#define __IOPOSBumpBarSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSBumpBarSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSBumpBarSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0020-B81E-11D2-AB74-0040054C3719")
    IOPOSBumpBarSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSBumpBarSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSBumpBarSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSBumpBarSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSBumpBarSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSBumpBarSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSBumpBarSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSBumpBarSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSBumpBarSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSBumpBarSOVtbl;

    interface IOPOSBumpBarSO
    {
        CONST_VTBL struct IOPOSBumpBarSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSBumpBarSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSBumpBarSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSBumpBarSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSBumpBarSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSBumpBarSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSBumpBarSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSBumpBarSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSBumpBarSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSCashChangerSO_DISPINTERFACE_DEFINED__
#define __IOPOSCashChangerSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSCashChangerSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSCashChangerSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0030-B81E-11D2-AB74-0040054C3719")
    IOPOSCashChangerSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSCashChangerSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSCashChangerSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSCashChangerSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSCashChangerSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSCashChangerSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSCashChangerSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSCashChangerSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSCashChangerSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSCashChangerSOVtbl;

    interface IOPOSCashChangerSO
    {
        CONST_VTBL struct IOPOSCashChangerSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSCashChangerSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSCashChangerSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSCashChangerSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSCashChangerSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSCashChangerSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSCashChangerSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSCashChangerSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSCashChangerSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSCashDrawerSO_DISPINTERFACE_DEFINED__
#define __IOPOSCashDrawerSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSCashDrawerSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSCashDrawerSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0040-B81E-11D2-AB74-0040054C3719")
    IOPOSCashDrawerSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSCashDrawerSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSCashDrawerSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSCashDrawerSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSCashDrawerSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSCashDrawerSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSCashDrawerSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSCashDrawerSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSCashDrawerSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSCashDrawerSOVtbl;

    interface IOPOSCashDrawerSO
    {
        CONST_VTBL struct IOPOSCashDrawerSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSCashDrawerSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSCashDrawerSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSCashDrawerSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSCashDrawerSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSCashDrawerSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSCashDrawerSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSCashDrawerSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSCashDrawerSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSCATSO_DISPINTERFACE_DEFINED__
#define __IOPOSCATSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSCATSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSCATSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0050-B81E-11D2-AB74-0040054C3719")
    IOPOSCATSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSCATSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSCATSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSCATSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSCATSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSCATSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSCATSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSCATSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSCATSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSCATSOVtbl;

    interface IOPOSCATSO
    {
        CONST_VTBL struct IOPOSCATSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSCATSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSCATSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSCATSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSCATSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSCATSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSCATSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSCATSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSCATSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSCheckScannerSO_DISPINTERFACE_DEFINED__
#define __IOPOSCheckScannerSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSCheckScannerSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSCheckScannerSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0230-B81E-11D2-AB74-0040054C3719")
    IOPOSCheckScannerSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSCheckScannerSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSCheckScannerSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSCheckScannerSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSCheckScannerSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSCheckScannerSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSCheckScannerSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSCheckScannerSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSCheckScannerSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSCheckScannerSOVtbl;

    interface IOPOSCheckScannerSO
    {
        CONST_VTBL struct IOPOSCheckScannerSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSCheckScannerSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSCheckScannerSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSCheckScannerSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSCheckScannerSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSCheckScannerSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSCheckScannerSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSCheckScannerSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSCheckScannerSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSCoinAcceptorSO_DISPINTERFACE_DEFINED__
#define __IOPOSCoinAcceptorSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSCoinAcceptorSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSCoinAcceptorSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0300-B81E-11D2-AB74-0040054C3719")
    IOPOSCoinAcceptorSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSCoinAcceptorSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSCoinAcceptorSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSCoinAcceptorSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSCoinAcceptorSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSCoinAcceptorSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSCoinAcceptorSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSCoinAcceptorSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSCoinAcceptorSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSCoinAcceptorSOVtbl;

    interface IOPOSCoinAcceptorSO
    {
        CONST_VTBL struct IOPOSCoinAcceptorSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSCoinAcceptorSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSCoinAcceptorSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSCoinAcceptorSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSCoinAcceptorSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSCoinAcceptorSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSCoinAcceptorSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSCoinAcceptorSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSCoinAcceptorSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSCoinDispenserSO_DISPINTERFACE_DEFINED__
#define __IOPOSCoinDispenserSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSCoinDispenserSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSCoinDispenserSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0060-B81E-11D2-AB74-0040054C3719")
    IOPOSCoinDispenserSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSCoinDispenserSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSCoinDispenserSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSCoinDispenserSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSCoinDispenserSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSCoinDispenserSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSCoinDispenserSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSCoinDispenserSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSCoinDispenserSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSCoinDispenserSOVtbl;

    interface IOPOSCoinDispenserSO
    {
        CONST_VTBL struct IOPOSCoinDispenserSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSCoinDispenserSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSCoinDispenserSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSCoinDispenserSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSCoinDispenserSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSCoinDispenserSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSCoinDispenserSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSCoinDispenserSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSCoinDispenserSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSElectronicJournalSO_DISPINTERFACE_DEFINED__
#define __IOPOSElectronicJournalSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSElectronicJournalSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSElectronicJournalSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0270-B81E-11D2-AB74-0040054C3719")
    IOPOSElectronicJournalSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSElectronicJournalSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSElectronicJournalSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSElectronicJournalSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSElectronicJournalSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSElectronicJournalSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSElectronicJournalSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSElectronicJournalSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSElectronicJournalSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSElectronicJournalSOVtbl;

    interface IOPOSElectronicJournalSO
    {
        CONST_VTBL struct IOPOSElectronicJournalSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSElectronicJournalSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSElectronicJournalSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSElectronicJournalSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSElectronicJournalSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSElectronicJournalSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSElectronicJournalSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSElectronicJournalSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSElectronicJournalSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSElectronicValueRWSO_DISPINTERFACE_DEFINED__
#define __IOPOSElectronicValueRWSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSElectronicValueRWSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSElectronicValueRWSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0330-B81E-11D2-AB74-0040054C3719")
    IOPOSElectronicValueRWSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSElectronicValueRWSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSElectronicValueRWSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSElectronicValueRWSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSElectronicValueRWSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSElectronicValueRWSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSElectronicValueRWSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSElectronicValueRWSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSElectronicValueRWSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSElectronicValueRWSOVtbl;

    interface IOPOSElectronicValueRWSO
    {
        CONST_VTBL struct IOPOSElectronicValueRWSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSElectronicValueRWSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSElectronicValueRWSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSElectronicValueRWSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSElectronicValueRWSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSElectronicValueRWSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSElectronicValueRWSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSElectronicValueRWSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSElectronicValueRWSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSFiscalPrinterSO_DISPINTERFACE_DEFINED__
#define __IOPOSFiscalPrinterSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSFiscalPrinterSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSFiscalPrinterSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0070-B81E-11D2-AB74-0040054C3719")
    IOPOSFiscalPrinterSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSFiscalPrinterSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSFiscalPrinterSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSFiscalPrinterSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSFiscalPrinterSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSFiscalPrinterSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSFiscalPrinterSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSFiscalPrinterSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSFiscalPrinterSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSFiscalPrinterSOVtbl;

    interface IOPOSFiscalPrinterSO
    {
        CONST_VTBL struct IOPOSFiscalPrinterSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSFiscalPrinterSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSFiscalPrinterSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSFiscalPrinterSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSFiscalPrinterSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSFiscalPrinterSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSFiscalPrinterSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSFiscalPrinterSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSFiscalPrinterSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSGateSO_DISPINTERFACE_DEFINED__
#define __IOPOSGateSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSGateSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSGateSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0340-B81E-11D2-AB74-0040054C3719")
    IOPOSGateSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSGateSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSGateSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSGateSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSGateSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSGateSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSGateSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSGateSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSGateSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSGateSOVtbl;

    interface IOPOSGateSO
    {
        CONST_VTBL struct IOPOSGateSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSGateSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSGateSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSGateSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSGateSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSGateSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSGateSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSGateSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSGateSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSImageScannerSO_DISPINTERFACE_DEFINED__
#define __IOPOSImageScannerSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSImageScannerSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSImageScannerSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0310-B81E-11D2-AB74-0040054C3719")
    IOPOSImageScannerSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSImageScannerSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSImageScannerSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSImageScannerSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSImageScannerSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSImageScannerSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSImageScannerSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSImageScannerSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSImageScannerSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSImageScannerSOVtbl;

    interface IOPOSImageScannerSO
    {
        CONST_VTBL struct IOPOSImageScannerSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSImageScannerSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSImageScannerSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSImageScannerSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSImageScannerSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSImageScannerSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSImageScannerSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSImageScannerSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSImageScannerSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSItemDispenserSO_DISPINTERFACE_DEFINED__
#define __IOPOSItemDispenserSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSItemDispenserSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSItemDispenserSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0350-B81E-11D2-AB74-0040054C3719")
    IOPOSItemDispenserSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSItemDispenserSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSItemDispenserSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSItemDispenserSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSItemDispenserSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSItemDispenserSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSItemDispenserSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSItemDispenserSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSItemDispenserSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSItemDispenserSOVtbl;

    interface IOPOSItemDispenserSO
    {
        CONST_VTBL struct IOPOSItemDispenserSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSItemDispenserSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSItemDispenserSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSItemDispenserSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSItemDispenserSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSItemDispenserSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSItemDispenserSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSItemDispenserSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSItemDispenserSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSKeylockSO_DISPINTERFACE_DEFINED__
#define __IOPOSKeylockSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSKeylockSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSKeylockSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0090-B81E-11D2-AB74-0040054C3719")
    IOPOSKeylockSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSKeylockSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSKeylockSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSKeylockSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSKeylockSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSKeylockSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSKeylockSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSKeylockSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSKeylockSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSKeylockSOVtbl;

    interface IOPOSKeylockSO
    {
        CONST_VTBL struct IOPOSKeylockSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSKeylockSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSKeylockSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSKeylockSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSKeylockSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSKeylockSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSKeylockSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSKeylockSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSKeylockSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSLightsSO_DISPINTERFACE_DEFINED__
#define __IOPOSLightsSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSLightsSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSLightsSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0360-B81E-11D2-AB74-0040054C3719")
    IOPOSLightsSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSLightsSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSLightsSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSLightsSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSLightsSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSLightsSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSLightsSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSLightsSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSLightsSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSLightsSOVtbl;

    interface IOPOSLightsSO
    {
        CONST_VTBL struct IOPOSLightsSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSLightsSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSLightsSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSLightsSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSLightsSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSLightsSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSLightsSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSLightsSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSLightsSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSLineDisplaySO_DISPINTERFACE_DEFINED__
#define __IOPOSLineDisplaySO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSLineDisplaySO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSLineDisplaySO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0100-B81E-11D2-AB74-0040054C3719")
    IOPOSLineDisplaySO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSLineDisplaySOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSLineDisplaySO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSLineDisplaySO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSLineDisplaySO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSLineDisplaySO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSLineDisplaySO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSLineDisplaySO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSLineDisplaySO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSLineDisplaySOVtbl;

    interface IOPOSLineDisplaySO
    {
        CONST_VTBL struct IOPOSLineDisplaySOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSLineDisplaySO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSLineDisplaySO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSLineDisplaySO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSLineDisplaySO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSLineDisplaySO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSLineDisplaySO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSLineDisplaySO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSLineDisplaySO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSMICRSO_DISPINTERFACE_DEFINED__
#define __IOPOSMICRSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSMICRSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSMICRSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0110-B81E-11D2-AB74-0040054C3719")
    IOPOSMICRSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSMICRSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSMICRSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSMICRSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSMICRSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSMICRSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSMICRSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSMICRSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSMICRSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSMICRSOVtbl;

    interface IOPOSMICRSO
    {
        CONST_VTBL struct IOPOSMICRSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSMICRSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSMICRSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSMICRSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSMICRSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSMICRSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSMICRSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSMICRSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSMICRSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSMotionSensorSO_DISPINTERFACE_DEFINED__
#define __IOPOSMotionSensorSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSMotionSensorSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSMotionSensorSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0240-B81E-11D2-AB74-0040054C3719")
    IOPOSMotionSensorSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSMotionSensorSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSMotionSensorSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSMotionSensorSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSMotionSensorSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSMotionSensorSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSMotionSensorSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSMotionSensorSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSMotionSensorSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSMotionSensorSOVtbl;

    interface IOPOSMotionSensorSO
    {
        CONST_VTBL struct IOPOSMotionSensorSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSMotionSensorSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSMotionSensorSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSMotionSensorSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSMotionSensorSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSMotionSensorSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSMotionSensorSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSMotionSensorSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSMotionSensorSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSMSRSO_DISPINTERFACE_DEFINED__
#define __IOPOSMSRSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSMSRSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSMSRSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0120-B81E-11D2-AB74-0040054C3719")
    IOPOSMSRSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSMSRSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSMSRSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSMSRSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSMSRSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSMSRSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSMSRSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSMSRSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSMSRSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSMSRSOVtbl;

    interface IOPOSMSRSO
    {
        CONST_VTBL struct IOPOSMSRSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSMSRSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSMSRSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSMSRSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSMSRSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSMSRSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSMSRSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSMSRSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSMSRSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSPINPadSO_DISPINTERFACE_DEFINED__
#define __IOPOSPINPadSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSPINPadSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSPINPadSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0130-B81E-11D2-AB74-0040054C3719")
    IOPOSPINPadSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSPINPadSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSPINPadSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSPINPadSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSPINPadSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSPINPadSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSPINPadSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSPINPadSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSPINPadSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSPINPadSOVtbl;

    interface IOPOSPINPadSO
    {
        CONST_VTBL struct IOPOSPINPadSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSPINPadSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSPINPadSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSPINPadSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSPINPadSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSPINPadSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSPINPadSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSPINPadSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSPINPadSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSPointCardRWSO_DISPINTERFACE_DEFINED__
#define __IOPOSPointCardRWSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSPointCardRWSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSPointCardRWSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0210-B81E-11D2-AB74-0040054C3719")
    IOPOSPointCardRWSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSPointCardRWSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSPointCardRWSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSPointCardRWSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSPointCardRWSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSPointCardRWSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSPointCardRWSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSPointCardRWSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSPointCardRWSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSPointCardRWSOVtbl;

    interface IOPOSPointCardRWSO
    {
        CONST_VTBL struct IOPOSPointCardRWSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSPointCardRWSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSPointCardRWSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSPointCardRWSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSPointCardRWSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSPointCardRWSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSPointCardRWSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSPointCardRWSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSPointCardRWSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSPOSKeyboardSO_DISPINTERFACE_DEFINED__
#define __IOPOSPOSKeyboardSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSPOSKeyboardSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSPOSKeyboardSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0140-B81E-11D2-AB74-0040054C3719")
    IOPOSPOSKeyboardSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSPOSKeyboardSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSPOSKeyboardSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSPOSKeyboardSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSPOSKeyboardSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSPOSKeyboardSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSPOSKeyboardSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSPOSKeyboardSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSPOSKeyboardSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSPOSKeyboardSOVtbl;

    interface IOPOSPOSKeyboardSO
    {
        CONST_VTBL struct IOPOSPOSKeyboardSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSPOSKeyboardSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSPOSKeyboardSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSPOSKeyboardSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSPOSKeyboardSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSPOSKeyboardSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSPOSKeyboardSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSPOSKeyboardSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSPOSKeyboardSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSPOSPowerSO_DISPINTERFACE_DEFINED__
#define __IOPOSPOSPowerSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSPOSPowerSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSPOSPowerSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0220-B81E-11D2-AB74-0040054C3719")
    IOPOSPOSPowerSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSPOSPowerSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSPOSPowerSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSPOSPowerSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSPOSPowerSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSPOSPowerSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSPOSPowerSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSPOSPowerSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSPOSPowerSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSPOSPowerSOVtbl;

    interface IOPOSPOSPowerSO
    {
        CONST_VTBL struct IOPOSPOSPowerSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSPOSPowerSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSPOSPowerSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSPOSPowerSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSPOSPowerSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSPOSPowerSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSPOSPowerSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSPOSPowerSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSPOSPowerSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSPOSPrinterSO_DISPINTERFACE_DEFINED__
#define __IOPOSPOSPrinterSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSPOSPrinterSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSPOSPrinterSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0150-B81E-11D2-AB74-0040054C3719")
    IOPOSPOSPrinterSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSPOSPrinterSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSPOSPrinterSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSPOSPrinterSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSPOSPrinterSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSPOSPrinterSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSPOSPrinterSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSPOSPrinterSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSPOSPrinterSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSPOSPrinterSOVtbl;

    interface IOPOSPOSPrinterSO
    {
        CONST_VTBL struct IOPOSPOSPrinterSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSPOSPrinterSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSPOSPrinterSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSPOSPrinterSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSPOSPrinterSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSPOSPrinterSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSPOSPrinterSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSPOSPrinterSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSPOSPrinterSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSRemoteOrderDisplaySO_DISPINTERFACE_DEFINED__
#define __IOPOSRemoteOrderDisplaySO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSRemoteOrderDisplaySO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSRemoteOrderDisplaySO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0160-B81E-11D2-AB74-0040054C3719")
    IOPOSRemoteOrderDisplaySO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSRemoteOrderDisplaySOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSRemoteOrderDisplaySO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSRemoteOrderDisplaySO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSRemoteOrderDisplaySO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSRemoteOrderDisplaySO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSRemoteOrderDisplaySO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSRemoteOrderDisplaySO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSRemoteOrderDisplaySO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSRemoteOrderDisplaySOVtbl;

    interface IOPOSRemoteOrderDisplaySO
    {
        CONST_VTBL struct IOPOSRemoteOrderDisplaySOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSRemoteOrderDisplaySO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSRemoteOrderDisplaySO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSRemoteOrderDisplaySO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSRemoteOrderDisplaySO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSRemoteOrderDisplaySO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSRemoteOrderDisplaySO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSRemoteOrderDisplaySO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSRemoteOrderDisplaySO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSRFIDScannerSO_DISPINTERFACE_DEFINED__
#define __IOPOSRFIDScannerSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSRFIDScannerSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSRFIDScannerSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0370-B81E-11D2-AB74-0040054C3719")
    IOPOSRFIDScannerSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSRFIDScannerSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSRFIDScannerSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSRFIDScannerSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSRFIDScannerSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSRFIDScannerSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSRFIDScannerSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSRFIDScannerSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSRFIDScannerSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSRFIDScannerSOVtbl;

    interface IOPOSRFIDScannerSO
    {
        CONST_VTBL struct IOPOSRFIDScannerSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSRFIDScannerSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSRFIDScannerSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSRFIDScannerSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSRFIDScannerSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSRFIDScannerSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSRFIDScannerSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSRFIDScannerSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSRFIDScannerSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSScaleSO_DISPINTERFACE_DEFINED__
#define __IOPOSScaleSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSScaleSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSScaleSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0170-B81E-11D2-AB74-0040054C3719")
    IOPOSScaleSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSScaleSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSScaleSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSScaleSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSScaleSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSScaleSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSScaleSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSScaleSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSScaleSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSScaleSOVtbl;

    interface IOPOSScaleSO
    {
        CONST_VTBL struct IOPOSScaleSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSScaleSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSScaleSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSScaleSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSScaleSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSScaleSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSScaleSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSScaleSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSScaleSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSScannerSO_DISPINTERFACE_DEFINED__
#define __IOPOSScannerSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSScannerSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSScannerSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0180-B81E-11D2-AB74-0040054C3719")
    IOPOSScannerSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSScannerSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSScannerSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSScannerSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSScannerSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSScannerSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSScannerSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSScannerSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSScannerSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSScannerSOVtbl;

    interface IOPOSScannerSO
    {
        CONST_VTBL struct IOPOSScannerSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSScannerSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSScannerSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSScannerSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSScannerSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSScannerSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSScannerSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSScannerSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSScannerSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSSignatureCaptureSO_DISPINTERFACE_DEFINED__
#define __IOPOSSignatureCaptureSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSSignatureCaptureSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSSignatureCaptureSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0190-B81E-11D2-AB74-0040054C3719")
    IOPOSSignatureCaptureSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSSignatureCaptureSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSSignatureCaptureSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSSignatureCaptureSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSSignatureCaptureSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSSignatureCaptureSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSSignatureCaptureSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSSignatureCaptureSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSSignatureCaptureSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSSignatureCaptureSOVtbl;

    interface IOPOSSignatureCaptureSO
    {
        CONST_VTBL struct IOPOSSignatureCaptureSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSSignatureCaptureSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSSignatureCaptureSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSSignatureCaptureSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSSignatureCaptureSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSSignatureCaptureSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSSignatureCaptureSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSSignatureCaptureSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSSignatureCaptureSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSSmartCardRWSO_DISPINTERFACE_DEFINED__
#define __IOPOSSmartCardRWSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSSmartCardRWSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSSmartCardRWSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0250-B81E-11D2-AB74-0040054C3719")
    IOPOSSmartCardRWSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSSmartCardRWSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSSmartCardRWSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSSmartCardRWSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSSmartCardRWSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSSmartCardRWSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSSmartCardRWSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSSmartCardRWSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSSmartCardRWSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSSmartCardRWSOVtbl;

    interface IOPOSSmartCardRWSO
    {
        CONST_VTBL struct IOPOSSmartCardRWSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSSmartCardRWSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSSmartCardRWSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSSmartCardRWSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSSmartCardRWSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSSmartCardRWSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSSmartCardRWSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSSmartCardRWSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSSmartCardRWSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSToneIndicatorSO_DISPINTERFACE_DEFINED__
#define __IOPOSToneIndicatorSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSToneIndicatorSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSToneIndicatorSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0200-B81E-11D2-AB74-0040054C3719")
    IOPOSToneIndicatorSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSToneIndicatorSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSToneIndicatorSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSToneIndicatorSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSToneIndicatorSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSToneIndicatorSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSToneIndicatorSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSToneIndicatorSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSToneIndicatorSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSToneIndicatorSOVtbl;

    interface IOPOSToneIndicatorSO
    {
        CONST_VTBL struct IOPOSToneIndicatorSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSToneIndicatorSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSToneIndicatorSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSToneIndicatorSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSToneIndicatorSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSToneIndicatorSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSToneIndicatorSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSToneIndicatorSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSToneIndicatorSO_DISPINTERFACE_DEFINED__ */


#ifndef __IOPOSHardTotalsSO_DISPINTERFACE_DEFINED__
#define __IOPOSHardTotalsSO_DISPINTERFACE_DEFINED__

/* dispinterface IOPOSHardTotalsSO */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_IOPOSHardTotalsSO;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CCBE0080-B81E-11D2-AB74-0040054C3719")
    IOPOSHardTotalsSO : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOPOSHardTotalsSOVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOPOSHardTotalsSO * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOPOSHardTotalsSO * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOPOSHardTotalsSO * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOPOSHardTotalsSO * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOPOSHardTotalsSO * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOPOSHardTotalsSO * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOPOSHardTotalsSO * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOPOSHardTotalsSOVtbl;

    interface IOPOSHardTotalsSO
    {
        CONST_VTBL struct IOPOSHardTotalsSOVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOPOSHardTotalsSO_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOPOSHardTotalsSO_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOPOSHardTotalsSO_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOPOSHardTotalsSO_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOPOSHardTotalsSO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOPOSHardTotalsSO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOPOSHardTotalsSO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOPOSHardTotalsSO_DISPINTERFACE_DEFINED__ */

#endif /* __OPOSINTERNALSLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


