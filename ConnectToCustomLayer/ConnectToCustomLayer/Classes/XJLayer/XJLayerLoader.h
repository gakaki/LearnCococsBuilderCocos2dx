#ifndef __XJLayerLoader__
#define __XJLayerLoader__

#include "XJLayer.h"
#include "cocos2d.h"
#include "cocos-ext.h"


class XJLayerLoader : public CCLayerLoader{
    
public:
	//CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD( XJLayerLoader, loader );
	//				||(equal)
	//	static XJLayerLoader* loader()
	//	{
	//		XJLayerLoader * ptr = new XJLayerLoader();
	//		if(ptr != NULL) {
	//			ptr->autorelease();
	//			return ptr;
	//		}
	//		CC_SAFE_DELETE(ptr);
	//		return NULL;
	//	}
	CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD( XJLayerLoader, loader );
	
	//CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD( XJLayer );
	//				||(equal)
	//	virtual XJLayer * createCCNode(cocos2d::CCNode * pParent, cocos2d::extension::CCBReader * pCCBReader)
	//	{
	//		return XJLayer::create();
	//	}
    
	CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD( XJLayer );
};


#endif /* defined(__XJLayerLoader__) */
