#include "../../content/Intent.hpp"
#include "./CarrierMessagingClientService.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QJniObject forward
	CarrierMessagingClientService::CarrierMessagingClientService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CarrierMessagingClientService::CarrierMessagingClientService()
		: android::app::Service(
			"android.service.carrier.CarrierMessagingClientService",
			"()V"
		) {}
	
	// Methods
	JObject CarrierMessagingClientService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::service::carrier

