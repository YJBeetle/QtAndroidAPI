#include "../../../JByteArray.hpp"
#include "./CarrierMessagingService_SendMmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	// QAndroidJniObject forward
	CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(jint arg0, JByteArray arg1)
		: JObject(
			"android.service.carrier.CarrierMessagingService$SendMmsResult",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	JByteArray CarrierMessagingService_SendMmsResult::getSendConfPdu()
	{
		return callObjectMethod(
			"getSendConfPdu",
			"()[B"
		);
	}
	jint CarrierMessagingService_SendMmsResult::getSendStatus()
	{
		return callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

