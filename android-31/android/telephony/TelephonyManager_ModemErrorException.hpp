#pragma once

#include "./TelephonyManager_NetworkSlicingException.hpp"

namespace android::telephony
{
	class TelephonyManager;
}

namespace android::telephony
{
	class TelephonyManager_ModemErrorException : public android::telephony::TelephonyManager_NetworkSlicingException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager_ModemErrorException(const char *className, const char *sig, Ts...agv) : android::telephony::TelephonyManager_NetworkSlicingException(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_ModemErrorException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

