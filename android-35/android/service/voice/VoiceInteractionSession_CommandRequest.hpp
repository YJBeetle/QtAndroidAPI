#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_CommandRequest.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString VoiceInteractionSession_CommandRequest::getCommand() const
	{
		return callObjectMethod(
			"getCommand",
			"()Ljava/lang/String;"
		);
	}
	inline void VoiceInteractionSession_CommandRequest::sendIntermediateResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"sendIntermediateResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSession_CommandRequest::sendResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"sendResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

// Base class headers
#include "./VoiceInteractionSession_Request.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::voice;
#endif
