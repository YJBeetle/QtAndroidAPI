#include "../../content/Intent.hpp"
#include "./CarrierMessagingClientService.hpp"

namespace android::service::carrier
{
	// Fields
	
	CarrierMessagingClientService::CarrierMessagingClientService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CarrierMessagingClientService::CarrierMessagingClientService()
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingClientService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CarrierMessagingClientService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::carrier

