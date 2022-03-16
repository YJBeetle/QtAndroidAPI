#pragma once

#include "./VoiceInteractionSession_Request.hpp"

class JArray;
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
	class VoiceInteractionSession_PickOptionRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_PickOptionRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_PickOptionRequest(QAndroidJniObject obj) : android::service::voice::VoiceInteractionSession_Request(obj) {}
		
		// Constructors
		
		// Methods
		JArray getOptions() const;
		JString getPrompt() const;
		android::app::VoiceInteractor_Prompt getVoicePrompt() const;
		void sendIntermediatePickOptionResult(JArray arg0, android::os::Bundle arg1) const;
		void sendPickOptionResult(JArray arg0, android::os::Bundle arg1) const;
	};
} // namespace android::service::voice

