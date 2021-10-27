#include "./TelephonyScanManager.hpp"

namespace android::telephony
{
	// Fields
	
	TelephonyScanManager::TelephonyScanManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TelephonyScanManager::TelephonyScanManager()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyScanManager",
			"()V"
		);
	}
	
	// Methods
} // namespace android::telephony

