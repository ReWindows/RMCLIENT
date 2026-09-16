#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RMCLIENT.dll by Windissect. 55 member(s).
namespace Windows::System {
class CMemoryManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMemoryManager@System@Windows@@QEAA@XZ
    CMemoryManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z
    virtual long GetAppMemoryReport(::Windows::System::IAppMemoryReport * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMemoryManager@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z
    virtual long GetProcessMemoryReport(::Windows::System::IProcessMemoryReport * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMemoryManager@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMemoryManager@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CMemoryManager@System@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CMemoryManager@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMemoryManager@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z
    virtual long TrySetAppMemoryUsageLimit(uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_AppMemoryUsageDecreased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_AppMemoryUsageIncreased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_AppMemoryUsageLimitChanging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z
    virtual long get_AppMemoryUsage(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z
    virtual long get_AppMemoryUsageLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z
    virtual long get_AppMemoryUsageLimit(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z
    virtual long get_ExpectedAppMemoryUsageLimit(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AppMemoryUsageDecreased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AppMemoryUsageIncreased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AppMemoryUsageLimitChanging(EventRegistrationToken);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z
    long GetAppMemoryInformation(uint64_t *, uint64_t *, _PROCESS_JOB_MEMORY_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMemoryManager@System@Windows@@CAJXZ
    static long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z
    static void OnCommitLevelChangeRoutine(_RM_COMMIT_LEVEL_CHANGE_PAYLOAD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z
    static void OnCommitLimitChangeRoutine(uint64_t, uint64_t);
};
} // namespace Windows::System
