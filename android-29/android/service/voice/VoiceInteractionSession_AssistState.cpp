#include "../../app/assist/AssistContent.hpp"
#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_ActivityId.hpp"
#include "./VoiceInteractionSession_AssistState.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractionSession_AssistState::VoiceInteractionSession_AssistState(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject VoiceInteractionSession_AssistState::getActivityId()
	{
		return callObjectMethod(
			"getActivityId",
			"()Landroid/service/voice/VoiceInteractionSession$ActivityId;"
		);
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistContent()
	{
		return callObjectMethod(
			"getAssistContent",
			"()Landroid/app/assist/AssistContent;"
		);
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistData()
	{
		return callObjectMethod(
			"getAssistData",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistStructure()
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

