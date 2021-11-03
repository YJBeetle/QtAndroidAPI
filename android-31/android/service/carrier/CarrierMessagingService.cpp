#include "../../../JByteArray.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "./MessagePdu.hpp"
#include "../../../JString.hpp"
#include "./CarrierMessagingService.hpp"

namespace android::service::carrier
{
	// Fields
	jint CarrierMessagingService::DOWNLOAD_STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_ERROR"
		);
	}
	jint CarrierMessagingService::DOWNLOAD_STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_OK"
		);
	}
	jint CarrierMessagingService::DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_DEFAULT()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DEFAULT"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_DROP()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DROP"
		);
	}
	jint CarrierMessagingService::RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE"
		);
	}
	jint CarrierMessagingService::SEND_FLAG_REQUEST_DELIVERY_STATUS()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_FLAG_REQUEST_DELIVERY_STATUS"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_ERROR"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_OK"
		);
	}
	jint CarrierMessagingService::SEND_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	JString CarrierMessagingService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.carrier.CarrierMessagingService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	CarrierMessagingService::CarrierMessagingService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	CarrierMessagingService::CarrierMessagingService()
		: android::app::Service(
			"android.service.carrier.CarrierMessagingService",
			"()V"
		) {}
	
	// Methods
	JObject CarrierMessagingService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void CarrierMessagingService::onDownloadMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, JObject arg3) const
	{
		callMethod<void>(
			"onDownloadMms",
			"(Landroid/net/Uri;ILandroid/net/Uri;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void CarrierMessagingService::onFilterSms(android::service::carrier::MessagePdu arg0, JString arg1, jint arg2, jint arg3, JObject arg4) const
	{
		callMethod<void>(
			"onFilterSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onReceiveTextSms(android::service::carrier::MessagePdu arg0, JString arg1, jint arg2, jint arg3, JObject arg4) const
	{
		callMethod<void>(
			"onReceiveTextSms",
			"(Landroid/service/carrier/MessagePdu;Ljava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onSendDataSms(JByteArray arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const
	{
		callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onSendDataSms(JByteArray arg0, jint arg1, JString arg2, jint arg3, jint arg4, JObject arg5) const
	{
		callMethod<void>(
			"onSendDataSms",
			"([BILjava/lang/String;IILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4,
			arg5.object()
		);
	}
	void CarrierMessagingService::onSendMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, JObject arg3) const
	{
		callMethod<void>(
			"onSendMms",
			"(Landroid/net/Uri;ILandroid/net/Uri;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(JObject arg0, jint arg1, JString arg2, JObject arg3) const
	{
		callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void CarrierMessagingService::onSendMultipartTextSms(JObject arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const
	{
		callMethod<void>(
			"onSendMultipartTextSms",
			"(Ljava/util/List;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4.object()
		);
	}
	void CarrierMessagingService::onSendTextSms(JString arg0, jint arg1, JString arg2, JObject arg3) const
	{
		callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;Landroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void CarrierMessagingService::onSendTextSms(JString arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const
	{
		callMethod<void>(
			"onSendTextSms",
			"(Ljava/lang/String;ILjava/lang/String;ILandroid/service/carrier/CarrierMessagingService$ResultCallback;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4.object()
		);
	}
} // namespace android::service::carrier

