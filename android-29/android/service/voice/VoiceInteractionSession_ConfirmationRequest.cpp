#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_ConfirmationRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_ConfirmationRequest::VoiceInteractionSession_ConfirmationRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring VoiceInteractionSession_ConfirmationRequest::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject VoiceInteractionSession_ConfirmationRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_ConfirmationRequest::sendConfirmationResult(jboolean arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendConfirmationResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::service::voice

