#pragma once

#ifndef ANDROID_TELEPHONY_TELEPHONYMANAGER_USSDRESPONSECALLBACK
#define ANDROID_TELEPHONY_TELEPHONYMANAGER_USSDRESPONSECALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony
{
	class TelephonyManager;
}

namespace __jni_impl::android::telephony
{
	class TelephonyManager_UssdResponseCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onReceiveUssdResponse(__jni_impl::android::telephony::TelephonyManager arg0, jstring arg1, jstring arg2);
		void onReceiveUssdResponseFailed(__jni_impl::android::telephony::TelephonyManager arg0, jstring arg1, jint arg2);
	};
} // namespace __jni_impl::android::telephony

#include "TelephonyManager.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void TelephonyManager_UssdResponseCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyManager$UssdResponseCallback",
			"()V");
	}
	
	// Methods
	void TelephonyManager_UssdResponseCallback::onReceiveUssdResponse(__jni_impl::android::telephony::TelephonyManager arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"onReceiveUssdResponse",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void TelephonyManager_UssdResponseCallback::onReceiveUssdResponseFailed(__jni_impl::android::telephony::TelephonyManager arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onReceiveUssdResponseFailed",
			"(Landroid/telephony/TelephonyManager;Ljava/lang/String;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class TelephonyManager_UssdResponseCallback : public __jni_impl::android::telephony::TelephonyManager_UssdResponseCallback
	{
	public:
		TelephonyManager_UssdResponseCallback(QAndroidJniObject obj) { __thiz = obj; }
		TelephonyManager_UssdResponseCallback()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_TELEPHONYMANAGER_USSDRESPONSECALLBACK

