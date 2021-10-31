#include "./RenderScript_RSErrorHandler.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	RenderScript_RSErrorHandler::RenderScript_RSErrorHandler(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

