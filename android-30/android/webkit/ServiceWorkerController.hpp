#pragma once

#include "./ServiceWorkerClient.def.hpp"
#include "./ServiceWorkerWebSettings.def.hpp"
#include "./ServiceWorkerController.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline ServiceWorkerController::ServiceWorkerController()
		: JObject(
			"android.webkit.ServiceWorkerController",
			"()V"
		) {}
	
	// Methods
	inline android::webkit::ServiceWorkerController ServiceWorkerController::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.ServiceWorkerController",
			"getInstance",
			"()Landroid/webkit/ServiceWorkerController;"
		);
	}
	inline android::webkit::ServiceWorkerWebSettings ServiceWorkerController::getServiceWorkerWebSettings() const
	{
		return callObjectMethod(
			"getServiceWorkerWebSettings",
			"()Landroid/webkit/ServiceWorkerWebSettings;"
		);
	}
	inline void ServiceWorkerController::setServiceWorkerClient(android::webkit::ServiceWorkerClient arg0) const
	{
		callMethod<void>(
			"setServiceWorkerClient",
			"(Landroid/webkit/ServiceWorkerClient;)V",
			arg0.object()
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
