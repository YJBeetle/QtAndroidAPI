#pragma once

#include "./WebResourceResponse.def.hpp"
#include "./ServiceWorkerClient.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline ServiceWorkerClient::ServiceWorkerClient()
		: JObject(
			"android.webkit.ServiceWorkerClient",
			"()V"
		) {}
	
	// Methods
	inline android::webkit::WebResourceResponse ServiceWorkerClient::shouldInterceptRequest(JObject arg0) const
	{
		return callObjectMethod(
			"shouldInterceptRequest",
			"(Landroid/webkit/WebResourceRequest;)Landroid/webkit/WebResourceResponse;",
			arg0.object()
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
