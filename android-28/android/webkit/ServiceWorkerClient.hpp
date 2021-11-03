#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class WebResourceResponse;
}

namespace android::webkit
{
	class ServiceWorkerClient : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceWorkerClient(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceWorkerClient(QJniObject obj);
		
		// Constructors
		ServiceWorkerClient();
		
		// Methods
		android::webkit::WebResourceResponse shouldInterceptRequest(JObject arg0) const;
	};
} // namespace android::webkit

