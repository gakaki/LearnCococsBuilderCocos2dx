

#include "AppDelegate.h"
#include "cocos-ext.h"
#include "SimpleAudioEngine.h"
using namespace CocosDenshion;


USING_NS_CC_EXT;
#include "XJLayer.h"
#include "XJLayerLoader.h"

AppDelegate::AppDelegate()
{

}

AppDelegate::~AppDelegate()
{
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    CCDirector *pDirector = CCDirector::sharedDirector();
    pDirector->setOpenGLView(CCEGLView::sharedOpenGLView());

    // turn on display FPS
    pDirector->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

    CCNodeLoaderLibrary::sharedCCNodeLoaderLibrary()->registerCCNodeLoader( "XJLayer",XJLayerLoader::loader());
    
    cocos2d::extension::CCBReader* reader = new cocos2d::extension::CCBReader( CCNodeLoaderLibrary::sharedCCNodeLoaderLibrary() );
    reader->autorelease();
    
    // run
    pDirector->runWithScene( reader->createSceneWithNodeGraphFromFile( "Published-iOS/ConnectToCustomClass.ccbi" ) );
    

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    CCDirector::sharedDirector()->stopAnimation();
    SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
    SimpleAudioEngine::sharedEngine()->pauseAllEffects();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    CCDirector::sharedDirector()->startAnimation();
    SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
    SimpleAudioEngine::sharedEngine()->resumeAllEffects();
}
