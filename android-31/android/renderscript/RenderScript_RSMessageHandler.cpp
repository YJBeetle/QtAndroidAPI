#include "../../JIntArray.hpp"
#include "./RenderScript_RSMessageHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	RenderScript_RSMessageHandler::RenderScript_RSMessageHandler(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RenderScript_RSMessageHandler::RenderScript_RSMessageHandler()
		: JObject(
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

