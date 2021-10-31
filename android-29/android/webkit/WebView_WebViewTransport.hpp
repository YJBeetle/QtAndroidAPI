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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebView_WebViewTransport(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebView_WebViewTransport(QAndroidJniObject obj);
		
		// Constructors
		WebView_WebViewTransport(android::webkit::WebView arg0);
		
		// Methods
		QAndroidJniObject getWebView();
		void setWebView(android::webkit::WebView arg0);
	};
} // namespace android::webkit

