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
	class VoiceInteractionSession_CompleteVoiceRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		VoiceInteractionSession_CompleteVoiceRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_CompleteVoiceRequest() = default;
		
		// Methods
		jstring getMessage();
		QAndroidJniObject getVoicePrompt();
		void sendCompleteResult(android::os::Bundle arg0);
	};
} // namespace android::service::voice

