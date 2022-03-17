#pragma once

#include "../../JObject.hpp"
#include "./CallScreeningService_CallResponse.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_LOCATION()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_LOCATION"
		);
	}
	inline jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_PICTURE()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_PICTURE"
		);
	}
	inline jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_PRIORITY()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_PRIORITY"
		);
	}
	inline jint CallScreeningService_CallResponse::CALL_COMPOSER_ATTACHMENT_SUBJECT()
	{
		return getStaticField<jint>(
			"android.telecom.CallScreeningService$CallResponse",
			"CALL_COMPOSER_ATTACHMENT_SUBJECT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CallScreeningService_CallResponse::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CallScreeningService_CallResponse::getCallComposerAttachmentsToShow() const
	{
		return callMethod<jint>(
			"getCallComposerAttachmentsToShow",
			"()I"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getDisallowCall() const
	{
		return callMethod<jboolean>(
			"getDisallowCall",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getRejectCall() const
	{
		return callMethod<jboolean>(
			"getRejectCall",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getSilenceCall() const
	{
		return callMethod<jboolean>(
			"getSilenceCall",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getSkipCallLog() const
	{
		return callMethod<jboolean>(
			"getSkipCallLog",
			"()Z"
		);
	}
	inline jboolean CallScreeningService_CallResponse::getSkipNotification() const
	{
		return callMethod<jboolean>(
			"getSkipNotification",
			"()Z"
		);
	}
	inline jint CallScreeningService_CallResponse::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telecom

// Base class headers

