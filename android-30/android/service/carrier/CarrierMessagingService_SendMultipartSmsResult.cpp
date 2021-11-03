#include "../../../JIntArray.hpp"
#include "./CarrierMessagingService_SendMultipartSmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QAndroidJniObject forward
	CarrierMessagingService_SendMultipartSmsResult::CarrierMessagingService_SendMultipartSmsResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CarrierMessagingService_SendMultipartSmsResult::CarrierMessagingService_SendMultipartSmsResult(jint arg0, JIntArray arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendMultipartSmsResult",
			"(I[I)V",
			arg0,
			arg1.object<jintArray>()
		) {}
	
	// Methods
	JIntArray CarrierMessagingService_SendMultipartSmsResult::getMessageRefs() const
	{
		return callObjectMethod(
			"getMessageRefs",
			"()[I"
		);
	}
	jint CarrierMessagingService_SendMultipartSmsResult::getSendStatus() const
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

