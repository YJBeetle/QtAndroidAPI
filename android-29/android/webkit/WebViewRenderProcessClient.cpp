#include "./WebView.hpp"
#include "./WebViewRenderProcess.hpp"
#include "./WebViewRenderProcessClient.hpp"

namespace android::webkit
{
	// Fields
	
	WebViewRenderProcessClient::WebViewRenderProcessClient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebViewRenderProcessClient::WebViewRenderProcessClient()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebViewRenderProcessClient",
			"()V"
		);
	}
	
	// Methods
	void WebViewRenderProcessClient::onRenderProcessResponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1)
	{
		__thiz.callMethod<void>(
			"onRenderProcessResponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WebViewRenderProcessClient::onRenderProcessUnresponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1)
	{
		__thiz.callMethod<void>(
			"onRenderProcessUnresponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::webkit

