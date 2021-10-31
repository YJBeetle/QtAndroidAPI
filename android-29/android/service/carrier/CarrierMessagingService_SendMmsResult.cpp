#include "./CarrierMessagingService_SendMmsResult.hpp"

namespace android::service::carrier
{
	// Fields
	
	CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CarrierMessagingService_SendMmsResult::CarrierMessagingService_SendMmsResult(jint arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.carrier.CarrierMessagingService$SendMmsResult",
			"(I[B)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jbyteArray CarrierMessagingService_SendMmsResult::getSendConfPdu()
	{
		return __thiz.callObjectMethod(
			"getSendConfPdu",
			"()[B"
		).object<jbyteArray>();
	}
	jint CarrierMessagingService_SendMmsResult::getSendStatus()
	{
		return __thiz.callMethod<jint>(
			"getSendStatus",
			"()I"
		);
	}
} // namespace android::service::carrier

