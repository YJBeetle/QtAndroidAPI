#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class WebView;
}

namespace android::webkit
{
	class WebView_WebViewTransport : public __JniBaseClass
	{
	public:
		// Fields
		
		WebView_WebViewTransport(QAndroidJniObject obj);
		// Constructors
		WebView_WebViewTransport(android::webkit::WebView arg0);
		WebView_WebViewTransport() = default;
		
		// Methods
		QAndroidJniObject getWebView();
		void setWebView(android::webkit::WebView arg0);
	};
} // namespace android::webkit

