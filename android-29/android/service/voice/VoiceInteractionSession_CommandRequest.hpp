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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractionSession_CommandRequest(const char *className, const char *sig, Ts...agv) : android::service::voice::VoiceInteractionSession_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractionSession_CommandRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getCommand();
		void sendIntermediateResult(android::os::Bundle arg0);
		void sendResult(android::os::Bundle arg0);
	};
} // namespace android::service::voice

