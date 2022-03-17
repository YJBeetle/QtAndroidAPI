#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class ServiceWorkerClient;
}
namespace android::webkit
{
	class ServiceWorkerWebSettings;
}

namespace android::webkit
{
	class ServiceWorkerController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceWorkerController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServiceWorkerController(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ServiceWorkerController();
		
		// Methods
		static android::webkit::ServiceWorkerController getInstance();
		android::webkit::ServiceWorkerWebSettings getServiceWorkerWebSettings() const;
		void setServiceWorkerClient(android::webkit::ServiceWorkerClient arg0) const;
	};
} // namespace android::webkit

