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
		
		WebViewRenderProcessClient(QAndroidJniObject obj);
		// Constructors
		WebViewRenderProcessClient();
		
		// Methods
		void onRenderProcessResponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1);
		void onRenderProcessUnresponsive(android::webkit::WebView arg0, android::webkit::WebViewRenderProcess arg1);
	};
} // namespace android::webkit

