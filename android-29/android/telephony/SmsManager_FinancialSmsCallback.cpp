#include "../database/CursorWindow.hpp"
#include "./SmsManager_FinancialSmsCallback.hpp"

namespace android::telephony
{
	// Fields
	
	SmsManager_FinancialSmsCallback::SmsManager_FinancialSmsCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SmsManager_FinancialSmsCallback::SmsManager_FinancialSmsCallback()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SmsManager$FinancialSmsCallback",
			"()V"
		);
	}
	
	// Methods
	void SmsManager_FinancialSmsCallback::onFinancialSmsMessages(android::database::CursorWindow arg0)
	{
		__thiz.callMethod<void>(
			"onFinancialSmsMessages",
			"(Landroid/database/CursorWindow;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telephony

