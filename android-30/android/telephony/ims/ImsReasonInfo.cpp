#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./ImsReasonInfo.hpp"

namespace android::telephony::ims
{
	// Fields
	jint ImsReasonInfo::CODE_ACCESS_CLASS_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_ACCESS_CLASS_BLOCKED"
		);
	}
	jint ImsReasonInfo::CODE_ANSWERED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_ANSWERED_ELSEWHERE"
		);
	}
	jint ImsReasonInfo::CODE_BLACKLISTED_CALL_ID()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_BLACKLISTED_CALL_ID"
		);
	}
	jint ImsReasonInfo::CODE_CALL_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_BARRED"
		);
	}
	jint ImsReasonInfo::CODE_CALL_DROP_IWLAN_TO_LTE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_DROP_IWLAN_TO_LTE_UNAVAILABLE"
		);
	}
	jint ImsReasonInfo::CODE_CALL_END_CAUSE_CALL_PULL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_END_CAUSE_CALL_PULL"
		);
	}
	jint ImsReasonInfo::CODE_CALL_PULL_OUT_OF_SYNC()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_CALL_PULL_OUT_OF_SYNC"
		);
	}
	jint ImsReasonInfo::CODE_DATA_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DATA_DISABLED"
		);
	}
	jint ImsReasonInfo::CODE_DATA_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DATA_LIMIT_REACHED"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_DIAL"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_SS"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_MODIFIED_TO_USSD"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_DIAL"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_SS"
		);
	}
	jint ImsReasonInfo::CODE_DIAL_VIDEO_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_DIAL_VIDEO_MODIFIED_TO_USSD"
		);
	}
	jint ImsReasonInfo::CODE_ECBM_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_ECBM_NOT_SUPPORTED"
		);
	}
	jint ImsReasonInfo::CODE_EMERGENCY_PERM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EMERGENCY_PERM_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_EMERGENCY_TEMP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EMERGENCY_TEMP_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_EPDG_TUNNEL_ESTABLISH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EPDG_TUNNEL_ESTABLISH_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_EPDG_TUNNEL_LOST_CONNECTION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EPDG_TUNNEL_LOST_CONNECTION"
		);
	}
	jint ImsReasonInfo::CODE_EPDG_TUNNEL_REKEY_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_EPDG_TUNNEL_REKEY_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_FDN_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_FDN_BLOCKED"
		);
	}
	jint ImsReasonInfo::CODE_IKEV2_AUTH_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_IKEV2_AUTH_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_IMEI_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_IMEI_NOT_ACCEPTED"
		);
	}
	jint ImsReasonInfo::CODE_IWLAN_DPD_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_IWLAN_DPD_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_BUSY"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_CS_RETRY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_CS_RETRY_REQUIRED"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_DECLINE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_DECLINE"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_EXCEEDED"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_RESOURCE_RESERVATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_RESOURCE_RESERVATION_FAILED"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_TERMINATED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_TERMINATED"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_VCC_ON_PROGRESSING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_VCC_ON_PROGRESSING"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_CALL_VOLTE_RETRY_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_CALL_VOLTE_RETRY_REQUIRED"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_ENDED_BY_CONFERENCE_MERGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_ENDED_BY_CONFERENCE_MERGE"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_HO_NOT_FEASIBLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_HO_NOT_FEASIBLE"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_ILLEGAL_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_ILLEGAL_ARGUMENT"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_ILLEGAL_STATE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_ILLEGAL_STATE"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_IMS_SERVICE_DOWN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_IMS_SERVICE_DOWN"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_INTERNAL_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_LOW_BATTERY"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_NETWORK_IP_CHANGED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_IP_CHANGED"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_NETWORK_NO_LTE_COVERAGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_NO_LTE_COVERAGE"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_NETWORK_NO_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_NO_SERVICE"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_NETWORK_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NETWORK_ROAMING"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_NOT_REGISTERED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NOT_REGISTERED"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_NO_PENDING_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_NO_PENDING_CALL"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_POWER_OFF"
		);
	}
	jint ImsReasonInfo::CODE_LOCAL_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOCAL_SERVICE_UNAVAILABLE"
		);
	}
	jint ImsReasonInfo::CODE_LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_LOW_BATTERY"
		);
	}
	jint ImsReasonInfo::CODE_MAXIMUM_NUMBER_OF_CALLS_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MAXIMUM_NUMBER_OF_CALLS_REACHED"
		);
	}
	jint ImsReasonInfo::CODE_MEDIA_INIT_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_INIT_FAILED"
		);
	}
	jint ImsReasonInfo::CODE_MEDIA_NOT_ACCEPTABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_NOT_ACCEPTABLE"
		);
	}
	jint ImsReasonInfo::CODE_MEDIA_NO_DATA()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_NO_DATA"
		);
	}
	jint ImsReasonInfo::CODE_MEDIA_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MEDIA_UNSPECIFIED"
		);
	}
	jint ImsReasonInfo::CODE_MULTIENDPOINT_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_MULTIENDPOINT_NOT_SUPPORTED"
		);
	}
	jint ImsReasonInfo::CODE_NETWORK_DETACH()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NETWORK_DETACH"
		);
	}
	jint ImsReasonInfo::CODE_NETWORK_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NETWORK_REJECT"
		);
	}
	jint ImsReasonInfo::CODE_NETWORK_RESP_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NETWORK_RESP_TIMEOUT"
		);
	}
	jint ImsReasonInfo::CODE_NO_CSFB_IN_CS_ROAM()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NO_CSFB_IN_CS_ROAM"
		);
	}
	jint ImsReasonInfo::CODE_NO_VALID_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_NO_VALID_SIM"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_1()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_1"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_10()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_10"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_11()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_11"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_12()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_12"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_13()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_13"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_14()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_14"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_15()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_15"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_2()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_2"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_3()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_3"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_4()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_4"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_5()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_5"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_6()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_6"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_7()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_7"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_8()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_8"
		);
	}
	jint ImsReasonInfo::CODE_OEM_CAUSE_9()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_OEM_CAUSE_9"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_ACCESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_ACCESS_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_INTERNAL_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_LINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_LINK_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_LINK_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_LINK_LOST"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_OFF"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_RELEASE_ABNORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_RELEASE_ABNORMAL"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_RELEASE_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_RELEASE_NORMAL"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_SETUP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_SETUP_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_RADIO_UPLINK_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_RADIO_UPLINK_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_REGISTRATION_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REGISTRATION_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_REJECTED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECTED_ELSEWHERE"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_1X_COLLISION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_1X_COLLISION"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_CALL_ON_OTHER_SUB()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_CALL_ON_OTHER_SUB"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_CALL_TYPE_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_CALL_TYPE_NOT_ALLOWED"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_CONFERENCE_TTY_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_CONFERENCE_TTY_NOT_ALLOWED"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_INTERNAL_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_MAX_CALL_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_MAX_CALL_LIMIT_REACHED"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_SETUP()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_SETUP"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_TRANSFER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_TRANSFER"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_UPGRADE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_UPGRADE"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_CALL_WAITING_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CALL_WAITING_DISABLED"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_CONFERENCE_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CONFERENCE_CALL"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_CS_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_CS_CALL"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_E911_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_E911_CALL"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_ENCRYPTED_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_ENCRYPTED_CALL"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_ONGOING_HANDOVER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_ONGOING_HANDOVER"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_QOS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_QOS_FAILURE"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_SERVICE_NOT_REGISTERED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_SERVICE_NOT_REGISTERED"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_UNKNOWN"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_UNSUPPORTED_SDP_HEADERS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_UNSUPPORTED_SDP_HEADERS"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_UNSUPPORTED_SIP_HEADERS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_UNSUPPORTED_SIP_HEADERS"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_VT_AVPF_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_VT_AVPF_NOT_ALLOWED"
		);
	}
	jint ImsReasonInfo::CODE_REJECT_VT_TTY_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REJECT_VT_TTY_NOT_ALLOWED"
		);
	}
	jint ImsReasonInfo::CODE_REMOTE_CALL_DECLINE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_REMOTE_CALL_DECLINE"
		);
	}
	jint ImsReasonInfo::CODE_SESSION_MODIFICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SESSION_MODIFICATION_FAILED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_ALTERNATE_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_ALTERNATE_EMERGENCY_CALL"
		);
	}
	jint ImsReasonInfo::CODE_SIP_AMBIGUOUS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_AMBIGUOUS"
		);
	}
	jint ImsReasonInfo::CODE_SIP_BAD_ADDRESS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_BAD_ADDRESS"
		);
	}
	jint ImsReasonInfo::CODE_SIP_BAD_REQUEST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_BAD_REQUEST"
		);
	}
	jint ImsReasonInfo::CODE_SIP_BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_BUSY"
		);
	}
	jint ImsReasonInfo::CODE_SIP_CALL_OR_TRANS_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_CALL_OR_TRANS_DOES_NOT_EXIST"
		);
	}
	jint ImsReasonInfo::CODE_SIP_CLIENT_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_CLIENT_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_SIP_EXTENSION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_EXTENSION_REQUIRED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_FORBIDDEN()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_FORBIDDEN"
		);
	}
	jint ImsReasonInfo::CODE_SIP_GLOBAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_GLOBAL_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_SIP_INTERVAL_TOO_BRIEF()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_INTERVAL_TOO_BRIEF"
		);
	}
	jint ImsReasonInfo::CODE_SIP_LOOP_DETECTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_LOOP_DETECTED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_METHOD_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_METHOD_NOT_ALLOWED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_NOT_ACCEPTABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_ACCEPTABLE"
		);
	}
	jint ImsReasonInfo::CODE_SIP_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_FOUND"
		);
	}
	jint ImsReasonInfo::CODE_SIP_NOT_REACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_REACHABLE"
		);
	}
	jint ImsReasonInfo::CODE_SIP_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_NOT_SUPPORTED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_PROXY_AUTHENTICATION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_PROXY_AUTHENTICATION_REQUIRED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_REDIRECTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REDIRECTED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_REQUEST_CANCELLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_CANCELLED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_REQUEST_ENTITY_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_ENTITY_TOO_LARGE"
		);
	}
	jint ImsReasonInfo::CODE_SIP_REQUEST_PENDING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_PENDING"
		);
	}
	jint ImsReasonInfo::CODE_SIP_REQUEST_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_TIMEOUT"
		);
	}
	jint ImsReasonInfo::CODE_SIP_REQUEST_URI_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_REQUEST_URI_TOO_LARGE"
		);
	}
	jint ImsReasonInfo::CODE_SIP_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVER_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_SIP_SERVER_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVER_INTERNAL_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_SIP_SERVER_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVER_TIMEOUT"
		);
	}
	jint ImsReasonInfo::CODE_SIP_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_SERVICE_UNAVAILABLE"
		);
	}
	jint ImsReasonInfo::CODE_SIP_TEMPRARILY_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_TEMPRARILY_UNAVAILABLE"
		);
	}
	jint ImsReasonInfo::CODE_SIP_TOO_MANY_HOPS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_TOO_MANY_HOPS"
		);
	}
	jint ImsReasonInfo::CODE_SIP_TRANSACTION_DOES_NOT_EXIST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_TRANSACTION_DOES_NOT_EXIST"
		);
	}
	jint ImsReasonInfo::CODE_SIP_UNDECIPHERABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_UNDECIPHERABLE"
		);
	}
	jint ImsReasonInfo::CODE_SIP_USER_MARKED_UNWANTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_USER_MARKED_UNWANTED"
		);
	}
	jint ImsReasonInfo::CODE_SIP_USER_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SIP_USER_REJECTED"
		);
	}
	jint ImsReasonInfo::CODE_SUPP_SVC_CANCELLED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SUPP_SVC_CANCELLED"
		);
	}
	jint ImsReasonInfo::CODE_SUPP_SVC_FAILED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SUPP_SVC_FAILED"
		);
	}
	jint ImsReasonInfo::CODE_SUPP_SVC_REINVITE_COLLISION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_SUPP_SVC_REINVITE_COLLISION"
		);
	}
	jint ImsReasonInfo::CODE_TIMEOUT_1XX_WAITING()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_TIMEOUT_1XX_WAITING"
		);
	}
	jint ImsReasonInfo::CODE_TIMEOUT_NO_ANSWER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_TIMEOUT_NO_ANSWER"
		);
	}
	jint ImsReasonInfo::CODE_TIMEOUT_NO_ANSWER_CALL_UPDATE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_TIMEOUT_NO_ANSWER_CALL_UPDATE"
		);
	}
	jint ImsReasonInfo::CODE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UNSPECIFIED"
		);
	}
	jint ImsReasonInfo::CODE_USER_CANCELLED_SESSION_MODIFICATION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_CANCELLED_SESSION_MODIFICATION"
		);
	}
	jint ImsReasonInfo::CODE_USER_DECLINE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_DECLINE"
		);
	}
	jint ImsReasonInfo::CODE_USER_IGNORE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_IGNORE"
		);
	}
	jint ImsReasonInfo::CODE_USER_NOANSWER()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_NOANSWER"
		);
	}
	jint ImsReasonInfo::CODE_USER_REJECTED_SESSION_MODIFICATION()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_REJECTED_SESSION_MODIFICATION"
		);
	}
	jint ImsReasonInfo::CODE_USER_TERMINATED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_TERMINATED"
		);
	}
	jint ImsReasonInfo::CODE_USER_TERMINATED_BY_REMOTE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_USER_TERMINATED_BY_REMOTE"
		);
	}
	jint ImsReasonInfo::CODE_UT_CB_PASSWORD_MISMATCH()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_CB_PASSWORD_MISMATCH"
		);
	}
	jint ImsReasonInfo::CODE_UT_NETWORK_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_NETWORK_ERROR"
		);
	}
	jint ImsReasonInfo::CODE_UT_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_NOT_SUPPORTED"
		);
	}
	jint ImsReasonInfo::CODE_UT_OPERATION_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_OPERATION_NOT_ALLOWED"
		);
	}
	jint ImsReasonInfo::CODE_UT_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SERVICE_UNAVAILABLE"
		);
	}
	jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_DIAL"
		);
	}
	jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_SS"
		);
	}
	jint ImsReasonInfo::CODE_UT_SS_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_UT_SS_MODIFIED_TO_USSD"
		);
	}
	jint ImsReasonInfo::CODE_WIFI_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"CODE_WIFI_LOST"
		);
	}
	JObject ImsReasonInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsReasonInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ImsReasonInfo::EXTRA_CODE_CALL_RETRY_BY_SETTINGS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"EXTRA_CODE_CALL_RETRY_BY_SETTINGS"
		);
	}
	jint ImsReasonInfo::EXTRA_CODE_CALL_RETRY_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"EXTRA_CODE_CALL_RETRY_NORMAL"
		);
	}
	jint ImsReasonInfo::EXTRA_CODE_CALL_RETRY_SILENT_REDIAL()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsReasonInfo",
			"EXTRA_CODE_CALL_RETRY_SILENT_REDIAL"
		);
	}
	
	// QAndroidJniObject forward
	ImsReasonInfo::ImsReasonInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ImsReasonInfo::ImsReasonInfo(jint arg0, jint arg1, JString arg2)
		: JObject(
			"android.telephony.ims.ImsReasonInfo",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	jint ImsReasonInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ImsReasonInfo::getCode()
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	jint ImsReasonInfo::getExtraCode()
	{
		return callMethod<jint>(
			"getExtraCode",
			"()I"
		);
	}
	JString ImsReasonInfo::getExtraMessage()
	{
		return callObjectMethod(
			"getExtraMessage",
			"()Ljava/lang/String;"
		);
	}
	JString ImsReasonInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ImsReasonInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::ims

