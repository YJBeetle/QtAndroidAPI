#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_CommandRequest.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	VoiceInteractor_CommandRequest::VoiceInteractor_CommandRequest(JString arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$CommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	void VoiceInteractor_CommandRequest::onCommandResult(jboolean arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onCommandResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

