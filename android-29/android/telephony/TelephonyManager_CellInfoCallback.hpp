#pragma once

#ifndef ANDROID_TELEPHONY_TELEPHONYMANAGER_CELLINFOCALLBACK
#define ANDROID_TELEPHONY_TELEPHONYMANAGER_CELLINFOCALLBACK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class TelephonyManager_CellInfoCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_MODEM_ERROR();
		static jint ERROR_TIMEOUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCellInfo(__jni_impl::__JniBaseClass arg0);
		void onError(jint arg0, jthrowable arg1);
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	jint TelephonyManager_CellInfoCallback::ERROR_MODEM_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_MODEM_ERROR"
		);
	}
	jint TelephonyManager_CellInfoCallback::ERROR_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"ERROR_TIMEOUT"
		);
	}
	
	// Constructors
	void TelephonyManager_CellInfoCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.TelephonyManager$CellInfoCallback",
			"()V");
	}
	
	// Methods
	void TelephonyManager_CellInfoCallback::onCellInfo(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCellInfo",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void TelephonyManager_CellInfoCallback::onError(jint arg0, jthrowable arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class TelephonyManager_CellInfoCallback : public __jni_impl::android::telephony::TelephonyManager_CellInfoCallback
	{
	public:
		TelephonyManager_CellInfoCallback(QAndroidJniObject obj) { __thiz = obj; }
		TelephonyManager_CellInfoCallback()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_TELEPHONYMANAGER_CELLINFOCALLBACK

