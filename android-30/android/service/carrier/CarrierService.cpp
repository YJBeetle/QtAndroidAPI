#include "../../content/Intent.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./CarrierIdentifier.hpp"
#include "../../../JString.hpp"
#include "./CarrierService.hpp"

namespace android::service::carrier
{
	// Fields
	JString CarrierService::CARRIER_SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.carrier.CarrierService",
			"CARRIER_SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	CarrierService::CarrierService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CarrierService::CarrierService()
		: android::app::Service(
			"android.service.carrier.CarrierService",
			"()V"
		) {}
	
	// Methods
	void CarrierService::notifyCarrierNetworkChange(jboolean arg0) const
	{
		callMethod<void>(
			"notifyCarrierNetworkChange",
			"(Z)V",
			arg0
		);
	}
	JObject CarrierService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	android::os::PersistableBundle CarrierService::onLoadConfig(android::service::carrier::CarrierIdentifier arg0) const
	{
		return callObjectMethod(
			"onLoadConfig",
			"(Landroid/service/carrier/CarrierIdentifier;)Landroid/os/PersistableBundle;",
			arg0.object()
		);
	}
} // namespace android::service::carrier

