#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_CommandRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractionSession_CommandRequest::VoiceInteractionSession_CommandRequest(QAndroidJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	JString VoiceInteractionSession_CommandRequest::getCommand() const
	{
		return callObjectMethod(
			"getCommand",
			"()Ljava/lang/String;"
		);
	}
	void VoiceInteractionSession_CommandRequest::sendIntermediateResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"sendIntermediateResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSession_CommandRequest::sendResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"sendResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::service::voice

