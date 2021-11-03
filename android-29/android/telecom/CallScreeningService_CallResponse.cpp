#include "./CallScreeningService_CallResponse.hpp"

namespace android::telecom
{
	// Fields
	
	// QJniObject forward
	CallScreeningService_CallResponse::CallScreeningService_CallResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CallScreeningService_CallResponse::getDisallowCall() const
	{
		return callMethod<jboolean>(
			"getDisallowCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getRejectCall() const
	{
		return callMethod<jboolean>(
			"getRejectCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSilenceCall() const
	{
		return callMethod<jboolean>(
			"getSilenceCall",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipCallLog() const
	{
		return callMethod<jboolean>(
			"getSkipCallLog",
			"()Z"
		);
	}
	jboolean CallScreeningService_CallResponse::getSkipNotification() const
	{
		return callMethod<jboolean>(
			"getSkipNotification",
			"()Z"
		);
	}
} // namespace android::telecom

