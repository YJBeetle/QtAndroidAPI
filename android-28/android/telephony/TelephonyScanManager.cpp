#include "./TelephonyScanManager.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyScanManager::TelephonyScanManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TelephonyScanManager::TelephonyScanManager()
		: JObject(
			"android.telephony.TelephonyScanManager",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

