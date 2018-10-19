/****************************************************************************
**
** OposCoIdl.h -- IDL source to define the OPOS CO hideen interface
**
**
*****************************************************************************
*/

[
    uuid(CCBE0000-B81E-11D2-AB74-0040054C3719),
    helpstring("IOPOSCO 1.14.1 Interface from SO to CO")
]
dispinterface IOPOSCO
{
    properties:
    methods:
        // Device Common Method
        [id(1)] void SOData([in] LONG Status);
        [id(2)] void SODirectIO([in] LONG EventNumber, [in, out] LONG* pData, [in, out] BSTR* pStrIng);
        [id(3)] void SOError([in] LONG ResultCode, [in] LONG ResultCodeExtended, [in] LONG ErrorLocus, [in, out] LONG* pErrorResponse);
        [id(4)] void SOOutputComplete([in] LONG OutputID);
        [id(5)] void SOStatusUpdate([in] LONG Data);
        [id(6)] void SOTransition([in] LONG EventNumber, [in, out] LONG* pData, [in, out] BSTR* pStrIng);
        [id(9)] LONG SOProcessID(void);
};
