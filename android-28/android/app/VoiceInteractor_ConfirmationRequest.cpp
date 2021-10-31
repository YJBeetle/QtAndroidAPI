#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_ConfirmationRequest.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractor_ConfirmationRequest::VoiceInteractor_ConfirmationRequest(QAndroidJniObject obj) : android::app::VoiceInteractor_Request(obj) {}
	
	// Constructors
	VoiceInteractor_ConfirmationRequest::VoiceInteractor_ConfirmationRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$ConfirmationRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void VoiceInteractor_ConfirmationRequest::onConfirmationResult(jboolean arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onConfirmationResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

