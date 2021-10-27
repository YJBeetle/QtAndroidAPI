#include "./JsResult.hpp"

namespace android::webkit
{
	// Fields
	
	JsResult::JsResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void JsResult::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void JsResult::confirm()
	{
		__thiz.callMethod<void>(
			"confirm",
			"()V"
		);
	}
} // namespace android::webkit

