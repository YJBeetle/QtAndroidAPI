#pragma once

#include "../../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::telephony::gsm
{
	class SmsMessage_MessageClass : public java::lang::Enum
	{
	public:
		// Fields
		static android::telephony::gsm::SmsMessage_MessageClass CLASS_0();
		static android::telephony::gsm::SmsMessage_MessageClass CLASS_1();
		static android::telephony::gsm::SmsMessage_MessageClass CLASS_2();
		static android::telephony::gsm::SmsMessage_MessageClass CLASS_3();
		static android::telephony::gsm::SmsMessage_MessageClass UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsMessage_MessageClass(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SmsMessage_MessageClass(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::gsm::SmsMessage_MessageClass valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::telephony::gsm

