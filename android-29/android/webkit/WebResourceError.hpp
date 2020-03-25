#pragma once

#ifndef ANDROID_WEBKIT_WEBRESOURCEERROR
#define ANDROID_WEBKIT_WEBRESOURCEERROR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebResourceError : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getErrorCode();
		QAndroidJniObject getDescription();
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebResourceError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebResourceError",
			"(V)V");
	}
	
	// Methods
	jint WebResourceError::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I");
	}
	QAndroidJniObject WebResourceError::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;");
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebResourceError : public __jni_impl::android::webkit::WebResourceError
	{
	public:
		WebResourceError(QAndroidJniObject obj) { __thiz = obj; }
		WebResourceError()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBRESOURCEERROR

