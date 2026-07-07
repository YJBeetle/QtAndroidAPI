#pragma once

#include "../../app/VoiceInteractor_Prompt.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_CompleteVoiceRequest.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString VoiceInteractionSession_CompleteVoiceRequest::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::app::VoiceInteractor_Prompt VoiceInteractionSession_CompleteVoiceRequest::getVoicePrompt() const
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	inline void VoiceInteractionSession_CompleteVoiceRequest::sendCompleteResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"sendCompleteResult",
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
