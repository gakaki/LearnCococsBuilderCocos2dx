#include "XJLayer.h"

USING_NS_CC;
USING_NS_CC_EXT;


XJLayer::~XJLayer()
{
    CC_SAFE_RELEASE_NULL( m_TestLabel );
}


void XJLayer::menuSelectorChangeAccount( CCObject* pObject )
{
	CCLog( "CGStartGameLayer::menuSelectorChangeAccount" );
}
void XJLayer::controlButtonTest(CCObject* pObject, CCControlEvent event)
{
	CCLog( "CGStartGameLayer::controlButtonEventhandle" );
}



SEL_MenuHandler XJLayer::onResolveCCBCCMenuItemSelector(CCObject * pTarget, CCString * pSelectorName)
{
	CCB_SELECTORRESOLVER_CCMENUITEM_GLUE( this, "menuSelectorChangeAccount", XJLayer::menuSelectorChangeAccount);
    
    
	return NULL;
}

extension::SEL_CCControlHandler XJLayer::onResolveCCBCCControlSelector(CCObject * pTarget, CCString * pSelectorName)
{
	CCB_SELECTORRESOLVER_CCCONTROL_GLUE( this, "controlButtonMoreServers", XJLayer::controlButtonTest );
	return NULL;
}

bool XJLayer::onAssignCCBMemberVariable(CCObject * pTarget, CCString * pMemberVariableName, CCNode * pNode)
{
	CCB_MEMBERVARIABLEASSIGNER_GLUE( this, "m_TestLabel", CCLabelTTF*, m_TestLabel );
	return false;
}