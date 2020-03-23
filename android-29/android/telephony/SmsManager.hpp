#pragma once

#ifndef ANDROID_TELEPHONY_SMSMANAGER
#define ANDROID_TELEPHONY_SMSMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::telephony
{
	class SmsManager_FinancialSmsCallback;
}

namespace __jni_impl::android::telephony
{
	class SmsManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_MMS_DATA();
		static QAndroidJniObject EXTRA_MMS_HTTP_STATUS();
		static QAndroidJniObject MMS_CONFIG_ALIAS_ENABLED();
		static QAndroidJniObject MMS_CONFIG_ALIAS_MAX_CHARS();
		static QAndroidJniObject MMS_CONFIG_ALIAS_MIN_CHARS();
		static QAndroidJniObject MMS_CONFIG_ALLOW_ATTACH_AUDIO();
		static QAndroidJniObject MMS_CONFIG_APPEND_TRANSACTION_ID();
		static QAndroidJniObject MMS_CONFIG_EMAIL_GATEWAY_NUMBER();
		static QAndroidJniObject MMS_CONFIG_GROUP_MMS_ENABLED();
		static QAndroidJniObject MMS_CONFIG_HTTP_PARAMS();
		static QAndroidJniObject MMS_CONFIG_HTTP_SOCKET_TIMEOUT();
		static QAndroidJniObject MMS_CONFIG_MAX_IMAGE_HEIGHT();
		static QAndroidJniObject MMS_CONFIG_MAX_IMAGE_WIDTH();
		static QAndroidJniObject MMS_CONFIG_MAX_MESSAGE_SIZE();
		static QAndroidJniObject MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE();
		static QAndroidJniObject MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED();
		static QAndroidJniObject MMS_CONFIG_MMS_ENABLED();
		static QAndroidJniObject MMS_CONFIG_MMS_READ_REPORT_ENABLED();
		static QAndroidJniObject MMS_CONFIG_MULTIPART_SMS_ENABLED();
		static QAndroidJniObject MMS_CONFIG_NAI_SUFFIX();
		static QAndroidJniObject MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED();
		static QAndroidJniObject MMS_CONFIG_RECIPIENT_LIMIT();
		static QAndroidJniObject MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES();
		static QAndroidJniObject MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS();
		static QAndroidJniObject MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED();
		static QAndroidJniObject MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD();
		static QAndroidJniObject MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD();
		static QAndroidJniObject MMS_CONFIG_SUBJECT_MAX_LENGTH();
		static QAndroidJniObject MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER();
		static QAndroidJniObject MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION();
		static QAndroidJniObject MMS_CONFIG_UA_PROF_TAG_NAME();
		static QAndroidJniObject MMS_CONFIG_UA_PROF_URL();
		static QAndroidJniObject MMS_CONFIG_USER_AGENT();
		static jint MMS_ERROR_CONFIGURATION_ERROR();
		static jint MMS_ERROR_HTTP_FAILURE();
		static jint MMS_ERROR_INVALID_APN();
		static jint MMS_ERROR_IO_ERROR();
		static jint MMS_ERROR_NO_DATA_NETWORK();
		static jint MMS_ERROR_RETRY();
		static jint MMS_ERROR_UNABLE_CONNECT_MMS();
		static jint MMS_ERROR_UNSPECIFIED();
		static jint RESULT_ERROR_GENERIC_FAILURE();
		static jint RESULT_ERROR_LIMIT_EXCEEDED();
		static jint RESULT_ERROR_NO_SERVICE();
		static jint RESULT_ERROR_NULL_PDU();
		static jint RESULT_ERROR_RADIO_OFF();
		static jint RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED();
		static jint RESULT_ERROR_SHORT_CODE_NOT_ALLOWED();
		static jint STATUS_ON_ICC_FREE();
		static jint STATUS_ON_ICC_READ();
		static jint STATUS_ON_ICC_SENT();
		static jint STATUS_ON_ICC_UNREAD();
		static jint STATUS_ON_ICC_UNSENT();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		void sendTextMessage(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3, __jni_impl::android::app::PendingIntent arg4);
		QAndroidJniObject divideMessage(jstring arg0);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, __jni_impl::java::util::ArrayList arg2, __jni_impl::java::util::ArrayList arg3, __jni_impl::java::util::ArrayList arg4);
		void sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, __jni_impl::android::app::PendingIntent arg4, __jni_impl::android::app::PendingIntent arg5);
		void sendTextMessageWithoutPersisting(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3, __jni_impl::android::app::PendingIntent arg4);
		void injectSmsPdu(jbyteArray arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2);
		static QAndroidJniObject getSmsManagerForSubscriptionId(jint arg0);
		static jint getDefaultSmsSubscriptionId();
		void sendMultimediaMessage(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jstring arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::PendingIntent arg4);
		void downloadMultimediaMessage(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::PendingIntent arg4);
		QAndroidJniObject getCarrierConfigValues();
		QAndroidJniObject createAppSpecificSmsToken(__jni_impl::android::app::PendingIntent arg0);
		void getSmsMessagesForFinancialApp(__jni_impl::android::os::Bundle arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::SmsManager_FinancialSmsCallback arg2);
		QAndroidJniObject createAppSpecificSmsTokenWithPackageInfo(jstring arg0, __jni_impl::android::app::PendingIntent arg1);
		jint getSubscriptionId();
	};
} // namespace __jni_impl::android::telephony

#include "../app/PendingIntent.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "SmsManager_FinancialSmsCallback.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject SmsManager::EXTRA_MMS_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::EXTRA_MMS_HTTP_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_HTTP_STATUS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_ALIAS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_ALIAS_MAX_CHARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MAX_CHARS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_ALIAS_MIN_CHARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MIN_CHARS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_ALLOW_ATTACH_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALLOW_ATTACH_AUDIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_APPEND_TRANSACTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_APPEND_TRANSACTION_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_EMAIL_GATEWAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_EMAIL_GATEWAY_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_GROUP_MMS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_GROUP_MMS_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_HTTP_PARAMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_PARAMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_HTTP_SOCKET_TIMEOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_SOCKET_TIMEOUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MAX_IMAGE_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MAX_IMAGE_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MAX_MESSAGE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_MESSAGE_SIZE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MMS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MMS_READ_REPORT_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_READ_REPORT_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_MULTIPART_SMS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MULTIPART_SMS_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_NAI_SUFFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NAI_SUFFIX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_RECIPIENT_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_RECIPIENT_LIMIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SUBJECT_MAX_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUBJECT_MAX_LENGTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_UA_PROF_TAG_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_TAG_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_UA_PROF_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_URL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SmsManager::MMS_CONFIG_USER_AGENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_USER_AGENT",
			"Ljava/lang/String;");
	}
	jint SmsManager::MMS_ERROR_CONFIGURATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_CONFIGURATION_ERROR");
	}
	jint SmsManager::MMS_ERROR_HTTP_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_HTTP_FAILURE");
	}
	jint SmsManager::MMS_ERROR_INVALID_APN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_INVALID_APN");
	}
	jint SmsManager::MMS_ERROR_IO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_IO_ERROR");
	}
	jint SmsManager::MMS_ERROR_NO_DATA_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_NO_DATA_NETWORK");
	}
	jint SmsManager::MMS_ERROR_RETRY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_RETRY");
	}
	jint SmsManager::MMS_ERROR_UNABLE_CONNECT_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNABLE_CONNECT_MMS");
	}
	jint SmsManager::MMS_ERROR_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNSPECIFIED");
	}
	jint SmsManager::RESULT_ERROR_GENERIC_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_GENERIC_FAILURE");
	}
	jint SmsManager::RESULT_ERROR_LIMIT_EXCEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_LIMIT_EXCEEDED");
	}
	jint SmsManager::RESULT_ERROR_NO_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NO_SERVICE");
	}
	jint SmsManager::RESULT_ERROR_NULL_PDU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NULL_PDU");
	}
	jint SmsManager::RESULT_ERROR_RADIO_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_RADIO_OFF");
	}
	jint SmsManager::RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED");
	}
	jint SmsManager::RESULT_ERROR_SHORT_CODE_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NOT_ALLOWED");
	}
	jint SmsManager::STATUS_ON_ICC_FREE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_FREE");
	}
	jint SmsManager::STATUS_ON_ICC_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_READ");
	}
	jint SmsManager::STATUS_ON_ICC_SENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_SENT");
	}
	jint SmsManager::STATUS_ON_ICC_UNREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNREAD");
	}
	jint SmsManager::STATUS_ON_ICC_UNSENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNSENT");
	}
	
	// Constructors
	void SmsManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SmsManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SmsManager::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getDefault",
			"()Landroid/telephony/SmsManager;");
	}
	void SmsManager::sendTextMessage(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3, __jni_impl::android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"sendTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	QAndroidJniObject SmsManager::divideMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0);
	}
	void SmsManager::sendMultipartTextMessage(jstring arg0, jstring arg1, __jni_impl::java::util::ArrayList arg2, __jni_impl::java::util::ArrayList arg3, __jni_impl::java::util::ArrayList arg4)
	{
		__thiz.callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void SmsManager::sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, __jni_impl::android::app::PendingIntent arg4, __jni_impl::android::app::PendingIntent arg5)
	{
		__thiz.callMethod<void>(
			"sendDataMessage",
			"(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	void SmsManager::sendTextMessageWithoutPersisting(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::app::PendingIntent arg3, __jni_impl::android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"sendTextMessageWithoutPersisting",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void SmsManager::injectSmsPdu(jbyteArray arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"injectSmsPdu",
			"([BLjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject SmsManager::getSmsManagerForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getSmsManagerForSubscriptionId",
			"(I)Landroid/telephony/SmsManager;",
			arg0);
	}
	jint SmsManager::getDefaultSmsSubscriptionId()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SmsManager",
			"getDefaultSmsSubscriptionId",
			"()I");
	}
	void SmsManager::sendMultimediaMessage(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1, jstring arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"sendMultimediaMessage",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void SmsManager::downloadMultimediaMessage(__jni_impl::android::content::Context arg0, jstring arg1, __jni_impl::android::net::Uri arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"downloadMultimediaMessage",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	QAndroidJniObject SmsManager::getCarrierConfigValues()
	{
		return __thiz.callObjectMethod(
			"getCarrierConfigValues",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject SmsManager::createAppSpecificSmsToken(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"createAppSpecificSmsToken",
			"(Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	void SmsManager::getSmsMessagesForFinancialApp(__jni_impl::android::os::Bundle arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::telephony::SmsManager_FinancialSmsCallback arg2)
	{
		__thiz.callMethod<void>(
			"getSmsMessagesForFinancialApp",
			"(Landroid/os/Bundle;Ljava/util/concurrent/Executor;Landroid/telephony/SmsManager$FinancialSmsCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject SmsManager::createAppSpecificSmsTokenWithPackageInfo(jstring arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		return __thiz.callObjectMethod(
			"createAppSpecificSmsTokenWithPackageInfo",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object());
	}
	jint SmsManager::getSubscriptionId()
	{
		return __thiz.callMethod<jint>(
			"getSubscriptionId",
			"()I");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SmsManager : public __jni_impl::android::telephony::SmsManager
	{
	public:
		SmsManager(QAndroidJniObject obj) { __thiz = obj; }
		SmsManager()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SMSMANAGER

