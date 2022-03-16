#include "./ServiceWorkerClient.hpp"
#include "./ServiceWorkerWebSettings.hpp"
#include "./ServiceWorkerController.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	ServiceWorkerController::ServiceWorkerController()
		: JObject(
			"android.webkit.ServiceWorkerController",
			"()V"
		) {}
	
	// Methods
	android::webkit::ServiceWorkerController ServiceWorkerController::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.ServiceWorkerController",
			"getInstance",
			"()Landroid/webkit/ServiceWorkerController;"
		);
	}
	android::webkit::ServiceWorkerWebSettings ServiceWorkerController::getServiceWorkerWebSettings() const
	{
		return callObjectMethod(
			"getServiceWorkerWebSettings",
			"()Landroid/webkit/ServiceWorkerWebSettings;"
		);
	}
	void ServiceWorkerController::setServiceWorkerClient(android::webkit::ServiceWorkerClient arg0) const
	{
		callMethod<void>(
			"setServiceWorkerClient",
			"(Landroid/webkit/ServiceWorkerClient;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

