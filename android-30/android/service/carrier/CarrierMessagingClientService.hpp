#pragma once

#include "../../content/Intent.def.hpp"
#include "./CarrierMessagingClientService.def.hpp"

namespace android::service::carrier
{
	// Fields
	
	// Constructors
	inline CarrierMessagingClientService::CarrierMessagingClientService()
		: android::app::Service(
			"android.service.carrier.CarrierMessagingClientService",
			"()V"
		) {}
	
	// Methods
	inline JObject CarrierMessagingClientService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::service::carrier

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::carrier;
#endif
