#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebView;
}

namespace android::webkit
{
	class WebView_WebViewTransport : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebView_WebViewTransport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebView_WebViewTransport(QAndroidJniObject obj);
		
		// Constructors
		WebView_WebViewTransport(android::webkit::WebView arg0);
		
		// Methods
		android::webkit::WebView getWebView();
		void setWebView(android::webkit::WebView arg0);
	};
} // namespace android::webkit

