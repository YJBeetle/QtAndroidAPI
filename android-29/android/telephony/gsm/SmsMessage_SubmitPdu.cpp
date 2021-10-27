#include "./SmsMessage_SubmitPdu.hpp"

namespace android::telephony::gsm
{
	// Fields
	jbyteArray SmsMessage_SubmitPdu::encodedMessage()
	{
		return __thiz.getObjectField(
			"encodedMessage",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray SmsMessage_SubmitPdu::encodedScAddress()
	{
		return __thiz.getObjectField(
			"encodedScAddress",
			"[B"
		).object<jbyteArray>();
	}
	
	SmsMessage_SubmitPdu::SmsMessage_SubmitPdu(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SmsMessage_SubmitPdu::SmsMessage_SubmitPdu()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.SmsMessage$SubmitPdu",
			"()V"
		);
	}
	
	// Methods
	jstring SmsMessage_SubmitPdu::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::telephony::gsm

