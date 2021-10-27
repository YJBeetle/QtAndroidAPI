#include "./WebView.hpp"
#include "./WebView_WebViewTransport.hpp"

namespace android::webkit
{
	// Fields
	
	WebView_WebViewTransport::WebView_WebViewTransport(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebView_WebViewTransport::WebView_WebViewTransport(android::webkit::WebView &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebView$WebViewTransport",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WebView_WebViewTransport::getWebView()
	{
		return __thiz.callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
	void WebView_WebViewTransport::setWebView(android::webkit::WebView arg0)
	{
		__thiz.callMethod<void>(
			"setWebView",
			"(Landroid/webkit/WebView;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::webkit

