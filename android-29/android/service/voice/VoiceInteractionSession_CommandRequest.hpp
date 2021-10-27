#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./VoiceInteractionSession_Request.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::service::voice
{
	class VoiceInteractionSession_CommandRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		VoiceInteractionSession_CommandRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_CommandRequest() = default;
		
		// Methods
		jstring getCommand();
		void sendIntermediateResult(android::os::Bundle arg0);
		void sendResult(android::os::Bundle arg0);
	};
} // namespace android::service::voice

