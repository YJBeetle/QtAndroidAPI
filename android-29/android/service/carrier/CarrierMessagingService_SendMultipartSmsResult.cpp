#include "./CarrierMessagingService_SendMultipartSmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QAndroidJniObject forward
	CarrierMessagingService_SendMultipartSmsResult::CarrierMessagingService_SendMultipartSmsResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CarrierMessagingService_SendMultipartSmsResult::CarrierMessagingService_SendMultipartSmsResult(jint arg0, jintArray arg1)
		: __JniBaseClass(
			"android.service.carrier.CarrierMessagingService$SendMultipartSmsResult",
			"(I[I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jintArray CarrierMessagingService_SendMultipartSmsResult::getMessageRefs()
	{
		return callObjectMethod(
			"getMessageRefs",
			"()[I"
		).object<jintArray>();
	}
	jint CarrierMessagingService_SendMultipartSmsResult::getSendStatus()
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

