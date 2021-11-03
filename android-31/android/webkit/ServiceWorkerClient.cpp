#include "./WebResourceResponse.hpp"
#include "./ServiceWorkerClient.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	ServiceWorkerClient::ServiceWorkerClient(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ServiceWorkerClient::ServiceWorkerClient()
		: JObject(
			"android.webkit.ServiceWorkerClient",
			"()V"
		) {}
	
	// Methods
	android::webkit::WebResourceResponse ServiceWorkerClient::shouldInterceptRequest(JObject arg0) const
	{
		return callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.object()
		);
	}
} // namespace android::webkit

