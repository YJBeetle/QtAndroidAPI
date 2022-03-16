#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_Request.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void VoiceInteractionSession_Request::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline JString VoiceInteractionSession_Request::getCallingPackage() const
	{
		return callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint VoiceInteractionSession_Request::getCallingUid() const
	{
		return callMethod<jint>(
			"getCallingUid",
			"()I"
		);
	}
	inline android::os::Bundle VoiceInteractionSession_Request::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jboolean VoiceInteractionSession_Request::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline JString VoiceInteractionSession_Request::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::voice

// Base class headers

