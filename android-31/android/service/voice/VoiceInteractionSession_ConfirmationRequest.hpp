#pragma once

#include "../../app/VoiceInteractor_Prompt.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_ConfirmationRequest.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString VoiceInteractionSession_ConfirmationRequest::getPrompt() const
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::app::VoiceInteractor_Prompt VoiceInteractionSession_ConfirmationRequest::getVoicePrompt() const
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	inline void VoiceInteractionSession_ConfirmationRequest::sendConfirmationResult(jboolean arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendConfirmationResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::service::voice

// Base class headers
#include "./VoiceInteractionSession_Request.hpp"

