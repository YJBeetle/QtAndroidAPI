#include "./JsResult.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	JsResult::JsResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void JsResult::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void JsResult::confirm() const
	{
		callMethod<void>(
			"confirm",
			"()V"
		);
	}
} // namespace android::webkit

