#pragma once

#include "./VoiceInteractor_Request.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app
{
	class VoiceInteractor_CommandRequest : public android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_CommandRequest(const char *className, const char *sig, Ts...agv) : android::app::VoiceInteractor_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_CommandRequest(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractor_CommandRequest(JString arg0, android::os::Bundle arg1);
		
		// Methods
		void onCommandResult(jboolean arg0, android::os::Bundle arg1);
	};
} // namespace android::app

