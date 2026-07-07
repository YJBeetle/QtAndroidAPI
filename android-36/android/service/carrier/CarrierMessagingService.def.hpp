#pragma once

#include "../../app/Service.def.hpp"

class JByteArray;
namespace android::content
{
	class Intent;
}
namespace android::net
{
	class Uri;
}
namespace android::service::carrier
{
	class MessagePdu;
}
class JString;

namespace android::service::carrier
{
	class CarrierMessagingService : public android::app::Service
	{
	public:
		// Fields
		static jint DOWNLOAD_STATUS_ERROR();
		static jint DOWNLOAD_STATUS_MMS_ERROR_CONFIGURATION_ERROR();
		static jint DOWNLOAD_STATUS_MMS_ERROR_DATA_DISABLED();
		static jint DOWNLOAD_STATUS_MMS_ERROR_HTTP_FAILURE();
		static jint DOWNLOAD_STATUS_MMS_ERROR_INACTIVE_SUBSCRIPTION();
		static jint DOWNLOAD_STATUS_MMS_ERROR_INVALID_APN();
		static jint DOWNLOAD_STATUS_MMS_ERROR_INVALID_SUBSCRIPTION_ID();
		static jint DOWNLOAD_STATUS_MMS_ERROR_IO_ERROR();
		static jint DOWNLOAD_STATUS_MMS_ERROR_MMS_DISABLED_BY_CARRIER();
		static jint DOWNLOAD_STATUS_MMS_ERROR_NO_DATA_NETWORK();
		static jint DOWNLOAD_STATUS_MMS_ERROR_RETRY();
		static jint DOWNLOAD_STATUS_MMS_ERROR_UNABLE_CONNECT_MMS();
		static jint DOWNLOAD_STATUS_MMS_ERROR_UNSPECIFIED();
		static jint DOWNLOAD_STATUS_OK();
		static jint DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK();
		static jint RECEIVE_OPTIONS_DEFAULT();
		static jint RECEIVE_OPTIONS_DROP();
		static jint RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE();
		static jint SEND_FLAG_REQUEST_DELIVERY_STATUS();
		static jint SEND_STATUS_ERROR();
		static jint SEND_STATUS_MMS_ERROR_CONFIGURATION_ERROR();
		static jint SEND_STATUS_MMS_ERROR_DATA_DISABLED();
		static jint SEND_STATUS_MMS_ERROR_HTTP_FAILURE();
		static jint SEND_STATUS_MMS_ERROR_INACTIVE_SUBSCRIPTION();
		static jint SEND_STATUS_MMS_ERROR_INVALID_APN();
		static jint SEND_STATUS_MMS_ERROR_INVALID_SUBSCRIPTION_ID();
		static jint SEND_STATUS_MMS_ERROR_IO_ERROR();
		static jint SEND_STATUS_MMS_ERROR_MMS_DISABLED_BY_CARRIER();
		static jint SEND_STATUS_MMS_ERROR_NO_DATA_NETWORK();
		static jint SEND_STATUS_MMS_ERROR_RETRY();
		static jint SEND_STATUS_MMS_ERROR_UNABLE_CONNECT_MMS();
		static jint SEND_STATUS_MMS_ERROR_UNSPECIFIED();
		static jint SEND_STATUS_OK();
		static jint SEND_STATUS_RESULT_CANCELLED();
		static jint SEND_STATUS_RESULT_ENCODING_ERROR();
		static jint SEND_STATUS_RESULT_ERROR_FDN_CHECK_FAILURE();
		static jint SEND_STATUS_RESULT_ERROR_GENERIC_FAILURE();
		static jint SEND_STATUS_RESULT_ERROR_LIMIT_EXCEEDED();
		static jint SEND_STATUS_RESULT_ERROR_NO_SERVICE();
		static jint SEND_STATUS_RESULT_ERROR_NULL_PDU();
		static jint SEND_STATUS_RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED();
		static jint SEND_STATUS_RESULT_ERROR_SHORT_CODE_NOT_ALLOWED();
		static jint SEND_STATUS_RESULT_INVALID_ARGUMENTS();
		static jint SEND_STATUS_RESULT_INVALID_SMSC_ADDRESS();
		static jint SEND_STATUS_RESULT_INVALID_SMS_FORMAT();
		static jint SEND_STATUS_RESULT_INVALID_STATE();
		static jint SEND_STATUS_RESULT_NETWORK_ERROR();
		static jint SEND_STATUS_RESULT_NETWORK_REJECT();
		static jint SEND_STATUS_RESULT_OPERATION_NOT_ALLOWED();
		static jint SEND_STATUS_RESULT_REQUEST_NOT_SUPPORTED();
		static jint SEND_STATUS_RESULT_SMS_BLOCKED_DURING_EMERGENCY();
		static jint SEND_STATUS_RESULT_SMS_SEND_RETRY_FAILED();
		static jint SEND_STATUS_RETRY_ON_CARRIER_NETWORK();
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		CarrierMessagingService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onDownloadMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, JObject arg3) const;
		void onFilterSms(android::service::carrier::MessagePdu arg0, JString arg1, jint arg2, jint arg3, JObject arg4) const;
		void onReceiveTextSms(android::service::carrier::MessagePdu arg0, JString arg1, jint arg2, jint arg3, JObject arg4) const;
		void onSendDataSms(JByteArray arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const;
		void onSendDataSms(JByteArray arg0, jint arg1, JString arg2, jint arg3, jint arg4, JObject arg5) const;
		void onSendMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, JObject arg3) const;
		void onSendMultipartTextSms(JObject arg0, jint arg1, JString arg2, JObject arg3) const;
		void onSendMultipartTextSms(JObject arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const;
		void onSendTextSms(JString arg0, jint arg1, JString arg2, JObject arg3) const;
		void onSendTextSms(JString arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const;
	};
} // namespace android::service::carrier

