#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace java::util
{
	class ArrayList;
}

namespace android::telephony
{
	class SmsManager : public JObject
	{
	public:
		// Fields
		static jstring EXTRA_MMS_DATA();
		static jstring EXTRA_MMS_HTTP_STATUS();
		static jstring MMS_CONFIG_ALIAS_ENABLED();
		static jstring MMS_CONFIG_ALIAS_MAX_CHARS();
		static jstring MMS_CONFIG_ALIAS_MIN_CHARS();
		static jstring MMS_CONFIG_ALLOW_ATTACH_AUDIO();
		static jstring MMS_CONFIG_APPEND_TRANSACTION_ID();
		static jstring MMS_CONFIG_EMAIL_GATEWAY_NUMBER();
		static jstring MMS_CONFIG_GROUP_MMS_ENABLED();
		static jstring MMS_CONFIG_HTTP_PARAMS();
		static jstring MMS_CONFIG_HTTP_SOCKET_TIMEOUT();
		static jstring MMS_CONFIG_MAX_IMAGE_HEIGHT();
		static jstring MMS_CONFIG_MAX_IMAGE_WIDTH();
		static jstring MMS_CONFIG_MAX_MESSAGE_SIZE();
		static jstring MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE();
		static jstring MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED();
		static jstring MMS_CONFIG_MMS_ENABLED();
		static jstring MMS_CONFIG_MMS_READ_REPORT_ENABLED();
		static jstring MMS_CONFIG_MULTIPART_SMS_ENABLED();
		static jstring MMS_CONFIG_NAI_SUFFIX();
		static jstring MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED();
		static jstring MMS_CONFIG_RECIPIENT_LIMIT();
		static jstring MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES();
		static jstring MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS();
		static jstring MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED();
		static jstring MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD();
		static jstring MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD();
		static jstring MMS_CONFIG_SUBJECT_MAX_LENGTH();
		static jstring MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER();
		static jstring MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION();
		static jstring MMS_CONFIG_UA_PROF_TAG_NAME();
		static jstring MMS_CONFIG_UA_PROF_URL();
		static jstring MMS_CONFIG_USER_AGENT();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SmsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SmsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::SmsManager getDefault();
		static jint getDefaultSmsSubscriptionId();
		static android::telephony::SmsManager getSmsManagerForSubscriptionId(jint arg0);
		jstring createAppSpecificSmsToken(android::app::PendingIntent arg0);
		java::util::ArrayList divideMessage(jstring arg0);
		void downloadMultimediaMessage(android::content::Context arg0, jstring arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4);
		android::os::Bundle getCarrierConfigValues();
		jint getSubscriptionId();
		void injectSmsPdu(jbyteArray arg0, jstring arg1, android::app::PendingIntent arg2);
		void sendDataMessage(jstring arg0, jstring arg1, jshort arg2, jbyteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5);
		void sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, jstring arg2, android::os::Bundle arg3, android::app::PendingIntent arg4);
		void sendMultipartTextMessage(jstring arg0, jstring arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4);
		void sendTextMessage(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4);
		void sendTextMessageWithoutPersisting(jstring arg0, jstring arg1, jstring arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4);
	};
} // namespace android::telephony

