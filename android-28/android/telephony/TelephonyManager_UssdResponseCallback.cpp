#include "./TelephonyManager.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TelephonyManager_UssdResponseCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QJniObject forward
	TelephonyManager_UssdResponseCallback::TelephonyManager_UssdResponseCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TelephonyManager_UssdResponseCallback::TelephonyManager_UssdResponseCallback()
		: JObject(
			"android.telephony.TelephonyManager$UssdResponseCallback",
			"()V"
		) {}
	
	// Methods
	void TelephonyManager_UssdResponseCallback::onReceiveUssdResponse(android::telephony::TelephonyManager arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"onReceiveUssdResponse",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void TelephonyManager_UssdResponseCallback::onReceiveUssdResponseFailed(android::telephony::TelephonyManager arg0, JString arg1, jint arg2)
	{
		callMethod<void>(
			"onReceiveUssdResponseFailed",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
} // namespace android::telephony

