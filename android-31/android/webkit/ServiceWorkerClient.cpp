#include "./WebResourceResponse.hpp"
#include "./ServiceWorkerClient.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	ServiceWorkerClient::ServiceWorkerClient(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ServiceWorkerClient::ServiceWorkerClient()
		: __JniBaseClass(
			"android.webkit.ServiceWorkerClient",
			"()V"
		) {}
	
	// Methods
	android::webkit::WebResourceResponse ServiceWorkerClient::shouldInterceptRequest(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.object()
		);
	}
} // namespace android::webkit

