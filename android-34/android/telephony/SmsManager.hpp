#pragma once

#include "../../JByteArray.hpp"
#include "../app/PendingIntent.def.hpp"
#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./SmsManager_FinancialSmsCallback.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./SmsManager.def.hpp"

namespace android::telephony
{
	// Fields
	inline JString SmsManager::EXTRA_MMS_DATA()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::EXTRA_MMS_HTTP_STATUS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"EXTRA_MMS_HTTP_STATUS",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_ALIAS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_ALIAS_MAX_CHARS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MAX_CHARS",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_ALIAS_MIN_CHARS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALIAS_MIN_CHARS",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_ALLOW_ATTACH_AUDIO()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_ALLOW_ATTACH_AUDIO",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_APPEND_TRANSACTION_ID()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_APPEND_TRANSACTION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_EMAIL_GATEWAY_NUMBER()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_EMAIL_GATEWAY_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_GROUP_MMS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_GROUP_MMS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_HTTP_PARAMS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_PARAMS",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_HTTP_SOCKET_TIMEOUT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_HTTP_SOCKET_TIMEOUT",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MAX_IMAGE_HEIGHT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MAX_IMAGE_WIDTH()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_IMAGE_WIDTH",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MAX_MESSAGE_SIZE()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MAX_MESSAGE_SIZE",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MESSAGE_TEXT_MAX_SIZE",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MMS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MMS_READ_REPORT_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MMS_READ_REPORT_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_MULTIPART_SMS_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_MULTIPART_SMS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_NAI_SUFFIX()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NAI_SUFFIX",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_NOTIFY_WAP_MMSC_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_RECIPIENT_LIMIT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_RECIPIENT_LIMIT",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SEND_MULTIPART_SMS_AS_SEPARATE_MESSAGES",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SHOW_CELL_BROADCAST_APP_LINKS",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_DELIVERY_REPORT_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_LENGTH_THRESHOLD",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SMS_TO_MMS_TEXT_THRESHOLD",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SUBJECT_MAX_LENGTH()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUBJECT_MAX_LENGTH",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_HTTP_CHARSET_HEADER",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_SUPPORT_MMS_CONTENT_DISPOSITION",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_UA_PROF_TAG_NAME()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_TAG_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_UA_PROF_URL()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_UA_PROF_URL",
			"Ljava/lang/String;"
		);
	}
	inline JString SmsManager::MMS_CONFIG_USER_AGENT()
	{
		return getStaticObjectField(
			"android.telephony.SmsManager",
			"MMS_CONFIG_USER_AGENT",
			"Ljava/lang/String;"
		);
	}
	inline jint SmsManager::MMS_ERROR_CONFIGURATION_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_CONFIGURATION_ERROR"
		);
	}
	inline jint SmsManager::MMS_ERROR_DATA_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_DATA_DISABLED"
		);
	}
	inline jint SmsManager::MMS_ERROR_HTTP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_HTTP_FAILURE"
		);
	}
	inline jint SmsManager::MMS_ERROR_INACTIVE_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_INACTIVE_SUBSCRIPTION"
		);
	}
	inline jint SmsManager::MMS_ERROR_INVALID_APN()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_INVALID_APN"
		);
	}
	inline jint SmsManager::MMS_ERROR_INVALID_SUBSCRIPTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_INVALID_SUBSCRIPTION_ID"
		);
	}
	inline jint SmsManager::MMS_ERROR_IO_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_IO_ERROR"
		);
	}
	inline jint SmsManager::MMS_ERROR_NO_DATA_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_NO_DATA_NETWORK"
		);
	}
	inline jint SmsManager::MMS_ERROR_RETRY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_RETRY"
		);
	}
	inline jint SmsManager::MMS_ERROR_UNABLE_CONNECT_MMS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNABLE_CONNECT_MMS"
		);
	}
	inline jint SmsManager::MMS_ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"MMS_ERROR_UNSPECIFIED"
		);
	}
	inline jint SmsManager::RESULT_BLUETOOTH_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_BLUETOOTH_DISCONNECTED"
		);
	}
	inline jint SmsManager::RESULT_CANCELLED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_CANCELLED"
		);
	}
	inline jint SmsManager::RESULT_ENCODING_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ENCODING_ERROR"
		);
	}
	inline jint SmsManager::RESULT_ERROR_FDN_CHECK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_FDN_CHECK_FAILURE"
		);
	}
	inline jint SmsManager::RESULT_ERROR_GENERIC_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_GENERIC_FAILURE"
		);
	}
	inline jint SmsManager::RESULT_ERROR_LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_LIMIT_EXCEEDED"
		);
	}
	inline jint SmsManager::RESULT_ERROR_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NONE"
		);
	}
	inline jint SmsManager::RESULT_ERROR_NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NO_SERVICE"
		);
	}
	inline jint SmsManager::RESULT_ERROR_NULL_PDU()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_NULL_PDU"
		);
	}
	inline jint SmsManager::RESULT_ERROR_RADIO_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_RADIO_OFF"
		);
	}
	inline jint SmsManager::RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NEVER_ALLOWED"
		);
	}
	inline jint SmsManager::RESULT_ERROR_SHORT_CODE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_ERROR_SHORT_CODE_NOT_ALLOWED"
		);
	}
	inline jint SmsManager::RESULT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_INTERNAL_ERROR"
		);
	}
	inline jint SmsManager::RESULT_INVALID_ARGUMENTS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_INVALID_ARGUMENTS"
		);
	}
	inline jint SmsManager::RESULT_INVALID_BLUETOOTH_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_INVALID_BLUETOOTH_ADDRESS"
		);
	}
	inline jint SmsManager::RESULT_INVALID_SMSC_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_INVALID_SMSC_ADDRESS"
		);
	}
	inline jint SmsManager::RESULT_INVALID_SMS_FORMAT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_INVALID_SMS_FORMAT"
		);
	}
	inline jint SmsManager::RESULT_INVALID_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_INVALID_STATE"
		);
	}
	inline jint SmsManager::RESULT_MODEM_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_MODEM_ERROR"
		);
	}
	inline jint SmsManager::RESULT_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_NETWORK_ERROR"
		);
	}
	inline jint SmsManager::RESULT_NETWORK_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_NETWORK_REJECT"
		);
	}
	inline jint SmsManager::RESULT_NO_BLUETOOTH_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_NO_BLUETOOTH_SERVICE"
		);
	}
	inline jint SmsManager::RESULT_NO_DEFAULT_SMS_APP()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_NO_DEFAULT_SMS_APP"
		);
	}
	inline jint SmsManager::RESULT_NO_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_NO_MEMORY"
		);
	}
	inline jint SmsManager::RESULT_NO_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_NO_RESOURCES"
		);
	}
	inline jint SmsManager::RESULT_OPERATION_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_OPERATION_NOT_ALLOWED"
		);
	}
	inline jint SmsManager::RESULT_RADIO_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RADIO_NOT_AVAILABLE"
		);
	}
	inline jint SmsManager::RESULT_RECEIVE_DISPATCH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RECEIVE_DISPATCH_FAILURE"
		);
	}
	inline jint SmsManager::RESULT_RECEIVE_INJECTED_NULL_PDU()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RECEIVE_INJECTED_NULL_PDU"
		);
	}
	inline jint SmsManager::RESULT_RECEIVE_NULL_MESSAGE_FROM_RIL()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RECEIVE_NULL_MESSAGE_FROM_RIL"
		);
	}
	inline jint SmsManager::RESULT_RECEIVE_RUNTIME_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RECEIVE_RUNTIME_EXCEPTION"
		);
	}
	inline jint SmsManager::RESULT_RECEIVE_SQL_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RECEIVE_SQL_EXCEPTION"
		);
	}
	inline jint SmsManager::RESULT_RECEIVE_URI_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RECEIVE_URI_EXCEPTION"
		);
	}
	inline jint SmsManager::RESULT_RECEIVE_WHILE_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RECEIVE_WHILE_ENCRYPTED"
		);
	}
	inline jint SmsManager::RESULT_REMOTE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_REMOTE_EXCEPTION"
		);
	}
	inline jint SmsManager::RESULT_REQUEST_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_REQUEST_NOT_SUPPORTED"
		);
	}
	inline jint SmsManager::RESULT_RIL_ABORTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_ABORTED"
		);
	}
	inline jint SmsManager::RESULT_RIL_ACCESS_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_ACCESS_BARRED"
		);
	}
	inline jint SmsManager::RESULT_RIL_BLOCKED_DUE_TO_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_BLOCKED_DUE_TO_CALL"
		);
	}
	inline jint SmsManager::RESULT_RIL_CANCELLED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_CANCELLED"
		);
	}
	inline jint SmsManager::RESULT_RIL_DEVICE_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_DEVICE_IN_USE"
		);
	}
	inline jint SmsManager::RESULT_RIL_ENCODING_ERR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_ENCODING_ERR"
		);
	}
	inline jint SmsManager::RESULT_RIL_GENERIC_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_GENERIC_ERROR"
		);
	}
	inline jint SmsManager::RESULT_RIL_INTERNAL_ERR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INTERNAL_ERR"
		);
	}
	inline jint SmsManager::RESULT_RIL_INVALID_ARGUMENTS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INVALID_ARGUMENTS"
		);
	}
	inline jint SmsManager::RESULT_RIL_INVALID_MODEM_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INVALID_MODEM_STATE"
		);
	}
	inline jint SmsManager::RESULT_RIL_INVALID_RESPONSE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INVALID_RESPONSE"
		);
	}
	inline jint SmsManager::RESULT_RIL_INVALID_SIM_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INVALID_SIM_STATE"
		);
	}
	inline jint SmsManager::RESULT_RIL_INVALID_SMSC_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INVALID_SMSC_ADDRESS"
		);
	}
	inline jint SmsManager::RESULT_RIL_INVALID_SMS_FORMAT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INVALID_SMS_FORMAT"
		);
	}
	inline jint SmsManager::RESULT_RIL_INVALID_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_INVALID_STATE"
		);
	}
	inline jint SmsManager::RESULT_RIL_MODEM_ERR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_MODEM_ERR"
		);
	}
	inline jint SmsManager::RESULT_RIL_NETWORK_ERR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NETWORK_ERR"
		);
	}
	inline jint SmsManager::RESULT_RIL_NETWORK_NOT_READY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NETWORK_NOT_READY"
		);
	}
	inline jint SmsManager::RESULT_RIL_NETWORK_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NETWORK_REJECT"
		);
	}
	inline jint SmsManager::RESULT_RIL_NO_MEMORY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NO_MEMORY"
		);
	}
	inline jint SmsManager::RESULT_RIL_NO_NETWORK_FOUND()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NO_NETWORK_FOUND"
		);
	}
	inline jint SmsManager::RESULT_RIL_NO_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NO_RESOURCES"
		);
	}
	inline jint SmsManager::RESULT_RIL_NO_SMS_TO_ACK()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NO_SMS_TO_ACK"
		);
	}
	inline jint SmsManager::RESULT_RIL_NO_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_NO_SUBSCRIPTION"
		);
	}
	inline jint SmsManager::RESULT_RIL_OPERATION_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_OPERATION_NOT_ALLOWED"
		);
	}
	inline jint SmsManager::RESULT_RIL_RADIO_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_RADIO_NOT_AVAILABLE"
		);
	}
	inline jint SmsManager::RESULT_RIL_REQUEST_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_REQUEST_NOT_SUPPORTED"
		);
	}
	inline jint SmsManager::RESULT_RIL_REQUEST_RATE_LIMITED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_REQUEST_RATE_LIMITED"
		);
	}
	inline jint SmsManager::RESULT_RIL_SIMULTANEOUS_SMS_AND_CALL_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SIMULTANEOUS_SMS_AND_CALL_NOT_ALLOWED"
		);
	}
	inline jint SmsManager::RESULT_RIL_SIM_ABSENT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SIM_ABSENT"
		);
	}
	inline jint SmsManager::RESULT_RIL_SIM_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SIM_BUSY"
		);
	}
	inline jint SmsManager::RESULT_RIL_SIM_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SIM_ERROR"
		);
	}
	inline jint SmsManager::RESULT_RIL_SIM_FULL()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SIM_FULL"
		);
	}
	inline jint SmsManager::RESULT_RIL_SIM_PIN2()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SIM_PIN2"
		);
	}
	inline jint SmsManager::RESULT_RIL_SIM_PUK2()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SIM_PUK2"
		);
	}
	inline jint SmsManager::RESULT_RIL_SMS_SEND_FAIL_RETRY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SMS_SEND_FAIL_RETRY"
		);
	}
	inline jint SmsManager::RESULT_RIL_SUBSCRIPTION_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SUBSCRIPTION_NOT_AVAILABLE"
		);
	}
	inline jint SmsManager::RESULT_RIL_SYSTEM_ERR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_RIL_SYSTEM_ERR"
		);
	}
	inline jint SmsManager::RESULT_SMS_BLOCKED_DURING_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_SMS_BLOCKED_DURING_EMERGENCY"
		);
	}
	inline jint SmsManager::RESULT_SMS_SEND_RETRY_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_SMS_SEND_RETRY_FAILED"
		);
	}
	inline jint SmsManager::RESULT_SYSTEM_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_SYSTEM_ERROR"
		);
	}
	inline jint SmsManager::RESULT_UNEXPECTED_EVENT_STOP_SENDING()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_UNEXPECTED_EVENT_STOP_SENDING"
		);
	}
	inline jint SmsManager::RESULT_USER_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"RESULT_USER_NOT_ALLOWED"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_CALL_BARRING()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_CALL_BARRING"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_CONGESTION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_CONGESTION"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_DESTINATION_OUT_OF_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_DESTINATION_OUT_OF_ORDER"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_FACILITY_NOT_IMPLEMENTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_FACILITY_NOT_IMPLEMENTED"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_FACILITY_NOT_SUBSCRIBED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_FACILITY_NOT_SUBSCRIBED"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_FACILITY_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_FACILITY_REJECTED"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_INFORMATION_ELEMENT_NON_EXISTENT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_INFORMATION_ELEMENT_NON_EXISTENT"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_INTERWORKING_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_INTERWORKING_UNSPECIFIED"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_INVALID_MANDATORY_INFORMATION()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_INVALID_MANDATORY_INFORMATION"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_INVALID_MESSAGE_REFERENCE_VALUE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_INVALID_MESSAGE_REFERENCE_VALUE"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_MESSAGE_INCOMPATIBLE_WITH_PROTOCOL_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_MESSAGE_INCOMPATIBLE_WITH_PROTOCOL_STATE"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_MESSAGE_TYPE_NON_EXISTENT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_MESSAGE_TYPE_NON_EXISTENT"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_NETWORK_OUT_OF_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_NETWORK_OUT_OF_ORDER"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_OPERATOR_DETERMINED_BARRING()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_OPERATOR_DETERMINED_BARRING"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_PROTOCOL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_PROTOCOL_ERROR"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_RESERVED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_RESERVED"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_RESOURCES_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_RESOURCES_UNAVAILABLE"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_SEMANTICALLY_INCORRECT_MESSAGE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_SEMANTICALLY_INCORRECT_MESSAGE"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_SHORT_MESSAGE_TRANSFER_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_SHORT_MESSAGE_TRANSFER_REJECTED"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_TEMPORARY_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_TEMPORARY_FAILURE"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_UNALLOCATED_NUMBER()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_UNALLOCATED_NUMBER"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_UNIDENTIFIED_SUBSCRIBER()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_UNIDENTIFIED_SUBSCRIBER"
		);
	}
	inline jint SmsManager::SMS_RP_CAUSE_UNKNOWN_SUBSCRIBER()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"SMS_RP_CAUSE_UNKNOWN_SUBSCRIBER"
		);
	}
	inline jint SmsManager::STATUS_ON_ICC_FREE()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_FREE"
		);
	}
	inline jint SmsManager::STATUS_ON_ICC_READ()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_READ"
		);
	}
	inline jint SmsManager::STATUS_ON_ICC_SENT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_SENT"
		);
	}
	inline jint SmsManager::STATUS_ON_ICC_UNREAD()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNREAD"
		);
	}
	inline jint SmsManager::STATUS_ON_ICC_UNSENT()
	{
		return getStaticField<jint>(
			"android.telephony.SmsManager",
			"STATUS_ON_ICC_UNSENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::telephony::SmsManager SmsManager::getDefault()
	{
		return callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getDefault",
			"()Landroid/telephony/SmsManager;"
		);
	}
	inline jint SmsManager::getDefaultSmsSubscriptionId()
	{
		return callStaticMethod<jint>(
			"android.telephony.SmsManager",
			"getDefaultSmsSubscriptionId",
			"()I"
		);
	}
	inline android::telephony::SmsManager SmsManager::getSmsManagerForSubscriptionId(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsManager",
			"getSmsManagerForSubscriptionId",
			"(I)Landroid/telephony/SmsManager;",
			arg0
		);
	}
	inline JString SmsManager::createAppSpecificSmsToken(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"createAppSpecificSmsToken",
			"(Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString SmsManager::createAppSpecificSmsTokenWithPackageInfo(JString arg0, android::app::PendingIntent arg1) const
	{
		return callObjectMethod(
			"createAppSpecificSmsTokenWithPackageInfo",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::telephony::SmsManager SmsManager::createForSubscriptionId(jint arg0) const
	{
		return callObjectMethod(
			"createForSubscriptionId",
			"(I)Landroid/telephony/SmsManager;",
			arg0
		);
	}
	inline java::util::ArrayList SmsManager::divideMessage(JString arg0) const
	{
		return callObjectMethod(
			"divideMessage",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline void SmsManager::downloadMultimediaMessage(android::content::Context arg0, JString arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4) const
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
	inline void SmsManager::downloadMultimediaMessage(android::content::Context arg0, JString arg1, android::net::Uri arg2, android::os::Bundle arg3, android::app::PendingIntent arg4, jlong arg5) const
	{
		callMethod<void>(
			"downloadMultimediaMessage",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/net/Uri;Landroid/os/Bundle;Landroid/app/PendingIntent;J)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	inline android::os::Bundle SmsManager::getCarrierConfigValues() const
	{
		return callObjectMethod(
			"getCarrierConfigValues",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint SmsManager::getSmsCapacityOnIcc() const
	{
		return callMethod<jint>(
			"getSmsCapacityOnIcc",
			"()I"
		);
	}
	inline void SmsManager::getSmsMessagesForFinancialApp(android::os::Bundle arg0, JObject arg1, android::telephony::SmsManager_FinancialSmsCallback arg2) const
	{
		callMethod<void>(
			"getSmsMessagesForFinancialApp",
			"(Landroid/os/Bundle;Ljava/util/concurrent/Executor;Landroid/telephony/SmsManager$FinancialSmsCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString SmsManager::getSmscAddress() const
	{
		return callObjectMethod(
			"getSmscAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jint SmsManager::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	inline void SmsManager::injectSmsPdu(JByteArray arg0, JString arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"injectSmsPdu",
			"([BLjava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void SmsManager::sendDataMessage(JString arg0, JString arg1, jshort arg2, JByteArray arg3, android::app::PendingIntent arg4, android::app::PendingIntent arg5) const
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
	inline void SmsManager::sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, JString arg2, android::os::Bundle arg3, android::app::PendingIntent arg4) const
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
	inline void SmsManager::sendMultimediaMessage(android::content::Context arg0, android::net::Uri arg1, JString arg2, android::os::Bundle arg3, android::app::PendingIntent arg4, jlong arg5) const
	{
		callMethod<void>(
			"sendMultimediaMessage",
			"(Landroid/content/Context;Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/app/PendingIntent;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	inline void SmsManager::sendMultipartTextMessage(JString arg0, JString arg1, java::util::ArrayList arg2, java::util::ArrayList arg3, java::util::ArrayList arg4) const
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
	inline void SmsManager::sendMultipartTextMessage(JString arg0, JString arg1, JObject arg2, JObject arg3, JObject arg4, jlong arg5) const
	{
		callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/util/List;J)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	inline void SmsManager::sendMultipartTextMessage(JString arg0, JString arg1, JObject arg2, JObject arg3, JObject arg4, JString arg5, JString arg6) const
	{
		callMethod<void>(
			"sendMultipartTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object<jstring>(),
			arg6.object<jstring>()
		);
	}
	inline void SmsManager::sendTextMessage(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const
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
	inline void SmsManager::sendTextMessage(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4, jlong arg5) const
	{
		callMethod<void>(
			"sendTextMessage",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;J)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	inline void SmsManager::sendTextMessageWithoutPersisting(JString arg0, JString arg1, JString arg2, android::app::PendingIntent arg3, android::app::PendingIntent arg4) const
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
	inline jboolean SmsManager::setSmscAddress(JString arg0) const
	{
		return callMethod<jboolean>(
			"setSmscAddress",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
