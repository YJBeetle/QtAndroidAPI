#pragma once

#include "./VoiceInteractor_Request.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_CommandRequest(const char *className, const char *sig, Ts...agv) : android::app::VoiceInteractor_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_CommandRequest(QJniObject obj) : android::app::VoiceInteractor_Request(obj) {}
		
		// Constructors
		VoiceInteractor_CommandRequest(JString arg0, android::os::Bundle arg1);
		
		// Methods
		void onCommandResult(jboolean arg0, android::os::Bundle arg1) const;
	};
} // namespace android::app

