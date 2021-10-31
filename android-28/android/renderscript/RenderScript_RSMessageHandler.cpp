#include "./RenderScript_RSMessageHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	RenderScript_RSMessageHandler::RenderScript_RSMessageHandler(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RenderScript_RSMessageHandler::RenderScript_RSMessageHandler()
		: __JniBaseClass(
			"android.renderscript.RenderScript$RSMessageHandler",
			"()V"
		) {}
	
	// Methods
	void RenderScript_RSMessageHandler::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::renderscript

