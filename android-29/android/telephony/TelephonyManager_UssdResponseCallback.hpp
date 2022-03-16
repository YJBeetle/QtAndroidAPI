#pragma once

#include "./TelephonyManager.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TelephonyManager_UssdResponseCallback.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline TelephonyManager_UssdResponseCallback::TelephonyManager_UssdResponseCallback()
		: JObject(
			"android.telephony.TelephonyManager$UssdResponseCallback",
			"()V"
		) {}
	
	// Methods
	inline void TelephonyManager_UssdResponseCallback::onReceiveUssdResponse(android::telephony::TelephonyManager arg0, JString arg1, JString arg2) const
	{
		callMethod<void>(
			"onReceiveUssdResponse",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline void TelephonyManager_UssdResponseCallback::onReceiveUssdResponseFailed(android::telephony::TelephonyManager arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"onReceiveUssdResponseFailed",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
} // namespace android::telephony

// Base class headers

