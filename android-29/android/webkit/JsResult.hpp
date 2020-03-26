#pragma once

#ifndef ANDROID_WEBKIT_JSRESULT
#define ANDROID_WEBKIT_JSRESULT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class JsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		void confirm();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void JsResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.JsResult",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class JsResult : public __jni_impl::android::webkit::JsResult
	{
	public:
		JsResult(QAndroidJniObject obj) { __thiz = obj; }
		JsResult()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_JSRESULT

