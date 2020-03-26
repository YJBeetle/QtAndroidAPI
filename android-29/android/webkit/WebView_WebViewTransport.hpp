#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT
#define ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebView;
}

namespace __jni_impl::android::webkit
{
	class WebView_WebViewTransport : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::webkit::WebView arg0);
		
		// Methods
		void setWebView(__jni_impl::android::webkit::WebView arg0);
		QAndroidJniObject getWebView();
	};
} // namespace __jni_impl::android::webkit

#include "WebView.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebView_WebViewTransport::__constructor(__jni_impl::android::webkit::WebView arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView$WebViewTransport",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void WebView_WebViewTransport::setWebView(__jni_impl::android::webkit::WebView arg0)
	{
		__thiz.callMethod<void>(
			"setWebView",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebView_WebViewTransport::getWebView()
	{
		return __thiz.callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebView_WebViewTransport : public __jni_impl::android::webkit::WebView_WebViewTransport
	{
	public:
		WebView_WebViewTransport(QAndroidJniObject obj) { __thiz = obj; }
		WebView_WebViewTransport(__jni_impl::android::webkit::WebView arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT

