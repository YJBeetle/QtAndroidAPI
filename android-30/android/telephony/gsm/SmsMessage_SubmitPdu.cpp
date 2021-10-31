#include "./SmsMessage_SubmitPdu.hpp"

namespace android::telephony::gsm
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
	
	// QAndroidJniObject forward
	SmsMessage_SubmitPdu::SmsMessage_SubmitPdu(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SmsMessage_SubmitPdu::SmsMessage_SubmitPdu()
		: __JniBaseClass(
			"android.telephony.gsm.SmsMessage$SubmitPdu",
			"()V"
		) {}
	
	// Methods
	jstring SmsMessage_SubmitPdu::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony::gsm

