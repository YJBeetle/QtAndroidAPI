#pragma once

#include "./WebView.def.hpp"
#include "./WebView_WebViewTransport.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline WebView_WebViewTransport::WebView_WebViewTransport(android::webkit::WebView arg0)
		: JObject(
			"android.webkit.WebView$WebViewTransport",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::webkit::WebView WebView_WebViewTransport::getWebView() const
	{
		return callObjectMethod(
			"getWebView",
			"()Landroid/webkit/WebView;"
		);
	}
	inline void WebView_WebViewTransport::setWebView(android::webkit::WebView arg0) const
	{
		callMethod<void>(
			"setWebView",
			"(Landroid/webkit/WebView;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

// Base class headers

