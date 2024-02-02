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
	inline void CarrierService::notifyCarrierNetworkChange(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"notifyCarrierNetworkChange",
			"(IZ)V",
			arg0,
			arg1
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
	inline android::os::PersistableBundle CarrierService::onLoadConfig(jint arg0, android::service::carrier::CarrierIdentifier arg1) const
	{
		return callObjectMethod(
			"onLoadConfig",
			"(ILandroid/service/carrier/CarrierIdentifier;)Landroid/os/PersistableBundle;",
			arg0,
			arg1.object()
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
