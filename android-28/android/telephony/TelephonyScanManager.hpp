#pragma once

#include "./TelephonyScanManager.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline TelephonyScanManager::TelephonyScanManager()
		: JObject(
			"android.telephony.TelephonyScanManager",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

// Base class headers

