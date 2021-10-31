#include "./TelephonyScanManager.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	TelephonyScanManager::TelephonyScanManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TelephonyScanManager::TelephonyScanManager()
		: __JniBaseClass(
			"android.telephony.TelephonyScanManager",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

