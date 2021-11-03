#pragma once

#include "./VoiceInteractionSession_Request.hpp"

namespace android::app
{
	class VoiceInteractor_Prompt;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::service::voice
{
	class VoiceInteractionSession_ConfirmationRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_ConfirmationRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_ConfirmationRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getPrompt();
		android::app::VoiceInteractor_Prompt getVoicePrompt();
		void sendConfirmationResult(jboolean arg0, android::os::Bundle arg1);
	};
} // namespace android::service::voice

