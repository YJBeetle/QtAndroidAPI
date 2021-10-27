#include "../../content/Intent.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./CarrierIdentifier.hpp"
#include "./CarrierService.hpp"

namespace android::service::carrier
{
	// Fields
	jstring CarrierService::CARRIER_SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.carrier.CarrierService",
			"CARRIER_SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	CarrierService::CarrierService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CarrierService::CarrierService()
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierService",
			"()V"
		);
	}
	
	// Methods
	void CarrierService::notifyCarrierNetworkChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyCarrierNetworkChange",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject CarrierService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CarrierService::onLoadConfig(android::service::carrier::CarrierIdentifier arg0)
	{
		return __thiz.callObjectMethod(
			"onLoadConfig",
			"(Landroid/service/carrier/CarrierIdentifier;)Landroid/os/PersistableBundle;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::carrier

