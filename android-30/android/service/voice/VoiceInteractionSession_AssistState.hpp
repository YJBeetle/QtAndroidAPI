#pragma once

#include "../../app/assist/AssistContent.def.hpp"
#include "../../app/assist/AssistStructure.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./VoiceInteractionSession_ActivityId.def.hpp"
#include "./VoiceInteractionSession_AssistState.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::service::voice::VoiceInteractionSession_ActivityId VoiceInteractionSession_AssistState::getActivityId() const
	{
		return callObjectMethod(
			"getActivityId",
			"()Landroid/service/voice/VoiceInteractionSession$ActivityId;"
		);
	}
	inline android::app::assist::AssistContent VoiceInteractionSession_AssistState::getAssistContent() const
	{
		return callObjectMethod(
			"getAssistContent",
			"()Landroid/app/assist/AssistContent;"
		);
	}
	inline android::os::Bundle VoiceInteractionSession_AssistState::getAssistData() const
	{
		return callObjectMethod(
			"getAssistData",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::app::assist::AssistStructure VoiceInteractionSession_AssistState::getAssistStructure() const
	{
		return callObjectMethod(
			"getAssistStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	inline jint VoiceInteractionSession_AssistState::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline jint VoiceInteractionSession_AssistState::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline jboolean VoiceInteractionSession_AssistState::isFocused() const
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
} // namespace android::service::voice

// Base class headers

