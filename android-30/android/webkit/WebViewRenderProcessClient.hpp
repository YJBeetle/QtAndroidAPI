#pragma once

#include "../../__JniBaseClass.hpp"

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
	class WebViewRenderProcessClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebViewRenderProcessClient(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebViewRenderProcessClient(QJniObject obj);
		
		// Constructors
		WebViewRenderProcessClient();
		
		// Methods
		void onRenderProcessResponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1);
		void onRenderProcessUnresponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1);
	};
} // namespace android::webkit

