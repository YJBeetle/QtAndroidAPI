#pragma once

#include "./TelephonyManager_NetworkSlicingException.hpp"

namespace android::telephony
{
	class TelephonyManager;
}

namespace android::telephony
{
	class TelephonyManager_TimeoutException : public android::telephony::TelephonyManager_NetworkSlicingException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TelephonyManager_TimeoutException(const char *className, const char *sig, Ts...agv) : android::telephony::TelephonyManager_NetworkSlicingException(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_TimeoutException(QAndroidJniObject obj) : android::telephony::TelephonyManager_NetworkSlicingException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

