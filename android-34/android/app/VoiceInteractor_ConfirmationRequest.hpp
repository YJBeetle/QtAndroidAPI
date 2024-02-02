#pragma once

#include "./VoiceInteractor_Prompt.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./VoiceInteractor_ConfirmationRequest.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline VoiceInteractor_ConfirmationRequest::VoiceInteractor_ConfirmationRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$ConfirmationRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void VoiceInteractor_ConfirmationRequest::onConfirmationResult(jboolean arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onConfirmationResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

// Base class headers
#include "./VoiceInteractor_Request.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
