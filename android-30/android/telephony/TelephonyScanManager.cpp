#include "./TelephonyScanManager.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyScanManager::TelephonyScanManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TelephonyScanManager::TelephonyScanManager()
		: __JniBaseClass(
			"android.telephony.TelephonyScanManager",
			"()V"
		) {}
	
	// Methods
} // namespace android::telephony

