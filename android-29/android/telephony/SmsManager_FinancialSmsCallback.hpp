#pragma once

#ifndef ANDROID_TELEPHONY_SMSMANAGER_FINANCIALSMSCALLBACK
#define ANDROID_TELEPHONY_SMSMANAGER_FINANCIALSMSCALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database
{
	class CursorWindow;
}

namespace __jni_impl::android::telephony
{
	class SmsManager_FinancialSmsCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFinancialSmsMessages(__jni_impl::android::database::CursorWindow arg0);
	};
} // namespace __jni_impl::android::telephony

#include "../database/CursorWindow.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void SmsManager_FinancialSmsCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SmsManager$FinancialSmsCallback",
			"()V");
	}
	
	// Methods
	void SmsManager_FinancialSmsCallback::onFinancialSmsMessages(__jni_impl::android::database::CursorWindow arg0)
	{
		__thiz.callMethod<void>(
			"onFinancialSmsMessages",
			"(Landroid/database/CursorWindow;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SmsManager_FinancialSmsCallback : public __jni_impl::android::telephony::SmsManager_FinancialSmsCallback
	{
	public:
		SmsManager_FinancialSmsCallback(QAndroidJniObject obj) { __thiz = obj; }
		SmsManager_FinancialSmsCallback()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SMSMANAGER_FINANCIALSMSCALLBACK

