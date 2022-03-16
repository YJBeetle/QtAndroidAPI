#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_CompleteVoiceRequest.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	VoiceInteractor_CompleteVoiceRequest::VoiceInteractor_CompleteVoiceRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$CompleteVoiceRequest",
			"(Landroid/app/VoiceInteractor$Prompt;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void VoiceInteractor_CompleteVoiceRequest::onCompleteResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onCompleteResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
} // namespace android::app

