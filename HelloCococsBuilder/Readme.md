####this tutorial is folling the blog tips http://blog.csdn.net/xujiezhige/article/details/8612673 thank you xujiezhige


#Tutorial 01 HelloCocosBuilder
####make a really easy hello cocosbuilder , notice : not assign the class name for the helloscene
becasue if you set class name in cocosbuilder ,you must not using CCSharedDefaultLibrary,you must 
custom the nodeloader .   


###if you get this waring , you need to custom the node loader. want to use custom node loader see 2nd tutorial.
  Assertion failed: (ccNodeLoadersIterator != this->mCCNodeLoaders.end()), function getCCNodeLoader, file /Users/hexianming/Desktop/cocos2dx_soft/LearnCocosBuilder/HelloCococsBuilder/HelloCococsBuilder/libs/extensions/CCBReader/CCNodeLoaderLibrary.cpp, line 67.


#Tutorial 02 ConnectToCustomLayer
###the second tutorial tell you how to custom the node load ,and button event callback.
