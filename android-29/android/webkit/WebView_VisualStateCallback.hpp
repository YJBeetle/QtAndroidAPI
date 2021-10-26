#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEW_VISUALSTATECALLBACK
#define ANDROID_WEBKIT_WEBVIEW_VISUALSTATECALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::webkit
{
	class WebView_VisualStateCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onComplete(jlong arg0);
	};
} // namespace __jni_impl::android::webkit


namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebView_VisualStateCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView$VisualStateCallback",
			"()V"
		);
	}
	
	// Methods
	void WebView_VisualStateCallback::onComplete(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onComplete",
			"(J)V",
			arg0
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebView_VisualStateCallback : public __jni_impl::android::webkit::WebView_VisualStateCallback
	{
	public:
		WebView_VisualStateCallback(QAndroidJniObject obj) { __thiz = obj; }
		WebView_VisualStateCallback()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEW_VISUALSTATECALLBACK

