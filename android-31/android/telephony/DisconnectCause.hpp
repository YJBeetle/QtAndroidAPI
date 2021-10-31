#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class DisconnectCause : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALREADY_DIALING();
		static jint ANSWERED_ELSEWHERE();
		static jint BUSY();
		static jint CALLING_DISABLED();
		static jint CALL_BARRED();
		static jint CALL_PULLED();
		static jint CANT_CALL_WHILE_RINGING();
		static jint CDMA_ACCESS_BLOCKED();
		static jint CDMA_ACCESS_FAILURE();
		static jint CDMA_ALREADY_ACTIVATED();
		static jint CDMA_DROP();
		static jint CDMA_INTERCEPT();
		static jint CDMA_LOCKED_UNTIL_POWER_CYCLE();
		static jint CDMA_NOT_EMERGENCY();
		static jint CDMA_PREEMPTED();
		static jint CDMA_REORDER();
		static jint CDMA_RETRY_ORDER();
		static jint CDMA_SO_REJECT();
		static jint CONGESTION();
		static jint CS_RESTRICTED();
		static jint CS_RESTRICTED_EMERGENCY();
		static jint CS_RESTRICTED_NORMAL();
		static jint DATA_DISABLED();
		static jint DATA_LIMIT_REACHED();
		static jint DIALED_CALL_FORWARDING_WHILE_ROAMING();
		static jint DIALED_MMI();
		static jint DIAL_LOW_BATTERY();
		static jint DIAL_MODIFIED_TO_DIAL();
		static jint DIAL_MODIFIED_TO_DIAL_VIDEO();
		static jint DIAL_MODIFIED_TO_SS();
		static jint DIAL_MODIFIED_TO_USSD();
		static jint DIAL_VIDEO_MODIFIED_TO_DIAL();
		static jint DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO();
		static jint DIAL_VIDEO_MODIFIED_TO_SS();
		static jint DIAL_VIDEO_MODIFIED_TO_USSD();
		static jint EMERGENCY_CALL_OVER_WFC_NOT_AVAILABLE();
		static jint EMERGENCY_PERM_FAILURE();
		static jint EMERGENCY_TEMP_FAILURE();
		static jint ERROR_UNSPECIFIED();
		static jint FDN_BLOCKED();
		static jint ICC_ERROR();
		static jint IMEI_NOT_ACCEPTED();
		static jint IMS_ACCESS_BLOCKED();
		static jint IMS_MERGED_SUCCESSFULLY();
		static jint IMS_SIP_ALTERNATE_EMERGENCY_CALL();
		static jint INCOMING_AUTO_REJECTED();
		static jint INCOMING_MISSED();
		static jint INCOMING_REJECTED();
		static jint INVALID_CREDENTIALS();
		static jint INVALID_NUMBER();
		static jint LIMIT_EXCEEDED();
		static jint LOCAL();
		static jint LOST_SIGNAL();
		static jint LOW_BATTERY();
		static jint MAXIMUM_NUMBER_OF_CALLS_REACHED();
		static jint MEDIA_TIMEOUT();
		static jint MMI();
		static jint NORMAL();
		static jint NORMAL_UNSPECIFIED();
		static jint NOT_DISCONNECTED();
		static jint NOT_VALID();
		static jint NO_PHONE_NUMBER_SUPPLIED();
		static jint NUMBER_UNREACHABLE();
		static jint OTASP_PROVISIONING_IN_PROCESS();
		static jint OUTGOING_CANCELED();
		static jint OUTGOING_EMERGENCY_CALL_PLACED();
		static jint OUTGOING_FAILURE();
		static jint OUT_OF_NETWORK();
		static jint OUT_OF_SERVICE();
		static jint POWER_OFF();
		static jint SERVER_ERROR();
		static jint SERVER_UNREACHABLE();
		static jint TIMED_OUT();
		static jint TOO_MANY_ONGOING_CALLS();
		static jint UNOBTAINABLE_NUMBER();
		static jint VIDEO_CALL_NOT_ALLOWED_WHILE_TTY_ENABLED();
		static jint VOICEMAIL_NUMBER_MISSING();
		static jint WFC_SERVICE_NOT_AVAILABLE_IN_THIS_LOCATION();
		static jint WIFI_LOST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DisconnectCause(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DisconnectCause(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

