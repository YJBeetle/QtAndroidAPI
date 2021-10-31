#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_CommandRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	VoiceInteractionSession_CommandRequest::VoiceInteractionSession_CommandRequest(QJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	jstring VoiceInteractionSession_CommandRequest::getCommand()
	{
		return callObjectMethod(
			"getCommand",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VoiceInteractionSession_CommandRequest::sendIntermediateResult(android::os::Bundle arg0)
	{
		callMethod<void>(
			"sendIntermediateResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession_CommandRequest::sendResult(android::os::Bundle arg0)
	{
		callMethod<void>(
			"sendResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

