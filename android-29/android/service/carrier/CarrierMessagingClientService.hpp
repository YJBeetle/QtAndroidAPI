#pragma once

#ifndef ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGCLIENTSERVICE
#define ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGCLIENTSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::service::carrier
{
	class CarrierMessagingClientService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::service::carrier

#include "../../content/Intent.hpp"

namespace __jni_impl::android::service::carrier
{
	// Fields
	
	// Constructors
	void CarrierMessagingClientService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingClientService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CarrierMessagingClientService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class CarrierMessagingClientService : public __jni_impl::android::service::carrier::CarrierMessagingClientService
	{
	public:
		CarrierMessagingClientService(QAndroidJniObject obj) { __thiz = obj; }
		CarrierMessagingClientService()
		{
			__constructor();
		}
	};
} // namespace android::service::carrier

#endif // ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGCLIENTSERVICE

