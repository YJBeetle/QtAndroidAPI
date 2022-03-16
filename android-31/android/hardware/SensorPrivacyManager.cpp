#include "./SensorPrivacyManager.hpp"

namespace android::hardware
{
	// Fields
	
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

