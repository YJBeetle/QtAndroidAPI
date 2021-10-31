#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_CompleteVoiceRequest.hpp"

namespace android::app
{
	// Fields
	
	VoiceInteractor_CompleteVoiceRequest::VoiceInteractor_CompleteVoiceRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractor_CompleteVoiceRequest::VoiceInteractor_CompleteVoiceRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$CompleteVoiceRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractor_CompleteVoiceRequest::onCompleteResult(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onCompleteResult",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

