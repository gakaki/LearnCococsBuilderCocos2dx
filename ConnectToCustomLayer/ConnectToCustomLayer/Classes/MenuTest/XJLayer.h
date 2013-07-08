#ifndef _XJLAYER_H_
#define _XJLAYER_H_

#include "cocos2d.h"
#include "cocos-ext.h"

USING_NS_CC;
USING_NS_CC_EXT;

class XJLayer
    : public cocos2d::CCLayer
    , public cocos2d::extension::CCBSelectorResolver
    , public cocos2d::extension::CCBMemberVariableAssigner
{
    public:
        //CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(XJLayer, create);

        //XJLayer();
        virtual ~XJLayer();

       //CCBSelectorResolver
        virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuItemSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
        virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(cocos2d::CCObject * pTarget, const char * pSelectorName);
    
        //CCBMemberVariableAssigner
        virtual bool onAssignCCBMemberVariable(cocos2d::CCObject * pTarget, const char * pMemberVariableName, cocos2d::CCNode * pNode);

    
        void menuSelectorChangeAccount( CCObject* node );
        void controlButtonTest(CCObject* pObject, CCControlEvent event);

        CREATE_FUNC(XJLayer);
    
    private:
        CCLabelTTF* m_TestLabel;
};

#endif