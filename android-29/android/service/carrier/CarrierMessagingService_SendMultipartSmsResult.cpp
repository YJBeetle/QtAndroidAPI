#include "./CarrierMessagingService_SendMultipartSmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	CarrierMessagingService_SendMultipartSmsResult::CarrierMessagingService_SendMultipartSmsResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CarrierMessagingService_SendMultipartSmsResult::CarrierMessagingService_SendMultipartSmsResult(jint &arg0, jintArray &arg1)
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
} // namespace android::service::carrier

