#include "./SensorPrivacyManager.hpp"

namespace android::hardware
{
	// Fields
	
	// QJniObject forward
	SensorPrivacyManager::SensorPrivacyManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean SensorPrivacyManager::supportsSensorToggle(jint arg0) const
	{
		return callMethod<jboolean>(
			"supportsSensorToggle",
			"(I)Z",
			arg0
		);
	}
} // namespace android::hardware

