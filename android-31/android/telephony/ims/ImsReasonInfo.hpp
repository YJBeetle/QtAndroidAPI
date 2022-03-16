#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ImsReasonInfo.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline jint ImsReasonInfo::CODE_ACCESS_CLASS_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_ACCESS_CLASS_BLOCKED"
		);
	}
	inline jint ImsReasonInfo::CODE_ANSWERED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_ANSWERED_ELSEWHERE"
		);
	}
	inline jint ImsReasonInfo::CODE_BLACKLISTED_CALL_ID()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_BLACKLISTED_CALL_ID"
		);
	}
	inline jint ImsReasonInfo::CODE_CALL_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_BARRED"
		);
	}
	inline jint ImsReasonInfo::CODE_CALL_DROP_IWLAN_TO_LTE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_DROP_IWLAN_TO_LTE_UNAVAILABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_CALL_END_CAUSE_CALL_PULL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_END_CAUSE_CALL_PULL"
		);
	}
	inline jint ImsReasonInfo::CODE_CALL_PULL_OUT_OF_SYNC()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_PULL_OUT_OF_SYNC"
		);
	}
	inline jint ImsReasonInfo::CODE_DATA_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DATA_DISABLED"
		);
	}
	inline jint ImsReasonInfo::CODE_DATA_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DATA_LIMIT_REACHED"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_DIAL"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_SS"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_USSD"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_DIAL"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_SS"
		);
	}
	inline jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_USSD"
		);
	}
	inline jint ImsReasonInfo::CODE_ECBM_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_ECBM_NOT_SUPPORTED"
		);
	}
	inline jint ImsReasonInfo::CODE_EMERGENCY_PERM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EMERGENCY_PERM_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_EMERGENCY_TEMP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EMERGENCY_TEMP_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_EPDG_TUNNEL_ESTABLISH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EPDG_TUNNEL_ESTABLISH_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_EPDG_TUNNEL_LOST_CONNECTION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EPDG_TUNNEL_LOST_CONNECTION"
		);
	}
	inline jint ImsReasonInfo::CODE_EPDG_TUNNEL_REKEY_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EPDG_TUNNEL_REKEY_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_FDN_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_FDN_BLOCKED"
		);
	}
	inline jint ImsReasonInfo::CODE_IKEV2_AUTH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_IKEV2_AUTH_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_IMEI_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_IMEI_NOT_ACCEPTED"
		);
	}
	inline jint ImsReasonInfo::CODE_IWLAN_DPD_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_IWLAN_DPD_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_BUSY"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_CS_RETRY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_CS_RETRY_REQUIRED"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_DECLINE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_DECLINE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_EXCEEDED"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_RESOURCE_RESERVATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_RESOURCE_RESERVATION_FAILED"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_TERMINATED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_TERMINATED"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_VCC_ON_PROGRESSING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_VCC_ON_PROGRESSING"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_CALL_VOLTE_RETRY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_VOLTE_RETRY_REQUIRED"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_ENDED_BY_CONFERENCE_MERGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_ENDED_BY_CONFERENCE_MERGE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_HO_NOT_FEASIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_HO_NOT_FEASIBLE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_ILLEGAL_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_ILLEGAL_ARGUMENT"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_ILLEGAL_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_ILLEGAL_STATE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_IMS_SERVICE_DOWN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_IMS_SERVICE_DOWN"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_INTERNAL_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_LOW_BATTERY"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_NETWORK_IP_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_IP_CHANGED"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_NETWORK_NO_LTE_COVERAGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_NO_LTE_COVERAGE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_NETWORK_NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_NO_SERVICE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_NETWORK_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_ROAMING"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_NOT_REGISTERED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NOT_REGISTERED"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_NO_PENDING_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NO_PENDING_CALL"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_POWER_OFF"
		);
	}
	inline jint ImsReasonInfo::CODE_LOCAL_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_SERVICE_UNAVAILABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOW_BATTERY"
		);
	}
	inline jint ImsReasonInfo::CODE_MAXIMUM_NUMBER_OF_CALLS_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MAXIMUM_NUMBER_OF_CALLS_REACHED"
		);
	}
	inline jint ImsReasonInfo::CODE_MEDIA_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_INIT_FAILED"
		);
	}
	inline jint ImsReasonInfo::CODE_MEDIA_NOT_ACCEPTABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_NOT_ACCEPTABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_MEDIA_NO_DATA()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_NO_DATA"
		);
	}
	inline jint ImsReasonInfo::CODE_MEDIA_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_UNSPECIFIED"
		);
	}
	inline jint ImsReasonInfo::CODE_MULTIENDPOINT_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MULTIENDPOINT_NOT_SUPPORTED"
		);
	}
	inline jint ImsReasonInfo::CODE_NETWORK_CONGESTION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NETWORK_CONGESTION"
		);
	}
	inline jint ImsReasonInfo::CODE_NETWORK_DETACH()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NETWORK_DETACH"
		);
	}
	inline jint ImsReasonInfo::CODE_NETWORK_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NETWORK_REJECT"
		);
	}
	inline jint ImsReasonInfo::CODE_NETWORK_RESP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NETWORK_RESP_TIMEOUT"
		);
	}
	inline jint ImsReasonInfo::CODE_NO_CSFB_IN_CS_ROAM()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NO_CSFB_IN_CS_ROAM"
		);
	}
	inline jint ImsReasonInfo::CODE_NO_VALID_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NO_VALID_SIM"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_1()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_1"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_10()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_10"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_11()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_11"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_12()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_12"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_13()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_13"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_14()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_14"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_15()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_15"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_2()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_2"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_3()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_3"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_4()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_4"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_5()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_5"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_6()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_6"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_7()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_7"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_8()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_8"
		);
	}
	inline jint ImsReasonInfo::CODE_OEM_CAUSE_9()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_9"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_ACCESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_ACCESS_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_INTERNAL_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_LINK_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_LINK_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_LINK_LOST"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_OFF"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_RELEASE_ABNORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_RELEASE_ABNORMAL"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_RELEASE_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_RELEASE_NORMAL"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_SETUP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_SETUP_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_RADIO_UPLINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_UPLINK_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_REGISTRATION_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REGISTRATION_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECTED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECTED_ELSEWHERE"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_1X_COLLISION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_1X_COLLISION"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_CALL_ON_OTHER_SUB()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_CALL_ON_OTHER_SUB"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_CALL_TYPE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_CALL_TYPE_NOT_ALLOWED"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_CONFERENCE_TTY_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_CONFERENCE_TTY_NOT_ALLOWED"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_INTERNAL_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_MAX_CALL_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_MAX_CALL_LIMIT_REACHED"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_SETUP()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_SETUP"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_TRANSFER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_TRANSFER"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_UPGRADE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_UPGRADE"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_WAITING_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_WAITING_DISABLED"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_CONFERENCE_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CONFERENCE_CALL"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_CS_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CS_CALL"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_E911_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_E911_CALL"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_ENCRYPTED_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_ENCRYPTED_CALL"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_ONGOING_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_HANDOVER"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_QOS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_QOS_FAILURE"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_SERVICE_NOT_REGISTERED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_SERVICE_NOT_REGISTERED"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_UNKNOWN"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_UNSUPPORTED_SDP_HEADERS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_UNSUPPORTED_SDP_HEADERS"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_UNSUPPORTED_SIP_HEADERS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_UNSUPPORTED_SIP_HEADERS"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_VT_AVPF_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_VT_AVPF_NOT_ALLOWED"
		);
	}
	inline jint ImsReasonInfo::CODE_REJECT_VT_TTY_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_VT_TTY_NOT_ALLOWED"
		);
	}
	inline jint ImsReasonInfo::CODE_REMOTE_CALL_DECLINE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REMOTE_CALL_DECLINE"
		);
	}
	inline jint ImsReasonInfo::CODE_SESSION_MODIFICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SESSION_MODIFICATION_FAILED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_ALTERNATE_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_ALTERNATE_EMERGENCY_CALL"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_AMBIGUOUS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_AMBIGUOUS"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_BAD_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_BAD_ADDRESS"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_BAD_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_BAD_REQUEST"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_BUSY"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_CALL_OR_TRANS_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_CALL_OR_TRANS_DOES_NOT_EXIST"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_CLIENT_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_CLIENT_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_EXTENSION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_EXTENSION_REQUIRED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_FORBIDDEN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_FORBIDDEN"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_GLOBAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_GLOBAL_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_INTERVAL_TOO_BRIEF()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_INTERVAL_TOO_BRIEF"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_LOOP_DETECTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_LOOP_DETECTED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_METHOD_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_METHOD_NOT_ALLOWED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_NOT_ACCEPTABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_ACCEPTABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_FOUND"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_NOT_REACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_REACHABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_SUPPORTED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_PROXY_AUTHENTICATION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_PROXY_AUTHENTICATION_REQUIRED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_REDIRECTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REDIRECTED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_REQUEST_CANCELLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_CANCELLED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_REQUEST_ENTITY_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_ENTITY_TOO_LARGE"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_REQUEST_PENDING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_PENDING"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_REQUEST_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_TIMEOUT"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_REQUEST_URI_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_URI_TOO_LARGE"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVER_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_SERVER_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVER_INTERNAL_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_SERVER_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVER_TIMEOUT"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVICE_UNAVAILABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_TEMPRARILY_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_TEMPRARILY_UNAVAILABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_TOO_MANY_HOPS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_TOO_MANY_HOPS"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_TRANSACTION_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_TRANSACTION_DOES_NOT_EXIST"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_UNDECIPHERABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_UNDECIPHERABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_USER_MARKED_UNWANTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_USER_MARKED_UNWANTED"
		);
	}
	inline jint ImsReasonInfo::CODE_SIP_USER_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_USER_REJECTED"
		);
	}
	inline jint ImsReasonInfo::CODE_SUPP_SVC_CANCELLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SUPP_SVC_CANCELLED"
		);
	}
	inline jint ImsReasonInfo::CODE_SUPP_SVC_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SUPP_SVC_FAILED"
		);
	}
	inline jint ImsReasonInfo::CODE_SUPP_SVC_REINVITE_COLLISION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SUPP_SVC_REINVITE_COLLISION"
		);
	}
	inline jint ImsReasonInfo::CODE_TIMEOUT_1XX_WAITING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_TIMEOUT_1XX_WAITING"
		);
	}
	inline jint ImsReasonInfo::CODE_TIMEOUT_NO_ANSWER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_TIMEOUT_NO_ANSWER"
		);
	}
	inline jint ImsReasonInfo::CODE_TIMEOUT_NO_ANSWER_CALL_UPDATE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_TIMEOUT_NO_ANSWER_CALL_UPDATE"
		);
	}
	inline jint ImsReasonInfo::CODE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UNSPECIFIED"
		);
	}
	inline jint ImsReasonInfo::CODE_USER_CANCELLED_SESSION_MODIFICATION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_CANCELLED_SESSION_MODIFICATION"
		);
	}
	inline jint ImsReasonInfo::CODE_USER_DECLINE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_DECLINE"
		);
	}
	inline jint ImsReasonInfo::CODE_USER_IGNORE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_IGNORE"
		);
	}
	inline jint ImsReasonInfo::CODE_USER_NOANSWER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_NOANSWER"
		);
	}
	inline jint ImsReasonInfo::CODE_USER_REJECTED_SESSION_MODIFICATION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_REJECTED_SESSION_MODIFICATION"
		);
	}
	inline jint ImsReasonInfo::CODE_USER_TERMINATED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_TERMINATED"
		);
	}
	inline jint ImsReasonInfo::CODE_USER_TERMINATED_BY_REMOTE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_TERMINATED_BY_REMOTE"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_CB_PASSWORD_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_CB_PASSWORD_MISMATCH"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_NETWORK_ERROR"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_NOT_SUPPORTED"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_OPERATION_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_OPERATION_NOT_ALLOWED"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SERVICE_UNAVAILABLE"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_DIAL"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_SS"
		);
	}
	inline jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_USSD"
		);
	}
	inline jint ImsReasonInfo::CODE_WIFI_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_WIFI_LOST"
		);
	}
	inline JObject ImsReasonInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsReasonInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ImsReasonInfo::EXTRA_CODE_CALL_RETRY_BY_SETTINGS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"EXTRA_CODE_CALL_RETRY_BY_SETTINGS"
		);
	}
	inline jint ImsReasonInfo::EXTRA_CODE_CALL_RETRY_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"EXTRA_CODE_CALL_RETRY_EMERGENCY"
		);
	}
	inline jint ImsReasonInfo::EXTRA_CODE_CALL_RETRY_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"EXTRA_CODE_CALL_RETRY_NORMAL"
		);
	}
	inline jint ImsReasonInfo::EXTRA_CODE_CALL_RETRY_SILENT_REDIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"EXTRA_CODE_CALL_RETRY_SILENT_REDIAL"
		);
	}
	
	// Constructors
	inline ImsReasonInfo::ImsReasonInfo(jint arg0, jint arg1, JString arg2)
		: JObject(
			"android.telephony.ims.ImsReasonInfo",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint ImsReasonInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint ImsReasonInfo::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	inline jint ImsReasonInfo::getExtraCode() const
	{
		return callMethod<jint>(
			"getExtraCode",
			"()I"
		);
	}
	inline JString ImsReasonInfo::getExtraMessage() const
	{
		return callObjectMethod(
			"getExtraMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JString ImsReasonInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ImsReasonInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::ims

// Base class headers

