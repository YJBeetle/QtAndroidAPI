#pragma once

#include "./WebView.def.hpp"
#include "./WebViewRenderProcess.def.hpp"
#include "./WebViewRenderProcessClient.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebViewRenderProcessClient::WebViewRenderProcessClient()
		: JObject(
			"android.webkit.WebViewRenderProcessClient",
			"()V"
		) {}
	
	// Methods
	inline void WebViewRenderProcessClient::onRenderProcessResponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1) const
	{
		callMethod<void>(
			"onRenderProcessResponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WebViewRenderProcessClient::onRenderProcessUnresponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1) const
	{
		callMethod<void>(
			"onRenderProcessUnresponsive",
			"(Landroid/webkit/WebView;Landroid/webkit/WebViewRenderProcess;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
