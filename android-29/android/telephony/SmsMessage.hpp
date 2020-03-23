#pragma once

#ifndef ANDROID_TELEPHONY_SMSMESSAGE
#define ANDROID_TELEPHONY_SMSMESSAGE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony
{
	class SmsMessage_SubmitPdu;
}
namespace __jni_impl::android::telephony
{
	class SmsMessage_MessageClass;
}

namespace __jni_impl::android::telephony
{
	class SmsMessage : public __JniBaseClass
	{
	public:
		// Fields
		static jint ENCODING_16BIT();
		static jint ENCODING_7BIT();
		static jint ENCODING_8BIT();
		static jint ENCODING_UNKNOWN();
		static QAndroidJniObject FORMAT_3GPP();
		static QAndroidJniObject FORMAT_3GPP2();
		static jint MAX_USER_DATA_BYTES();
		static jint MAX_USER_DATA_BYTES_WITH_HEADER();
		static jint MAX_USER_DATA_SEPTETS();
		static jint MAX_USER_DATA_SEPTETS_WITH_HEADER();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getUserData();
		static QAndroidJniObject createFromPdu(jbyteArray arg0);
		static QAndroidJniObject createFromPdu(jbyteArray arg0, jstring arg1);
		static jint getTPLayerLengthForPDU(jstring arg0);
		static QAndroidJniObject calculateLength(jstring arg0, jboolean arg1);
		static QAndroidJniObject getSubmitPdu(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, jboolean arg4);
		static QAndroidJniObject getSubmitPdu(jstring arg0, jstring arg1, jstring arg2, jboolean arg3);
		QAndroidJniObject getServiceCenterAddress();
		QAndroidJniObject getOriginatingAddress();
		QAndroidJniObject getDisplayOriginatingAddress();
		QAndroidJniObject getMessageBody();
		QAndroidJniObject getMessageClass();
		QAndroidJniObject getDisplayMessageBody();
		QAndroidJniObject getPseudoSubject();
		jlong getTimestampMillis();
		jboolean isEmail();
		QAndroidJniObject getEmailBody();
		QAndroidJniObject getEmailFrom();
		jint getProtocolIdentifier();
		jboolean isReplace();
		jboolean isCphsMwiMessage();
		jboolean isMWIClearMessage();
		jboolean isMWISetMessage();
		jboolean isMwiDontStore();
		QAndroidJniObject getPdu();
		jint getStatusOnSim();
		jint getStatusOnIcc();
		jint getIndexOnSim();
		jint getIndexOnIcc();
		jint getStatus();
		jboolean isStatusReportMessage();
		jboolean isReplyPathPresent();
	};
} // namespace __jni_impl::android::telephony

#include "SmsMessage_SubmitPdu.hpp"
#include "SmsMessage_MessageClass.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jint SmsMessage::ENCODING_16BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_16BIT");
	}
	jint SmsMessage::ENCODING_7BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_7BIT");
	}
	jint SmsMessage::ENCODING_8BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_8BIT");
	}
	jint SmsMessage::ENCODING_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"ENCODING_UNKNOWN");
	}
	QAndroidJniObject SmsMessage::FORMAT_3GPP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsMessage",
			"FORMAT_3GPP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsMessage::FORMAT_3GPP2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsMessage",
			"FORMAT_3GPP2",
			"Ljava/lang/String;");
	}
	jint SmsMessage::MAX_USER_DATA_BYTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_BYTES");
	}
	jint SmsMessage::MAX_USER_DATA_BYTES_WITH_HEADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_BYTES_WITH_HEADER");
	}
	jint SmsMessage::MAX_USER_DATA_SEPTETS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_SEPTETS");
	}
	jint SmsMessage::MAX_USER_DATA_SEPTETS_WITH_HEADER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsMessage",
			"MAX_USER_DATA_SEPTETS_WITH_HEADER");
	}
	
	// Constructors
	void SmsMessage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SmsMessage",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SmsMessage::getUserData()
	{
		return __thiz.callObjectMethod(
			"getUserData",
			"()[B");
	}
	QAndroidJniObject SmsMessage::createFromPdu(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"createFromPdu",
			"([B)Landroid/telephony/SmsMessage;",
			arg0);
	}
	QAndroidJniObject SmsMessage::createFromPdu(jbyteArray arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"createFromPdu",
			"([BLjava/lang/String;)Landroid/telephony/SmsMessage;",
			arg0,
			arg1);
	}
	jint SmsMessage::getTPLayerLengthForPDU(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SmsMessage",
			"getTPLayerLengthForPDU",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject SmsMessage::calculateLength(jstring arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"calculateLength",
			"(Ljava/lang/String;Z)[I",
			arg0,
			arg1);
	}
	QAndroidJniObject SmsMessage::getSubmitPdu(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/SmsMessage$SubmitPdu;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	QAndroidJniObject SmsMessage::getSubmitPdu(jstring arg0, jstring arg1, jstring arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/SmsMessage$SubmitPdu;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject SmsMessage::getServiceCenterAddress()
	{
		return __thiz.callObjectMethod(
			"getServiceCenterAddress",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SmsMessage::getOriginatingAddress()
	{
		return __thiz.callObjectMethod(
			"getOriginatingAddress",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SmsMessage::getDisplayOriginatingAddress()
	{
		return __thiz.callObjectMethod(
			"getDisplayOriginatingAddress",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SmsMessage::getMessageBody()
	{
		return __thiz.callObjectMethod(
			"getMessageBody",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SmsMessage::getMessageClass()
	{
		return __thiz.callObjectMethod(
			"getMessageClass",
			"()Landroid/telephony/SmsMessage$MessageClass;");
	}
	QAndroidJniObject SmsMessage::getDisplayMessageBody()
	{
		return __thiz.callObjectMethod(
			"getDisplayMessageBody",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SmsMessage::getPseudoSubject()
	{
		return __thiz.callObjectMethod(
			"getPseudoSubject",
			"()Ljava/lang/String;");
	}
	jlong SmsMessage::getTimestampMillis()
	{
		return __thiz.callMethod<jlong>(
			"getTimestampMillis",
			"()J");
	}
	jboolean SmsMessage::isEmail()
	{
		return __thiz.callMethod<jboolean>(
			"isEmail",
			"()Z");
	}
	QAndroidJniObject SmsMessage::getEmailBody()
	{
		return __thiz.callObjectMethod(
			"getEmailBody",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SmsMessage::getEmailFrom()
	{
		return __thiz.callObjectMethod(
			"getEmailFrom",
			"()Ljava/lang/String;");
	}
	jint SmsMessage::getProtocolIdentifier()
	{
		return __thiz.callMethod<jint>(
			"getProtocolIdentifier",
			"()I");
	}
	jboolean SmsMessage::isReplace()
	{
		return __thiz.callMethod<jboolean>(
			"isReplace",
			"()Z");
	}
	jboolean SmsMessage::isCphsMwiMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isCphsMwiMessage",
			"()Z");
	}
	jboolean SmsMessage::isMWIClearMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isMWIClearMessage",
			"()Z");
	}
	jboolean SmsMessage::isMWISetMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isMWISetMessage",
			"()Z");
	}
	jboolean SmsMessage::isMwiDontStore()
	{
		return __thiz.callMethod<jboolean>(
			"isMwiDontStore",
			"()Z");
	}
	QAndroidJniObject SmsMessage::getPdu()
	{
		return __thiz.callObjectMethod(
			"getPdu",
			"()[B");
	}
	jint SmsMessage::getStatusOnSim()
	{
		return __thiz.callMethod<jint>(
			"getStatusOnSim",
			"()I");
	}
	jint SmsMessage::getStatusOnIcc()
	{
		return __thiz.callMethod<jint>(
			"getStatusOnIcc",
			"()I");
	}
	jint SmsMessage::getIndexOnSim()
	{
		return __thiz.callMethod<jint>(
			"getIndexOnSim",
			"()I");
	}
	jint SmsMessage::getIndexOnIcc()
	{
		return __thiz.callMethod<jint>(
			"getIndexOnIcc",
			"()I");
	}
	jint SmsMessage::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I");
	}
	jboolean SmsMessage::isStatusReportMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isStatusReportMessage",
			"()Z");
	}
	jboolean SmsMessage::isReplyPathPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isReplyPathPresent",
			"()Z");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SmsMessage : public __jni_impl::android::telephony::SmsMessage
	{
	public:
		SmsMessage(QAndroidJniObject obj) { __thiz = obj; }
		SmsMessage()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SMSMESSAGE

