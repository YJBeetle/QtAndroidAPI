#pragma once

#include "../../content/Intent.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "./CarrierIdentifier.def.hpp"
#include "../../../JString.hpp"
#include "./CarrierService.def.hpp"

namespace android::service::carrier
{
	// Fields
	inline JString CarrierService::CARRIER_SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.carrier.CarrierService",
			"CARRIER_SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CarrierService::CarrierService()
		: android::app::Service(
			"android.service.carrier.CarrierService",
			"()V"
		) {}
	
	// Methods
	inline void CarrierService::notifyCarrierNetworkChange(jboolean arg0) const
	{
		callMethod<void>(
			"notifyCarrierNetworkChange",
			"(Z)V",
			arg0
		);
	}
	inline JObject CarrierService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline android::os::PersistableBundle CarrierService::onLoadConfig(android::service::carrier::CarrierIdentifier arg0) const
	{
		return callObjectMethod(
			"onLoadConfig",
			"(Landroid/service/carrier/CarrierIdentifier;)Landroid/os/PersistableBundle;",
			arg0.object()
		);
	}
} // namespace android::service::carrier

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

