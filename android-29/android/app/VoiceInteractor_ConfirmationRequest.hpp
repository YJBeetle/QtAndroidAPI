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
	class VoiceInteractor_ConfirmationRequest : public android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		VoiceInteractor_ConfirmationRequest(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor_ConfirmationRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1);
		VoiceInteractor_ConfirmationRequest() = default;
		
		// Methods
		void onConfirmationResult(jboolean arg0, android::os::Bundle arg1);
	};
} // namespace android::app

