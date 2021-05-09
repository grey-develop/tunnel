#ifndef __APP_H__
#define __APP_H__

#include <standard/applite.h>


class CTunnelApp : public CAppLite {
public:
    CTunnelApp();
    virtual ~CTunnelApp();
    virtual int32 Init(HUIHANDLE hParentHandle, int32 nWidth, int32 nHeight);
    virtual int32 Update(int32 nDelta, float fDelta);
    virtual int32 Render();
    virtual int32 Final();

private:

};

#endif
