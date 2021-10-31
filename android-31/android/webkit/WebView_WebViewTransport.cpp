#include "./WebView.hpp"
#include "./WebView_WebViewTransport.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebView_WebViewTransport::WebView_WebViewTransport(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebView_WebViewTransport::WebView_WebViewTransport(android::webkit::WebView arg0)
		: __JniBaseClass(
			"android.webkit.WebView$WebViewTransport",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		) {}
	
	// Methods
	android::webkit::WebView WebView_WebViewTransport::getWebView()
	{
		return callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
	void WebView_WebViewTransport::setWebView(android::webkit::WebView arg0)
	{
		callMethod<void>(
			"setWebView",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

