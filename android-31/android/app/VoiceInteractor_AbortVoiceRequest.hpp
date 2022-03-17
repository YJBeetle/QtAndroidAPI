#pragma once

#include "./VoiceInteractor_Prompt.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./VoiceInteractor_AbortVoiceRequest.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline VoiceInteractor_AbortVoiceRequest::VoiceInteractor_AbortVoiceRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$AbortVoiceRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void VoiceInteractor_AbortVoiceRequest::onAbortResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers
#include "./VoiceInteractor_Request.hpp"

