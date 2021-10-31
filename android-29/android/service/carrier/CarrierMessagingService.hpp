#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

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
		static jstring SERVICE_INTERFACE();
		
		CarrierMessagingService(QAndroidJniObject obj);
		// Constructors
		CarrierMessagingService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onDownloadMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, __JniBaseClass arg3);
		void onFilterSms(android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __JniBaseClass arg4);
		void onReceiveTextSms(android::service::carrier::MessagePdu arg0, jstring arg1, jint arg2, jint arg3, __JniBaseClass arg4);
		void onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, __JniBaseClass arg4);
		void onSendDataSms(jbyteArray arg0, jint arg1, jstring arg2, jint arg3, jint arg4, __JniBaseClass arg5);
		void onSendMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, __JniBaseClass arg3);
		void onSendMultipartTextSms(__JniBaseClass arg0, jint arg1, jstring arg2, __JniBaseClass arg3);
		void onSendMultipartTextSms(__JniBaseClass arg0, jint arg1, jstring arg2, jint arg3, __JniBaseClass arg4);
		void onSendTextSms(jstring arg0, jint arg1, jstring arg2, __JniBaseClass arg3);
		void onSendTextSms(jstring arg0, jint arg1, jstring arg2, jint arg3, __JniBaseClass arg4);
	};
} // namespace android::service::carrier

