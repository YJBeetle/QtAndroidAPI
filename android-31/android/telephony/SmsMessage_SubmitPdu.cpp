#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./SmsMessage_SubmitPdu.hpp"

namespace android::telephony
{
	// Fields
	JByteArray SmsMessage_SubmitPdu::encodedMessage()
	{
		return getObjectField(
			"encodedMessage",
			"[B"
		);
	}
	JByteArray SmsMessage_SubmitPdu::encodedScAddress()
	{
		return getObjectField(
			"encodedScAddress",
			"[B"
		);
	}
	
	// QAndroidJniObject forward
	SmsMessage_SubmitPdu::SmsMessage_SubmitPdu(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString SmsMessage_SubmitPdu::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony

