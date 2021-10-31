#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_CompleteVoiceRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractionSession_CompleteVoiceRequest::VoiceInteractionSession_CompleteVoiceRequest(QAndroidJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	jstring VoiceInteractionSession_CompleteVoiceRequest::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::app::VoiceInteractor_Prompt VoiceInteractionSession_CompleteVoiceRequest::getVoicePrompt()
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_CompleteVoiceRequest::sendCompleteResult(android::os::Bundle arg0)
	{
		callMethod<void>(
			"sendCompleteResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

