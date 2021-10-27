#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::database
{
	class CursorWindow;
}

namespace android::telephony
{
	class SmsManager_FinancialSmsCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		SmsManager_FinancialSmsCallback(QAndroidJniObject obj);
		// Constructors
		SmsManager_FinancialSmsCallback();
		
		// Methods
		void onFinancialSmsMessages(android::database::CursorWindow arg0);
	};
} // namespace android::telephony

