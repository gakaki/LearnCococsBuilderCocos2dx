
#ifndef __XJLayer__
#define __XJLayer__

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class XJLayer : public CCLayer,
                public CCBSelectorResolver,
                public CCBMemberVariableAssigner
{
public:
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(XJLayer, create);

    
    XJLayer();
    virtual ~XJLayer();


	//CCBSelectorResolver
	virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(CCObject * pTarget, CCString * pSelectorName);
    virtual extension::SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject * pTarget, CCString * pSelectorName);
	
	//CCBMemberVariableAssigner
	virtual bool onAssignCCBMemberVariable(CCObject * pTarget, CCString * pMemberVariableName, CCNode * pNode);
    
    
    
	void menuSelectorChangeAccount( CCObject* node );
	void controlButtonTest(CCObject* pObject, CCControlEvent event);
    void menuCloseCallback(CCObject* pSender);
    
private:
	CCLabelTTF* m_TestLabel;
};


#endif 
