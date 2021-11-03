#pragma once

#include "../../../JObject.hpp"
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
	class VoiceInteractionSession_PickOptionRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_PickOptionRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_PickOptionRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getOptions();
		jstring getPrompt();
		android::app::VoiceInteractor_Prompt getVoicePrompt();
		void sendIntermediatePickOptionResult(jarray arg0, android::os::Bundle arg1);
		void sendPickOptionResult(jarray arg0, android::os::Bundle arg1);
	};
} // namespace android::service::voice

