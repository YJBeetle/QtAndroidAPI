#include "../../JObject.hpp"
#include "./CallScreeningService_CallResponse.hpp"

namespace android::telecom
{
	// Fields
	jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_LOCATION()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_LOCATION"
		);
	}
	jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_PICTURE()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_PICTURE"
		);
	}
	jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_PRIORITY()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_PRIORITY"
		);
	}
	jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_SUBJECT()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_SUBJECT"
		);
	}
	
	// QJniObject forward
	CallScreeningService_CallResponse::CallScreeningService_CallResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CallScreeningService_CallResponse::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CallScreeningService_CallResponse::getCallComposerAttachmentsToShow() const
	{
		return callMethod<jint>(
			"getCallComposerAttachmentsToShow",
			"()I"
		);
	}
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
	jint CallScreeningService_CallResponse::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telecom

