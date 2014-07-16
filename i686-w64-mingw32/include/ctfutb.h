/*** Autogenerated by WIDL 1.5.29 from /tmp/build-mingw64-toolchain-crystax/src/mingw-w64-svn-r5861/mingw-w64-headers/include/ctfutb.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __ctfutb_h__
#define __ctfutb_h__

/* Forward declarations */

#ifndef __ITfLangBarMgr_FWD_DEFINED__
#define __ITfLangBarMgr_FWD_DEFINED__
typedef interface ITfLangBarMgr ITfLangBarMgr;
#endif

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __ITfLangBarEventSink_FWD_DEFINED__
#define __ITfLangBarEventSink_FWD_DEFINED__
typedef interface ITfLangBarEventSink ITfLangBarEventSink;
#endif

#ifndef __ITfLangBarItemMgr_FWD_DEFINED__
#define __ITfLangBarItemMgr_FWD_DEFINED__
typedef interface ITfLangBarItemMgr ITfLangBarItemMgr;
#endif

#ifndef __ITfInputProcessorProfiles_FWD_DEFINED__
#define __ITfInputProcessorProfiles_FWD_DEFINED__
typedef interface ITfInputProcessorProfiles ITfInputProcessorProfiles;
#endif

/*****************************************************************************
 * ITfLangBarMgr interface
 */
#ifndef __ITfLangBarMgr_INTERFACE_DEFINED__
#define __ITfLangBarMgr_INTERFACE_DEFINED__

DEFINE_GUID(IID_ITfLangBarMgr, 0x87955690, 0xe627, 0x11d2, 0x8d,0xdb, 0x00,0x10,0x5a,0x27,0x99,0xb5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("87955690-e627-11d2-8ddb-00105a2799b5")
ITfLangBarMgr : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AdviseEventSink(
        ITfLangBarEventSink *pSink,
        HWND hwnd,
        DWORD dwflags,
        DWORD *pdwCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE UnAdviseEventSink(
        DWORD dwCookie) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetThreadMarshalInterface(
        DWORD dwThreadId,
        DWORD dwType,
        REFIID riid,
        IUnknown **ppunk) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetThreadLangBarItemMgr(
        DWORD dwThreadId,
        ITfLangBarItemMgr **pplbie,
        DWORD *pdwThreadid) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputProcessorProfiles(
        DWORD dwThreadId,
        ITfInputProcessorProfiles **ppaip,
        DWORD *pdwThreadid) = 0;

    virtual HRESULT STDMETHODCALLTYPE RestoreLastFocus(
        DWORD *dwThreadId,
        WINBOOL fPrev) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetModalInput(
        ITfLangBarEventSink *pSink,
        DWORD dwThreadId,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ShowFloating(
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetShowFloatingStatus(
        DWORD *pdwFlags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ITfLangBarMgr, 0x87955690, 0xe627, 0x11d2, 0x8d,0xdb, 0x00,0x10,0x5a,0x27,0x99,0xb5)
#endif
#else
typedef struct ITfLangBarMgrVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ITfLangBarMgr* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ITfLangBarMgr* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ITfLangBarMgr* This);

    /*** ITfLangBarMgr methods ***/
    HRESULT (STDMETHODCALLTYPE *AdviseEventSink)(
        ITfLangBarMgr* This,
        ITfLangBarEventSink *pSink,
        HWND hwnd,
        DWORD dwflags,
        DWORD *pdwCookie);

    HRESULT (STDMETHODCALLTYPE *UnAdviseEventSink)(
        ITfLangBarMgr* This,
        DWORD dwCookie);

    HRESULT (STDMETHODCALLTYPE *GetThreadMarshalInterface)(
        ITfLangBarMgr* This,
        DWORD dwThreadId,
        DWORD dwType,
        REFIID riid,
        IUnknown **ppunk);

    HRESULT (STDMETHODCALLTYPE *GetThreadLangBarItemMgr)(
        ITfLangBarMgr* This,
        DWORD dwThreadId,
        ITfLangBarItemMgr **pplbie,
        DWORD *pdwThreadid);

    HRESULT (STDMETHODCALLTYPE *GetInputProcessorProfiles)(
        ITfLangBarMgr* This,
        DWORD dwThreadId,
        ITfInputProcessorProfiles **ppaip,
        DWORD *pdwThreadid);

    HRESULT (STDMETHODCALLTYPE *RestoreLastFocus)(
        ITfLangBarMgr* This,
        DWORD *dwThreadId,
        WINBOOL fPrev);

    HRESULT (STDMETHODCALLTYPE *SetModalInput)(
        ITfLangBarMgr* This,
        ITfLangBarEventSink *pSink,
        DWORD dwThreadId,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *ShowFloating)(
        ITfLangBarMgr* This,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetShowFloatingStatus)(
        ITfLangBarMgr* This,
        DWORD *pdwFlags);

    END_INTERFACE
} ITfLangBarMgrVtbl;
interface ITfLangBarMgr {
    CONST_VTBL ITfLangBarMgrVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ITfLangBarMgr_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ITfLangBarMgr_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ITfLangBarMgr_Release(This) (This)->lpVtbl->Release(This)
/*** ITfLangBarMgr methods ***/
#define ITfLangBarMgr_AdviseEventSink(This,pSink,hwnd,dwflags,pdwCookie) (This)->lpVtbl->AdviseEventSink(This,pSink,hwnd,dwflags,pdwCookie)
#define ITfLangBarMgr_UnAdviseEventSink(This,dwCookie) (This)->lpVtbl->UnAdviseEventSink(This,dwCookie)
#define ITfLangBarMgr_GetThreadMarshalInterface(This,dwThreadId,dwType,riid,ppunk) (This)->lpVtbl->GetThreadMarshalInterface(This,dwThreadId,dwType,riid,ppunk)
#define ITfLangBarMgr_GetThreadLangBarItemMgr(This,dwThreadId,pplbie,pdwThreadid) (This)->lpVtbl->GetThreadLangBarItemMgr(This,dwThreadId,pplbie,pdwThreadid)
#define ITfLangBarMgr_GetInputProcessorProfiles(This,dwThreadId,ppaip,pdwThreadid) (This)->lpVtbl->GetInputProcessorProfiles(This,dwThreadId,ppaip,pdwThreadid)
#define ITfLangBarMgr_RestoreLastFocus(This,dwThreadId,fPrev) (This)->lpVtbl->RestoreLastFocus(This,dwThreadId,fPrev)
#define ITfLangBarMgr_SetModalInput(This,pSink,dwThreadId,dwFlags) (This)->lpVtbl->SetModalInput(This,pSink,dwThreadId,dwFlags)
#define ITfLangBarMgr_ShowFloating(This,dwFlags) (This)->lpVtbl->ShowFloating(This,dwFlags)
#define ITfLangBarMgr_GetShowFloatingStatus(This,pdwFlags) (This)->lpVtbl->GetShowFloatingStatus(This,pdwFlags)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ITfLangBarMgr_QueryInterface(ITfLangBarMgr* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ITfLangBarMgr_AddRef(ITfLangBarMgr* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ITfLangBarMgr_Release(ITfLangBarMgr* This) {
    return This->lpVtbl->Release(This);
}
/*** ITfLangBarMgr methods ***/
static FORCEINLINE HRESULT ITfLangBarMgr_AdviseEventSink(ITfLangBarMgr* This,ITfLangBarEventSink *pSink,HWND hwnd,DWORD dwflags,DWORD *pdwCookie) {
    return This->lpVtbl->AdviseEventSink(This,pSink,hwnd,dwflags,pdwCookie);
}
static FORCEINLINE HRESULT ITfLangBarMgr_UnAdviseEventSink(ITfLangBarMgr* This,DWORD dwCookie) {
    return This->lpVtbl->UnAdviseEventSink(This,dwCookie);
}
static FORCEINLINE HRESULT ITfLangBarMgr_GetThreadMarshalInterface(ITfLangBarMgr* This,DWORD dwThreadId,DWORD dwType,REFIID riid,IUnknown **ppunk) {
    return This->lpVtbl->GetThreadMarshalInterface(This,dwThreadId,dwType,riid,ppunk);
}
static FORCEINLINE HRESULT ITfLangBarMgr_GetThreadLangBarItemMgr(ITfLangBarMgr* This,DWORD dwThreadId,ITfLangBarItemMgr **pplbie,DWORD *pdwThreadid) {
    return This->lpVtbl->GetThreadLangBarItemMgr(This,dwThreadId,pplbie,pdwThreadid);
}
static FORCEINLINE HRESULT ITfLangBarMgr_GetInputProcessorProfiles(ITfLangBarMgr* This,DWORD dwThreadId,ITfInputProcessorProfiles **ppaip,DWORD *pdwThreadid) {
    return This->lpVtbl->GetInputProcessorProfiles(This,dwThreadId,ppaip,pdwThreadid);
}
static FORCEINLINE HRESULT ITfLangBarMgr_RestoreLastFocus(ITfLangBarMgr* This,DWORD *dwThreadId,WINBOOL fPrev) {
    return This->lpVtbl->RestoreLastFocus(This,dwThreadId,fPrev);
}
static FORCEINLINE HRESULT ITfLangBarMgr_SetModalInput(ITfLangBarMgr* This,ITfLangBarEventSink *pSink,DWORD dwThreadId,DWORD dwFlags) {
    return This->lpVtbl->SetModalInput(This,pSink,dwThreadId,dwFlags);
}
static FORCEINLINE HRESULT ITfLangBarMgr_ShowFloating(ITfLangBarMgr* This,DWORD dwFlags) {
    return This->lpVtbl->ShowFloating(This,dwFlags);
}
static FORCEINLINE HRESULT ITfLangBarMgr_GetShowFloatingStatus(ITfLangBarMgr* This,DWORD *pdwFlags) {
    return This->lpVtbl->GetShowFloatingStatus(This,pdwFlags);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE ITfLangBarMgr_AdviseEventSink_Proxy(
    ITfLangBarMgr* This,
    ITfLangBarEventSink *pSink,
    HWND hwnd,
    DWORD dwflags,
    DWORD *pdwCookie);
void __RPC_STUB ITfLangBarMgr_AdviseEventSink_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_UnAdviseEventSink_Proxy(
    ITfLangBarMgr* This,
    DWORD dwCookie);
void __RPC_STUB ITfLangBarMgr_UnAdviseEventSink_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_GetThreadMarshalInterface_Proxy(
    ITfLangBarMgr* This,
    DWORD dwThreadId,
    DWORD dwType,
    REFIID riid,
    IUnknown **ppunk);
void __RPC_STUB ITfLangBarMgr_GetThreadMarshalInterface_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_GetThreadLangBarItemMgr_Proxy(
    ITfLangBarMgr* This,
    DWORD dwThreadId,
    ITfLangBarItemMgr **pplbie,
    DWORD *pdwThreadid);
void __RPC_STUB ITfLangBarMgr_GetThreadLangBarItemMgr_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_GetInputProcessorProfiles_Proxy(
    ITfLangBarMgr* This,
    DWORD dwThreadId,
    ITfInputProcessorProfiles **ppaip,
    DWORD *pdwThreadid);
void __RPC_STUB ITfLangBarMgr_GetInputProcessorProfiles_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_RestoreLastFocus_Proxy(
    ITfLangBarMgr* This,
    DWORD *dwThreadId,
    WINBOOL fPrev);
void __RPC_STUB ITfLangBarMgr_RestoreLastFocus_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_SetModalInput_Proxy(
    ITfLangBarMgr* This,
    ITfLangBarEventSink *pSink,
    DWORD dwThreadId,
    DWORD dwFlags);
void __RPC_STUB ITfLangBarMgr_SetModalInput_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_ShowFloating_Proxy(
    ITfLangBarMgr* This,
    DWORD dwFlags);
void __RPC_STUB ITfLangBarMgr_ShowFloating_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITfLangBarMgr_GetShowFloatingStatus_Proxy(
    ITfLangBarMgr* This,
    DWORD *pdwFlags);
void __RPC_STUB ITfLangBarMgr_GetShowFloatingStatus_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __ITfLangBarMgr_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER HWND_UserSize     (ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal  (ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void            __RPC_USER HWND_UserFree     (ULONG *, HWND *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ctfutb_h__ */
