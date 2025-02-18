#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class TelephonyManager;
}
class JString;
class JString;

namespace android::telephony
{
	class TelephonyManager_UssdResponseCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager_UssdResponseCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_UssdResponseCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TelephonyManager_UssdResponseCallback();
		
		// Methods
		void onReceiveUssdResponse(android::telephony::TelephonyManager arg0, JString arg1, JString arg2) const;
		void onReceiveUssdResponseFailed(android::telephony::TelephonyManager arg0, JString arg1, jint arg2) const;
	};
} // namespace android::telephony

