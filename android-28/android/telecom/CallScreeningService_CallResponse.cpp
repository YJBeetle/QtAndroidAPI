#include "./CallScreeningService_CallResponse.hpp"

namespace android::telecom
{
	// Fields
	
	// QAndroidJniObject forward
	CallScreeningService_CallResponse::CallScreeningService_CallResponse(QAndroidJniObject obj) : JObject(obj) {}
	
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

