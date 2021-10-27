#include "../../app/assist/AssistContent.hpp"
#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_ActivityId.hpp"
#include "./VoiceInteractionSession_AssistState.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_AssistState::VoiceInteractionSession_AssistState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject VoiceInteractionSession_AssistState::getActivityId()
	{
		return __thiz.callObjectMethod(
			"getActivityId",
			"()Landroid/service/voice/VoiceInteractionSession$ActivityId;"
		);
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistContent()
	{
		return __thiz.callObjectMethod(
			"getAssistContent",
			"()Landroid/app/assist/AssistContent;"
		);
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistData()
	{
		return __thiz.callObjectMethod(
			"getAssistData",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistStructure()
	{
		return __thiz.callObjectMethod(
			"getAssistStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	jint VoiceInteractionSession_AssistState::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jint VoiceInteractionSession_AssistState::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jboolean VoiceInteractionSession_AssistState::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z"
		);
	}
} // namespace android::service::voice

