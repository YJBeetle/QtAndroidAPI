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
		
		ServiceWorkerController(QAndroidJniObject obj);
		// Constructors
		ServiceWorkerController();
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject getServiceWorkerWebSettings();
		void setServiceWorkerClient(android::webkit::ServiceWorkerClient arg0);
	};
} // namespace android::webkit

