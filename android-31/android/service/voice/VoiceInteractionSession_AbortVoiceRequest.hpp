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
	class VoiceInteractionSession_AbortVoiceRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_AbortVoiceRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_AbortVoiceRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getMessage();
		android::app::VoiceInteractor_Prompt getVoicePrompt();
		void sendAbortResult(android::os::Bundle arg0);
	};
} // namespace android::service::voice

