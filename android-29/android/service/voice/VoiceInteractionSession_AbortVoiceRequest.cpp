#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_AbortVoiceRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractionSession_AbortVoiceRequest::VoiceInteractionSession_AbortVoiceRequest(QAndroidJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	jstring VoiceInteractionSession_AbortVoiceRequest::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::app::VoiceInteractor_Prompt VoiceInteractionSession_AbortVoiceRequest::getVoicePrompt()
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_AbortVoiceRequest::sendAbortResult(android::os::Bundle arg0)
	{
		callMethod<void>(
			"sendAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

