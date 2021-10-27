#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./VoiceInteractionSession_Request.hpp"

namespace android::app
{
	class VoiceInteractor_Prompt;
}
namespace android::os
{
	class Bundle;
}

namespace android::service::voice
{
	class VoiceInteractionSession_ConfirmationRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		VoiceInteractionSession_ConfirmationRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_ConfirmationRequest() = default;
		
		// Methods
		jstring getPrompt();
		QAndroidJniObject getVoicePrompt();
		void sendConfirmationResult(jboolean arg0, android::os::Bundle arg1);
	};
} // namespace android::service::voice

