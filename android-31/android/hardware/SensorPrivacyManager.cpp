#include "./SensorPrivacyManager.hpp"

namespace android::hardware
{
	// Fields
	
	// QJniObject forward
	SensorPrivacyManager::SensorPrivacyManager(QJniObject obj) : __JniBaseClass(obj) {}
	
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

