#pragma once

#ifndef ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT
#define ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::service::carrier
{
	class CarrierMessagingService_SendMmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jbyteArray arg1);
		
		// Methods
		jint getSendStatus();
		jbyteArray getSendConfPdu();
	};
} // namespace __jni_impl::android::service::carrier


namespace __jni_impl::android::service::carrier
{
	// Fields
	
	// Constructors
	void CarrierMessagingService_SendMmsResult::__constructor(jint arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingService$SendMmsResult",
			"(I[B)V",
			arg0,
			arg1);
	}
	
	// Methods
	jint CarrierMessagingService_SendMmsResult::getSendStatus()
	{
		return __thiz.callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
	jbyteArray CarrierMessagingService_SendMmsResult::getSendConfPdu()
	{
		return __thiz.callObjectMethod(
			"getSendConfPdu",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class CarrierMessagingService_SendMmsResult : public __jni_impl::android::service::carrier::CarrierMessagingService_SendMmsResult
	{
	public:
		CarrierMessagingService_SendMmsResult(QAndroidJniObject obj) { __thiz = obj; }
		CarrierMessagingService_SendMmsResult(jint arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::carrier

#endif // ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMMSRESULT

