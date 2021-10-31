#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./SmsManager_FinancialSmsCallback.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./SmsManager.hpp"

namespace android::telephony
{
	// Fields
	jstring SmsManager::EXTRA_MMS_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::EXTRA_MMS_HTTP_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_HTTP_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_ALIAS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_ALIAS_MAX_CHARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MAX_CHARS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_ALIAS_MIN_CHARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MIN_CHARS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_ALLOW_ATTACH_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALLOW_ATTACH_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_APPEND_TRANSACTION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_APPEND_TRANSACTION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_EMAIL_GATEWAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_EMAIL_GATEWAY_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_GROUP_MMS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_GROUP_MMS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_HTTP_PARAMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_PARAMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_HTTP_SOCKET_TIMEOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_SOCKET_TIMEOUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MAX_IMAGE_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MAX_IMAGE_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MAX_MESSAGE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_MESSAGE_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MMS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MMS_READ_REPORT_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_READ_REPORT_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_MULTIPART_SMS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MULTIPART_SMS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_NAI_SUFFIX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NAI_SUFFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_RECIPIENT_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_RECIPIENT_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SUBJECT_MAX_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUBJECT_MAX_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_UA_PROF_TAG_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_TAG_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_UA_PROF_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SmsManager::MMS_CONFIG_USER_AGENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_USER_AGENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint SmsManager::MMS_ERROR_CONFIGURATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_CONFIGURATION_ERROR"
		);
	}
	jint SmsManager::MMS_ERROR_HTTP_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_HTTP_FAILURE"
		);
	}
	jint SmsManager::MMS_ERROR_INVALID_APN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_INVALID_APN"
		);
	}
	jint SmsManager::MMS_ERROR_IO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_IO_ERROR"
		);
	}
	jint SmsManager::MMS_ERROR_NO_DATA_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_NO_DATA_NETWORK"
		);
	}
	jint SmsManager::MMS_ERROR_RETRY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_RETRY"
		);
	}
	jint SmsManager::MMS_ERROR_UNABLE_CONNECT_MMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNABLE_CONNECT_MMS"
		);
	}
	jint SmsManager::MMS_ERROR_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNSPECIFIED"
		);
	}
	jint SmsManager::RESULT_ERROR_GENERIC_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_GENERIC_FAILURE"
		);
	}
	jint SmsManager::RESULT_ERROR_LIMIT_EXCEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_LIMIT_EXCEEDED"
		);
	}
	jint SmsManager::RESULT_ERROR_NO_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NO_SERVICE"
		);
	}
	jint SmsManager::RESULT_ERROR_NULL_PDU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NULL_PDU"
		);
	}
	jint SmsManager::RESULT_ERROR_RADIO_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_RADIO_OFF"
		);
	}
	jint SmsManager::RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED"
		);
	}
	jint SmsManager::RESULT_ERROR_SHORT_CODE_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NOT_ALLOWED"
		);
	}
	jint SmsManager::STATUS_ON_ICC_FREE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_FREE"
		);
	}
	jint SmsManager::STATUS_ON_ICC_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_READ"
		);
	}
	jint SmsManager::STATUS_ON_ICC_SENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_SENT"
		);
	}
	jint SmsManager::STATUS_ON_ICC_UNREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNREAD"
		);
	}
	jint SmsManager::STATUS_ON_ICC_UNSENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNSENT"
		);
	}
	
	SmsManager::SmsManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SmsManager::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getDefault",
			"()Landroid/telephony/SmsManager;"
		);
	}
	jint SmsManager::getDefaultSmsSubscriptionId()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.telephony.SmsManager",
			"getDefaultSmsSubscriptionId",
			"()I"
		);
	}
	QAndroidJniObject SmsManager::getSmsManagerForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getSmsManagerForSubscriptionId",
			"(I)Landroid/telephony/SmsManager;",
			arg0
		);
	}
	jstring SmsManager::createAppSpecificSmsToken(android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"createAppSpecificSmsToken",
			"(Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring SmsManager::createAppSpecificSmsTokenWithPackageInfo(jstring arg0, android::app::PendingIntent arg1)
	{
		return __thiz.callObjectMethod(
			"createAppSpecificSmsTokenWithPackageInfo",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject SmsManager::divideMessage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	void SmsManager::downloadMultimediaMessage(android::content::Context arg0, jstring arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"downloadMultimediaMessage",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject SmsManager::getCarrierConfigValues()
	{
		return __thiz.callObjectMethod(
			"getCarrierConfigValues",
			"()Landroid/os/Bundle;"
		);
	}
	void SmsManager::getSmsMessagesForFinancialApp(android::os::Bundle arg0, __JniBaseClass arg1, android::telephony::SmsManager_FinancialSmsCallback arg2)
	{
		__thiz.callMethod<void>(
			"getSmsMessagesForFinancialApp",
			"(Landroid/os/Bundle;Ljava/util/concurrent/Executor;Landroid/telephony/SmsManager$FinancialSmsCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint SmsManager::getSubscriptionId()
	{
		return __thiz.callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	void SmsManager::injectSmsPdu(jbyteArray arg0, jstring arg1, android::app::PendingIntent arg2)
	{
		__thiz.callMethod<void>(
			"injectSmsPdu",
			"([BLjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void SmsManager::sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5)
	{
		__thiz.callMethod<void>(
			"sendDataMessage",
			"(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	void SmsManager::sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, jstring arg2, android::os::Bundle arg3, android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"sendMultimediaMessage",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void SmsManager::sendMultipartTextMessage(jstring arg0, jstring arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4)
	{
		__thiz.callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void SmsManager::sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"sendTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void SmsManager::sendTextMessageWithoutPersisting(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"sendTextMessageWithoutPersisting",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
} // namespace android::telephony

