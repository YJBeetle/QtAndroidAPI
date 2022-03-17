#pragma once

#include "../database/CursorWindow.def.hpp"
#include "./SmsManager_FinancialSmsCallback.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline SmsManager_FinancialSmsCallback::SmsManager_FinancialSmsCallback()
		: JObject(
			"android.telephony.SmsManager$FinancialSmsCallback",
			"()V"
		) {}
	
	// Methods
	inline void SmsManager_FinancialSmsCallback::onFinancialSmsMessages(android::database::CursorWindow arg0) const
	{
		callMethod<void>(
			"onFinancialSmsMessages",
			"(Landroid/database/CursorWindow;)V",
			arg0.object()
		);
	}
} // namespace android::telephony

// Base class headers

