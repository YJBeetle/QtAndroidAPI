#include "../database/CursorWindow.hpp"
#include "./SmsManager_FinancialSmsCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	SmsManager_FinancialSmsCallback::SmsManager_FinancialSmsCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SmsManager_FinancialSmsCallback::SmsManager_FinancialSmsCallback()
		: __JniBaseClass(
			"android.telephony.SmsManager$FinancialSmsCallback",
			"()V"
		) {}
	
	// Methods
	void SmsManager_FinancialSmsCallback::onFinancialSmsMessages(android::database::CursorWindow arg0)
	{
		callMethod<void>(
			"onFinancialSmsMessages",
			"(Landroid/database/CursorWindow;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

