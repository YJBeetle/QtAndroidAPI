#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class CursorWindow;
}

namespace android::telephony
{
	class SmsManager_FinancialSmsCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsManager_FinancialSmsCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SmsManager_FinancialSmsCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SmsManager_FinancialSmsCallback();
		
		// Methods
		void onFinancialSmsMessages(android::database::CursorWindow arg0) const;
	};
} // namespace android::telephony

