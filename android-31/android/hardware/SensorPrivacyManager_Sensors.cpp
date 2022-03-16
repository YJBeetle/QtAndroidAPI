#include "./SensorPrivacyManager_Sensors.hpp"

namespace android::hardware
{
	// Fields
	jint SensorPrivacyManager_Sensors::CAMERA()
	{
		return getStaticField<jint>(
			"android.hardware.SensorPrivacyManager$Sensors",
			"CAMERA"
		);
	}
	jint SensorPrivacyManager_Sensors::MICROPHONE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorPrivacyManager$Sensors",
			"MICROPHONE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

