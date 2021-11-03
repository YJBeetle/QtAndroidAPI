#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_CompleteVoiceRequest(const char *className, const char *sig, Ts...agv) : android::app::VoiceInteractor_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_CompleteVoiceRequest(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractor_CompleteVoiceRequest(android::app::VoiceInteractor_Prompt arg0, android::os::Bundle arg1);
		
		// Methods
		void onCompleteResult(android::os::Bundle arg0) const;
	};
} // namespace android::app

