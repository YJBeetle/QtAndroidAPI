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
	class VoiceInteractionSession_PickOptionRequest : public android::service::voice::VoiceInteractionSession_Request
	{
	public:
		// Fields
		
		VoiceInteractionSession_PickOptionRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractionSession_PickOptionRequest() = default;
		
		// Methods
		jarray getOptions();
		jstring getPrompt();
		QAndroidJniObject getVoicePrompt();
		void sendIntermediatePickOptionResult(jarray arg0, android::os::Bundle arg1);
		void sendPickOptionResult(jarray arg0, android::os::Bundle arg1);
	};
} // namespace android::service::voice

