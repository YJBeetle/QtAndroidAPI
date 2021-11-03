#include "./SmsMessage_SubmitPdu.hpp"

namespace android::telephony
{
	// Fields
	jbyteArray SmsMessage_SubmitPdu::encodedMessage()
	{
		return getObjectField(
			"encodedMessage",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray SmsMessage_SubmitPdu::encodedScAddress()
	{
		return getObjectField(
			"encodedScAddress",
			"[B"
		).object<jbyteArray>();
	}
	
	// QJniObject forward
	SmsMessage_SubmitPdu::SmsMessage_SubmitPdu(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring SmsMessage_SubmitPdu::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony

