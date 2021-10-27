#include "./JsPromptResult.hpp"

namespace android::webkit
{
	// Fields
	
	JsPromptResult::JsPromptResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void JsPromptResult::confirm(jstring arg0)
	{
		__thiz.callMethod<void>(
			"confirm",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JsPromptResult::confirm(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"confirm",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::webkit

