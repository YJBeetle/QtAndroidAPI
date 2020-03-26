#pragma once

#ifndef ANDROID_SERVICE_CARRIER_CARRIERSERVICE
#define ANDROID_SERVICE_CARRIER_CARRIERSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::service::carrier
{
	class CarrierIdentifier;
}

namespace __jni_impl::android::service::carrier
{
	class CarrierService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring CARRIER_SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject onLoadConfig(__jni_impl::android::service::carrier::CarrierIdentifier arg0);
		void notifyCarrierNetworkChange(jboolean arg0);
	};
} // namespace __jni_impl::android::service::carrier

#include "../../content/Intent.hpp"
#include "../../os/PersistableBundle.hpp"
#include "CarrierIdentifier.hpp"

namespace __jni_impl::android::service::carrier
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
	
	// Constructors
	void CarrierService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CarrierService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CarrierService::onLoadConfig(__jni_impl::android::service::carrier::CarrierIdentifier arg0)
	{
		return __thiz.callObjectMethod(
			"onLoadConfig",
			"(Landroid/service/carrier/CarrierIdentifier;)Landroid/os/PersistableBundle;",
			arg0.__jniObject().object()
		);
	}
	void CarrierService::notifyCarrierNetworkChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"notifyCarrierNetworkChange",
			"(Z)V",
			arg0
		);
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class CarrierService : public __jni_impl::android::service::carrier::CarrierService
	{
	public:
		CarrierService(QAndroidJniObject obj) { __thiz = obj; }
		CarrierService()
		{
			__constructor();
		}
	};
} // namespace android::service::carrier

#endif // ANDROID_SERVICE_CARRIER_CARRIERSERVICE

