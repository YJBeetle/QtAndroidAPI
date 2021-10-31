#include "./TelephonyManager.hpp"
#include "./TelephonyManager_TimeoutException.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyManager_TimeoutException::TelephonyManager_TimeoutException(QJniObject obj) : android::telephony::TelephonyManager_NetworkSlicingException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

