#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_AbortVoiceRequest.hpp"

namespace android::app
{
	// Fields
	
	VoiceInteractor_AbortVoiceRequest::VoiceInteractor_AbortVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractor_AbortVoiceRequest::VoiceInteractor_AbortVoiceRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$AbortVoiceRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractor_AbortVoiceRequest::onAbortResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

