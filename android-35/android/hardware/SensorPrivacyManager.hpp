#pragma once

#include "./SensorPrivacyManager.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint SensorPrivacyManager::TOGGLE_TYPE_HARDWARE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorPrivacyManager",
			"TOGGLE_TYPE_HARDWARE"
		);
	}
	inline jint SensorPrivacyManager::TOGGLE_TYPE_SOFTWARE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorPrivacyManager",
			"TOGGLE_TYPE_SOFTWARE"
		);
	}
	
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
	inline jboolean SensorPrivacyManager::supportsSensorToggle(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"supportsSensorToggle",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
