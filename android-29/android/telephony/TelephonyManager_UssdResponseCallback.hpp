#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::telephony
{
	class TelephonyManager;
}

namespace android::telephony
{
	class TelephonyManager_UssdResponseCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		TelephonyManager_UssdResponseCallback(QAndroidJniObject obj);
		// Constructors
		TelephonyManager_UssdResponseCallback();
		
		// Methods
		void onReceiveUssdResponse(android::telephony::TelephonyManager arg0, jstring arg1, jstring arg2);
		void onReceiveUssdResponse(android::telephony::TelephonyManager arg0, const QString &arg1, const QString &arg2);
		void onReceiveUssdResponseFailed(android::telephony::TelephonyManager arg0, jstring arg1, jint arg2);
		void onReceiveUssdResponseFailed(android::telephony::TelephonyManager arg0, const QString &arg1, jint arg2);
	};
} // namespace android::telephony

