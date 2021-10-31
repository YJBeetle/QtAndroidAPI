#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_PickOptionRequest.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractor_PickOptionRequest::VoiceInteractor_PickOptionRequest(QAndroidJniObject obj) : android::app::VoiceInteractor_Request(obj) {}
	
	// Constructors
	VoiceInteractor_PickOptionRequest::VoiceInteractor_PickOptionRequest(android::app::VoiceInteractor_Prompt arg0, jarray arg1, android::os::Bundle arg2)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$PickOptionRequest",
			"(Landroid/app/VoiceInteractor$Prompt;[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	void VoiceInteractor_PickOptionRequest::onPickOptionResult(jboolean arg0, jarray arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"onPickOptionResult",
			"(Z[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
} // namespace android::app
