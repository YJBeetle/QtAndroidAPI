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
		static jint DOWNLOAD_STATUS_OK();
		static jint DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK();
		static jint RECEIVE_OPTIONS_DEFAULT();
		static jint RECEIVE_OPTIONS_DROP();
		static jint RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE();
		static jint SEND_FLAG_REQUEST_DELIVERY_STATUS();
		static jint SEND_STATUS_ERROR();
		static jint SEND_STATUS_OK();
		static jint SEND_STATUS_RETRY_ON_CARRIER_NETWORK();
		static JString SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierMessagingService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
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

