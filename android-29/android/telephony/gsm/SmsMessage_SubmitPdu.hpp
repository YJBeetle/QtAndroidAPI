#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::gsm
{
	class SmsMessage_SubmitPdu : public __JniBaseClass
	{
	public:
		// Fields
		jbyteArray encodedMessage();
		jbyteArray encodedScAddress();
		
		// QJniObject forward
		template<typename ...Ts> explicit SmsMessage_SubmitPdu(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SmsMessage_SubmitPdu(QJniObject obj);
		
		// Constructors
		SmsMessage_SubmitPdu();
		
		// Methods
		jstring toString();
	};
} // namespace android::telephony::gsm

