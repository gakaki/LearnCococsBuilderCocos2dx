#ifndef _MENUTESTLAYERLOADER_H_
#define _MENUTESTLAYERLOADER_H_

#include "XJLayer.H"
#include "cocos2d.h"
#include "cocos-ext.h"


class CCBReader;

class XJLayerLoader : public cocos2d::extension::CCLayerLoader {
    public:
        CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(XJLayerLoader, loader);

    protected:
        CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(XJLayer);
};

#endif
