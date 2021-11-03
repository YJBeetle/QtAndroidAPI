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
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_PickOptionRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_PickOptionRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JArray getOptions();
		JString getPrompt();
		android::app::VoiceInteractor_Prompt getVoicePrompt();
		void sendIntermediatePickOptionResult(JArray arg0, android::os::Bundle arg1);
		void sendPickOptionResult(JArray arg0, android::os::Bundle arg1);
	};
} // namespace android::service::voice

