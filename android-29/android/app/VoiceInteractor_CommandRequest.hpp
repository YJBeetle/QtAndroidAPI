#pragma once

#include "../../__JniBaseClass.hpp"
#include "./VoiceInteractor_Request.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class VoiceInteractor_CommandRequest : public android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		VoiceInteractor_CommandRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor_CommandRequest(jstring arg0, android::os::Bundle arg1);
		VoiceInteractor_CommandRequest() = default;
		
		// Methods
		void onCommandResult(jboolean arg0, android::os::Bundle arg1);
	};
} // namespace android::app

