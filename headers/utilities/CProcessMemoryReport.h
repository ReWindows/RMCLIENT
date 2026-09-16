#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RMCLIENT.dll by Windissect. 23 member(s).
namespace Windows::System {
class CProcessMemoryReport {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CProcessMemoryReport@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProcessMemoryReport@System@Windows@@QEAA@XZ
    CProcessMemoryReport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CProcessMemoryReport@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CProcessMemoryReport@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CProcessMemoryReport@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CProcessMemoryReport@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CProcessMemoryReport@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UEAAJ_K0@Z
    virtual long RuntimeClassInitialize(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateWorkingSetUsage@CProcessMemoryReport@System@Windows@@UEAAJPEA_K@Z
    virtual long get_PrivateWorkingSetUsage(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalWorkingSetUsage@CProcessMemoryReport@System@Windows@@UEAAJPEA_K@Z
    virtual long get_TotalWorkingSetUsage(uint64_t *);
};
} // namespace Windows::System
