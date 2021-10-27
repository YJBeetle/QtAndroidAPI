#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_AbortVoiceRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_AbortVoiceRequest::VoiceInteractionSession_AbortVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring VoiceInteractionSession_AbortVoiceRequest::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject VoiceInteractionSession_AbortVoiceRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_AbortVoiceRequest::sendAbortResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::voice

