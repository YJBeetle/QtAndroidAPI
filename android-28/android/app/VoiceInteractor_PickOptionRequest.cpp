#include "../../JArray.hpp"
#include "./VoiceInteractor_Prompt.hpp"
#include "../os/Bundle.hpp"
#include "./VoiceInteractor_PickOptionRequest.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	VoiceInteractor_PickOptionRequest::VoiceInteractor_PickOptionRequest(android::app::VoiceInteractor_Prompt arg0, JArray arg1, android::os::Bundle arg2)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$PickOptionRequest",
			"(Landroid/app/VoiceInteractor$Prompt;[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object()
		) {}
	
	// Methods
	void VoiceInteractor_PickOptionRequest::onPickOptionResult(jboolean arg0, JArray arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onPickOptionResult",
			"(Z[Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jarray>(),
			arg2.object()
		);
	}
} // namespace android::app

