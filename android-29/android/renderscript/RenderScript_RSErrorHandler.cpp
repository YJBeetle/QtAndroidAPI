#include "./RenderScript_RSErrorHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	RenderScript_RSErrorHandler::RenderScript_RSErrorHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RenderScript_RSErrorHandler::RenderScript_RSErrorHandler()
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
} // namespace android::renderscript

