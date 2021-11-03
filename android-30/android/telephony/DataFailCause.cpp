#include "./DataFailCause.hpp"

namespace android::telephony
{
	// Fields
	jint DataFailCause::ACCESS_ATTEMPT_ALREADY_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_ATTEMPT_ALREADY_IN_PROGRESS"
		);
	}
	jint DataFailCause::ACCESS_BLOCK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_BLOCK"
		);
	}
	jint DataFailCause::ACCESS_BLOCK_ALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_BLOCK_ALL"
		);
	}
	jint DataFailCause::ACCESS_CLASS_DSAC_REJECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_CLASS_DSAC_REJECTION"
		);
	}
	jint DataFailCause::ACCESS_CONTROL_LIST_CHECK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_CONTROL_LIST_CHECK_FAILURE"
		);
	}
	jint DataFailCause::ACTIVATION_REJECTED_BCM_VIOLATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVATION_REJECTED_BCM_VIOLATION"
		);
	}
	jint DataFailCause::ACTIVATION_REJECT_GGSN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVATION_REJECT_GGSN"
		);
	}
	jint DataFailCause::ACTIVATION_REJECT_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVATION_REJECT_UNSPECIFIED"
		);
	}
	jint DataFailCause::ACTIVE_PDP_CONTEXT_MAX_NUMBER_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVE_PDP_CONTEXT_MAX_NUMBER_REACHED"
		);
	}
	jint DataFailCause::APN_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_DISABLED"
		);
	}
	jint DataFailCause::APN_DISALLOWED_ON_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_DISALLOWED_ON_ROAMING"
		);
	}
	jint DataFailCause::APN_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_MISMATCH"
		);
	}
	jint DataFailCause::APN_PARAMETERS_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_PARAMETERS_CHANGED"
		);
	}
	jint DataFailCause::APN_PENDING_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_PENDING_HANDOVER"
		);
	}
	jint DataFailCause::APN_TYPE_CONFLICT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_TYPE_CONFLICT"
		);
	}
	jint DataFailCause::AUTH_FAILURE_ON_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"AUTH_FAILURE_ON_EMERGENCY_CALL"
		);
	}
	jint DataFailCause::BEARER_HANDLING_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"BEARER_HANDLING_NOT_SUPPORTED"
		);
	}
	jint DataFailCause::CALL_DISALLOWED_IN_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CALL_DISALLOWED_IN_ROAMING"
		);
	}
	jint DataFailCause::CALL_PREEMPT_BY_EMERGENCY_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CALL_PREEMPT_BY_EMERGENCY_APN"
		);
	}
	jint DataFailCause::CANNOT_ENCODE_OTA_MESSAGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CANNOT_ENCODE_OTA_MESSAGE"
		);
	}
	jint DataFailCause::CDMA_ALERT_STOP()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_ALERT_STOP"
		);
	}
	jint DataFailCause::CDMA_INCOMING_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_INCOMING_CALL"
		);
	}
	jint DataFailCause::CDMA_INTERCEPT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_INTERCEPT"
		);
	}
	jint DataFailCause::CDMA_LOCK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_LOCK"
		);
	}
	jint DataFailCause::CDMA_RELEASE_DUE_TO_SO_REJECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_RELEASE_DUE_TO_SO_REJECTION"
		);
	}
	jint DataFailCause::CDMA_REORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_REORDER"
		);
	}
	jint DataFailCause::CDMA_RETRY_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_RETRY_ORDER"
		);
	}
	jint DataFailCause::CHANNEL_ACQUISITION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CHANNEL_ACQUISITION_FAILURE"
		);
	}
	jint DataFailCause::CLOSE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CLOSE_IN_PROGRESS"
		);
	}
	jint DataFailCause::COLLISION_WITH_NETWORK_INITIATED_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"COLLISION_WITH_NETWORK_INITIATED_REQUEST"
		);
	}
	jint DataFailCause::COMPANION_IFACE_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"COMPANION_IFACE_IN_USE"
		);
	}
	jint DataFailCause::CONCURRENT_SERVICES_INCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONCURRENT_SERVICES_INCOMPATIBLE"
		);
	}
	jint DataFailCause::CONCURRENT_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONCURRENT_SERVICES_NOT_ALLOWED"
		);
	}
	jint DataFailCause::CONCURRENT_SERVICE_NOT_SUPPORTED_BY_BASE_STATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONCURRENT_SERVICE_NOT_SUPPORTED_BY_BASE_STATION"
		);
	}
	jint DataFailCause::CONDITIONAL_IE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONDITIONAL_IE_ERROR"
		);
	}
	jint DataFailCause::CONGESTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONGESTION"
		);
	}
	jint DataFailCause::CONNECTION_RELEASED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONNECTION_RELEASED"
		);
	}
	jint DataFailCause::CS_DOMAIN_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CS_DOMAIN_NOT_AVAILABLE"
		);
	}
	jint DataFailCause::CS_FALLBACK_CALL_ESTABLISHMENT_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CS_FALLBACK_CALL_ESTABLISHMENT_NOT_ALLOWED"
		);
	}
	jint DataFailCause::DATA_PLAN_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DATA_PLAN_EXPIRED"
		);
	}
	jint DataFailCause::DATA_ROAMING_SETTINGS_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DATA_ROAMING_SETTINGS_DISABLED"
		);
	}
	jint DataFailCause::DATA_SETTINGS_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DATA_SETTINGS_DISABLED"
		);
	}
	jint DataFailCause::DBM_OR_SMS_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DBM_OR_SMS_IN_PROGRESS"
		);
	}
	jint DataFailCause::DDS_SWITCHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DDS_SWITCHED"
		);
	}
	jint DataFailCause::DDS_SWITCH_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DDS_SWITCH_IN_PROGRESS"
		);
	}
	jint DataFailCause::DRB_RELEASED_BY_RRC()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DRB_RELEASED_BY_RRC"
		);
	}
	jint DataFailCause::DS_EXPLICIT_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DS_EXPLICIT_DEACTIVATION"
		);
	}
	jint DataFailCause::DUAL_SWITCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DUAL_SWITCH"
		);
	}
	jint DataFailCause::DUN_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DUN_CALL_DISALLOWED"
		);
	}
	jint DataFailCause::DUPLICATE_BEARER_ID()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DUPLICATE_BEARER_ID"
		);
	}
	jint DataFailCause::EHRPD_TO_HRPD_FALLBACK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EHRPD_TO_HRPD_FALLBACK"
		);
	}
	jint DataFailCause::EMBMS_NOT_ENABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMBMS_NOT_ENABLED"
		);
	}
	jint DataFailCause::EMBMS_REGULAR_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMBMS_REGULAR_DEACTIVATION"
		);
	}
	jint DataFailCause::EMERGENCY_IFACE_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMERGENCY_IFACE_ONLY"
		);
	}
	jint DataFailCause::EMERGENCY_MODE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMERGENCY_MODE"
		);
	}
	jint DataFailCause::EMM_ACCESS_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ACCESS_BARRED"
		);
	}
	jint DataFailCause::EMM_ACCESS_BARRED_INFINITE_RETRY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ACCESS_BARRED_INFINITE_RETRY"
		);
	}
	jint DataFailCause::EMM_ATTACH_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ATTACH_FAILED"
		);
	}
	jint DataFailCause::EMM_ATTACH_STARTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ATTACH_STARTED"
		);
	}
	jint DataFailCause::EMM_DETACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_DETACHED"
		);
	}
	jint DataFailCause::EMM_T3417_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_T3417_EXPIRED"
		);
	}
	jint DataFailCause::EMM_T3417_EXT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_T3417_EXT_EXPIRED"
		);
	}
	jint DataFailCause::EPS_SERVICES_AND_NON_EPS_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EPS_SERVICES_AND_NON_EPS_SERVICES_NOT_ALLOWED"
		);
	}
	jint DataFailCause::EPS_SERVICES_NOT_ALLOWED_IN_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EPS_SERVICES_NOT_ALLOWED_IN_PLMN"
		);
	}
	jint DataFailCause::ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ERROR_UNSPECIFIED"
		);
	}
	jint DataFailCause::ESM_BAD_OTA_MESSAGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_BAD_OTA_MESSAGE"
		);
	}
	jint DataFailCause::ESM_BEARER_DEACTIVATED_TO_SYNC_WITH_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_BEARER_DEACTIVATED_TO_SYNC_WITH_NETWORK"
		);
	}
	jint DataFailCause::ESM_COLLISION_SCENARIOS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_COLLISION_SCENARIOS"
		);
	}
	jint DataFailCause::ESM_CONTEXT_TRANSFERRED_DUE_TO_IRAT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_CONTEXT_TRANSFERRED_DUE_TO_IRAT"
		);
	}
	jint DataFailCause::ESM_DOWNLOAD_SERVER_REJECTED_THE_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_DOWNLOAD_SERVER_REJECTED_THE_CALL"
		);
	}
	jint DataFailCause::ESM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_FAILURE"
		);
	}
	jint DataFailCause::ESM_INFO_NOT_RECEIVED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_INFO_NOT_RECEIVED"
		);
	}
	jint DataFailCause::ESM_LOCAL_CAUSE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_LOCAL_CAUSE_NONE"
		);
	}
	jint DataFailCause::ESM_NW_ACTIVATED_DED_BEARER_WITH_ID_OF_DEF_BEARER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_NW_ACTIVATED_DED_BEARER_WITH_ID_OF_DEF_BEARER"
		);
	}
	jint DataFailCause::ESM_PROCEDURE_TIME_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_PROCEDURE_TIME_OUT"
		);
	}
	jint DataFailCause::ESM_UNKNOWN_EPS_BEARER_CONTEXT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_UNKNOWN_EPS_BEARER_CONTEXT"
		);
	}
	jint DataFailCause::EVDO_CONNECTION_DENY_BY_BILLING_OR_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_CONNECTION_DENY_BY_BILLING_OR_AUTHENTICATION_FAILURE"
		);
	}
	jint DataFailCause::EVDO_CONNECTION_DENY_BY_GENERAL_OR_NETWORK_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_CONNECTION_DENY_BY_GENERAL_OR_NETWORK_BUSY"
		);
	}
	jint DataFailCause::EVDO_HDR_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_CHANGED"
		);
	}
	jint DataFailCause::EVDO_HDR_CONNECTION_SETUP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_CONNECTION_SETUP_TIMEOUT"
		);
	}
	jint DataFailCause::EVDO_HDR_EXITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_EXITED"
		);
	}
	jint DataFailCause::EVDO_HDR_NO_SESSION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_NO_SESSION"
		);
	}
	jint DataFailCause::EVDO_USING_GPS_FIX_INSTEAD_OF_HDR_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_USING_GPS_FIX_INSTEAD_OF_HDR_CALL"
		);
	}
	jint DataFailCause::FADE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FADE"
		);
	}
	jint DataFailCause::FAILED_TO_ACQUIRE_COLOCATED_HDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FAILED_TO_ACQUIRE_COLOCATED_HDR"
		);
	}
	jint DataFailCause::FEATURE_NOT_SUPP()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FEATURE_NOT_SUPP"
		);
	}
	jint DataFailCause::FILTER_SEMANTIC_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FILTER_SEMANTIC_ERROR"
		);
	}
	jint DataFailCause::FILTER_SYTAX_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FILTER_SYTAX_ERROR"
		);
	}
	jint DataFailCause::FORBIDDEN_APN_NAME()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FORBIDDEN_APN_NAME"
		);
	}
	jint DataFailCause::GPRS_REGISTRATION_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_REGISTRATION_FAIL"
		);
	}
	jint DataFailCause::GPRS_SERVICES_AND_NON_GPRS_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_SERVICES_AND_NON_GPRS_SERVICES_NOT_ALLOWED"
		);
	}
	jint DataFailCause::GPRS_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_SERVICES_NOT_ALLOWED"
		);
	}
	jint DataFailCause::GPRS_SERVICES_NOT_ALLOWED_IN_THIS_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_SERVICES_NOT_ALLOWED_IN_THIS_PLMN"
		);
	}
	jint DataFailCause::HANDOFF_PREFERENCE_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HANDOFF_PREFERENCE_CHANGED"
		);
	}
	jint DataFailCause::HDR_ACCESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HDR_ACCESS_FAILURE"
		);
	}
	jint DataFailCause::HDR_FADE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HDR_FADE"
		);
	}
	jint DataFailCause::HDR_NO_LOCK_GRANTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HDR_NO_LOCK_GRANTED"
		);
	}
	jint DataFailCause::IFACE_AND_POL_FAMILY_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IFACE_AND_POL_FAMILY_MISMATCH"
		);
	}
	jint DataFailCause::IFACE_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IFACE_MISMATCH"
		);
	}
	jint DataFailCause::ILLEGAL_ME()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ILLEGAL_ME"
		);
	}
	jint DataFailCause::ILLEGAL_MS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ILLEGAL_MS"
		);
	}
	jint DataFailCause::IMEI_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IMEI_NOT_ACCEPTED"
		);
	}
	jint DataFailCause::IMPLICITLY_DETACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IMPLICITLY_DETACHED"
		);
	}
	jint DataFailCause::IMSI_UNKNOWN_IN_HOME_SUBSCRIBER_SERVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IMSI_UNKNOWN_IN_HOME_SUBSCRIBER_SERVER"
		);
	}
	jint DataFailCause::INCOMING_CALL_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INCOMING_CALL_REJECTED"
		);
	}
	jint DataFailCause::INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INSUFFICIENT_RESOURCES"
		);
	}
	jint DataFailCause::INTERFACE_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INTERFACE_IN_USE"
		);
	}
	jint DataFailCause::INTERNAL_CALL_PREEMPT_BY_HIGH_PRIO_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INTERNAL_CALL_PREEMPT_BY_HIGH_PRIO_APN"
		);
	}
	jint DataFailCause::INTERNAL_EPC_NONEPC_TRANSITION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INTERNAL_EPC_NONEPC_TRANSITION"
		);
	}
	jint DataFailCause::INVALID_CONNECTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_CONNECTION_ID"
		);
	}
	jint DataFailCause::INVALID_DNS_ADDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_DNS_ADDR"
		);
	}
	jint DataFailCause::INVALID_EMM_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_EMM_STATE"
		);
	}
	jint DataFailCause::INVALID_MANDATORY_INFO()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_MANDATORY_INFO"
		);
	}
	jint DataFailCause::INVALID_MODE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_MODE"
		);
	}
	jint DataFailCause::INVALID_PCSCF_ADDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_PCSCF_ADDR"
		);
	}
	jint DataFailCause::INVALID_PCSCF_OR_DNS_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_PCSCF_OR_DNS_ADDRESS"
		);
	}
	jint DataFailCause::INVALID_PRIMARY_NSAPI()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_PRIMARY_NSAPI"
		);
	}
	jint DataFailCause::INVALID_SIM_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_SIM_STATE"
		);
	}
	jint DataFailCause::INVALID_TRANSACTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_TRANSACTION_ID"
		);
	}
	jint DataFailCause::IPV6_ADDRESS_TRANSFER_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IPV6_ADDRESS_TRANSFER_FAILED"
		);
	}
	jint DataFailCause::IPV6_PREFIX_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IPV6_PREFIX_UNAVAILABLE"
		);
	}
	jint DataFailCause::IP_ADDRESS_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IP_ADDRESS_MISMATCH"
		);
	}
	jint DataFailCause::IP_VERSION_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IP_VERSION_MISMATCH"
		);
	}
	jint DataFailCause::IRAT_HANDOVER_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IRAT_HANDOVER_FAILED"
		);
	}
	jint DataFailCause::IS707B_MAX_ACCESS_PROBES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IS707B_MAX_ACCESS_PROBES"
		);
	}
	jint DataFailCause::LIMITED_TO_IPV4()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LIMITED_TO_IPV4"
		);
	}
	jint DataFailCause::LIMITED_TO_IPV6()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LIMITED_TO_IPV6"
		);
	}
	jint DataFailCause::LLC_SNDCP()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LLC_SNDCP"
		);
	}
	jint DataFailCause::LOCAL_END()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOCAL_END"
		);
	}
	jint DataFailCause::LOCATION_AREA_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOCATION_AREA_NOT_ALLOWED"
		);
	}
	jint DataFailCause::LOST_CONNECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOST_CONNECTION"
		);
	}
	jint DataFailCause::LOWER_LAYER_REGISTRATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOWER_LAYER_REGISTRATION_FAILURE"
		);
	}
	jint DataFailCause::LOW_POWER_MODE_OR_POWERING_DOWN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOW_POWER_MODE_OR_POWERING_DOWN"
		);
	}
	jint DataFailCause::LTE_NAS_SERVICE_REQUEST_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LTE_NAS_SERVICE_REQUEST_FAILED"
		);
	}
	jint DataFailCause::LTE_THROTTLING_NOT_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LTE_THROTTLING_NOT_REQUIRED"
		);
	}
	jint DataFailCause::MAC_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAC_FAILURE"
		);
	}
	jint DataFailCause::MAXIMIUM_NSAPIS_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAXIMIUM_NSAPIS_EXCEEDED"
		);
	}
	jint DataFailCause::MAXINUM_SIZE_OF_L2_MESSAGE_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAXINUM_SIZE_OF_L2_MESSAGE_EXCEEDED"
		);
	}
	jint DataFailCause::MAX_ACCESS_PROBE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_ACCESS_PROBE"
		);
	}
	jint DataFailCause::MAX_IPV4_CONNECTIONS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_IPV4_CONNECTIONS"
		);
	}
	jint DataFailCause::MAX_IPV6_CONNECTIONS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_IPV6_CONNECTIONS"
		);
	}
	jint DataFailCause::MAX_PPP_INACTIVITY_TIMER_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_PPP_INACTIVITY_TIMER_EXPIRED"
		);
	}
	jint DataFailCause::MESSAGE_INCORRECT_SEMANTIC()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MESSAGE_INCORRECT_SEMANTIC"
		);
	}
	jint DataFailCause::MESSAGE_TYPE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MESSAGE_TYPE_UNSUPPORTED"
		);
	}
	jint DataFailCause::MIP_CONFIG_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_CONFIG_FAILURE"
		);
	}
	jint DataFailCause::MIP_FA_ADMIN_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_ADMIN_PROHIBITED"
		);
	}
	jint DataFailCause::MIP_FA_DELIVERY_STYLE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_DELIVERY_STYLE_NOT_SUPPORTED"
		);
	}
	jint DataFailCause::MIP_FA_ENCAPSULATION_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_ENCAPSULATION_UNAVAILABLE"
		);
	}
	jint DataFailCause::MIP_FA_HOME_AGENT_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_HOME_AGENT_AUTHENTICATION_FAILURE"
		);
	}
	jint DataFailCause::MIP_FA_INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_INSUFFICIENT_RESOURCES"
		);
	}
	jint DataFailCause::MIP_FA_MALFORMED_REPLY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MALFORMED_REPLY"
		);
	}
	jint DataFailCause::MIP_FA_MALFORMED_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MALFORMED_REQUEST"
		);
	}
	jint DataFailCause::MIP_FA_MISSING_CHALLENGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_CHALLENGE"
		);
	}
	jint DataFailCause::MIP_FA_MISSING_HOME_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_HOME_ADDRESS"
		);
	}
	jint DataFailCause::MIP_FA_MISSING_HOME_AGENT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_HOME_AGENT"
		);
	}
	jint DataFailCause::MIP_FA_MISSING_NAI()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_NAI"
		);
	}
	jint DataFailCause::MIP_FA_MOBILE_NODE_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MOBILE_NODE_AUTHENTICATION_FAILURE"
		);
	}
	jint DataFailCause::MIP_FA_REASON_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REASON_UNSPECIFIED"
		);
	}
	jint DataFailCause::MIP_FA_REQUESTED_LIFETIME_TOO_LONG()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REQUESTED_LIFETIME_TOO_LONG"
		);
	}
	jint DataFailCause::MIP_FA_REVERSE_TUNNEL_IS_MANDATORY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REVERSE_TUNNEL_IS_MANDATORY"
		);
	}
	jint DataFailCause::MIP_FA_REVERSE_TUNNEL_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REVERSE_TUNNEL_UNAVAILABLE"
		);
	}
	jint DataFailCause::MIP_FA_STALE_CHALLENGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_STALE_CHALLENGE"
		);
	}
	jint DataFailCause::MIP_FA_UNKNOWN_CHALLENGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_UNKNOWN_CHALLENGE"
		);
	}
	jint DataFailCause::MIP_FA_VJ_HEADER_COMPRESSION_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_VJ_HEADER_COMPRESSION_UNAVAILABLE"
		);
	}
	jint DataFailCause::MIP_HA_ADMIN_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_ADMIN_PROHIBITED"
		);
	}
	jint DataFailCause::MIP_HA_ENCAPSULATION_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_ENCAPSULATION_UNAVAILABLE"
		);
	}
	jint DataFailCause::MIP_HA_FOREIGN_AGENT_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_FOREIGN_AGENT_AUTHENTICATION_FAILURE"
		);
	}
	jint DataFailCause::MIP_HA_INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_INSUFFICIENT_RESOURCES"
		);
	}
	jint DataFailCause::MIP_HA_MALFORMED_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_MALFORMED_REQUEST"
		);
	}
	jint DataFailCause::MIP_HA_MOBILE_NODE_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_MOBILE_NODE_AUTHENTICATION_FAILURE"
		);
	}
	jint DataFailCause::MIP_HA_REASON_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REASON_UNSPECIFIED"
		);
	}
	jint DataFailCause::MIP_HA_REGISTRATION_ID_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REGISTRATION_ID_MISMATCH"
		);
	}
	jint DataFailCause::MIP_HA_REVERSE_TUNNEL_IS_MANDATORY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REVERSE_TUNNEL_IS_MANDATORY"
		);
	}
	jint DataFailCause::MIP_HA_REVERSE_TUNNEL_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REVERSE_TUNNEL_UNAVAILABLE"
		);
	}
	jint DataFailCause::MIP_HA_UNKNOWN_HOME_AGENT_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_UNKNOWN_HOME_AGENT_ADDRESS"
		);
	}
	jint DataFailCause::MISSING_UNKNOWN_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MISSING_UNKNOWN_APN"
		);
	}
	jint DataFailCause::MODEM_APP_PREEMPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MODEM_APP_PREEMPTED"
		);
	}
	jint DataFailCause::MODEM_RESTART()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MODEM_RESTART"
		);
	}
	jint DataFailCause::MSC_TEMPORARILY_NOT_REACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MSC_TEMPORARILY_NOT_REACHABLE"
		);
	}
	jint DataFailCause::MSG_AND_PROTOCOL_STATE_UNCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MSG_AND_PROTOCOL_STATE_UNCOMPATIBLE"
		);
	}
	jint DataFailCause::MSG_TYPE_NONCOMPATIBLE_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MSG_TYPE_NONCOMPATIBLE_STATE"
		);
	}
	jint DataFailCause::MS_IDENTITY_CANNOT_BE_DERIVED_BY_THE_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MS_IDENTITY_CANNOT_BE_DERIVED_BY_THE_NETWORK"
		);
	}
	jint DataFailCause::MULTIPLE_PDP_CALL_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MULTIPLE_PDP_CALL_NOT_ALLOWED"
		);
	}
	jint DataFailCause::MULTI_CONN_TO_SAME_PDN_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MULTI_CONN_TO_SAME_PDN_NOT_ALLOWED"
		);
	}
	jint DataFailCause::NAS_LAYER_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NAS_LAYER_FAILURE"
		);
	}
	jint DataFailCause::NAS_REQUEST_REJECTED_BY_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NAS_REQUEST_REJECTED_BY_NETWORK"
		);
	}
	jint DataFailCause::NAS_SIGNALLING()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NAS_SIGNALLING"
		);
	}
	jint DataFailCause::NETWORK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_FAILURE"
		);
	}
	jint DataFailCause::NETWORK_INITIATED_DETACH_NO_AUTO_REATTACH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_INITIATED_DETACH_NO_AUTO_REATTACH"
		);
	}
	jint DataFailCause::NETWORK_INITIATED_DETACH_WITH_AUTO_REATTACH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_INITIATED_DETACH_WITH_AUTO_REATTACH"
		);
	}
	jint DataFailCause::NETWORK_INITIATED_TERMINATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_INITIATED_TERMINATION"
		);
	}
	jint DataFailCause::NONE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NONE"
		);
	}
	jint DataFailCause::NON_IP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NON_IP_NOT_SUPPORTED"
		);
	}
	jint DataFailCause::NORMAL_RELEASE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NORMAL_RELEASE"
		);
	}
	jint DataFailCause::NO_CDMA_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_CDMA_SERVICE"
		);
	}
	jint DataFailCause::NO_COLLOCATED_HDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_COLLOCATED_HDR"
		);
	}
	jint DataFailCause::NO_EPS_BEARER_CONTEXT_ACTIVATED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_EPS_BEARER_CONTEXT_ACTIVATED"
		);
	}
	jint DataFailCause::NO_GPRS_CONTEXT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_GPRS_CONTEXT"
		);
	}
	jint DataFailCause::NO_HYBRID_HDR_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_HYBRID_HDR_SERVICE"
		);
	}
	jint DataFailCause::NO_PDP_CONTEXT_ACTIVATED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_PDP_CONTEXT_ACTIVATED"
		);
	}
	jint DataFailCause::NO_RESPONSE_FROM_BASE_STATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_RESPONSE_FROM_BASE_STATION"
		);
	}
	jint DataFailCause::NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_SERVICE"
		);
	}
	jint DataFailCause::NO_SERVICE_ON_GATEWAY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_SERVICE_ON_GATEWAY"
		);
	}
	jint DataFailCause::NSAPI_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NSAPI_IN_USE"
		);
	}
	jint DataFailCause::NULL_APN_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NULL_APN_DISALLOWED"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_1()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_1"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_10()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_10"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_11()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_11"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_12()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_12"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_13()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_13"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_14()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_14"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_15()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_15"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_2()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_2"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_3()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_3"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_4()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_4"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_5()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_5"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_6()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_6"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_7()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_7"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_8()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_8"
		);
	}
	jint DataFailCause::OEM_DCFAILCAUSE_9()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_9"
		);
	}
	jint DataFailCause::ONLY_IPV4V6_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_IPV4V6_ALLOWED"
		);
	}
	jint DataFailCause::ONLY_IPV4_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_IPV4_ALLOWED"
		);
	}
	jint DataFailCause::ONLY_IPV6_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_IPV6_ALLOWED"
		);
	}
	jint DataFailCause::ONLY_NON_IP_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_NON_IP_ALLOWED"
		);
	}
	jint DataFailCause::ONLY_SINGLE_BEARER_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_SINGLE_BEARER_ALLOWED"
		);
	}
	jint DataFailCause::OPERATOR_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OPERATOR_BARRED"
		);
	}
	jint DataFailCause::OTASP_COMMIT_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OTASP_COMMIT_IN_PROGRESS"
		);
	}
	jint DataFailCause::PDN_CONN_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_CONN_DOES_NOT_EXIST"
		);
	}
	jint DataFailCause::PDN_INACTIVITY_TIMER_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_INACTIVITY_TIMER_EXPIRED"
		);
	}
	jint DataFailCause::PDN_IPV4_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV4_CALL_DISALLOWED"
		);
	}
	jint DataFailCause::PDN_IPV4_CALL_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV4_CALL_THROTTLED"
		);
	}
	jint DataFailCause::PDN_IPV6_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV6_CALL_DISALLOWED"
		);
	}
	jint DataFailCause::PDN_IPV6_CALL_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV6_CALL_THROTTLED"
		);
	}
	jint DataFailCause::PDN_NON_IP_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_NON_IP_CALL_DISALLOWED"
		);
	}
	jint DataFailCause::PDN_NON_IP_CALL_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_NON_IP_CALL_THROTTLED"
		);
	}
	jint DataFailCause::PDP_ACTIVATE_MAX_RETRY_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_ACTIVATE_MAX_RETRY_FAILED"
		);
	}
	jint DataFailCause::PDP_DUPLICATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_DUPLICATE"
		);
	}
	jint DataFailCause::PDP_ESTABLISH_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_ESTABLISH_TIMEOUT_EXPIRED"
		);
	}
	jint DataFailCause::PDP_INACTIVE_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_INACTIVE_TIMEOUT_EXPIRED"
		);
	}
	jint DataFailCause::PDP_LOWERLAYER_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_LOWERLAYER_ERROR"
		);
	}
	jint DataFailCause::PDP_MODIFY_COLLISION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_MODIFY_COLLISION"
		);
	}
	jint DataFailCause::PDP_MODIFY_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_MODIFY_TIMEOUT_EXPIRED"
		);
	}
	jint DataFailCause::PDP_PPP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_PPP_NOT_SUPPORTED"
		);
	}
	jint DataFailCause::PDP_WITHOUT_ACTIVE_TFT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_WITHOUT_ACTIVE_TFT"
		);
	}
	jint DataFailCause::PHONE_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PHONE_IN_USE"
		);
	}
	jint DataFailCause::PHYSICAL_LINK_CLOSE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PHYSICAL_LINK_CLOSE_IN_PROGRESS"
		);
	}
	jint DataFailCause::PLMN_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PLMN_NOT_ALLOWED"
		);
	}
	jint DataFailCause::PPP_AUTH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_AUTH_FAILURE"
		);
	}
	jint DataFailCause::PPP_CHAP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_CHAP_FAILURE"
		);
	}
	jint DataFailCause::PPP_CLOSE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_CLOSE_IN_PROGRESS"
		);
	}
	jint DataFailCause::PPP_OPTION_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_OPTION_MISMATCH"
		);
	}
	jint DataFailCause::PPP_PAP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_PAP_FAILURE"
		);
	}
	jint DataFailCause::PPP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_TIMEOUT"
		);
	}
	jint DataFailCause::PREF_RADIO_TECH_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PREF_RADIO_TECH_CHANGED"
		);
	}
	jint DataFailCause::PROFILE_BEARER_INCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PROFILE_BEARER_INCOMPATIBLE"
		);
	}
	jint DataFailCause::PROTOCOL_ERRORS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PROTOCOL_ERRORS"
		);
	}
	jint DataFailCause::QOS_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"QOS_NOT_ACCEPTED"
		);
	}
	jint DataFailCause::RADIO_ACCESS_BEARER_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_ACCESS_BEARER_FAILURE"
		);
	}
	jint DataFailCause::RADIO_ACCESS_BEARER_SETUP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_ACCESS_BEARER_SETUP_FAILURE"
		);
	}
	jint DataFailCause::RADIO_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_NOT_AVAILABLE"
		);
	}
	jint DataFailCause::RADIO_POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_POWER_OFF"
		);
	}
	jint DataFailCause::REDIRECTION_OR_HANDOFF_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REDIRECTION_OR_HANDOFF_IN_PROGRESS"
		);
	}
	jint DataFailCause::REGISTRATION_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REGISTRATION_FAIL"
		);
	}
	jint DataFailCause::REGULAR_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REGULAR_DEACTIVATION"
		);
	}
	jint DataFailCause::REJECTED_BY_BASE_STATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REJECTED_BY_BASE_STATION"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ABORTED_AFTER_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_AFTER_HANDOVER"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ABORTED_AFTER_IRAT_CELL_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_AFTER_IRAT_CELL_CHANGE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ABORTED_DUE_TO_IRAT_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_DUE_TO_IRAT_CHANGE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ABORTED_DURING_IRAT_CELL_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_DURING_IRAT_CELL_CHANGE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ABORT_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORT_REQUEST"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ACCESS_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ACCESS_BARRED"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ACCESS_STRATUM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ACCESS_STRATUM_FAILURE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_ANOTHER_PROCEDURE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ANOTHER_PROCEDURE_IN_PROGRESS"
		);
	}
	jint DataFailCause::RRC_CONNECTION_CELL_NOT_CAMPED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_CELL_NOT_CAMPED"
		);
	}
	jint DataFailCause::RRC_CONNECTION_CELL_RESELECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_CELL_RESELECTION"
		);
	}
	jint DataFailCause::RRC_CONNECTION_CONFIG_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_CONFIG_FAILURE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_INVALID_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_INVALID_REQUEST"
		);
	}
	jint DataFailCause::RRC_CONNECTION_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_LINK_FAILURE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_NORMAL_RELEASE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_NORMAL_RELEASE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_OUT_OF_SERVICE_DURING_CELL_REGISTER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_OUT_OF_SERVICE_DURING_CELL_REGISTER"
		);
	}
	jint DataFailCause::RRC_CONNECTION_RADIO_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_RADIO_LINK_FAILURE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_REESTABLISHMENT_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_REESTABLISHMENT_FAILURE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_REJECT_BY_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_REJECT_BY_NETWORK"
		);
	}
	jint DataFailCause::RRC_CONNECTION_RELEASED_SECURITY_NOT_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_RELEASED_SECURITY_NOT_ACTIVE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_RF_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_RF_UNAVAILABLE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_SYSTEM_INFORMATION_BLOCK_READ_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_SYSTEM_INFORMATION_BLOCK_READ_ERROR"
		);
	}
	jint DataFailCause::RRC_CONNECTION_SYSTEM_INTERVAL_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_SYSTEM_INTERVAL_FAILURE"
		);
	}
	jint DataFailCause::RRC_CONNECTION_TIMER_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_TIMER_EXPIRED"
		);
	}
	jint DataFailCause::RRC_CONNECTION_TRACKING_AREA_ID_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_TRACKING_AREA_ID_CHANGED"
		);
	}
	jint DataFailCause::RRC_UPLINK_CONNECTION_RELEASE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_CONNECTION_RELEASE"
		);
	}
	jint DataFailCause::RRC_UPLINK_DATA_TRANSMISSION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_DATA_TRANSMISSION_FAILURE"
		);
	}
	jint DataFailCause::RRC_UPLINK_DELIVERY_FAILED_DUE_TO_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_DELIVERY_FAILED_DUE_TO_HANDOVER"
		);
	}
	jint DataFailCause::RRC_UPLINK_ERROR_REQUEST_FROM_NAS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_ERROR_REQUEST_FROM_NAS"
		);
	}
	jint DataFailCause::RRC_UPLINK_RADIO_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_RADIO_LINK_FAILURE"
		);
	}
	jint DataFailCause::RUIM_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RUIM_NOT_PRESENT"
		);
	}
	jint DataFailCause::SECURITY_MODE_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SECURITY_MODE_REJECTED"
		);
	}
	jint DataFailCause::SERVICE_NOT_ALLOWED_ON_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_NOT_ALLOWED_ON_PLMN"
		);
	}
	jint DataFailCause::SERVICE_OPTION_NOT_SUBSCRIBED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_OPTION_NOT_SUBSCRIBED"
		);
	}
	jint DataFailCause::SERVICE_OPTION_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_OPTION_NOT_SUPPORTED"
		);
	}
	jint DataFailCause::SERVICE_OPTION_OUT_OF_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_OPTION_OUT_OF_ORDER"
		);
	}
	jint DataFailCause::SIGNAL_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SIGNAL_LOST"
		);
	}
	jint DataFailCause::SIM_CARD_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SIM_CARD_CHANGED"
		);
	}
	jint DataFailCause::SYNCHRONIZATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SYNCHRONIZATION_FAILURE"
		);
	}
	jint DataFailCause::TEST_LOOPBACK_REGULAR_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TEST_LOOPBACK_REGULAR_DEACTIVATION"
		);
	}
	jint DataFailCause::TETHERED_CALL_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TETHERED_CALL_ACTIVE"
		);
	}
	jint DataFailCause::TFT_SEMANTIC_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TFT_SEMANTIC_ERROR"
		);
	}
	jint DataFailCause::TFT_SYTAX_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TFT_SYTAX_ERROR"
		);
	}
	jint DataFailCause::THERMAL_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"THERMAL_EMERGENCY"
		);
	}
	jint DataFailCause::THERMAL_MITIGATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"THERMAL_MITIGATION"
		);
	}
	jint DataFailCause::TRAT_SWAP_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TRAT_SWAP_FAILED"
		);
	}
	jint DataFailCause::UE_INITIATED_DETACH_OR_DISCONNECT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_INITIATED_DETACH_OR_DISCONNECT"
		);
	}
	jint DataFailCause::UE_IS_ENTERING_POWERSAVE_MODE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_IS_ENTERING_POWERSAVE_MODE"
		);
	}
	jint DataFailCause::UE_RAT_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_RAT_CHANGE"
		);
	}
	jint DataFailCause::UE_SECURITY_CAPABILITIES_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_SECURITY_CAPABILITIES_MISMATCH"
		);
	}
	jint DataFailCause::UMTS_HANDOVER_TO_IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UMTS_HANDOVER_TO_IWLAN"
		);
	}
	jint DataFailCause::UMTS_REACTIVATION_REQ()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UMTS_REACTIVATION_REQ"
		);
	}
	jint DataFailCause::UNACCEPTABLE_NETWORK_PARAMETER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNACCEPTABLE_NETWORK_PARAMETER"
		);
	}
	jint DataFailCause::UNACCEPTABLE_NON_EPS_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNACCEPTABLE_NON_EPS_AUTHENTICATION"
		);
	}
	jint DataFailCause::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN"
		);
	}
	jint DataFailCause::UNKNOWN_INFO_ELEMENT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN_INFO_ELEMENT"
		);
	}
	jint DataFailCause::UNKNOWN_PDP_ADDRESS_TYPE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN_PDP_ADDRESS_TYPE"
		);
	}
	jint DataFailCause::UNKNOWN_PDP_CONTEXT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN_PDP_CONTEXT"
		);
	}
	jint DataFailCause::UNPREFERRED_RAT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNPREFERRED_RAT"
		);
	}
	jint DataFailCause::UNSUPPORTED_1X_PREV()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNSUPPORTED_1X_PREV"
		);
	}
	jint DataFailCause::UNSUPPORTED_APN_IN_CURRENT_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNSUPPORTED_APN_IN_CURRENT_PLMN"
		);
	}
	jint DataFailCause::UNSUPPORTED_QCI_VALUE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNSUPPORTED_QCI_VALUE"
		);
	}
	jint DataFailCause::USER_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"USER_AUTHENTICATION"
		);
	}
	jint DataFailCause::VSNCP_ADMINISTRATIVELY_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_ADMINISTRATIVELY_PROHIBITED"
		);
	}
	jint DataFailCause::VSNCP_APN_UNAUTHORIZED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_APN_UNAUTHORIZED"
		);
	}
	jint DataFailCause::VSNCP_GEN_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_GEN_ERROR"
		);
	}
	jint DataFailCause::VSNCP_INSUFFICIENT_PARAMETERS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_INSUFFICIENT_PARAMETERS"
		);
	}
	jint DataFailCause::VSNCP_NO_PDN_GATEWAY_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_NO_PDN_GATEWAY_ADDRESS"
		);
	}
	jint DataFailCause::VSNCP_PDN_EXISTS_FOR_THIS_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_EXISTS_FOR_THIS_APN"
		);
	}
	jint DataFailCause::VSNCP_PDN_GATEWAY_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_GATEWAY_REJECT"
		);
	}
	jint DataFailCause::VSNCP_PDN_GATEWAY_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_GATEWAY_UNREACHABLE"
		);
	}
	jint DataFailCause::VSNCP_PDN_ID_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_ID_IN_USE"
		);
	}
	jint DataFailCause::VSNCP_PDN_LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_LIMIT_EXCEEDED"
		);
	}
	jint DataFailCause::VSNCP_RECONNECT_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_RECONNECT_NOT_ALLOWED"
		);
	}
	jint DataFailCause::VSNCP_RESOURCE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_RESOURCE_UNAVAILABLE"
		);
	}
	jint DataFailCause::VSNCP_SUBSCRIBER_LIMITATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_SUBSCRIBER_LIMITATION"
		);
	}
	jint DataFailCause::VSNCP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_TIMEOUT"
		);
	}
	
	// QAndroidJniObject forward
	DataFailCause::DataFailCause(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

