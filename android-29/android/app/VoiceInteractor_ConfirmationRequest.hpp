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
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_ConfirmationRequest(const char *className, const char *sig, Ts...agv) : android::app::VoiceInteractor_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_ConfirmationRequest(QJniObject obj);
		
		// Constructors
		VoiceInteractor_ConfirmationRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1);
		
		// Methods
		void onConfirmationResult(jboolean arg0, android::os::Bundle arg1);
	};
} // namespace android::app

