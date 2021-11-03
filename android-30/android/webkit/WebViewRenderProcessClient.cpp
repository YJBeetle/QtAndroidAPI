#include "./WebView.hpp"
#include "./WebViewRenderProcess.hpp"
#include "./WebViewRenderProcessClient.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebViewRenderProcessClient::WebViewRenderProcessClient(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebViewRenderProcessClient::WebViewRenderProcessClient()
		: JObject(
			"android.webkit.WebViewRenderProcessClient",
			"()V"
		) {}
	
	// Methods
	void WebViewRenderProcessClient::onRenderProcessResponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1) const
	{
		callMethod<void>(
			"onRenderProcessResponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void WebViewRenderProcessClient::onRenderProcessUnresponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1) const
	{
		callMethod<void>(
			"onRenderProcessUnresponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit

