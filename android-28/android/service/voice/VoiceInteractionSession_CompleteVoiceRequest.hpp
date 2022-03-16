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
	class VoiceInteractionSession_CompleteVoiceRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_CompleteVoiceRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_CompleteVoiceRequest(QAndroidJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
		
		// Constructors
		
		// Methods
		JString getMessage() const;
		android::app::VoiceInteractor_Prompt getVoicePrompt() const;
		void sendCompleteResult(android::os::Bundle arg0) const;
	};
} // namespace android::service::voice

