#pragma once
#include "../windissect_forwards.h"

// Reconstructed from RMCLIENT.dll by Windissect. 9 member(s).
class ResourceManagerProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z
    long RmAccessCheck(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z
    long RmAccessCheck(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK_KPEAXHW4RmPend@@PEAHPEA_K@Z
    long RmAcquireResources(unsigned long, RmResourceInfo *, unsigned long, unsigned long, uint64_t, void *, int, int, int *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RmAvailabilityCheck@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK@Z
    long RmAvailabilityCheck(unsigned long, RmResourceInfo *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RmGetNotification@ResourceManagerProxy@@QEAAJ_KPEAURmExternalResourceNotification@@@Z
    long RmGetNotification(uint64_t, RmExternalResourceNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RmRegisterResource@ResourceManagerProxy@@QEAAJW4RmResourceType@@KH@Z
    long RmRegisterResource(int, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z
    long RmReleaseResources(uint64_t);
};
