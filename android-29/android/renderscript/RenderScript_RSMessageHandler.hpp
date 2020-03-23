#pragma once

#ifndef ANDROID_RENDERSCRIPT_RENDERSCRIPT_RSMESSAGEHANDLER
#define ANDROID_RENDERSCRIPT_RENDERSCRIPT_RSMESSAGEHANDLER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class RenderScript_RSMessageHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void run();
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void RenderScript_RSMessageHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RenderScript$RSMessageHandler",
			"()V");
	}
	
	// Methods
	void RenderScript_RSMessageHandler::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V");
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RenderScript_RSMessageHandler : public __jni_impl::android::renderscript::RenderScript_RSMessageHandler
	{
	public:
		RenderScript_RSMessageHandler(QAndroidJniObject obj) { __thiz = obj; }
		RenderScript_RSMessageHandler()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_RENDERSCRIPT_RSMESSAGEHANDLER

