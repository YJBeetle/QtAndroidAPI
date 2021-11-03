#include "../../JString.hpp"
#include "./RenderScript_RSErrorHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	RenderScript_RSErrorHandler::RenderScript_RSErrorHandler(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RenderScript_RSErrorHandler::RenderScript_RSErrorHandler()
		: JObject(
			"android.renderscript.RenderScript$RSErrorHandler",
			"()V"
		) {}
	
	// Methods
	void RenderScript_RSErrorHandler::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::renderscript

