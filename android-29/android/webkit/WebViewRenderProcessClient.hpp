#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebView;
}
namespace android::webkit
{
	class WebViewRenderProcess;
}

namespace android::webkit
{
	class WebViewRenderProcessClient : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebViewRenderProcessClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebViewRenderProcessClient(QAndroidJniObject obj);
		
		// Constructors
		WebViewRenderProcessClient();
		
		// Methods
		void onRenderProcessResponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1);
		void onRenderProcessUnresponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1);
	};
} // namespace android::webkit

