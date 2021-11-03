#include "./TelephonyScanManager.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	TelephonyScanManager::TelephonyScanManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TelephonyScanManager::TelephonyScanManager()
		: JObject(
			"android.telephony.TelephonyScanManager",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

