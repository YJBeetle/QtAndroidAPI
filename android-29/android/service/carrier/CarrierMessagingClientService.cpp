#include "../../content/Intent.hpp"
#include "./CarrierMessagingClientService.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QAndroidJniObject forward
	CarrierMessagingClientService::CarrierMessagingClientService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CarrierMessagingClientService::CarrierMessagingClientService()
		: android::app::Service(
			"android.service.carrier.CarrierMessagingClientService",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass CarrierMessagingClientService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::service::carrier

