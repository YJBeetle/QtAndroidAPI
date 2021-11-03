#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class TelephonyManager;
}

namespace android::telephony
{
	class TelephonyManager_UssdResponseCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager_UssdResponseCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_UssdResponseCallback(QJniObject obj);
		
		// Constructors
		TelephonyManager_UssdResponseCallback();
		
		// Methods
		void onReceiveUssdResponse(android::telephony::TelephonyManager arg0, jstring arg1, jstring arg2);
		void onReceiveUssdResponseFailed(android::telephony::TelephonyManager arg0, jstring arg1, jint arg2);
	};
} // namespace android::telephony

