#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_CompleteVoiceRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_CompleteVoiceRequest::VoiceInteractionSession_CompleteVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring VoiceInteractionSession_CompleteVoiceRequest::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject VoiceInteractionSession_CompleteVoiceRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_CompleteVoiceRequest::sendCompleteResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"sendCompleteResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::voice

