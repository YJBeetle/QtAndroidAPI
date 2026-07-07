#pragma once

#include "../../../JByteArray.hpp"
#include "../../content/Intent.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./MessagePdu.def.hpp"
#include "../../../JString.hpp"
#include "./CarrierMessagingService.def.hpp"

namespace android::service::carrier
{
	// Fields
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_ERROR"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_CONFIGURATION_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_CONFIGURATION_ERROR"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_DATA_DISABLED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_DATA_DISABLED"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_HTTP_FAILURE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_HTTP_FAILURE"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_INACTIVE_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_INACTIVE_SUBSCRIPTION"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_INVALID_APN()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_INVALID_APN"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_INVALID_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_INVALID_SUBSCRIPTION_ID"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_IO_ERROR"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_MMS_DISABLED_BY_CARRIER()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_MMS_DISABLED_BY_CARRIER"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_NO_DATA_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_NO_DATA_NETWORK"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_RETRY()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_RETRY"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_UNABLE_CONNECT_MMS()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_UNABLE_CONNECT_MMS"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_MMS_ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_MMS_ERROR_UNSPECIFIED"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_OK"
		);
	}
	inline jint CarrierMessagingService::DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"DOWNLOAD_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	inline jint CarrierMessagingService::RECEIVE_OPTIONS_DEFAULT()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DEFAULT"
		);
	}
	inline jint CarrierMessagingService::RECEIVE_OPTIONS_DROP()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_DROP"
		);
	}
	inline jint CarrierMessagingService::RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"RECEIVE_OPTIONS_SKIP_NOTIFY_WHEN_CREDENTIAL_PROTECTED_STORAGE_UNAVAILABLE"
		);
	}
	inline jint CarrierMessagingService::SEND_FLAG_REQUEST_DELIVERY_STATUS()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_FLAG_REQUEST_DELIVERY_STATUS"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_ERROR"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_CONFIGURATION_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_CONFIGURATION_ERROR"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_DATA_DISABLED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_DATA_DISABLED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_HTTP_FAILURE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_HTTP_FAILURE"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_INACTIVE_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_INACTIVE_SUBSCRIPTION"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_INVALID_APN()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_INVALID_APN"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_INVALID_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_INVALID_SUBSCRIPTION_ID"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_IO_ERROR"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_MMS_DISABLED_BY_CARRIER()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_MMS_DISABLED_BY_CARRIER"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_NO_DATA_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_NO_DATA_NETWORK"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_RETRY()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_RETRY"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_UNABLE_CONNECT_MMS()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_UNABLE_CONNECT_MMS"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_MMS_ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_MMS_ERROR_UNSPECIFIED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_OK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_OK"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_CANCELLED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_CANCELLED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ENCODING_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ENCODING_ERROR"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ERROR_FDN_CHECK_FAILURE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ERROR_FDN_CHECK_FAILURE"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ERROR_GENERIC_FAILURE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ERROR_GENERIC_FAILURE"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ERROR_LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ERROR_LIMIT_EXCEEDED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ERROR_NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ERROR_NO_SERVICE"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ERROR_NULL_PDU()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ERROR_NULL_PDU"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_ERROR_SHORT_CODE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_ERROR_SHORT_CODE_NOT_ALLOWED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_INVALID_ARGUMENTS()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_INVALID_ARGUMENTS"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_INVALID_SMSC_ADDRESS()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_INVALID_SMSC_ADDRESS"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_INVALID_SMS_FORMAT()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_INVALID_SMS_FORMAT"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_INVALID_STATE()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_INVALID_STATE"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_NETWORK_ERROR"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_NETWORK_REJECT()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_NETWORK_REJECT"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_OPERATION_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_OPERATION_NOT_ALLOWED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_REQUEST_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_REQUEST_NOT_SUPPORTED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_SMS_BLOCKED_DURING_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_SMS_BLOCKED_DURING_EMERGENCY"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RESULT_SMS_SEND_RETRY_FAILED()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RESULT_SMS_SEND_RETRY_FAILED"
		);
	}
	inline jint CarrierMessagingService::SEND_STATUS_RETRY_ON_CARRIER_NETWORK()
	{
		return getStaticField<jint>(
			"android.service.carrier.CarrierMessagingService",
			"SEND_STATUS_RETRY_ON_CARRIER_NETWORK"
		);
	}
	inline JString CarrierMessagingService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.carrier.CarrierMessagingService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline CarrierMessagingService::CarrierMessagingService()
		: android::app::Service(
			"android.service.carrier.CarrierMessagingService",
			"()V"
		) {}
	
	// Methods
	inline JObject CarrierMessagingService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void CarrierMessagingService::onDownloadMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, JObject arg3) const
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
	inline void CarrierMessagingService::onFilterSms(android::service::carrier::MessagePdu arg0, JString arg1, jint arg2, jint arg3, JObject arg4) const
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
	inline void CarrierMessagingService::onReceiveTextSms(android::service::carrier::MessagePdu arg0, JString arg1, jint arg2, jint arg3, JObject arg4) const
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
	inline void CarrierMessagingService::onSendDataSms(JByteArray arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const
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
	inline void CarrierMessagingService::onSendDataSms(JByteArray arg0, jint arg1, JString arg2, jint arg3, jint arg4, JObject arg5) const
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
	inline void CarrierMessagingService::onSendMms(android::net::Uri arg0, jint arg1, android::net::Uri arg2, JObject arg3) const
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
	inline void CarrierMessagingService::onSendMultipartTextSms(JObject arg0, jint arg1, JString arg2, JObject arg3) const
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
	inline void CarrierMessagingService::onSendMultipartTextSms(JObject arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const
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
	inline void CarrierMessagingService::onSendTextSms(JString arg0, jint arg1, JString arg2, JObject arg3) const
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
	inline void CarrierMessagingService::onSendTextSms(JString arg0, jint arg1, JString arg2, jint arg3, JObject arg4) const
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

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::carrier;
#endif
