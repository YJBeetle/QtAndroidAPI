#include "./JsPromptResult.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	JsPromptResult::JsPromptResult(QAndroidJniObject obj) : android::webkit::JsResult(obj) {}
	
	// Constructors
	
	// Methods
	void JsPromptResult::confirm(jstring arg0)
	{
		callMethod<void>(
			"confirm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::webkit

