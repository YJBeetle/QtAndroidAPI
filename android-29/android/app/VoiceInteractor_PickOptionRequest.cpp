#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_PickOptionRequest.hpp"

namespace android::app
{
	// Fields
	
	VoiceInteractor_PickOptionRequest::VoiceInteractor_PickOptionRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractor_PickOptionRequest::VoiceInteractor_PickOptionRequest(android::app::VoiceInteractor_Prompt arg0, jarray arg1, android::os::Bundle arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$PickOptionRequest",
			"(Landroid/app/VoiceInteractor$Prompt;[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void VoiceInteractor_PickOptionRequest::onPickOptionResult(jboolean arg0, jarray arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onPickOptionResult",
			"(Z[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace android::app

