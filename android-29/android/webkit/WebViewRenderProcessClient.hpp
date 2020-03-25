#pragma once

#ifndef ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT
#define ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class WebView;
}
namespace __jni_impl::android::webkit
{
	class WebViewRenderProcess;
}

namespace __jni_impl::android::webkit
{
	class WebViewRenderProcessClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onRenderProcessUnresponsive(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::WebViewRenderProcess arg1);
		void onRenderProcessResponsive(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::WebViewRenderProcess arg1);
	};
} // namespace __jni_impl::android::webkit

#include "WebView.hpp"
#include "WebViewRenderProcess.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebViewRenderProcessClient::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewRenderProcessClient",
			"()V");
	}
	
	// Methods
	void WebViewRenderProcessClient::onRenderProcessUnresponsive(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::WebViewRenderProcess arg1)
	{
		__thiz.callMethod<void>(
			"onRenderProcessUnresponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void WebViewRenderProcessClient::onRenderProcessResponsive(__jni_impl::android::webkit::WebView arg0, __jni_impl::android::webkit::WebViewRenderProcess arg1)
	{
		__thiz.callMethod<void>(
			"onRenderProcessResponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebViewRenderProcessClient : public __jni_impl::android::webkit::WebViewRenderProcessClient
	{
	public:
		WebViewRenderProcessClient(QAndroidJniObject obj) { __thiz = obj; }
		WebViewRenderProcessClient()
		{
			__constructor();
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBVIEWRENDERPROCESSCLIENT

