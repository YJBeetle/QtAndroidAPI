#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class RenderScript_RSErrorHandler : public __JniBaseClass
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
	void RenderScript_RSErrorHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RenderScript$RSErrorHandler",
			"()V"
		);
	}
	
	// Methods
	void RenderScript_RSErrorHandler::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RenderScript_RSErrorHandler : public __jni_impl::android::renderscript::RenderScript_RSErrorHandler
	{
	public:
		RenderScript_RSErrorHandler(QAndroidJniObject obj) { __thiz = obj; }
		RenderScript_RSErrorHandler()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

