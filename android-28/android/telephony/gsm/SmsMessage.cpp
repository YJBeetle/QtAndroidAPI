#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
#include "./SmsMessage_MessageClass.hpp"
#include "./SmsMessage_SubmitPdu.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	SmsMessage::SmsMessage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SmsMessage::SmsMessage()
		: JObject(
			"android.telephony.gsm.SmsMessage",
			"()V"
		) {}
	
	// Methods
	JIntArray SmsMessage::calculateLength(JString arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"calculateLength",
			"(Ljava/lang/CharSequence;Z)[I",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::telephony::gsm::SmsMessage SmsMessage::createFromPdu(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"createFromPdu",
			"([B)Landroid/telephony/gsm/SmsMessage;",
			arg0.object<jbyteArray>()
		);
	}
	android::telephony::gsm::SmsMessage_SubmitPdu SmsMessage::getSubmitPdu(JString arg0, JString arg1, JString arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/gsm/SmsMessage$SubmitPdu;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		);
	}
	android::telephony::gsm::SmsMessage_SubmitPdu SmsMessage::getSubmitPdu(JString arg0, JString arg1, jshort arg2, JByteArray arg3, jboolean arg4)
	{
		return callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/gsm/SmsMessage$SubmitPdu;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jbyteArray>(),
			arg4
		);
	}
	jint SmsMessage::getTPLayerLengthForPDU(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.telephony.gsm.SmsMessage",
			"getTPLayerLengthForPDU",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JString SmsMessage::getDisplayMessageBody() const
	{
		return callObjectMethod(
			"getDisplayMessageBody",
			"()Ljava/lang/String;"
		);
	}
	JString SmsMessage::getDisplayOriginatingAddress() const
	{
		return callObjectMethod(
			"getDisplayOriginatingAddress",
			"()Ljava/lang/String;"
		);
	}
	JString SmsMessage::getEmailBody() const
	{
		return callObjectMethod(
			"getEmailBody",
			"()Ljava/lang/String;"
		);
	}
	JString SmsMessage::getEmailFrom() const
	{
		return callObjectMethod(
			"getEmailFrom",
			"()Ljava/lang/String;"
		);
	}
	jint SmsMessage::getIndexOnSim() const
	{
		return callMethod<jint>(
			"getIndexOnSim",
			"()I"
		);
	}
	JString SmsMessage::getMessageBody() const
	{
		return callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		);
	}
	android::telephony::gsm::SmsMessage_MessageClass SmsMessage::getMessageClass() const
	{
		return callObjectMethod(
			"getMessageClass",
			"()Landroid/telephony/gsm/SmsMessage$MessageClass;"
		);
	}
	JString SmsMessage::getOriginatingAddress() const
	{
		return callObjectMethod(
			"getOriginatingAddress",
			"()Ljava/lang/String;"
		);
	}
	JByteArray SmsMessage::getPdu() const
	{
		return callObjectMethod(
			"getPdu",
			"()[B"
		);
	}
	jint SmsMessage::getProtocolIdentifier() const
	{
		return callMethod<jint>(
			"getProtocolIdentifier",
			"()I"
		);
	}
	JString SmsMessage::getPseudoSubject() const
	{
		return callObjectMethod(
			"getPseudoSubject",
			"()Ljava/lang/String;"
		);
	}
	JString SmsMessage::getServiceCenterAddress() const
	{
		return callObjectMethod(
			"getServiceCenterAddress",
			"()Ljava/lang/String;"
		);
	}
	jint SmsMessage::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint SmsMessage::getStatusOnSim() const
	{
		return callMethod<jint>(
			"getStatusOnSim",
			"()I"
		);
	}
	jlong SmsMessage::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	JByteArray SmsMessage::getUserData() const
	{
		return callObjectMethod(
			"getUserData",
			"()[B"
		);
	}
	jboolean SmsMessage::isCphsMwiMessage() const
	{
		return callMethod<jboolean>(
			"isCphsMwiMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isEmail() const
	{
		return callMethod<jboolean>(
			"isEmail",
			"()Z"
		);
	}
	jboolean SmsMessage::isMWIClearMessage() const
	{
		return callMethod<jboolean>(
			"isMWIClearMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isMWISetMessage() const
	{
		return callMethod<jboolean>(
			"isMWISetMessage",
			"()Z"
		);
	}
	jboolean SmsMessage::isMwiDontStore() const
	{
		return callMethod<jboolean>(
			"isMwiDontStore",
			"()Z"
		);
	}
	jboolean SmsMessage::isReplace() const
	{
		return callMethod<jboolean>(
			"isReplace",
			"()Z"
		);
	}
	jboolean SmsMessage::isReplyPathPresent() const
	{
		return callMethod<jboolean>(
			"isReplyPathPresent",
			"()Z"
		);
	}
	jboolean SmsMessage::isStatusReportMessage() const
	{
		return callMethod<jboolean>(
			"isStatusReportMessage",
			"()Z"
		);
	}
} // namespace android::telephony::gsm

