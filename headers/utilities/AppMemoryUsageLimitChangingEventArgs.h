#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RMCLIENT.dll by Windissect. 17 member(s).
namespace Windows::System {
class AppMemoryUsageLimitChangingEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z
    AppMemoryUsageLimitChangingEventArgs(uint64_t, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewLimit@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEA_K@Z
    virtual long get_NewLimit(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldLimit@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAJPEA_K@Z
    virtual long get_OldLimit(uint64_t *);
};
} // namespace Windows::System
