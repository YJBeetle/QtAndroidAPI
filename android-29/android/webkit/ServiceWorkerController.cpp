#include "./ServiceWorkerClient.hpp"
#include "./ServiceWorkerWebSettings.hpp"
#include "./ServiceWorkerController.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	ServiceWorkerController::ServiceWorkerController(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ServiceWorkerController::ServiceWorkerController()
		: __JniBaseClass(
			"android.webkit.ServiceWorkerController",
			"()V"
		) {}
	
	// Methods
	android::webkit::ServiceWorkerController ServiceWorkerController::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.ServiceWorkerController",
			"getInstance",
			"()Landroid/webkit/ServiceWorkerController;"
		);
	}
	android::webkit::ServiceWorkerWebSettings ServiceWorkerController::getServiceWorkerWebSettings()
	{
		return callObjectMethod(
			"getServiceWorkerWebSettings",
			"()Landroid/webkit/ServiceWorkerWebSettings;"
		);
	}
	void ServiceWorkerController::setServiceWorkerClient(android::webkit::ServiceWorkerClient arg0)
	{
		callMethod<void>(
			"setServiceWorkerClient",
			"(Landroid/webkit/ServiceWorkerClient;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

