#pragma once

#include "../../__JniBaseClass.hpp"
#include "./VoiceInteractor_Request.hpp"

namespace android::app
{
	class VoiceInteractor_Prompt;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class VoiceInteractor_AbortVoiceRequest : public android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		VoiceInteractor_AbortVoiceRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor_AbortVoiceRequest(android::app::VoiceInteractor_Prompt &arg0, android::os::Bundle &arg1);
		VoiceInteractor_AbortVoiceRequest() = default;
		
		// Methods
		void onAbortResult(android::os::Bundle arg0);
	};
} // namespace android::app

