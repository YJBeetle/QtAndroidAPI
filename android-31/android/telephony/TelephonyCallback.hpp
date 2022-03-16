#pragma once

#include "./TelephonyCallback.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline TelephonyCallback::TelephonyCallback()
		: JObject(
			"android.telephony.TelephonyCallback",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

// Base class headers

