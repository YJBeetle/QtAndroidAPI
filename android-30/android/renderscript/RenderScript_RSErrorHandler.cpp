#include "./RenderScript_RSErrorHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	// QJniObject forward
	RenderScript_RSErrorHandler::RenderScript_RSErrorHandler(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RenderScript_RSErrorHandler::RenderScript_RSErrorHandler()
		: __JniBaseClass(
			"android.renderscript.RenderScript$RSErrorHandler",
			"()V"
		) {}
	
	// Methods
	void RenderScript_RSErrorHandler::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
} // namespace android::renderscript

