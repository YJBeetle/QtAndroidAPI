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
		
		// QJniObject forward
		template<typename ...Ts> explicit SmsManager_FinancialSmsCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SmsManager_FinancialSmsCallback(QJniObject obj);
		
		// Constructors
		SmsManager_FinancialSmsCallback();
		
		// Methods
		void onFinancialSmsMessages(android::database::CursorWindow arg0);
	};
} // namespace android::telephony

