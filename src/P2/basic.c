#include <basic.h>
#include <splice/gc.h>
#include <splice/sidebag.h>

extern CGc g_gc;

int FIsBasicDerivedFrom(BASIC *pbasic, CID cid) {
    VT *vt = (VT*)pbasic->pvtbasic;
    while (vt != nullptr) {
        if (vt->cid == cid) return 1;
        vt = vt->pvtSuper;
    }

    return 0;
}

void EnsureBasicSidebag(BASIC *pbasic) {
    if (pbasic->psidebag == nullptr) {
        CSidebag *psidebag = PsidebagNew();
        pbasic->psidebag = psidebag;
        g_gc.AddRootSidebag(psidebag);
    }
    return;
}

void GetBasicCid(BASIC *pbasic, CID* pcid) {
    *pcid = pbasic->pvtbasic->cid;
}
