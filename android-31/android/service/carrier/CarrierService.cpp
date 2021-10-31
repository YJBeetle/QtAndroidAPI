#include "../../content/Intent.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./CarrierIdentifier.hpp"
#include "./CarrierService.hpp"

namespace android::service::carrier
{
	// Fields
	jstring CarrierService::CARRIER_SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.carrier.CarrierService",
			"CARRIER_SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
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
	void CarrierService::notifyCarrierNetworkChange(jboolean arg0)
	{
		callMethod<void>(
			"notifyCarrierNetworkChange",
			"(Z)V",
			arg0
		);
	}
	__JniBaseClass CarrierService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	android::os::PersistableBundle CarrierService::onLoadConfig(android::service::carrier::CarrierIdentifier arg0)
	{
		return callObjectMethod(
			"onLoadConfig",
			"(Landroid/service/carrier/CarrierIdentifier;)Landroid/os/PersistableBundle;",
			arg0.object()
		);
	}
} // namespace android::service::carrier

