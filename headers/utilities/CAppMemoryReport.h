#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RMCLIENT.dll by Windissect. 32 member(s).
namespace Windows::System {
class CAppMemoryReport {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppMemoryReport@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppMemoryReport@System@Windows@@QEAA@XZ
    CAppMemoryReport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppMemoryReport@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppMemoryReport@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppMemoryReport@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CAppMemoryReport@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@CAppMemoryReport@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UEAAJ_K0000@Z
    virtual long RuntimeClassInitialize(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpectedTotalCommitLimit@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z
    virtual long get_ExpectedTotalCommitLimit(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PeakPrivateCommitUsage@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z
    virtual long get_PeakPrivateCommitUsage(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrivateCommitUsage@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z
    virtual long get_PrivateCommitUsage(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalCommitLimit@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z
    virtual long get_TotalCommitLimit(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TotalCommitUsage@CAppMemoryReport@System@Windows@@UEAAJPEA_K@Z
    virtual long get_TotalCommitUsage(uint64_t *);
};
} // namespace Windows::System
