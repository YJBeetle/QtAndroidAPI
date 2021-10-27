#pragma once

#include "../../__JniBaseClass.hpp"
#include "JsResult.hpp"


namespace __jni_impl::android::webkit
{
	class JsPromptResult : public __jni_impl::android::webkit::JsResult
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void confirm(jstring arg0);
		void confirm(const QString &arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void JsPromptResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.JsPromptResult",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class JsPromptResult : public __jni_impl::android::webkit::JsPromptResult
	{
	public:
		JsPromptResult(QAndroidJniObject obj) { __thiz = obj; }
		JsPromptResult()
		{
			__constructor();
		}
	};
} // namespace android::webkit

