#include "../../../JByteArray.hpp"
#include "./CarrierMessagingService_SendMmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	// Constructors
	CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(jint arg0, JByteArray arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendMmsResult",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray CarrierMessagingService_SendMmsResult::getSendConfPdu() const
	{
		return callObjectMethod(
			"getSendConfPdu",
			"()[B"
		);
	}
	jint CarrierMessagingService_SendMmsResult::getSendStatus() const
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

