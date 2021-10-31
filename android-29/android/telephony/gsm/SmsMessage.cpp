#include "./SmsMessage_MessageClass.hpp"
#include "./SmsMessage_SubmitPdu.hpp"
#include "./SmsMessage.hpp"

namespace android::telephony::gsm
{
	// Fields
	jint SmsMessage::ENCODING_16BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_16BIT"
		);
	}
	jint SmsMessage::ENCODING_7BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_7BIT"
		);
	}
	jint SmsMessage::ENCODING_8BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_8BIT"
		);
	}
	jint SmsMessage::ENCODING_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"ENCODING_UNKNOWN"
		);
	}
	jint SmsMessage::MAX_USER_DATA_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"MAX_USER_DATA_BYTES"
		);
	}
	jint SmsMessage::MAX_USER_DATA_SEPTETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"MAX_USER_DATA_SEPTETS"
		);
	}
	jint SmsMessage::MAX_USER_DATA_SEPTETS_WITH_HEADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.gsm.SmsMessage",
			"MAX_USER_DATA_SEPTETS_WITH_HEADER"
		);
	}
	
	SmsMessage::SmsMessage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SmsMessage::SmsMessage()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.SmsMessage",
			"()V"
		);
	}
	
	// Methods
	jintArray SmsMessage::calculateLength(jstring arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"calculateLength",
			"(Ljava/lang/CharSequence;Z)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	QAndroidJniObject SmsMessage::createFromPdu(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"createFromPdu",
			"([B)Landroid/telephony/gsm/SmsMessage;",
			arg0
		);
	}
	QAndroidJniObject SmsMessage::getSubmitPdu(jstring arg0, jstring arg1, jstring arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/gsm/SmsMessage$SubmitPdu;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject SmsMessage::getSubmitPdu(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.gsm.SmsMessage",
			"getTPLayerLengthForPDU",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring SmsMessage::getDisplayMessageBody()
	{
		return __thiz.callObjectMethod(
			"getDisplayMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getDisplayOriginatingAddress()
	{
		return __thiz.callObjectMethod(
			"getDisplayOriginatingAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getEmailBody()
	{
		return __thiz.callObjectMethod(
			"getEmailBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getEmailFrom()
	{
		return __thiz.callObjectMethod(
			"getEmailFrom",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SmsMessage::getIndexOnSim()
	{
		return __thiz.callMethod<jint>(
			"getIndexOnSim",
			"()I"
		);
	}
	jstring SmsMessage::getMessageBody()
	{
		return __thiz.callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SmsMessage::getMessageClass()
	{
		return __thiz.callObjectMethod(
			"getMessageClass",
			"()Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	jstring SmsMessage::getOriginatingAddress()
	{
		return __thiz.callObjectMethod(
			"getOriginatingAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray SmsMessage::getPdu()
	{
		return __thiz.callObjectMethod(
			"getPdu",
			"()[B"
		).object<jbyteArray>();
	}
	jint SmsMessage::getProtocolIdentifier()
	{
		return __thiz.callMethod<jint>(
			"getProtocolIdentifier",
			"()I"
		);
	}
	jstring SmsMessage::getPseudoSubject()
	{
		return __thiz.callObjectMethod(
			"getPseudoSubject",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getServiceCenterAddress()
	{
		return __thiz.callObjectMethod(
			"getServiceCenterAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SmsMessage::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint SmsMessage::getStatusOnSim()
	{
		return __thiz.callMethod<jint>(
			"getStatusOnSim",
			"()I"
		);
	}
	jlong SmsMessage::getTimestampMillis()
	{
		return __thiz.callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	jbyteArray SmsMessage::getUserData()
	{
		return __thiz.callObjectMethod(
			"getUserData",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean SmsMessage::isCphsMwiMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isCphsMwiMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isEmail()
	{
		return __thiz.callMethod<jboolean>(
			"isEmail",
			"()Z"
		);
	}
	jboolean SmsMessage::isMWIClearMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isMWIClearMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isMWISetMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isMWISetMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isMwiDontStore()
	{
		return __thiz.callMethod<jboolean>(
			"isMwiDontStore",
			"()Z"
		);
	}
	jboolean SmsMessage::isReplace()
	{
		return __thiz.callMethod<jboolean>(
			"isReplace",
			"()Z"
		);
	}
	jboolean SmsMessage::isReplyPathPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isReplyPathPresent",
			"()Z"
		);
	}
	jboolean SmsMessage::isStatusReportMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isStatusReportMessage",
			"()Z"
		);
	}
} // namespace android::telephony::gsm

