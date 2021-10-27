#include "./RenderScript_RSMessageHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	RenderScript_RSMessageHandler::RenderScript_RSMessageHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RenderScript_RSMessageHandler::RenderScript_RSMessageHandler()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RenderScript$RSMessageHandler",
			"()V"
		);
	}
	
	// Methods
	void RenderScript_RSMessageHandler::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::renderscript

