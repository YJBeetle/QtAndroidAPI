#pragma once

#include "./DataFailCause.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint DataFailCause::ACCESS_ATTEMPT_ALREADY_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_ATTEMPT_ALREADY_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::ACCESS_BLOCK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_BLOCK"
		);
	}
	inline jint DataFailCause::ACCESS_BLOCK_ALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_BLOCK_ALL"
		);
	}
	inline jint DataFailCause::ACCESS_CLASS_DSAC_REJECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_CLASS_DSAC_REJECTION"
		);
	}
	inline jint DataFailCause::ACCESS_CONTROL_LIST_CHECK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACCESS_CONTROL_LIST_CHECK_FAILURE"
		);
	}
	inline jint DataFailCause::ACTIVATION_REJECTED_BCM_VIOLATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVATION_REJECTED_BCM_VIOLATION"
		);
	}
	inline jint DataFailCause::ACTIVATION_REJECT_GGSN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVATION_REJECT_GGSN"
		);
	}
	inline jint DataFailCause::ACTIVATION_REJECT_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVATION_REJECT_UNSPECIFIED"
		);
	}
	inline jint DataFailCause::ACTIVE_PDP_CONTEXT_MAX_NUMBER_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ACTIVE_PDP_CONTEXT_MAX_NUMBER_REACHED"
		);
	}
	inline jint DataFailCause::ALL_MATCHING_RULES_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ALL_MATCHING_RULES_FAILED"
		);
	}
	inline jint DataFailCause::APN_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_DISABLED"
		);
	}
	inline jint DataFailCause::APN_DISALLOWED_ON_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_DISALLOWED_ON_ROAMING"
		);
	}
	inline jint DataFailCause::APN_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_MISMATCH"
		);
	}
	inline jint DataFailCause::APN_PARAMETERS_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_PARAMETERS_CHANGED"
		);
	}
	inline jint DataFailCause::APN_PENDING_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_PENDING_HANDOVER"
		);
	}
	inline jint DataFailCause::APN_TYPE_CONFLICT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"APN_TYPE_CONFLICT"
		);
	}
	inline jint DataFailCause::AUTH_FAILURE_ON_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"AUTH_FAILURE_ON_EMERGENCY_CALL"
		);
	}
	inline jint DataFailCause::BEARER_HANDLING_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"BEARER_HANDLING_NOT_SUPPORTED"
		);
	}
	inline jint DataFailCause::CALL_DISALLOWED_IN_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CALL_DISALLOWED_IN_ROAMING"
		);
	}
	inline jint DataFailCause::CALL_PREEMPT_BY_EMERGENCY_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CALL_PREEMPT_BY_EMERGENCY_APN"
		);
	}
	inline jint DataFailCause::CANNOT_ENCODE_OTA_MESSAGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CANNOT_ENCODE_OTA_MESSAGE"
		);
	}
	inline jint DataFailCause::CDMA_ALERT_STOP()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_ALERT_STOP"
		);
	}
	inline jint DataFailCause::CDMA_INCOMING_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_INCOMING_CALL"
		);
	}
	inline jint DataFailCause::CDMA_INTERCEPT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_INTERCEPT"
		);
	}
	inline jint DataFailCause::CDMA_LOCK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_LOCK"
		);
	}
	inline jint DataFailCause::CDMA_RELEASE_DUE_TO_SO_REJECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_RELEASE_DUE_TO_SO_REJECTION"
		);
	}
	inline jint DataFailCause::CDMA_REORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_REORDER"
		);
	}
	inline jint DataFailCause::CDMA_RETRY_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CDMA_RETRY_ORDER"
		);
	}
	inline jint DataFailCause::CHANNEL_ACQUISITION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CHANNEL_ACQUISITION_FAILURE"
		);
	}
	inline jint DataFailCause::CLOSE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CLOSE_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::COLLISION_WITH_NETWORK_INITIATED_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"COLLISION_WITH_NETWORK_INITIATED_REQUEST"
		);
	}
	inline jint DataFailCause::COMPANION_IFACE_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"COMPANION_IFACE_IN_USE"
		);
	}
	inline jint DataFailCause::CONCURRENT_SERVICES_INCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONCURRENT_SERVICES_INCOMPATIBLE"
		);
	}
	inline jint DataFailCause::CONCURRENT_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONCURRENT_SERVICES_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::CONCURRENT_SERVICE_NOT_SUPPORTED_BY_BASE_STATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONCURRENT_SERVICE_NOT_SUPPORTED_BY_BASE_STATION"
		);
	}
	inline jint DataFailCause::CONDITIONAL_IE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONDITIONAL_IE_ERROR"
		);
	}
	inline jint DataFailCause::CONGESTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONGESTION"
		);
	}
	inline jint DataFailCause::CONNECTION_RELEASED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CONNECTION_RELEASED"
		);
	}
	inline jint DataFailCause::CS_DOMAIN_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CS_DOMAIN_NOT_AVAILABLE"
		);
	}
	inline jint DataFailCause::CS_FALLBACK_CALL_ESTABLISHMENT_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"CS_FALLBACK_CALL_ESTABLISHMENT_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::DATA_PLAN_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DATA_PLAN_EXPIRED"
		);
	}
	inline jint DataFailCause::DATA_ROAMING_SETTINGS_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DATA_ROAMING_SETTINGS_DISABLED"
		);
	}
	inline jint DataFailCause::DATA_SETTINGS_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DATA_SETTINGS_DISABLED"
		);
	}
	inline jint DataFailCause::DBM_OR_SMS_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DBM_OR_SMS_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::DDS_SWITCHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DDS_SWITCHED"
		);
	}
	inline jint DataFailCause::DDS_SWITCH_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DDS_SWITCH_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::DRB_RELEASED_BY_RRC()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DRB_RELEASED_BY_RRC"
		);
	}
	inline jint DataFailCause::DS_EXPLICIT_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DS_EXPLICIT_DEACTIVATION"
		);
	}
	inline jint DataFailCause::DUAL_SWITCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DUAL_SWITCH"
		);
	}
	inline jint DataFailCause::DUN_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DUN_CALL_DISALLOWED"
		);
	}
	inline jint DataFailCause::DUPLICATE_BEARER_ID()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"DUPLICATE_BEARER_ID"
		);
	}
	inline jint DataFailCause::EHRPD_TO_HRPD_FALLBACK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EHRPD_TO_HRPD_FALLBACK"
		);
	}
	inline jint DataFailCause::EMBMS_NOT_ENABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMBMS_NOT_ENABLED"
		);
	}
	inline jint DataFailCause::EMBMS_REGULAR_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMBMS_REGULAR_DEACTIVATION"
		);
	}
	inline jint DataFailCause::EMERGENCY_IFACE_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMERGENCY_IFACE_ONLY"
		);
	}
	inline jint DataFailCause::EMERGENCY_MODE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMERGENCY_MODE"
		);
	}
	inline jint DataFailCause::EMM_ACCESS_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ACCESS_BARRED"
		);
	}
	inline jint DataFailCause::EMM_ACCESS_BARRED_INFINITE_RETRY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ACCESS_BARRED_INFINITE_RETRY"
		);
	}
	inline jint DataFailCause::EMM_ATTACH_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ATTACH_FAILED"
		);
	}
	inline jint DataFailCause::EMM_ATTACH_STARTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_ATTACH_STARTED"
		);
	}
	inline jint DataFailCause::EMM_DETACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_DETACHED"
		);
	}
	inline jint DataFailCause::EMM_T3417_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_T3417_EXPIRED"
		);
	}
	inline jint DataFailCause::EMM_T3417_EXT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EMM_T3417_EXT_EXPIRED"
		);
	}
	inline jint DataFailCause::EPS_SERVICES_AND_NON_EPS_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EPS_SERVICES_AND_NON_EPS_SERVICES_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::EPS_SERVICES_NOT_ALLOWED_IN_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EPS_SERVICES_NOT_ALLOWED_IN_PLMN"
		);
	}
	inline jint DataFailCause::ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ERROR_UNSPECIFIED"
		);
	}
	inline jint DataFailCause::ESM_BAD_OTA_MESSAGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_BAD_OTA_MESSAGE"
		);
	}
	inline jint DataFailCause::ESM_BEARER_DEACTIVATED_TO_SYNC_WITH_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_BEARER_DEACTIVATED_TO_SYNC_WITH_NETWORK"
		);
	}
	inline jint DataFailCause::ESM_COLLISION_SCENARIOS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_COLLISION_SCENARIOS"
		);
	}
	inline jint DataFailCause::ESM_CONTEXT_TRANSFERRED_DUE_TO_IRAT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_CONTEXT_TRANSFERRED_DUE_TO_IRAT"
		);
	}
	inline jint DataFailCause::ESM_DOWNLOAD_SERVER_REJECTED_THE_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_DOWNLOAD_SERVER_REJECTED_THE_CALL"
		);
	}
	inline jint DataFailCause::ESM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_FAILURE"
		);
	}
	inline jint DataFailCause::ESM_INFO_NOT_RECEIVED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_INFO_NOT_RECEIVED"
		);
	}
	inline jint DataFailCause::ESM_LOCAL_CAUSE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_LOCAL_CAUSE_NONE"
		);
	}
	inline jint DataFailCause::ESM_NW_ACTIVATED_DED_BEARER_WITH_ID_OF_DEF_BEARER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_NW_ACTIVATED_DED_BEARER_WITH_ID_OF_DEF_BEARER"
		);
	}
	inline jint DataFailCause::ESM_PROCEDURE_TIME_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_PROCEDURE_TIME_OUT"
		);
	}
	inline jint DataFailCause::ESM_UNKNOWN_EPS_BEARER_CONTEXT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ESM_UNKNOWN_EPS_BEARER_CONTEXT"
		);
	}
	inline jint DataFailCause::EVDO_CONNECTION_DENY_BY_BILLING_OR_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_CONNECTION_DENY_BY_BILLING_OR_AUTHENTICATION_FAILURE"
		);
	}
	inline jint DataFailCause::EVDO_CONNECTION_DENY_BY_GENERAL_OR_NETWORK_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_CONNECTION_DENY_BY_GENERAL_OR_NETWORK_BUSY"
		);
	}
	inline jint DataFailCause::EVDO_HDR_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_CHANGED"
		);
	}
	inline jint DataFailCause::EVDO_HDR_CONNECTION_SETUP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_CONNECTION_SETUP_TIMEOUT"
		);
	}
	inline jint DataFailCause::EVDO_HDR_EXITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_EXITED"
		);
	}
	inline jint DataFailCause::EVDO_HDR_NO_SESSION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_HDR_NO_SESSION"
		);
	}
	inline jint DataFailCause::EVDO_USING_GPS_FIX_INSTEAD_OF_HDR_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"EVDO_USING_GPS_FIX_INSTEAD_OF_HDR_CALL"
		);
	}
	inline jint DataFailCause::FADE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FADE"
		);
	}
	inline jint DataFailCause::FAILED_TO_ACQUIRE_COLOCATED_HDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FAILED_TO_ACQUIRE_COLOCATED_HDR"
		);
	}
	inline jint DataFailCause::FEATURE_NOT_SUPP()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FEATURE_NOT_SUPP"
		);
	}
	inline jint DataFailCause::FILTER_SEMANTIC_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FILTER_SEMANTIC_ERROR"
		);
	}
	inline jint DataFailCause::FILTER_SYTAX_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FILTER_SYTAX_ERROR"
		);
	}
	inline jint DataFailCause::FORBIDDEN_APN_NAME()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"FORBIDDEN_APN_NAME"
		);
	}
	inline jint DataFailCause::GPRS_REGISTRATION_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_REGISTRATION_FAIL"
		);
	}
	inline jint DataFailCause::GPRS_SERVICES_AND_NON_GPRS_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_SERVICES_AND_NON_GPRS_SERVICES_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::GPRS_SERVICES_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_SERVICES_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::GPRS_SERVICES_NOT_ALLOWED_IN_THIS_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"GPRS_SERVICES_NOT_ALLOWED_IN_THIS_PLMN"
		);
	}
	inline jint DataFailCause::HANDOFF_PREFERENCE_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HANDOFF_PREFERENCE_CHANGED"
		);
	}
	inline jint DataFailCause::HDR_ACCESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HDR_ACCESS_FAILURE"
		);
	}
	inline jint DataFailCause::HDR_FADE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HDR_FADE"
		);
	}
	inline jint DataFailCause::HDR_NO_LOCK_GRANTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"HDR_NO_LOCK_GRANTED"
		);
	}
	inline jint DataFailCause::IFACE_AND_POL_FAMILY_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IFACE_AND_POL_FAMILY_MISMATCH"
		);
	}
	inline jint DataFailCause::IFACE_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IFACE_MISMATCH"
		);
	}
	inline jint DataFailCause::ILLEGAL_ME()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ILLEGAL_ME"
		);
	}
	inline jint DataFailCause::ILLEGAL_MS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ILLEGAL_MS"
		);
	}
	inline jint DataFailCause::IMEI_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IMEI_NOT_ACCEPTED"
		);
	}
	inline jint DataFailCause::IMPLICITLY_DETACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IMPLICITLY_DETACHED"
		);
	}
	inline jint DataFailCause::IMSI_UNKNOWN_IN_HOME_SUBSCRIBER_SERVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IMSI_UNKNOWN_IN_HOME_SUBSCRIBER_SERVER"
		);
	}
	inline jint DataFailCause::INCOMING_CALL_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INCOMING_CALL_REJECTED"
		);
	}
	inline jint DataFailCause::INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INSUFFICIENT_RESOURCES"
		);
	}
	inline jint DataFailCause::INTERFACE_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INTERFACE_IN_USE"
		);
	}
	inline jint DataFailCause::INTERNAL_CALL_PREEMPT_BY_HIGH_PRIO_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INTERNAL_CALL_PREEMPT_BY_HIGH_PRIO_APN"
		);
	}
	inline jint DataFailCause::INTERNAL_EPC_NONEPC_TRANSITION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INTERNAL_EPC_NONEPC_TRANSITION"
		);
	}
	inline jint DataFailCause::INVALID_CONNECTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_CONNECTION_ID"
		);
	}
	inline jint DataFailCause::INVALID_DNS_ADDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_DNS_ADDR"
		);
	}
	inline jint DataFailCause::INVALID_EMM_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_EMM_STATE"
		);
	}
	inline jint DataFailCause::INVALID_MANDATORY_INFO()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_MANDATORY_INFO"
		);
	}
	inline jint DataFailCause::INVALID_MODE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_MODE"
		);
	}
	inline jint DataFailCause::INVALID_PCSCF_ADDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_PCSCF_ADDR"
		);
	}
	inline jint DataFailCause::INVALID_PCSCF_OR_DNS_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_PCSCF_OR_DNS_ADDRESS"
		);
	}
	inline jint DataFailCause::INVALID_PRIMARY_NSAPI()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_PRIMARY_NSAPI"
		);
	}
	inline jint DataFailCause::INVALID_SIM_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_SIM_STATE"
		);
	}
	inline jint DataFailCause::INVALID_TRANSACTION_ID()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"INVALID_TRANSACTION_ID"
		);
	}
	inline jint DataFailCause::IPV6_ADDRESS_TRANSFER_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IPV6_ADDRESS_TRANSFER_FAILED"
		);
	}
	inline jint DataFailCause::IPV6_PREFIX_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IPV6_PREFIX_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::IP_ADDRESS_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IP_ADDRESS_MISMATCH"
		);
	}
	inline jint DataFailCause::IP_VERSION_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IP_VERSION_MISMATCH"
		);
	}
	inline jint DataFailCause::IRAT_HANDOVER_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IRAT_HANDOVER_FAILED"
		);
	}
	inline jint DataFailCause::IS707B_MAX_ACCESS_PROBES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IS707B_MAX_ACCESS_PROBES"
		);
	}
	inline jint DataFailCause::IWLAN_AUTHORIZATION_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_AUTHORIZATION_REJECTED"
		);
	}
	inline jint DataFailCause::IWLAN_CONGESTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_CONGESTION"
		);
	}
	inline jint DataFailCause::IWLAN_DNS_RESOLUTION_NAME_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_DNS_RESOLUTION_NAME_FAILURE"
		);
	}
	inline jint DataFailCause::IWLAN_DNS_RESOLUTION_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_DNS_RESOLUTION_TIMEOUT"
		);
	}
	inline jint DataFailCause::IWLAN_IKEV2_AUTH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_IKEV2_AUTH_FAILURE"
		);
	}
	inline jint DataFailCause::IWLAN_IKEV2_CERT_INVALID()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_IKEV2_CERT_INVALID"
		);
	}
	inline jint DataFailCause::IWLAN_IKEV2_CONFIG_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_IKEV2_CONFIG_FAILURE"
		);
	}
	inline jint DataFailCause::IWLAN_IKEV2_MSG_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_IKEV2_MSG_TIMEOUT"
		);
	}
	inline jint DataFailCause::IWLAN_ILLEGAL_ME()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_ILLEGAL_ME"
		);
	}
	inline jint DataFailCause::IWLAN_IMEI_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_IMEI_NOT_ACCEPTED"
		);
	}
	inline jint DataFailCause::IWLAN_MAX_CONNECTION_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_MAX_CONNECTION_REACHED"
		);
	}
	inline jint DataFailCause::IWLAN_NETWORK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_NETWORK_FAILURE"
		);
	}
	inline jint DataFailCause::IWLAN_NON_3GPP_ACCESS_TO_EPC_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_NON_3GPP_ACCESS_TO_EPC_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::IWLAN_NO_APN_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_NO_APN_SUBSCRIPTION"
		);
	}
	inline jint DataFailCause::IWLAN_PDN_CONNECTION_REJECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_PDN_CONNECTION_REJECTION"
		);
	}
	inline jint DataFailCause::IWLAN_PLMN_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_PLMN_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::IWLAN_RAT_TYPE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_RAT_TYPE_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::IWLAN_SEMANTIC_ERRORS_IN_PACKET_FILTERS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_SEMANTIC_ERRORS_IN_PACKET_FILTERS"
		);
	}
	inline jint DataFailCause::IWLAN_SEMANTIC_ERROR_IN_THE_TFT_OPERATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_SEMANTIC_ERROR_IN_THE_TFT_OPERATION"
		);
	}
	inline jint DataFailCause::IWLAN_SYNTACTICAL_ERRORS_IN_PACKET_FILTERS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_SYNTACTICAL_ERRORS_IN_PACKET_FILTERS"
		);
	}
	inline jint DataFailCause::IWLAN_SYNTACTICAL_ERROR_IN_THE_TFT_OPERATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_SYNTACTICAL_ERROR_IN_THE_TFT_OPERATION"
		);
	}
	inline jint DataFailCause::IWLAN_TUNNEL_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_TUNNEL_NOT_FOUND"
		);
	}
	inline jint DataFailCause::IWLAN_UNAUTHENTICATED_EMERGENCY_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_UNAUTHENTICATED_EMERGENCY_NOT_SUPPORTED"
		);
	}
	inline jint DataFailCause::IWLAN_USER_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"IWLAN_USER_UNKNOWN"
		);
	}
	inline jint DataFailCause::LIMITED_TO_IPV4()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LIMITED_TO_IPV4"
		);
	}
	inline jint DataFailCause::LIMITED_TO_IPV6()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LIMITED_TO_IPV6"
		);
	}
	inline jint DataFailCause::LLC_SNDCP()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LLC_SNDCP"
		);
	}
	inline jint DataFailCause::LOCAL_END()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOCAL_END"
		);
	}
	inline jint DataFailCause::LOCATION_AREA_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOCATION_AREA_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::LOST_CONNECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOST_CONNECTION"
		);
	}
	inline jint DataFailCause::LOWER_LAYER_REGISTRATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOWER_LAYER_REGISTRATION_FAILURE"
		);
	}
	inline jint DataFailCause::LOW_POWER_MODE_OR_POWERING_DOWN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LOW_POWER_MODE_OR_POWERING_DOWN"
		);
	}
	inline jint DataFailCause::LTE_NAS_SERVICE_REQUEST_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LTE_NAS_SERVICE_REQUEST_FAILED"
		);
	}
	inline jint DataFailCause::LTE_THROTTLING_NOT_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"LTE_THROTTLING_NOT_REQUIRED"
		);
	}
	inline jint DataFailCause::MAC_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAC_FAILURE"
		);
	}
	inline jint DataFailCause::MATCH_ALL_RULE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MATCH_ALL_RULE_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::MAXIMIUM_NSAPIS_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAXIMIUM_NSAPIS_EXCEEDED"
		);
	}
	inline jint DataFailCause::MAXINUM_SIZE_OF_L2_MESSAGE_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAXINUM_SIZE_OF_L2_MESSAGE_EXCEEDED"
		);
	}
	inline jint DataFailCause::MAX_ACCESS_PROBE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_ACCESS_PROBE"
		);
	}
	inline jint DataFailCause::MAX_IPV4_CONNECTIONS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_IPV4_CONNECTIONS"
		);
	}
	inline jint DataFailCause::MAX_IPV6_CONNECTIONS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_IPV6_CONNECTIONS"
		);
	}
	inline jint DataFailCause::MAX_PPP_INACTIVITY_TIMER_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MAX_PPP_INACTIVITY_TIMER_EXPIRED"
		);
	}
	inline jint DataFailCause::MESSAGE_INCORRECT_SEMANTIC()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MESSAGE_INCORRECT_SEMANTIC"
		);
	}
	inline jint DataFailCause::MESSAGE_TYPE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MESSAGE_TYPE_UNSUPPORTED"
		);
	}
	inline jint DataFailCause::MIP_CONFIG_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_CONFIG_FAILURE"
		);
	}
	inline jint DataFailCause::MIP_FA_ADMIN_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_ADMIN_PROHIBITED"
		);
	}
	inline jint DataFailCause::MIP_FA_DELIVERY_STYLE_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_DELIVERY_STYLE_NOT_SUPPORTED"
		);
	}
	inline jint DataFailCause::MIP_FA_ENCAPSULATION_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_ENCAPSULATION_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::MIP_FA_HOME_AGENT_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_HOME_AGENT_AUTHENTICATION_FAILURE"
		);
	}
	inline jint DataFailCause::MIP_FA_INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_INSUFFICIENT_RESOURCES"
		);
	}
	inline jint DataFailCause::MIP_FA_MALFORMED_REPLY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MALFORMED_REPLY"
		);
	}
	inline jint DataFailCause::MIP_FA_MALFORMED_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MALFORMED_REQUEST"
		);
	}
	inline jint DataFailCause::MIP_FA_MISSING_CHALLENGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_CHALLENGE"
		);
	}
	inline jint DataFailCause::MIP_FA_MISSING_HOME_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_HOME_ADDRESS"
		);
	}
	inline jint DataFailCause::MIP_FA_MISSING_HOME_AGENT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_HOME_AGENT"
		);
	}
	inline jint DataFailCause::MIP_FA_MISSING_NAI()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MISSING_NAI"
		);
	}
	inline jint DataFailCause::MIP_FA_MOBILE_NODE_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_MOBILE_NODE_AUTHENTICATION_FAILURE"
		);
	}
	inline jint DataFailCause::MIP_FA_REASON_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REASON_UNSPECIFIED"
		);
	}
	inline jint DataFailCause::MIP_FA_REQUESTED_LIFETIME_TOO_LONG()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REQUESTED_LIFETIME_TOO_LONG"
		);
	}
	inline jint DataFailCause::MIP_FA_REVERSE_TUNNEL_IS_MANDATORY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REVERSE_TUNNEL_IS_MANDATORY"
		);
	}
	inline jint DataFailCause::MIP_FA_REVERSE_TUNNEL_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_REVERSE_TUNNEL_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::MIP_FA_STALE_CHALLENGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_STALE_CHALLENGE"
		);
	}
	inline jint DataFailCause::MIP_FA_UNKNOWN_CHALLENGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_UNKNOWN_CHALLENGE"
		);
	}
	inline jint DataFailCause::MIP_FA_VJ_HEADER_COMPRESSION_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_FA_VJ_HEADER_COMPRESSION_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::MIP_HA_ADMIN_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_ADMIN_PROHIBITED"
		);
	}
	inline jint DataFailCause::MIP_HA_ENCAPSULATION_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_ENCAPSULATION_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::MIP_HA_FOREIGN_AGENT_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_FOREIGN_AGENT_AUTHENTICATION_FAILURE"
		);
	}
	inline jint DataFailCause::MIP_HA_INSUFFICIENT_RESOURCES()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_INSUFFICIENT_RESOURCES"
		);
	}
	inline jint DataFailCause::MIP_HA_MALFORMED_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_MALFORMED_REQUEST"
		);
	}
	inline jint DataFailCause::MIP_HA_MOBILE_NODE_AUTHENTICATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_MOBILE_NODE_AUTHENTICATION_FAILURE"
		);
	}
	inline jint DataFailCause::MIP_HA_REASON_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REASON_UNSPECIFIED"
		);
	}
	inline jint DataFailCause::MIP_HA_REGISTRATION_ID_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REGISTRATION_ID_MISMATCH"
		);
	}
	inline jint DataFailCause::MIP_HA_REVERSE_TUNNEL_IS_MANDATORY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REVERSE_TUNNEL_IS_MANDATORY"
		);
	}
	inline jint DataFailCause::MIP_HA_REVERSE_TUNNEL_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_REVERSE_TUNNEL_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::MIP_HA_UNKNOWN_HOME_AGENT_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MIP_HA_UNKNOWN_HOME_AGENT_ADDRESS"
		);
	}
	inline jint DataFailCause::MISSING_UNKNOWN_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MISSING_UNKNOWN_APN"
		);
	}
	inline jint DataFailCause::MODEM_APP_PREEMPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MODEM_APP_PREEMPTED"
		);
	}
	inline jint DataFailCause::MODEM_RESTART()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MODEM_RESTART"
		);
	}
	inline jint DataFailCause::MSC_TEMPORARILY_NOT_REACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MSC_TEMPORARILY_NOT_REACHABLE"
		);
	}
	inline jint DataFailCause::MSG_AND_PROTOCOL_STATE_UNCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MSG_AND_PROTOCOL_STATE_UNCOMPATIBLE"
		);
	}
	inline jint DataFailCause::MSG_TYPE_NONCOMPATIBLE_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MSG_TYPE_NONCOMPATIBLE_STATE"
		);
	}
	inline jint DataFailCause::MS_IDENTITY_CANNOT_BE_DERIVED_BY_THE_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MS_IDENTITY_CANNOT_BE_DERIVED_BY_THE_NETWORK"
		);
	}
	inline jint DataFailCause::MULTIPLE_PDP_CALL_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MULTIPLE_PDP_CALL_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::MULTI_CONN_TO_SAME_PDN_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"MULTI_CONN_TO_SAME_PDN_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::NAS_LAYER_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NAS_LAYER_FAILURE"
		);
	}
	inline jint DataFailCause::NAS_REQUEST_REJECTED_BY_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NAS_REQUEST_REJECTED_BY_NETWORK"
		);
	}
	inline jint DataFailCause::NAS_SIGNALLING()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NAS_SIGNALLING"
		);
	}
	inline jint DataFailCause::NETWORK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_FAILURE"
		);
	}
	inline jint DataFailCause::NETWORK_INITIATED_DETACH_NO_AUTO_REATTACH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_INITIATED_DETACH_NO_AUTO_REATTACH"
		);
	}
	inline jint DataFailCause::NETWORK_INITIATED_DETACH_WITH_AUTO_REATTACH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_INITIATED_DETACH_WITH_AUTO_REATTACH"
		);
	}
	inline jint DataFailCause::NETWORK_INITIATED_TERMINATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NETWORK_INITIATED_TERMINATION"
		);
	}
	inline jint DataFailCause::NONE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NONE"
		);
	}
	inline jint DataFailCause::NON_IP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NON_IP_NOT_SUPPORTED"
		);
	}
	inline jint DataFailCause::NORMAL_RELEASE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NORMAL_RELEASE"
		);
	}
	inline jint DataFailCause::NO_CDMA_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_CDMA_SERVICE"
		);
	}
	inline jint DataFailCause::NO_COLLOCATED_HDR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_COLLOCATED_HDR"
		);
	}
	inline jint DataFailCause::NO_EPS_BEARER_CONTEXT_ACTIVATED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_EPS_BEARER_CONTEXT_ACTIVATED"
		);
	}
	inline jint DataFailCause::NO_GPRS_CONTEXT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_GPRS_CONTEXT"
		);
	}
	inline jint DataFailCause::NO_HYBRID_HDR_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_HYBRID_HDR_SERVICE"
		);
	}
	inline jint DataFailCause::NO_PDP_CONTEXT_ACTIVATED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_PDP_CONTEXT_ACTIVATED"
		);
	}
	inline jint DataFailCause::NO_RESPONSE_FROM_BASE_STATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_RESPONSE_FROM_BASE_STATION"
		);
	}
	inline jint DataFailCause::NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_SERVICE"
		);
	}
	inline jint DataFailCause::NO_SERVICE_ON_GATEWAY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NO_SERVICE_ON_GATEWAY"
		);
	}
	inline jint DataFailCause::NSAPI_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NSAPI_IN_USE"
		);
	}
	inline jint DataFailCause::NULL_APN_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"NULL_APN_DISALLOWED"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_1()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_1"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_10()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_10"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_11()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_11"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_12()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_12"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_13()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_13"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_14()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_14"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_15()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_15"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_2()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_2"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_3()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_3"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_4()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_4"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_5()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_5"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_6()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_6"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_7()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_7"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_8()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_8"
		);
	}
	inline jint DataFailCause::OEM_DCFAILCAUSE_9()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OEM_DCFAILCAUSE_9"
		);
	}
	inline jint DataFailCause::ONLY_IPV4V6_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_IPV4V6_ALLOWED"
		);
	}
	inline jint DataFailCause::ONLY_IPV4_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_IPV4_ALLOWED"
		);
	}
	inline jint DataFailCause::ONLY_IPV6_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_IPV6_ALLOWED"
		);
	}
	inline jint DataFailCause::ONLY_NON_IP_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_NON_IP_ALLOWED"
		);
	}
	inline jint DataFailCause::ONLY_SINGLE_BEARER_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"ONLY_SINGLE_BEARER_ALLOWED"
		);
	}
	inline jint DataFailCause::OPERATOR_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OPERATOR_BARRED"
		);
	}
	inline jint DataFailCause::OTASP_COMMIT_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"OTASP_COMMIT_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::PDN_CONN_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_CONN_DOES_NOT_EXIST"
		);
	}
	inline jint DataFailCause::PDN_INACTIVITY_TIMER_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_INACTIVITY_TIMER_EXPIRED"
		);
	}
	inline jint DataFailCause::PDN_IPV4_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV4_CALL_DISALLOWED"
		);
	}
	inline jint DataFailCause::PDN_IPV4_CALL_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV4_CALL_THROTTLED"
		);
	}
	inline jint DataFailCause::PDN_IPV6_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV6_CALL_DISALLOWED"
		);
	}
	inline jint DataFailCause::PDN_IPV6_CALL_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_IPV6_CALL_THROTTLED"
		);
	}
	inline jint DataFailCause::PDN_NON_IP_CALL_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_NON_IP_CALL_DISALLOWED"
		);
	}
	inline jint DataFailCause::PDN_NON_IP_CALL_THROTTLED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDN_NON_IP_CALL_THROTTLED"
		);
	}
	inline jint DataFailCause::PDP_ACTIVATE_MAX_RETRY_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_ACTIVATE_MAX_RETRY_FAILED"
		);
	}
	inline jint DataFailCause::PDP_DUPLICATE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_DUPLICATE"
		);
	}
	inline jint DataFailCause::PDP_ESTABLISH_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_ESTABLISH_TIMEOUT_EXPIRED"
		);
	}
	inline jint DataFailCause::PDP_INACTIVE_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_INACTIVE_TIMEOUT_EXPIRED"
		);
	}
	inline jint DataFailCause::PDP_LOWERLAYER_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_LOWERLAYER_ERROR"
		);
	}
	inline jint DataFailCause::PDP_MODIFY_COLLISION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_MODIFY_COLLISION"
		);
	}
	inline jint DataFailCause::PDP_MODIFY_TIMEOUT_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_MODIFY_TIMEOUT_EXPIRED"
		);
	}
	inline jint DataFailCause::PDP_PPP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_PPP_NOT_SUPPORTED"
		);
	}
	inline jint DataFailCause::PDP_WITHOUT_ACTIVE_TFT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PDP_WITHOUT_ACTIVE_TFT"
		);
	}
	inline jint DataFailCause::PHONE_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PHONE_IN_USE"
		);
	}
	inline jint DataFailCause::PHYSICAL_LINK_CLOSE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PHYSICAL_LINK_CLOSE_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::PLMN_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PLMN_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::PPP_AUTH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_AUTH_FAILURE"
		);
	}
	inline jint DataFailCause::PPP_CHAP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_CHAP_FAILURE"
		);
	}
	inline jint DataFailCause::PPP_CLOSE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_CLOSE_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::PPP_OPTION_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_OPTION_MISMATCH"
		);
	}
	inline jint DataFailCause::PPP_PAP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_PAP_FAILURE"
		);
	}
	inline jint DataFailCause::PPP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PPP_TIMEOUT"
		);
	}
	inline jint DataFailCause::PREF_RADIO_TECH_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PREF_RADIO_TECH_CHANGED"
		);
	}
	inline jint DataFailCause::PROFILE_BEARER_INCOMPATIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PROFILE_BEARER_INCOMPATIBLE"
		);
	}
	inline jint DataFailCause::PROTOCOL_ERRORS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"PROTOCOL_ERRORS"
		);
	}
	inline jint DataFailCause::QOS_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"QOS_NOT_ACCEPTED"
		);
	}
	inline jint DataFailCause::RADIO_ACCESS_BEARER_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_ACCESS_BEARER_FAILURE"
		);
	}
	inline jint DataFailCause::RADIO_ACCESS_BEARER_SETUP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_ACCESS_BEARER_SETUP_FAILURE"
		);
	}
	inline jint DataFailCause::RADIO_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_NOT_AVAILABLE"
		);
	}
	inline jint DataFailCause::RADIO_POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RADIO_POWER_OFF"
		);
	}
	inline jint DataFailCause::REDIRECTION_OR_HANDOFF_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REDIRECTION_OR_HANDOFF_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::REGISTRATION_FAIL()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REGISTRATION_FAIL"
		);
	}
	inline jint DataFailCause::REGULAR_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REGULAR_DEACTIVATION"
		);
	}
	inline jint DataFailCause::REJECTED_BY_BASE_STATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"REJECTED_BY_BASE_STATION"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ABORTED_AFTER_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_AFTER_HANDOVER"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ABORTED_AFTER_IRAT_CELL_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_AFTER_IRAT_CELL_CHANGE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ABORTED_DUE_TO_IRAT_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_DUE_TO_IRAT_CHANGE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ABORTED_DURING_IRAT_CELL_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORTED_DURING_IRAT_CELL_CHANGE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ABORT_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ABORT_REQUEST"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ACCESS_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ACCESS_BARRED"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ACCESS_STRATUM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ACCESS_STRATUM_FAILURE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_ANOTHER_PROCEDURE_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_ANOTHER_PROCEDURE_IN_PROGRESS"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_CELL_NOT_CAMPED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_CELL_NOT_CAMPED"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_CELL_RESELECTION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_CELL_RESELECTION"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_CONFIG_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_CONFIG_FAILURE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_INVALID_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_INVALID_REQUEST"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_LINK_FAILURE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_NORMAL_RELEASE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_NORMAL_RELEASE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_OUT_OF_SERVICE_DURING_CELL_REGISTER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_OUT_OF_SERVICE_DURING_CELL_REGISTER"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_RADIO_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_RADIO_LINK_FAILURE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_REESTABLISHMENT_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_REESTABLISHMENT_FAILURE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_REJECT_BY_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_REJECT_BY_NETWORK"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_RELEASED_SECURITY_NOT_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_RELEASED_SECURITY_NOT_ACTIVE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_RF_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_RF_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_SYSTEM_INFORMATION_BLOCK_READ_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_SYSTEM_INFORMATION_BLOCK_READ_ERROR"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_SYSTEM_INTERVAL_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_SYSTEM_INTERVAL_FAILURE"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_TIMER_EXPIRED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_TIMER_EXPIRED"
		);
	}
	inline jint DataFailCause::RRC_CONNECTION_TRACKING_AREA_ID_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_CONNECTION_TRACKING_AREA_ID_CHANGED"
		);
	}
	inline jint DataFailCause::RRC_UPLINK_CONNECTION_RELEASE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_CONNECTION_RELEASE"
		);
	}
	inline jint DataFailCause::RRC_UPLINK_DATA_TRANSMISSION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_DATA_TRANSMISSION_FAILURE"
		);
	}
	inline jint DataFailCause::RRC_UPLINK_DELIVERY_FAILED_DUE_TO_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_DELIVERY_FAILED_DUE_TO_HANDOVER"
		);
	}
	inline jint DataFailCause::RRC_UPLINK_ERROR_REQUEST_FROM_NAS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_ERROR_REQUEST_FROM_NAS"
		);
	}
	inline jint DataFailCause::RRC_UPLINK_RADIO_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RRC_UPLINK_RADIO_LINK_FAILURE"
		);
	}
	inline jint DataFailCause::RUIM_NOT_PRESENT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"RUIM_NOT_PRESENT"
		);
	}
	inline jint DataFailCause::SECURITY_MODE_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SECURITY_MODE_REJECTED"
		);
	}
	inline jint DataFailCause::SERVICE_NOT_ALLOWED_ON_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_NOT_ALLOWED_ON_PLMN"
		);
	}
	inline jint DataFailCause::SERVICE_OPTION_NOT_SUBSCRIBED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_OPTION_NOT_SUBSCRIBED"
		);
	}
	inline jint DataFailCause::SERVICE_OPTION_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_OPTION_NOT_SUPPORTED"
		);
	}
	inline jint DataFailCause::SERVICE_OPTION_OUT_OF_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SERVICE_OPTION_OUT_OF_ORDER"
		);
	}
	inline jint DataFailCause::SIGNAL_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SIGNAL_LOST"
		);
	}
	inline jint DataFailCause::SIM_CARD_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SIM_CARD_CHANGED"
		);
	}
	inline jint DataFailCause::SLICE_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SLICE_REJECTED"
		);
	}
	inline jint DataFailCause::SYNCHRONIZATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"SYNCHRONIZATION_FAILURE"
		);
	}
	inline jint DataFailCause::TEST_LOOPBACK_REGULAR_DEACTIVATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TEST_LOOPBACK_REGULAR_DEACTIVATION"
		);
	}
	inline jint DataFailCause::TETHERED_CALL_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TETHERED_CALL_ACTIVE"
		);
	}
	inline jint DataFailCause::TFT_SEMANTIC_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TFT_SEMANTIC_ERROR"
		);
	}
	inline jint DataFailCause::TFT_SYTAX_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TFT_SYTAX_ERROR"
		);
	}
	inline jint DataFailCause::THERMAL_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"THERMAL_EMERGENCY"
		);
	}
	inline jint DataFailCause::THERMAL_MITIGATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"THERMAL_MITIGATION"
		);
	}
	inline jint DataFailCause::TRAT_SWAP_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"TRAT_SWAP_FAILED"
		);
	}
	inline jint DataFailCause::UE_INITIATED_DETACH_OR_DISCONNECT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_INITIATED_DETACH_OR_DISCONNECT"
		);
	}
	inline jint DataFailCause::UE_IS_ENTERING_POWERSAVE_MODE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_IS_ENTERING_POWERSAVE_MODE"
		);
	}
	inline jint DataFailCause::UE_RAT_CHANGE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_RAT_CHANGE"
		);
	}
	inline jint DataFailCause::UE_SECURITY_CAPABILITIES_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UE_SECURITY_CAPABILITIES_MISMATCH"
		);
	}
	inline jint DataFailCause::UMTS_HANDOVER_TO_IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UMTS_HANDOVER_TO_IWLAN"
		);
	}
	inline jint DataFailCause::UMTS_REACTIVATION_REQ()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UMTS_REACTIVATION_REQ"
		);
	}
	inline jint DataFailCause::UNACCEPTABLE_NETWORK_PARAMETER()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNACCEPTABLE_NETWORK_PARAMETER"
		);
	}
	inline jint DataFailCause::UNACCEPTABLE_NON_EPS_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNACCEPTABLE_NON_EPS_AUTHENTICATION"
		);
	}
	inline jint DataFailCause::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN"
		);
	}
	inline jint DataFailCause::UNKNOWN_INFO_ELEMENT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN_INFO_ELEMENT"
		);
	}
	inline jint DataFailCause::UNKNOWN_PDP_ADDRESS_TYPE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN_PDP_ADDRESS_TYPE"
		);
	}
	inline jint DataFailCause::UNKNOWN_PDP_CONTEXT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNKNOWN_PDP_CONTEXT"
		);
	}
	inline jint DataFailCause::UNPREFERRED_RAT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNPREFERRED_RAT"
		);
	}
	inline jint DataFailCause::UNSUPPORTED_1X_PREV()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNSUPPORTED_1X_PREV"
		);
	}
	inline jint DataFailCause::UNSUPPORTED_APN_IN_CURRENT_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNSUPPORTED_APN_IN_CURRENT_PLMN"
		);
	}
	inline jint DataFailCause::UNSUPPORTED_QCI_VALUE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"UNSUPPORTED_QCI_VALUE"
		);
	}
	inline jint DataFailCause::USER_AUTHENTICATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"USER_AUTHENTICATION"
		);
	}
	inline jint DataFailCause::VSNCP_ADMINISTRATIVELY_PROHIBITED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_ADMINISTRATIVELY_PROHIBITED"
		);
	}
	inline jint DataFailCause::VSNCP_APN_UNAUTHORIZED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_APN_UNAUTHORIZED"
		);
	}
	inline jint DataFailCause::VSNCP_GEN_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_GEN_ERROR"
		);
	}
	inline jint DataFailCause::VSNCP_INSUFFICIENT_PARAMETERS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_INSUFFICIENT_PARAMETERS"
		);
	}
	inline jint DataFailCause::VSNCP_NO_PDN_GATEWAY_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_NO_PDN_GATEWAY_ADDRESS"
		);
	}
	inline jint DataFailCause::VSNCP_PDN_EXISTS_FOR_THIS_APN()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_EXISTS_FOR_THIS_APN"
		);
	}
	inline jint DataFailCause::VSNCP_PDN_GATEWAY_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_GATEWAY_REJECT"
		);
	}
	inline jint DataFailCause::VSNCP_PDN_GATEWAY_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_GATEWAY_UNREACHABLE"
		);
	}
	inline jint DataFailCause::VSNCP_PDN_ID_IN_USE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_ID_IN_USE"
		);
	}
	inline jint DataFailCause::VSNCP_PDN_LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_PDN_LIMIT_EXCEEDED"
		);
	}
	inline jint DataFailCause::VSNCP_RECONNECT_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_RECONNECT_NOT_ALLOWED"
		);
	}
	inline jint DataFailCause::VSNCP_RESOURCE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_RESOURCE_UNAVAILABLE"
		);
	}
	inline jint DataFailCause::VSNCP_SUBSCRIBER_LIMITATION()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_SUBSCRIBER_LIMITATION"
		);
	}
	inline jint DataFailCause::VSNCP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DataFailCause",
			"VSNCP_TIMEOUT"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
