#pragma once

#include "../../../JArray.hpp"
#include "../../app/VoiceInteractor_Prompt.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_PickOptionRequest.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray VoiceInteractionSession_PickOptionRequest::getOptions() const
	{
		return callObjectMethod(
			"getOptions",
			"()[Landroid/app/VoiceInteractor$PickOptionRequest$Option;"
		);
	}
	inline JString VoiceInteractionSession_PickOptionRequest::getPrompt() const
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::app::VoiceInteractor_Prompt VoiceInteractionSession_PickOptionRequest::getVoicePrompt() const
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	inline void VoiceInteractionSession_PickOptionRequest::sendIntermediatePickOptionResult(JArray arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendIntermediatePickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void VoiceInteractionSession_PickOptionRequest::sendPickOptionResult(JArray arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendPickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
} // namespace android::service::voice

// Base class headers
#include "./VoiceInteractionSession_Request.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::voice;
#endif
