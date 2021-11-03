#include "./SensorPrivacyManager.hpp"

namespace android::hardware
{
	// Fields
	
	// QAndroidJniObject forward
	SensorPrivacyManager::SensorPrivacyManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SensorPrivacyManager::supportsSensorToggle(jint arg0)
	{
		return callMethod<jboolean>(
			"supportsSensorToggle",
			"(I)Z",
			arg0
		);
	}
} // namespace android::hardware

