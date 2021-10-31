#include "../os/Bundle.hpp"
#include "./VoiceInteractor_CommandRequest.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	VoiceInteractor_CommandRequest::VoiceInteractor_CommandRequest(QJniObject obj) : android::app::VoiceInteractor_Request(obj) {}
	
	// Constructors
	VoiceInteractor_CommandRequest::VoiceInteractor_CommandRequest(jstring arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$CommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	void VoiceInteractor_CommandRequest::onCommandResult(jboolean arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onCommandResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

