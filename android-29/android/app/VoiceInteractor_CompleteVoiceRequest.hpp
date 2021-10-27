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
	class VoiceInteractor_CompleteVoiceRequest : public android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		VoiceInteractor_CompleteVoiceRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor_CompleteVoiceRequest(android::app::VoiceInteractor_Prompt &arg0, android::os::Bundle &arg1);
		VoiceInteractor_CompleteVoiceRequest() = default;
		
		// Methods
		void onCompleteResult(android::os::Bundle arg0);
	};
} // namespace android::app

