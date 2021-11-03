#include "../../app/assist/AssistContent.hpp"
#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_ActivityId.hpp"
#include "./VoiceInteractionSession_AssistState.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	VoiceInteractionSession_AssistState::VoiceInteractionSession_AssistState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::service::voice::VoiceInteractionSession_ActivityId VoiceInteractionSession_AssistState::getActivityId()
	{
		return callObjectMethod(
			"getActivityId",
			"()Landroid/service/voice/VoiceInteractionSession$ActivityId;"
		);
	}
	android::app::assist::AssistContent VoiceInteractionSession_AssistState::getAssistContent()
	{
		return callObjectMethod(
			"getAssistContent",
			"()Landroid/app/assist/AssistContent;"
		);
	}
	android::os::Bundle VoiceInteractionSession_AssistState::getAssistData()
	{
		return callObjectMethod(
			"getAssistData",
			"()Landroid/os/Bundle;"
		);
	}
	android::app::assist::AssistStructure VoiceInteractionSession_AssistState::getAssistStructure()
	{
		return callObjectMethod(
			"getAssistStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	jint VoiceInteractionSession_AssistState::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jint VoiceInteractionSession_AssistState::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jboolean VoiceInteractionSession_AssistState::isFocused()
	{
		return callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
} // namespace android::service::voice

