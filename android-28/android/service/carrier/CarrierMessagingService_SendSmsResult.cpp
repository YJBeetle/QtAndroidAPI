#include "./CarrierMessagingService_SendSmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QAndroidJniObject forward
	CarrierMessagingService_SendSmsResult::CarrierMessagingService_SendSmsResult(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CarrierMessagingService_SendSmsResult::CarrierMessagingService_SendSmsResult(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.service.carrier.CarrierMessagingService$SendSmsResult",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint CarrierMessagingService_SendSmsResult::getMessageRef()
	{
		return callMethod<jint>(
			"getMessageRef",
			"()I"
		);
	}
	jint CarrierMessagingService_SendSmsResult::getSendStatus()
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

