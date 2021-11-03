#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_ConfirmationRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractionSession_ConfirmationRequest::VoiceInteractionSession_ConfirmationRequest(QAndroidJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	JString VoiceInteractionSession_ConfirmationRequest::getPrompt()
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::VoiceInteractor_Prompt VoiceInteractionSession_ConfirmationRequest::getVoicePrompt()
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_ConfirmationRequest::sendConfirmationResult(jboolean arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendConfirmationResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::service::voice

