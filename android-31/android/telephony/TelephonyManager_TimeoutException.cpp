#include "./TelephonyManager.hpp"
#include "./TelephonyManager_TimeoutException.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	TelephonyManager_TimeoutException::TelephonyManager_TimeoutException(QAndroidJniObject obj) : android::telephony::TelephonyManager_NetworkSlicingException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

