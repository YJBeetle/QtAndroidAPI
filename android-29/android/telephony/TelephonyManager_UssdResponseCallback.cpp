#include "./TelephonyManager.hpp"
#include "./TelephonyManager_UssdResponseCallback.hpp"

namespace android::telephony
{
	// Fields
	
	TelephonyManager_UssdResponseCallback::TelephonyManager_UssdResponseCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TelephonyManager_UssdResponseCallback::TelephonyManager_UssdResponseCallback()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyManager$UssdResponseCallback",
			"()V"
		);
	}
	
	// Methods
	void TelephonyManager_UssdResponseCallback::onReceiveUssdResponse(android::telephony::TelephonyManager arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onReceiveUssdResponse",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void TelephonyManager_UssdResponseCallback::onReceiveUssdResponseFailed(android::telephony::TelephonyManager arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onReceiveUssdResponseFailed",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::telephony

