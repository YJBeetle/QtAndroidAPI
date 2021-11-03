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
	jboolean CallScreeningService_CallResponse::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CallScreeningService_CallResponse::getCallComposerAttachmentsToShow()
	{
		return callMethod<jint>(
			"getCallComposerAttachmentsToShow",
			"()I"
		);
	}
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
	jint CallScreeningService_CallResponse::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telecom

