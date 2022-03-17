#pragma once

#include "./SensorPrivacyManager.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean SensorPrivacyManager::supportsSensorToggle(jint arg0) const
	{
		return callMethod<jboolean>(
			"supportsSensorToggle",
			"(I)Z",
			arg0
		);
	}
} // namespace android::hardware

// Base class headers

