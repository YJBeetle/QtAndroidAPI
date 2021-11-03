#pragma once

#include "../../../JObject.hpp"


namespace android::telephony::gsm
{
	class SmsMessage_SubmitPdu : public JObject
	{
	public:
		// Fields
		jbyteArray encodedMessage();
		jbyteArray encodedScAddress();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SmsMessage_SubmitPdu(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SmsMessage_SubmitPdu(QAndroidJniObject obj);
		
		// Constructors
		SmsMessage_SubmitPdu();
		
		// Methods
		jstring toString();
	};
} // namespace android::telephony::gsm

