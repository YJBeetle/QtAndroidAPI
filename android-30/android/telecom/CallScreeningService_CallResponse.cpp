#include "./CallScreeningService_CallResponse.hpp"

namespace android::telecom
{
	// Fields
	
	// QJniObject forward
	CallScreeningService_CallResponse::CallScreeningService_CallResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CallScreeningService_CallResponse::getDisallowCall()
	{
		return callMethod<jboolean>(
			"getDisallowCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getRejectCall()
	{
		return callMethod<jboolean>(
			"getRejectCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSilenceCall()
	{
		return callMethod<jboolean>(
			"getSilenceCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipCallLog()
	{
		return callMethod<jboolean>(
			"getSkipCallLog",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipNotification()
	{
		return callMethod<jboolean>(
			"getSkipNotification",
			"()Z"
		);
	}
} // namespace android::telecom

