#pragma once

#include "./SensorPrivacyManager_Sensors.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint SensorPrivacyManager_Sensors::CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.SensorPrivacyManager$Sensors",
			"CAMERA"
		);
	}
	inline jint SensorPrivacyManager_Sensors::MICROPHONE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorPrivacyManager$Sensors",
			"MICROPHONE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

// Base class headers

