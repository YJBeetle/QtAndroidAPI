#include "../../JIntArray.hpp"
#include "./RenderScript_RSMessageHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	RenderScript_RSMessageHandler::RenderScript_RSMessageHandler()
		: JObject(
			"android.renderscript.RenderScript$RSMessageHandler",
			"()V"
		) {}
	
	// Methods
	void RenderScript_RSMessageHandler::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::renderscript

