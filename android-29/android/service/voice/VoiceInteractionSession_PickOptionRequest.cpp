#include "../../../JArray.hpp"
#include "../../app/VoiceInteractor_Prompt.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./VoiceInteractionSession_PickOptionRequest.hpp"

namespace android::service::voice
{
	// Fields
	
	// QJniObject forward
	VoiceInteractionSession_PickOptionRequest::VoiceInteractionSession_PickOptionRequest(QJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
	
	// Constructors
	
	// Methods
	JArray VoiceInteractionSession_PickOptionRequest::getOptions()
	{
		return callObjectMethod(
			"getOptions",
			"()[Landroid/app/VoiceInteractor$PickOptionRequest$Option;"
		);
	}
	JString VoiceInteractionSession_PickOptionRequest::getPrompt()
	{
		return callObjectMethod(
			"getPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::VoiceInteractor_Prompt VoiceInteractionSession_PickOptionRequest::getVoicePrompt()
	{
		return callObjectMethod(
			"getVoicePrompt",
			"()Landroid/app/VoiceInteractor$Prompt;"
		);
	}
	void VoiceInteractionSession_PickOptionRequest::sendIntermediatePickOptionResult(JArray arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendIntermediatePickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void VoiceInteractionSession_PickOptionRequest::sendPickOptionResult(JArray arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendPickOptionResult",
			"([Landroid/app/VoiceInteractor$PickOptionRequest$Option;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
} // namespace android::service::voice

