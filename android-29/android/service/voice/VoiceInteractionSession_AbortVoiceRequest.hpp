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
	class VoiceInteractionSession_AbortVoiceRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		VoiceInteractionSession_AbortVoiceRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_AbortVoiceRequest() = default;
		
		// Methods
		jstring getMessage();
		QAndroidJniObject getVoicePrompt();
		void sendAbortResult(android::os::Bundle arg0);
	};
} // namespace android::service::voice

