#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RMCLIENT.dll by Windissect. 13 member(s).
class ModernResourceManagerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ModernResourceManagerProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long CommitMemoryLevelChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long CommitMemoryLimitChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z
    long GetMemoryUsageLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModernResourceManagerProxy@@QEAA@XZ
    ModernResourceManagerProxy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ModernResourceManagerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z
    long RegisterCommitMemoryCallback(void ( *)(_RM_COMMIT_LEVEL_CHANGE_PAYLOAD *), void ( *)(uint64_t, uint64_t));
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ModernResourceManagerProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJ_KPEAH@Z
    long SetMemoryUsageLimit(uint64_t, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModernResourceManagerProxy@@UEAA@XZ
    virtual ~ModernResourceManagerProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ
    long RegisterWithServer();
};
