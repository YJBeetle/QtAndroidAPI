#include "../../JByteArray.hpp"
#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./SmsManager_FinancialSmsCallback.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./SmsManager.hpp"

namespace android::telephony
{
	// Fields
	JString SmsManager::EXTRA_MMS_DATA()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_DATA",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::EXTRA_MMS_HTTP_STATUS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_HTTP_STATUS",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_ALIAS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_ALIAS_MAX_CHARS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MAX_CHARS",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_ALIAS_MIN_CHARS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MIN_CHARS",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_ALLOW_ATTACH_AUDIO()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALLOW_ATTACH_AUDIO",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_APPEND_TRANSACTION_ID()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_APPEND_TRANSACTION_ID",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_EMAIL_GATEWAY_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_EMAIL_GATEWAY_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_GROUP_MMS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_GROUP_MMS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_HTTP_PARAMS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_PARAMS",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_HTTP_SOCKET_TIMEOUT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_SOCKET_TIMEOUT",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MAX_IMAGE_HEIGHT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MAX_IMAGE_WIDTH()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_WIDTH",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MAX_MESSAGE_SIZE()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_MESSAGE_SIZE",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MMS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MMS_READ_REPORT_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_READ_REPORT_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_MULTIPART_SMS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MULTIPART_SMS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_NAI_SUFFIX()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NAI_SUFFIX",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_RECIPIENT_LIMIT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_RECIPIENT_LIMIT",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SUBJECT_MAX_LENGTH()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUBJECT_MAX_LENGTH",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_UA_PROF_TAG_NAME()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_TAG_NAME",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_UA_PROF_URL()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_URL",
			"Ljava/lang/String;"
		);
	}
	JString SmsManager::MMS_CONFIG_USER_AGENT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_USER_AGENT",
			"Ljava/lang/String;"
		);
	}
	jint SmsManager::MMS_ERROR_CONFIGURATION_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_CONFIGURATION_ERROR"
		);
	}
	jint SmsManager::MMS_ERROR_HTTP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_HTTP_FAILURE"
		);
	}
	jint SmsManager::MMS_ERROR_INVALID_APN()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_INVALID_APN"
		);
	}
	jint SmsManager::MMS_ERROR_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_IO_ERROR"
		);
	}
	jint SmsManager::MMS_ERROR_NO_DATA_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_NO_DATA_NETWORK"
		);
	}
	jint SmsManager::MMS_ERROR_RETRY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_RETRY"
		);
	}
	jint SmsManager::MMS_ERROR_UNABLE_CONNECT_MMS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNABLE_CONNECT_MMS"
		);
	}
	jint SmsManager::MMS_ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNSPECIFIED"
		);
	}
	jint SmsManager::RESULT_ERROR_GENERIC_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_GENERIC_FAILURE"
		);
	}
	jint SmsManager::RESULT_ERROR_LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_LIMIT_EXCEEDED"
		);
	}
	jint SmsManager::RESULT_ERROR_NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NO_SERVICE"
		);
	}
	jint SmsManager::RESULT_ERROR_NULL_PDU()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NULL_PDU"
		);
	}
	jint SmsManager::RESULT_ERROR_RADIO_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_RADIO_OFF"
		);
	}
	jint SmsManager::RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED"
		);
	}
	jint SmsManager::RESULT_ERROR_SHORT_CODE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NOT_ALLOWED"
		);
	}
	jint SmsManager::STATUS_ON_ICC_FREE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_FREE"
		);
	}
	jint SmsManager::STATUS_ON_ICC_READ()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_READ"
		);
	}
	jint SmsManager::STATUS_ON_ICC_SENT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_SENT"
		);
	}
	jint SmsManager::STATUS_ON_ICC_UNREAD()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNREAD"
		);
	}
	jint SmsManager::STATUS_ON_ICC_UNSENT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNSENT"
		);
	}
	
	// QAndroidJniObject forward
	SmsManager::SmsManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::SmsManager SmsManager::getDefault()
	{
		return callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getDefault",
			"()Landroid/telephony/SmsManager;"
		);
	}
	jint SmsManager::getDefaultSmsSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SmsManager",
			"getDefaultSmsSubscriptionId",
			"()I"
		);
	}
	android::telephony::SmsManager SmsManager::getSmsManagerForSubscriptionId(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getSmsManagerForSubscriptionId",
			"(I)Landroid/telephony/SmsManager;",
			arg0
		);
	}
	JString SmsManager::createAppSpecificSmsToken(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"createAppSpecificSmsToken",
			"(Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString SmsManager::createAppSpecificSmsTokenWithPackageInfo(JString arg0, android::app::PendingIntent arg1) const
	{
		return callObjectMethod(
			"createAppSpecificSmsTokenWithPackageInfo",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::util::ArrayList SmsManager::divideMessage(JString arg0) const
	{
		return callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	void SmsManager::downloadMultimediaMessage(android::content::Context arg0, JString arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4) const
	{
		callMethod<void>(
			"downloadMultimediaMessage",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	android::os::Bundle SmsManager::getCarrierConfigValues() const
	{
		return callObjectMethod(
			"getCarrierConfigValues",
			"()Landroid/os/Bundle;"
		);
	}
	void SmsManager::getSmsMessagesForFinancialApp(android::os::Bundle arg0, JObject arg1, android::telephony::SmsManager_FinancialSmsCallback arg2) const
	{
		callMethod<void>(
			"getSmsMessagesForFinancialApp",
			"(Landroid/os/Bundle;Ljava/util/concurrent/Executor;Landroid/telephony/SmsManager$FinancialSmsCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jint SmsManager::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	void SmsManager::injectSmsPdu(JByteArray arg0, JString arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"injectSmsPdu",
			"([BLjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void SmsManager::sendDataMessage(JString arg0, JString arg1, jshort arg2, JByteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5) const
	{
		callMethod<void>(
			"sendDataMessage",
			"(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jbyteArray>(),
			arg4.object(),
			arg5.object()
		);
	}
	void SmsManager::sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, JString arg2, android::os::Bundle arg3, android::app::PendingIntent arg4) const
	{
		callMethod<void>(
			"sendMultimediaMessage",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	void SmsManager::sendMultipartTextMessage(JString arg0, JString arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4) const
	{
		callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void SmsManager::sendTextMessage(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const
	{
		callMethod<void>(
			"sendTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	void SmsManager::sendTextMessageWithoutPersisting(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const
	{
		callMethod<void>(
			"sendTextMessageWithoutPersisting",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::telephony

