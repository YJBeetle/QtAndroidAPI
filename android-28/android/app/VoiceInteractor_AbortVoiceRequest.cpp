#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_AbortVoiceRequest.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractor_AbortVoiceRequest::VoiceInteractor_AbortVoiceRequest(QAndroidJniObject obj) : android::app::VoiceInteractor_Request(obj) {}
	
	// Constructors
	VoiceInteractor_AbortVoiceRequest::VoiceInteractor_AbortVoiceRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$AbortVoiceRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void VoiceInteractor_AbortVoiceRequest::onAbortResult(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onAbortResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::app

