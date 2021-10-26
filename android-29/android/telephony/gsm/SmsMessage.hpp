#pragma once

#ifndef ANDROID_TELEPHONY_GSM_SMSMESSAGE
#define ANDROID_TELEPHONY_GSM_SMSMESSAGE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::telephony::gsm
{
	class SmsMessage_SubmitPdu;
}
namespace __jni_impl::android::telephony::gsm
{
	class SmsMessage_MessageClass;
}

namespace __jni_impl::android::telephony::gsm
{
	class SmsMessage : public __JniBaseClass
	{
	public:
		// Fields
		static jint ENCODING_16BIT();
		static jint ENCODING_7BIT();
		static jint ENCODING_8BIT();
		static jint ENCODING_UNKNOWN();
		static jint MAX_USER_DATA_BYTES();
		static jint MAX_USER_DATA_SEPTETS();
		static jint MAX_USER_DATA_SEPTETS_WITH_HEADER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createFromPdu(jbyteArray arg0);
		static jint getTPLayerLengthForPDU(jstring arg0);
		static jint getTPLayerLengthForPDU(const QString &arg0);
		static jintArray calculateLength(jstring arg0, jboolean arg1);
		static jintArray calculateLength(const QString &arg0, jboolean arg1);
		static QAndroidJniObject getSubmitPdu(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, jboolean arg4);
		static QAndroidJniObject getSubmitPdu(const QString &arg0, const QString &arg1, jshort arg2, jbyteArray arg3, jboolean arg4);
		static QAndroidJniObject getSubmitPdu(jstring arg0, jstring arg1, jstring arg2, jboolean arg3);
		static QAndroidJniObject getSubmitPdu(const QString &arg0, const QString &arg1, const QString &arg2, jboolean arg3);
		jstring getServiceCenterAddress();
		jstring getOriginatingAddress();
		jstring getDisplayOriginatingAddress();
		jstring getMessageBody();
		QAndroidJniObject getMessageClass();
		jstring getDisplayMessageBody();
		jstring getPseudoSubject();
		jlong getTimestampMillis();
		jboolean isEmail();
		jstring getEmailBody();
		jstring getEmailFrom();
		jint getProtocolIdentifier();
		jboolean isReplace();
		jboolean isCphsMwiMessage();
		jboolean isMWIClearMessage();
		jboolean isMWISetMessage();
		jboolean isMwiDontStore();
		jbyteArray getPdu();
		jint getStatusOnSim();
		jint getIndexOnSim();
		jint getStatus();
		jboolean isStatusReportMessage();
		jboolean isReplyPathPresent();
		jbyteArray getUserData();
	};
} // namespace __jni_impl::android::telephony::gsm

#include "SmsMessage_SubmitPdu.hpp"
#include "SmsMessage_MessageClass.hpp"

namespace __jni_impl::android::telephony::gsm
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
	
	// Constructors
	void SmsMessage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.SmsMessage",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SmsMessage::createFromPdu(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"createFromPdu",
			"([B)Landroid/telephony/gsm/SmsMessage;",
			arg0
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
	jint SmsMessage::getTPLayerLengthForPDU(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.gsm.SmsMessage",
			"getTPLayerLengthForPDU",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jintArray SmsMessage::calculateLength(jstring arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"calculateLength",
			"(Ljava/lang/String;Z)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	jintArray SmsMessage::calculateLength(const QString &arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"calculateLength",
			"(Ljava/lang/String;Z)[I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jintArray>();
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
	QAndroidJniObject SmsMessage::getSubmitPdu(const QString &arg0, const QString &arg1, jshort arg2, jbyteArray arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/gsm/SmsMessage$SubmitPdu;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4
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
	QAndroidJniObject SmsMessage::getSubmitPdu(const QString &arg0, const QString &arg1, const QString &arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.gsm.SmsMessage",
			"getSubmitPdu",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/gsm/SmsMessage$SubmitPdu;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	jstring SmsMessage::getServiceCenterAddress()
	{
		return __thiz.callObjectMethod(
			"getServiceCenterAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getOriginatingAddress()
	{
		return __thiz.callObjectMethod(
			"getOriginatingAddress",
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
	jstring SmsMessage::getDisplayMessageBody()
	{
		return __thiz.callObjectMethod(
			"getDisplayMessageBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsMessage::getPseudoSubject()
	{
		return __thiz.callObjectMethod(
			"getPseudoSubject",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong SmsMessage::getTimestampMillis()
	{
		return __thiz.callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	jboolean SmsMessage::isEmail()
	{
		return __thiz.callMethod<jboolean>(
			"isEmail",
			"()Z"
		);
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
	jint SmsMessage::getProtocolIdentifier()
	{
		return __thiz.callMethod<jint>(
			"getProtocolIdentifier",
			"()I"
		);
	}
	jboolean SmsMessage::isReplace()
	{
		return __thiz.callMethod<jboolean>(
			"isReplace",
			"()Z"
		);
	}
	jboolean SmsMessage::isCphsMwiMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isCphsMwiMessage",
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
	jbyteArray SmsMessage::getPdu()
	{
		return __thiz.callObjectMethod(
			"getPdu",
			"()[B"
		).object<jbyteArray>();
	}
	jint SmsMessage::getStatusOnSim()
	{
		return __thiz.callMethod<jint>(
			"getStatusOnSim",
			"()I"
		);
	}
	jint SmsMessage::getIndexOnSim()
	{
		return __thiz.callMethod<jint>(
			"getIndexOnSim",
			"()I"
		);
	}
	jint SmsMessage::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jboolean SmsMessage::isStatusReportMessage()
	{
		return __thiz.callMethod<jboolean>(
			"isStatusReportMessage",
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
	jbyteArray SmsMessage::getUserData()
	{
		return __thiz.callObjectMethod(
			"getUserData",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::telephony::gsm

namespace android::telephony::gsm
{
	class SmsMessage : public __jni_impl::android::telephony::gsm::SmsMessage
	{
	public:
		SmsMessage(QAndroidJniObject obj) { __thiz = obj; }
		SmsMessage()
		{
			__constructor();
		}
	};
} // namespace android::telephony::gsm

#endif // ANDROID_TELEPHONY_GSM_SMSMESSAGE

