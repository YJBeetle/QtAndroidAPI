#include "./CallScreeningService_CallResponse.hpp"

namespace android::telecom
{
	// Fields
	
	CallScreeningService_CallResponse::CallScreeningService_CallResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CallScreeningService_CallResponse::getDisallowCall()
	{
		return __thiz.callMethod<jboolean>(
			"getDisallowCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getRejectCall()
	{
		return __thiz.callMethod<jboolean>(
			"getRejectCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSilenceCall()
	{
		return __thiz.callMethod<jboolean>(
			"getSilenceCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipCallLog()
	{
		return __thiz.callMethod<jboolean>(
			"getSkipCallLog",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipNotification()
	{
		return __thiz.callMethod<jboolean>(
			"getSkipNotification",
			"()Z"
		);
	}
} // namespace android::telecom

