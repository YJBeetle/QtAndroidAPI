#pragma once

#include "../os/Bundle.def.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_CommandRequest.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline VoiceInteractor_CommandRequest::VoiceInteractor_CommandRequest(JString arg0, android::os::Bundle arg1)
		: android::app::VoiceInteractor_Request(
			"android.app.VoiceInteractor$CommandRequest",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline void VoiceInteractor_CommandRequest::onCommandResult(jboolean arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onCommandResult",
			"(ZLandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::app

// Base class headers
#include "./VoiceInteractor_Request.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
