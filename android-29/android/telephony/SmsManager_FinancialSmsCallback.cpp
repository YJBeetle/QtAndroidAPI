#include "../database/CursorWindow.hpp"
#include "./SmsManager_FinancialSmsCallback.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	SmsManager_FinancialSmsCallback::SmsManager_FinancialSmsCallback()
		: JObject(
			"android.telephony.SmsManager$FinancialSmsCallback",
			"()V"
		) {}
	
	// Methods
	void SmsManager_FinancialSmsCallback::onFinancialSmsMessages(android::database::CursorWindow arg0) const
	{
		callMethod<void>(
			"onFinancialSmsMessages",
			"(Landroid/database/CursorWindow;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

