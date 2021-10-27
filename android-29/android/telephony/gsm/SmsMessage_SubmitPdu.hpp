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
		
		SmsMessage_SubmitPdu(QAndroidJniObject obj);
		// Constructors
		SmsMessage_SubmitPdu();
		
		// Methods
		jstring toString();
	};
} // namespace android::telephony::gsm

