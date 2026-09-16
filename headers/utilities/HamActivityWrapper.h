#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RMCLIENT.dll by Windissect. 8 member(s).
class HamActivityWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HamActivityWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@HamActivityWrapper@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HamActivityWrapper@@SAJPEAPEAV1@PEAX_K@Z
    static long CreateInstance(HamActivityWrapper * *, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HamCallback@HamActivityWrapper@@SAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z
    static void HamCallback(_HAM_ACTIVITY_CALLBACK_PAYLOAD *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HamActivityWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HamActivityWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsyncForProcess@HamActivityWrapper@@QEAAJPEAXPEAU_HAM_ACTIVITY_PROPERTIES@@W4_HAM_ACTIVITY_START_TYPE@@@Z
    long StartAsyncForProcess(void *, _HAM_ACTIVITY_PROPERTIES *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForStarted@HamActivityWrapper@@QEAAJK@Z
    long WaitForStarted(unsigned long);
};
