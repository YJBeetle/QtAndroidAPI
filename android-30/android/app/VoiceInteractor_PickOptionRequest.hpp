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
	class VoiceInteractor_PickOptionRequest : public android::app::VoiceInteractor_Request
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_PickOptionRequest(const char *className, const char *sig, Ts...agv) : android::app::VoiceInteractor_Request(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_PickOptionRequest(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractor_PickOptionRequest(android::app::VoiceInteractor_Prompt arg0, jarray arg1, android::os::Bundle arg2);
		
		// Methods
		void onPickOptionResult(jboolean arg0, jarray arg1, android::os::Bundle arg2);
	};
} // namespace android::app

