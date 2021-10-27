#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession_PickOptionRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	VoiceInteractionSession_PickOptionRequest::VoiceInteractionSession_PickOptionRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jarray VoiceInteractionSession_PickOptionRequest::getOptions()
	{
		return __thiz.callObjectMethod(
			"getOptions",
			"()[Landroid/app/VoiceInteractor$PickOptionRequest$Option;"
		).object<jarray>();
	}
	jstring VoiceInteractionSession_PickOptionRequest::getPrompt()
	{
		return __thiz.callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject VoiceInteractionSession_PickOptionRequest::getVoicePrompt()
	{
		return __thiz.callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_PickOptionRequest::sendIntermediatePickOptionResult(jarray arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendIntermediatePickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void VoiceInteractionSession_PickOptionRequest::sendPickOptionResult(jarray arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendPickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::service::voice

