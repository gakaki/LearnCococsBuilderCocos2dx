#include "XJLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;


XJLayer::~XJLayer()
{
    CC_SAFE_RELEASE(m_TestLabel);
}

SEL_MenuHandler XJLayer::onResolveCCBCCMenuItemSelector(CCObject * pTarget, const char * pSelectorName) {
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE( this, "menuSelectorChangeAccount", XJLayer::menuSelectorChangeAccount);
    return NULL;
}

SEL_CCControlHandler XJLayer::onResolveCCBCCControlSelector(CCObject * pTarget, const char * pSelectorName) {
    CCB_SELECTORRESOLVER_CCCONTROL_GLUE( this, "controlButtonTest", XJLayer::controlButtonTest );
    return NULL;
}

bool XJLayer::onAssignCCBMemberVariable(CCObject * pTarget, const char * pMemberVariableName, CCNode * pNode) {
    CCB_MEMBERVARIABLEASSIGNER_GLUE( this, "m_TestLabel", CCLabelTTF*, m_TestLabel );
    return false;
}

void XJLayer::menuSelectorChangeAccount(cocos2d::CCObject *pSender) {
    CCLog( "CGStartGameLayer::menuSelectorChangeAccount" );
    m_TestLabel->setString("THIS IS menuSelectorChangeAccount");
}

void XJLayer::controlButtonTest(CCObject* pObject, CCControlEvent event){
    
    CCLog( "CGStartGameLayer::controlButtonEventhandle" );
    m_TestLabel->setString("THIS IS CONTROL BUTTON TEST");

}

