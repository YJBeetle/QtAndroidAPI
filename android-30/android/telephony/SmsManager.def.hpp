#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
namespace android::telephony
{
	class SmsManager_FinancialSmsCallback;
}
class JString;
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
		static JString EXTRA_MMS_DATA();
		static JString EXTRA_MMS_HTTP_STATUS();
		static JString MMS_CONFIG_ALIAS_ENABLED();
		static JString MMS_CONFIG_ALIAS_MAX_CHARS();
		static JString MMS_CONFIG_ALIAS_MIN_CHARS();
		static JString MMS_CONFIG_ALLOW_ATTACH_AUDIO();
		static JString MMS_CONFIG_APPEND_TRANSACTION_ID();
		static JString MMS_CONFIG_EMAIL_GATEWAY_NUMBER();
		static JString MMS_CONFIG_GROUP_MMS_ENABLED();
		static JString MMS_CONFIG_HTTP_PARAMS();
		static JString MMS_CONFIG_HTTP_SOCKET_TIMEOUT();
		static JString MMS_CONFIG_MAX_IMAGE_HEIGHT();
		static JString MMS_CONFIG_MAX_IMAGE_WIDTH();
		static JString MMS_CONFIG_MAX_MESSAGE_SIZE();
		static JString MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE();
		static JString MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED();
		static JString MMS_CONFIG_MMS_ENABLED();
		static JString MMS_CONFIG_MMS_READ_REPORT_ENABLED();
		static JString MMS_CONFIG_MULTIPART_SMS_ENABLED();
		static JString MMS_CONFIG_NAI_SUFFIX();
		static JString MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED();
		static JString MMS_CONFIG_RECIPIENT_LIMIT();
		static JString MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES();
		static JString MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS();
		static JString MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED();
		static JString MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD();
		static JString MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD();
		static JString MMS_CONFIG_SUBJECT_MAX_LENGTH();
		static JString MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER();
		static JString MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION();
		static JString MMS_CONFIG_UA_PROF_TAG_NAME();
		static JString MMS_CONFIG_UA_PROF_URL();
		static JString MMS_CONFIG_USER_AGENT();
		static jint MMS_ERROR_CONFIGURATION_ERROR();
		static jint MMS_ERROR_HTTP_FAILURE();
		static jint MMS_ERROR_INVALID_APN();
		static jint MMS_ERROR_IO_ERROR();
		static jint MMS_ERROR_NO_DATA_NETWORK();
		static jint MMS_ERROR_RETRY();
		static jint MMS_ERROR_UNABLE_CONNECT_MMS();
		static jint MMS_ERROR_UNSPECIFIED();
		static jint RESULT_BLUETOOTH_DISCONNECTED();
		static jint RESULT_CANCELLED();
		static jint RESULT_ENCODING_ERROR();
		static jint RESULT_ERROR_FDN_CHECK_FAILURE();
		static jint RESULT_ERROR_GENERIC_FAILURE();
		static jint RESULT_ERROR_LIMIT_EXCEEDED();
		static jint RESULT_ERROR_NONE();
		static jint RESULT_ERROR_NO_SERVICE();
		static jint RESULT_ERROR_NULL_PDU();
		static jint RESULT_ERROR_RADIO_OFF();
		static jint RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED();
		static jint RESULT_ERROR_SHORT_CODE_NOT_ALLOWED();
		static jint RESULT_INTERNAL_ERROR();
		static jint RESULT_INVALID_ARGUMENTS();
		static jint RESULT_INVALID_BLUETOOTH_ADDRESS();
		static jint RESULT_INVALID_SMSC_ADDRESS();
		static jint RESULT_INVALID_SMS_FORMAT();
		static jint RESULT_INVALID_STATE();
		static jint RESULT_MODEM_ERROR();
		static jint RESULT_NETWORK_ERROR();
		static jint RESULT_NETWORK_REJECT();
		static jint RESULT_NO_BLUETOOTH_SERVICE();
		static jint RESULT_NO_DEFAULT_SMS_APP();
		static jint RESULT_NO_MEMORY();
		static jint RESULT_NO_RESOURCES();
		static jint RESULT_OPERATION_NOT_ALLOWED();
		static jint RESULT_RADIO_NOT_AVAILABLE();
		static jint RESULT_RECEIVE_DISPATCH_FAILURE();
		static jint RESULT_RECEIVE_INJECTED_NULL_PDU();
		static jint RESULT_RECEIVE_NULL_MESSAGE_FROM_RIL();
		static jint RESULT_RECEIVE_RUNTIME_EXCEPTION();
		static jint RESULT_RECEIVE_SQL_EXCEPTION();
		static jint RESULT_RECEIVE_URI_EXCEPTION();
		static jint RESULT_RECEIVE_WHILE_ENCRYPTED();
		static jint RESULT_REMOTE_EXCEPTION();
		static jint RESULT_REQUEST_NOT_SUPPORTED();
		static jint RESULT_RIL_CANCELLED();
		static jint RESULT_RIL_ENCODING_ERR();
		static jint RESULT_RIL_INTERNAL_ERR();
		static jint RESULT_RIL_INVALID_ARGUMENTS();
		static jint RESULT_RIL_INVALID_MODEM_STATE();
		static jint RESULT_RIL_INVALID_SMSC_ADDRESS();
		static jint RESULT_RIL_INVALID_SMS_FORMAT();
		static jint RESULT_RIL_INVALID_STATE();
		static jint RESULT_RIL_MODEM_ERR();
		static jint RESULT_RIL_NETWORK_ERR();
		static jint RESULT_RIL_NETWORK_NOT_READY();
		static jint RESULT_RIL_NETWORK_REJECT();
		static jint RESULT_RIL_NO_MEMORY();
		static jint RESULT_RIL_NO_RESOURCES();
		static jint RESULT_RIL_OPERATION_NOT_ALLOWED();
		static jint RESULT_RIL_RADIO_NOT_AVAILABLE();
		static jint RESULT_RIL_REQUEST_NOT_SUPPORTED();
		static jint RESULT_RIL_REQUEST_RATE_LIMITED();
		static jint RESULT_RIL_SIM_ABSENT();
		static jint RESULT_RIL_SMS_SEND_FAIL_RETRY();
		static jint RESULT_RIL_SYSTEM_ERR();
		static jint RESULT_SMS_BLOCKED_DURING_EMERGENCY();
		static jint RESULT_SMS_SEND_RETRY_FAILED();
		static jint RESULT_SYSTEM_ERROR();
		static jint RESULT_UNEXPECTED_EVENT_STOP_SENDING();
		static jint STATUS_ON_ICC_FREE();
		static jint STATUS_ON_ICC_READ();
		static jint STATUS_ON_ICC_SENT();
		static jint STATUS_ON_ICC_UNREAD();
		static jint STATUS_ON_ICC_UNSENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit SmsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SmsManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::telephony::SmsManager getDefault();
		static jint getDefaultSmsSubscriptionId();
		static android::telephony::SmsManager getSmsManagerForSubscriptionId(jint arg0);
		JString createAppSpecificSmsToken(android::app::PendingIntent arg0) const;
		JString createAppSpecificSmsTokenWithPackageInfo(JString arg0, android::app::PendingIntent arg1) const;
		java::util::ArrayList divideMessage(JString arg0) const;
		void downloadMultimediaMessage(android::content::Context arg0, JString arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4) const;
		android::os::Bundle getCarrierConfigValues() const;
		void getSmsMessagesForFinancialApp(android::os::Bundle arg0, JObject arg1, android::telephony::SmsManager_FinancialSmsCallback arg2) const;
		JString getSmscAddress() const;
		jint getSubscriptionId() const;
		void injectSmsPdu(JByteArray arg0, JString arg1, android::app::PendingIntent arg2) const;
		void sendDataMessage(JString arg0, JString arg1, jshort arg2, JByteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5) const;
		void sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, JString arg2, android::os::Bundle arg3, android::app::PendingIntent arg4) const;
		void sendMultipartTextMessage(JString arg0, JString arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4) const;
		void sendMultipartTextMessage(JString arg0, JString arg1, JObject arg2, JObject arg3, JObject arg4, jlong arg5) const;
		void sendMultipartTextMessage(JString arg0, JString arg1, JObject arg2, JObject arg3, JObject arg4, JString arg5, JString arg6) const;
		void sendTextMessage(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const;
		void sendTextMessage(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4, jlong arg5) const;
		void sendTextMessageWithoutPersisting(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const;
		jboolean setSmscAddress(JString arg0) const;
	};
} // namespace android::telephony

