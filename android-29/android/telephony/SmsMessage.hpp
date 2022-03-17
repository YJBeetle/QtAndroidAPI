#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./SmsMessage_MessageClass.def.hpp"
#include "./SmsMessage_SubmitPdu.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./SmsMessage.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint SmsMessage::ENCODING_16BIT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_16BIT"
		);
	}
	inline jint SmsMessage::ENCODING_7BIT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_7BIT"
		);
	}
	inline jint SmsMessage::ENCODING_8BIT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_8BIT"
		);
	}
	inline jint SmsMessage::ENCODING_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_UNKNOWN"
		);
	}
	inline JString SmsMessage::FORMAT_3GPP()
	{
		return getStaticObjectField(
			"android.telephony.SmsMessage",
			"FORMAT_3GPP",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsMessage::FORMAT_3GPP2()
	{
		return getStaticObjectField(
			"android.telephony.SmsMessage",
			"FORMAT_3GPP2",
			"Ljava/lang/String;"
		);
	}
	inline jint SmsMessage::MAX_USER_DATA_BYTES()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_BYTES"
		);
	}
	inline jint SmsMessage::MAX_USER_DATA_BYTES_WITH_HEADER()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_BYTES_WITH_HEADER"
		);
	}
	inline jint SmsMessage::MAX_USER_DATA_SEPTETS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_SEPTETS"
		);
	}
	inline jint SmsMessage::MAX_USER_DATA_SEPTETS_WITH_HEADER()
	{
		return getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_SEPTETS_WITH_HEADER"
		);
	}
	
	// Constructors
	
	// Methods
	inline JIntArray SmsMessage::calculateLength(JString arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"calculateLength",
			"(Ljava/lang/CharSequence;Z)[I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::telephony::SmsMessage SmsMessage::createFromPdu(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"createFromPdu",
			"([B)Landroid/telephony/SmsMessage;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::telephony::SmsMessage SmsMessage::createFromPdu(JByteArray arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"createFromPdu",
			"([BLjava/lang/String;)Landroid/telephony/SmsMessage;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>()
		);
	}
	inline android::telephony::SmsMessage_SubmitPdu SmsMessage::getSubmitPdu(JString arg0, JString arg1, JString arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/SmsMessage$SubmitPdu;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		);
	}
	inline android::telephony::SmsMessage_SubmitPdu SmsMessage::getSubmitPdu(JString arg0, JString arg1, jshort arg2, JByteArray arg3, jboolean arg4)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/SmsMessage$SubmitPdu;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jbyteArray>(),
			arg4
		);
	}
	inline jint SmsMessage::getTPLayerLengthForPDU(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.telephony.SmsMessage",
			"getTPLayerLengthForPDU",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString SmsMessage::getDisplayMessageBody() const
	{
		return callObjectMethod(
			"getDisplayMessageBody",
			"()Ljava/lang/String;"
		);
	}
	inline JString SmsMessage::getDisplayOriginatingAddress() const
	{
		return callObjectMethod(
			"getDisplayOriginatingAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JString SmsMessage::getEmailBody() const
	{
		return callObjectMethod(
			"getEmailBody",
			"()Ljava/lang/String;"
		);
	}
	inline JString SmsMessage::getEmailFrom() const
	{
		return callObjectMethod(
			"getEmailFrom",
			"()Ljava/lang/String;"
		);
	}
	inline jint SmsMessage::getIndexOnIcc() const
	{
		return callMethod<jint>(
			"getIndexOnIcc",
			"()I"
		);
	}
	inline jint SmsMessage::getIndexOnSim() const
	{
		return callMethod<jint>(
			"getIndexOnSim",
			"()I"
		);
	}
	inline JString SmsMessage::getMessageBody() const
	{
		return callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;"
		);
	}
	inline android::telephony::SmsMessage_MessageClass SmsMessage::getMessageClass() const
	{
		return callObjectMethod(
			"getMessageClass",
			"()Landroid/telephony/SmsMessage$MessageClass;"
		);
	}
	inline JString SmsMessage::getOriginatingAddress() const
	{
		return callObjectMethod(
			"getOriginatingAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray SmsMessage::getPdu() const
	{
		return callObjectMethod(
			"getPdu",
			"()[B"
		);
	}
	inline jint SmsMessage::getProtocolIdentifier() const
	{
		return callMethod<jint>(
			"getProtocolIdentifier",
			"()I"
		);
	}
	inline JString SmsMessage::getPseudoSubject() const
	{
		return callObjectMethod(
			"getPseudoSubject",
			"()Ljava/lang/String;"
		);
	}
	inline JString SmsMessage::getServiceCenterAddress() const
	{
		return callObjectMethod(
			"getServiceCenterAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint SmsMessage::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline jint SmsMessage::getStatusOnIcc() const
	{
		return callMethod<jint>(
			"getStatusOnIcc",
			"()I"
		);
	}
	inline jint SmsMessage::getStatusOnSim() const
	{
		return callMethod<jint>(
			"getStatusOnSim",
			"()I"
		);
	}
	inline jlong SmsMessage::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	inline JByteArray SmsMessage::getUserData() const
	{
		return callObjectMethod(
			"getUserData",
			"()[B"
		);
	}
	inline jboolean SmsMessage::isCphsMwiMessage() const
	{
		return callMethod<jboolean>(
			"isCphsMwiMessage",
			"()Z"
		);
	}
	inline jboolean SmsMessage::isEmail() const
	{
		return callMethod<jboolean>(
			"isEmail",
			"()Z"
		);
	}
	inline jboolean SmsMessage::isMWIClearMessage() const
	{
		return callMethod<jboolean>(
			"isMWIClearMessage",
			"()Z"
		);
	}
	inline jboolean SmsMessage::isMWISetMessage() const
	{
		return callMethod<jboolean>(
			"isMWISetMessage",
			"()Z"
		);
	}
	inline jboolean SmsMessage::isMwiDontStore() const
	{
		return callMethod<jboolean>(
			"isMwiDontStore",
			"()Z"
		);
	}
	inline jboolean SmsMessage::isReplace() const
	{
		return callMethod<jboolean>(
			"isReplace",
			"()Z"
		);
	}
	inline jboolean SmsMessage::isReplyPathPresent() const
	{
		return callMethod<jboolean>(
			"isReplyPathPresent",
			"()Z"
		);
	}
	inline jboolean SmsMessage::isStatusReportMessage() const
	{
		return callMethod<jboolean>(
			"isStatusReportMessage",
			"()Z"
		);
	}
} // namespace android::telephony

// Base class headers

