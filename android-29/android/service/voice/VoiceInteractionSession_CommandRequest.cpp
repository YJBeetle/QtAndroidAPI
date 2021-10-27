#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_CommandRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_CommandRequest::VoiceInteractionSession_CommandRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring VoiceInteractionSession_CommandRequest::getCommand()
	{
		return __thiz.callObjectMethod(
			"getCommand",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VoiceInteractionSession_CommandRequest::sendIntermediateResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendIntermediateResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSession_CommandRequest::sendResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::voice

