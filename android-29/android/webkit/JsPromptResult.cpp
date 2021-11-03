#include "../../JString.hpp"
#include "./JsPromptResult.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	JsPromptResult::JsPromptResult(QAndroidJniObject obj) : android::webkit::JsResult(obj) {}
	
	// Constructors
	
	// Methods
	void JsPromptResult::confirm(JString arg0)
	{
		callMethod<void>(
			"confirm",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::webkit

