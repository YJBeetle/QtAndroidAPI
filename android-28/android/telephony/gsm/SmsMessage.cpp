#include "./SmsMessage_MessageClass.hpp"
#include "./SmsMessage_SubmitPdu.hpp"
#include "./SmsMessage.hpp"

namespace android::telephony::gsm
{
	// Fields
	jint SmsMessage::ENCODING_16BIT()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_16BIT"
		);
	}
	jint SmsMessage::ENCODING_7BIT()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_7BIT"
		);
	}
	jint SmsMessage::ENCODING_8BIT()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_8BIT"
		);
	}
	jint SmsMessage::ENCODING_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_UNKNOWN"
		);
	}
	jint SmsMessage::MAX_USER_DATA_BYTES()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"MAX_USER_DATA_BYTES"
		);
	}
	jint SmsMessage::MAX_USER_DATA_SEPTETS()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"MAX_USER_DATA_SEPTETS"
		);
	}
	jint SmsMessage::MAX_USER_DATA_SEPTETS_WITH_HEADER()
	{
		return getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"MAX_USER_DATA_SEPTETS_WITH_HEADER"
		);
	}
	
	// QJniObject forward
	SmsMessage::SmsMessage(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SmsMessage::SmsMessage()
		: JObject(
			"android.telephony.gsm.SmsMessage",
			"()V"
		) {}
	
	// Methods
	jintArray SmsMessage::calculateLength(jstring arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"calculateLength",
			"(Ljava/lang/CharSequence;Z)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	android::telephony::gsm::SmsMessage SmsMessage::createFromPdu(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"createFromPdu",
			"([B)Landroid/telephony/gsm/SmsMessage;",
			arg0
		);
	}
	android::telephony::gsm::SmsMessage_SubmitPdu SmsMessage::getSubmitPdu(jstring arg0, jstring arg1, jstring arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/gsm/SmsMessage$SubmitPdu;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::telephony::gsm::SmsMessage_SubmitPdu SmsMessage::getSubmitPdu(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, jboolean arg4)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/gsm/SmsMessage$SubmitPdu;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jint SmsMessage::getTPLayerLengthForPDU(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.telephony.gsm.SmsMessage",
			"getTPLayerLengthForPDU",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring SmsMessage::getDisplayMessageBody()
	{
		return callObjectMethod(
			"getDisplayMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getDisplayOriginatingAddress()
	{
		return callObjectMethod(
			"getDisplayOriginatingAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getEmailBody()
	{
		return callObjectMethod(
			"getEmailBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getEmailFrom()
	{
		return callObjectMethod(
			"getEmailFrom",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SmsMessage::getIndexOnSim()
	{
		return callMethod<jint>(
			"getIndexOnSim",
			"()I"
		);
	}
	jstring SmsMessage::getMessageBody()
	{
		return callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::telephony::gsm::SmsMessage_MessageClass SmsMessage::getMessageClass()
	{
		return callObjectMethod(
			"getMessageClass",
			"()Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	jstring SmsMessage::getOriginatingAddress()
	{
		return callObjectMethod(
			"getOriginatingAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray SmsMessage::getPdu()
	{
		return callObjectMethod(
			"getPdu",
			"()[B"
		).object<jbyteArray>();
	}
	jint SmsMessage::getProtocolIdentifier()
	{
		return callMethod<jint>(
			"getProtocolIdentifier",
			"()I"
		);
	}
	jstring SmsMessage::getPseudoSubject()
	{
		return callObjectMethod(
			"getPseudoSubject",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getServiceCenterAddress()
	{
		return callObjectMethod(
			"getServiceCenterAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SmsMessage::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint SmsMessage::getStatusOnSim()
	{
		return callMethod<jint>(
			"getStatusOnSim",
			"()I"
		);
	}
	jlong SmsMessage::getTimestampMillis()
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	jbyteArray SmsMessage::getUserData()
	{
		return callObjectMethod(
			"getUserData",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean SmsMessage::isCphsMwiMessage()
	{
		return callMethod<jboolean>(
			"isCphsMwiMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isEmail()
	{
		return callMethod<jboolean>(
			"isEmail",
			"()Z"
		);
	}
	jboolean SmsMessage::isMWIClearMessage()
	{
		return callMethod<jboolean>(
			"isMWIClearMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isMWISetMessage()
	{
		return callMethod<jboolean>(
			"isMWISetMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isMwiDontStore()
	{
		return callMethod<jboolean>(
			"isMwiDontStore",
			"()Z"
		);
	}
	jboolean SmsMessage::isReplace()
	{
		return callMethod<jboolean>(
			"isReplace",
			"()Z"
		);
	}
	jboolean SmsMessage::isReplyPathPresent()
	{
		return callMethod<jboolean>(
			"isReplyPathPresent",
			"()Z"
		);
	}
	jboolean SmsMessage::isStatusReportMessage()
	{
		return callMethod<jboolean>(
			"isStatusReportMessage",
			"()Z"
		);
	}
} // namespace android::telephony::gsm

