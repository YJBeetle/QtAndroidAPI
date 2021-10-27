#pragma once

#ifndef ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMULTIPARTSMSRESULT
#define ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMULTIPARTSMSRESULT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::service::carrier
{
	class CarrierMessagingService_SendMultipartSmsResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jintArray arg1);
		
		// Methods
		jintArray getMessageRefs();
		jint getSendStatus();
	};
} // namespace __jni_impl::android::service::carrier


namespace __jni_impl::android::service::carrier
{
	// Fields
	
	// Constructors
	void CarrierMessagingService_SendMultipartSmsResult::__constructor(jint arg0, jintArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingService$SendMultipartSmsResult",
			"(I[I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jintArray CarrierMessagingService_SendMultipartSmsResult::getMessageRefs()
	{
		return __thiz.callObjectMethod(
			"getMessageRefs",
			"()[I"
		).object<jintArray>();
	}
	jint CarrierMessagingService_SendMultipartSmsResult::getSendStatus()
	{
		return __thiz.callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace __jni_impl::android::service::carrier

namespace android::service::carrier
{
	class CarrierMessagingService_SendMultipartSmsResult : public __jni_impl::android::service::carrier::CarrierMessagingService_SendMultipartSmsResult
	{
	public:
		CarrierMessagingService_SendMultipartSmsResult(QAndroidJniObject obj) { __thiz = obj; }
		CarrierMessagingService_SendMultipartSmsResult(jint arg0, jintArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::carrier

#endif // ANDROID_SERVICE_CARRIER_CARRIERMESSAGINGSERVICE_SENDMULTIPARTSMSRESULT

