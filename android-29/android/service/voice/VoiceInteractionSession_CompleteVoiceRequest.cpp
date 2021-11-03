#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_CompleteVoiceRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	VoiceInteractionSession_CompleteVoiceRequest::VoiceInteractionSession_CompleteVoiceRequest(QJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	JString VoiceInteractionSession_CompleteVoiceRequest::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		);
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

