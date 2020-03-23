#pragma once

#ifndef ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDSMSRESULT
#define ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDSMSRESULT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::service::carrier
{
	class CarrierMessagingService_SendSmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jint getSendStatus();
		jint getMessageRef();
	};
} // namespace __jni_impl::android::service::carrier


namespace __jni_impl::android::service::carrier
{
	// Fields
	
	// Constructors
	void CarrierMessagingService_SendSmsResult::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingService$SendSmsResult",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	jint CarrierMessagingService_SendSmsResult::getSendStatus()
	{
		return __thiz.callMethod<jint>(
			"getSendStatus",
			"()I");
	}
	jint CarrierMessagingService_SendSmsResult::getMessageRef()
	{
		return __thiz.callMethod<jint>(
			"getMessageRef",
			"()I");
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class CarrierMessagingService_SendSmsResult : public __jni_impl::android::service::carrier::CarrierMessagingService_SendSmsResult
	{
	public:
		CarrierMessagingService_SendSmsResult(QAndroidJniObject obj) { __thiz = obj; }
		CarrierMessagingService_SendSmsResult(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::carrier

#endif // ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDSMSRESULT

