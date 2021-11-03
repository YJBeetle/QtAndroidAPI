#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony::ims
{
	class ImsReasonInfo : public JObject
	{
	public:
		// Fields
		static jint CODE_ACCESS_CLASS_BLOCKED();
		static jint CODE_ANSWERED_ELSEWHERE();
		static jint CODE_BLACKLISTED_CALL_ID();
		static jint CODE_CALL_BARRED();
		static jint CODE_CALL_DROP_IWLAN_TO_LTE_UNAVAILABLE();
		static jint CODE_CALL_END_CAUSE_CALL_PULL();
		static jint CODE_CALL_PULL_OUT_OF_SYNC();
		static jint CODE_DATA_DISABLED();
		static jint CODE_DATA_LIMIT_REACHED();
		static jint CODE_DIAL_MODIFIED_TO_DIAL();
		static jint CODE_DIAL_MODIFIED_TO_DIAL_VIDEO();
		static jint CODE_DIAL_MODIFIED_TO_SS();
		static jint CODE_DIAL_MODIFIED_TO_USSD();
		static jint CODE_DIAL_VIDEO_MODIFIED_TO_DIAL();
		static jint CODE_DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO();
		static jint CODE_DIAL_VIDEO_MODIFIED_TO_SS();
		static jint CODE_DIAL_VIDEO_MODIFIED_TO_USSD();
		static jint CODE_ECBM_NOT_SUPPORTED();
		static jint CODE_EMERGENCY_PERM_FAILURE();
		static jint CODE_EMERGENCY_TEMP_FAILURE();
		static jint CODE_EPDG_TUNNEL_ESTABLISH_FAILURE();
		static jint CODE_EPDG_TUNNEL_LOST_CONNECTION();
		static jint CODE_EPDG_TUNNEL_REKEY_FAILURE();
		static jint CODE_FDN_BLOCKED();
		static jint CODE_IKEV2_AUTH_FAILURE();
		static jint CODE_IMEI_NOT_ACCEPTED();
		static jint CODE_IWLAN_DPD_FAILURE();
		static jint CODE_LOCAL_CALL_BUSY();
		static jint CODE_LOCAL_CALL_CS_RETRY_REQUIRED();
		static jint CODE_LOCAL_CALL_DECLINE();
		static jint CODE_LOCAL_CALL_EXCEEDED();
		static jint CODE_LOCAL_CALL_RESOURCE_RESERVATION_FAILED();
		static jint CODE_LOCAL_CALL_TERMINATED();
		static jint CODE_LOCAL_CALL_VCC_ON_PROGRESSING();
		static jint CODE_LOCAL_CALL_VOLTE_RETRY_REQUIRED();
		static jint CODE_LOCAL_ENDED_BY_CONFERENCE_MERGE();
		static jint CODE_LOCAL_HO_NOT_FEASIBLE();
		static jint CODE_LOCAL_ILLEGAL_ARGUMENT();
		static jint CODE_LOCAL_ILLEGAL_STATE();
		static jint CODE_LOCAL_IMS_SERVICE_DOWN();
		static jint CODE_LOCAL_INTERNAL_ERROR();
		static jint CODE_LOCAL_LOW_BATTERY();
		static jint CODE_LOCAL_NETWORK_IP_CHANGED();
		static jint CODE_LOCAL_NETWORK_NO_LTE_COVERAGE();
		static jint CODE_LOCAL_NETWORK_NO_SERVICE();
		static jint CODE_LOCAL_NETWORK_ROAMING();
		static jint CODE_LOCAL_NOT_REGISTERED();
		static jint CODE_LOCAL_NO_PENDING_CALL();
		static jint CODE_LOCAL_POWER_OFF();
		static jint CODE_LOCAL_SERVICE_UNAVAILABLE();
		static jint CODE_LOW_BATTERY();
		static jint CODE_MAXIMUM_NUMBER_OF_CALLS_REACHED();
		static jint CODE_MEDIA_INIT_FAILED();
		static jint CODE_MEDIA_NOT_ACCEPTABLE();
		static jint CODE_MEDIA_NO_DATA();
		static jint CODE_MEDIA_UNSPECIFIED();
		static jint CODE_MULTIENDPOINT_NOT_SUPPORTED();
		static jint CODE_NETWORK_DETACH();
		static jint CODE_NETWORK_REJECT();
		static jint CODE_NETWORK_RESP_TIMEOUT();
		static jint CODE_NO_CSFB_IN_CS_ROAM();
		static jint CODE_NO_VALID_SIM();
		static jint CODE_OEM_CAUSE_1();
		static jint CODE_OEM_CAUSE_10();
		static jint CODE_OEM_CAUSE_11();
		static jint CODE_OEM_CAUSE_12();
		static jint CODE_OEM_CAUSE_13();
		static jint CODE_OEM_CAUSE_14();
		static jint CODE_OEM_CAUSE_15();
		static jint CODE_OEM_CAUSE_2();
		static jint CODE_OEM_CAUSE_3();
		static jint CODE_OEM_CAUSE_4();
		static jint CODE_OEM_CAUSE_5();
		static jint CODE_OEM_CAUSE_6();
		static jint CODE_OEM_CAUSE_7();
		static jint CODE_OEM_CAUSE_8();
		static jint CODE_OEM_CAUSE_9();
		static jint CODE_RADIO_ACCESS_FAILURE();
		static jint CODE_RADIO_INTERNAL_ERROR();
		static jint CODE_RADIO_LINK_FAILURE();
		static jint CODE_RADIO_LINK_LOST();
		static jint CODE_RADIO_OFF();
		static jint CODE_RADIO_RELEASE_ABNORMAL();
		static jint CODE_RADIO_RELEASE_NORMAL();
		static jint CODE_RADIO_SETUP_FAILURE();
		static jint CODE_RADIO_UPLINK_FAILURE();
		static jint CODE_REGISTRATION_ERROR();
		static jint CODE_REJECTED_ELSEWHERE();
		static jint CODE_REJECT_1X_COLLISION();
		static jint CODE_REJECT_CALL_ON_OTHER_SUB();
		static jint CODE_REJECT_CALL_TYPE_NOT_ALLOWED();
		static jint CODE_REJECT_CONFERENCE_TTY_NOT_ALLOWED();
		static jint CODE_REJECT_INTERNAL_ERROR();
		static jint CODE_REJECT_MAX_CALL_LIMIT_REACHED();
		static jint CODE_REJECT_ONGOING_CALL_SETUP();
		static jint CODE_REJECT_ONGOING_CALL_TRANSFER();
		static jint CODE_REJECT_ONGOING_CALL_UPGRADE();
		static jint CODE_REJECT_ONGOING_CALL_WAITING_DISABLED();
		static jint CODE_REJECT_ONGOING_CONFERENCE_CALL();
		static jint CODE_REJECT_ONGOING_CS_CALL();
		static jint CODE_REJECT_ONGOING_E911_CALL();
		static jint CODE_REJECT_ONGOING_ENCRYPTED_CALL();
		static jint CODE_REJECT_ONGOING_HANDOVER();
		static jint CODE_REJECT_QOS_FAILURE();
		static jint CODE_REJECT_SERVICE_NOT_REGISTERED();
		static jint CODE_REJECT_UNKNOWN();
		static jint CODE_REJECT_UNSUPPORTED_SDP_HEADERS();
		static jint CODE_REJECT_UNSUPPORTED_SIP_HEADERS();
		static jint CODE_REJECT_VT_AVPF_NOT_ALLOWED();
		static jint CODE_REJECT_VT_TTY_NOT_ALLOWED();
		static jint CODE_REMOTE_CALL_DECLINE();
		static jint CODE_SESSION_MODIFICATION_FAILED();
		static jint CODE_SIP_ALTERNATE_EMERGENCY_CALL();
		static jint CODE_SIP_AMBIGUOUS();
		static jint CODE_SIP_BAD_ADDRESS();
		static jint CODE_SIP_BAD_REQUEST();
		static jint CODE_SIP_BUSY();
		static jint CODE_SIP_CALL_OR_TRANS_DOES_NOT_EXIST();
		static jint CODE_SIP_CLIENT_ERROR();
		static jint CODE_SIP_EXTENSION_REQUIRED();
		static jint CODE_SIP_FORBIDDEN();
		static jint CODE_SIP_GLOBAL_ERROR();
		static jint CODE_SIP_INTERVAL_TOO_BRIEF();
		static jint CODE_SIP_LOOP_DETECTED();
		static jint CODE_SIP_METHOD_NOT_ALLOWED();
		static jint CODE_SIP_NOT_ACCEPTABLE();
		static jint CODE_SIP_NOT_FOUND();
		static jint CODE_SIP_NOT_REACHABLE();
		static jint CODE_SIP_NOT_SUPPORTED();
		static jint CODE_SIP_PROXY_AUTHENTICATION_REQUIRED();
		static jint CODE_SIP_REDIRECTED();
		static jint CODE_SIP_REQUEST_CANCELLED();
		static jint CODE_SIP_REQUEST_ENTITY_TOO_LARGE();
		static jint CODE_SIP_REQUEST_PENDING();
		static jint CODE_SIP_REQUEST_TIMEOUT();
		static jint CODE_SIP_REQUEST_URI_TOO_LARGE();
		static jint CODE_SIP_SERVER_ERROR();
		static jint CODE_SIP_SERVER_INTERNAL_ERROR();
		static jint CODE_SIP_SERVER_TIMEOUT();
		static jint CODE_SIP_SERVICE_UNAVAILABLE();
		static jint CODE_SIP_TEMPRARILY_UNAVAILABLE();
		static jint CODE_SIP_TOO_MANY_HOPS();
		static jint CODE_SIP_TRANSACTION_DOES_NOT_EXIST();
		static jint CODE_SIP_UNDECIPHERABLE();
		static jint CODE_SIP_USER_MARKED_UNWANTED();
		static jint CODE_SIP_USER_REJECTED();
		static jint CODE_SUPP_SVC_CANCELLED();
		static jint CODE_SUPP_SVC_FAILED();
		static jint CODE_SUPP_SVC_REINVITE_COLLISION();
		static jint CODE_TIMEOUT_1XX_WAITING();
		static jint CODE_TIMEOUT_NO_ANSWER();
		static jint CODE_TIMEOUT_NO_ANSWER_CALL_UPDATE();
		static jint CODE_UNSPECIFIED();
		static jint CODE_USER_CANCELLED_SESSION_MODIFICATION();
		static jint CODE_USER_DECLINE();
		static jint CODE_USER_IGNORE();
		static jint CODE_USER_NOANSWER();
		static jint CODE_USER_REJECTED_SESSION_MODIFICATION();
		static jint CODE_USER_TERMINATED();
		static jint CODE_USER_TERMINATED_BY_REMOTE();
		static jint CODE_UT_CB_PASSWORD_MISMATCH();
		static jint CODE_UT_NETWORK_ERROR();
		static jint CODE_UT_NOT_SUPPORTED();
		static jint CODE_UT_OPERATION_NOT_ALLOWED();
		static jint CODE_UT_SERVICE_UNAVAILABLE();
		static jint CODE_UT_SS_MODIFIED_TO_DIAL();
		static jint CODE_UT_SS_MODIFIED_TO_DIAL_VIDEO();
		static jint CODE_UT_SS_MODIFIED_TO_SS();
		static jint CODE_UT_SS_MODIFIED_TO_USSD();
		static jint CODE_WIFI_LOST();
		static JObject CREATOR();
		static jint EXTRA_CODE_CALL_RETRY_BY_SETTINGS();
		static jint EXTRA_CODE_CALL_RETRY_NORMAL();
		static jint EXTRA_CODE_CALL_RETRY_SILENT_REDIAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsReasonInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsReasonInfo(QAndroidJniObject obj);
		
		// Constructors
		ImsReasonInfo(jint arg0, jint arg1, jstring arg2);
		
		// Methods
		jint describeContents();
		jint getCode();
		jint getExtraCode();
		jstring getExtraMessage();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::ims

