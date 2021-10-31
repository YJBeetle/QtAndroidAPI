#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ServiceWorkerController : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServiceWorkerController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServiceWorkerController(QAndroidJniObject obj);
		
		// Constructors
		ServiceWorkerController();
		
		// Methods
		static android::webkit::ServiceWorkerController getInstance();
		android::webkit::ServiceWorkerWebSettings getServiceWorkerWebSettings();
		void setServiceWorkerClient(android::webkit::ServiceWorkerClient arg0);
	};
} // namespace android::webkit

