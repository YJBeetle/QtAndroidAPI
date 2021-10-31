#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_ConfirmationRequest.hpp"

namespace android::app
{
	// Fields
	
	VoiceInteractor_ConfirmationRequest::VoiceInteractor_ConfirmationRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractor_ConfirmationRequest::VoiceInteractor_ConfirmationRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$ConfirmationRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractor_ConfirmationRequest::onConfirmationResult(jboolean arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onConfirmationResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::app

