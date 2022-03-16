#include "./DisconnectCause.hpp"

namespace android::telephony
{
	// Fields
	jint DisconnectCause::ALREADY_DIALING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ALREADY_DIALING"
		);
	}
	jint DisconnectCause::ANSWERED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ANSWERED_ELSEWHERE"
		);
	}
	jint DisconnectCause::BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"BUSY"
		);
	}
	jint DisconnectCause::CALLING_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CALLING_DISABLED"
		);
	}
	jint DisconnectCause::CALL_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CALL_BARRED"
		);
	}
	jint DisconnectCause::CALL_PULLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CALL_PULLED"
		);
	}
	jint DisconnectCause::CANT_CALL_WHILE_RINGING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CANT_CALL_WHILE_RINGING"
		);
	}
	jint DisconnectCause::CDMA_ACCESS_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_ACCESS_BLOCKED"
		);
	}
	jint DisconnectCause::CDMA_ACCESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_ACCESS_FAILURE"
		);
	}
	jint DisconnectCause::CDMA_ALREADY_ACTIVATED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_ALREADY_ACTIVATED"
		);
	}
	jint DisconnectCause::CDMA_DROP()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_DROP"
		);
	}
	jint DisconnectCause::CDMA_INTERCEPT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_INTERCEPT"
		);
	}
	jint DisconnectCause::CDMA_LOCKED_UNTIL_POWER_CYCLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_LOCKED_UNTIL_POWER_CYCLE"
		);
	}
	jint DisconnectCause::CDMA_NOT_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_NOT_EMERGENCY"
		);
	}
	jint DisconnectCause::CDMA_PREEMPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_PREEMPTED"
		);
	}
	jint DisconnectCause::CDMA_REORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_REORDER"
		);
	}
	jint DisconnectCause::CDMA_RETRY_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_RETRY_ORDER"
		);
	}
	jint DisconnectCause::CDMA_SO_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_SO_REJECT"
		);
	}
	jint DisconnectCause::CONGESTION()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CONGESTION"
		);
	}
	jint DisconnectCause::CS_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CS_RESTRICTED"
		);
	}
	jint DisconnectCause::CS_RESTRICTED_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CS_RESTRICTED_EMERGENCY"
		);
	}
	jint DisconnectCause::CS_RESTRICTED_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CS_RESTRICTED_NORMAL"
		);
	}
	jint DisconnectCause::DATA_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DATA_DISABLED"
		);
	}
	jint DisconnectCause::DATA_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DATA_LIMIT_REACHED"
		);
	}
	jint DisconnectCause::DIALED_CALL_FORWARDING_WHILE_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIALED_CALL_FORWARDING_WHILE_ROAMING"
		);
	}
	jint DisconnectCause::DIALED_MMI()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIALED_MMI"
		);
	}
	jint DisconnectCause::DIAL_LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_LOW_BATTERY"
		);
	}
	jint DisconnectCause::DIAL_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_DIAL"
		);
	}
	jint DisconnectCause::DIAL_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	jint DisconnectCause::DIAL_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_SS"
		);
	}
	jint DisconnectCause::DIAL_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_USSD"
		);
	}
	jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_DIAL"
		);
	}
	jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_SS"
		);
	}
	jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_USSD"
		);
	}
	jint DisconnectCause::EMERGENCY_CALL_OVER_WFC_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"EMERGENCY_CALL_OVER_WFC_NOT_AVAILABLE"
		);
	}
	jint DisconnectCause::EMERGENCY_PERM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"EMERGENCY_PERM_FAILURE"
		);
	}
	jint DisconnectCause::EMERGENCY_TEMP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"EMERGENCY_TEMP_FAILURE"
		);
	}
	jint DisconnectCause::ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ERROR_UNSPECIFIED"
		);
	}
	jint DisconnectCause::FDN_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"FDN_BLOCKED"
		);
	}
	jint DisconnectCause::ICC_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ICC_ERROR"
		);
	}
	jint DisconnectCause::IMEI_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMEI_NOT_ACCEPTED"
		);
	}
	jint DisconnectCause::IMS_ACCESS_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMS_ACCESS_BLOCKED"
		);
	}
	jint DisconnectCause::IMS_MERGED_SUCCESSFULLY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMS_MERGED_SUCCESSFULLY"
		);
	}
	jint DisconnectCause::IMS_SIP_ALTERNATE_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMS_SIP_ALTERNATE_EMERGENCY_CALL"
		);
	}
	jint DisconnectCause::INCOMING_AUTO_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INCOMING_AUTO_REJECTED"
		);
	}
	jint DisconnectCause::INCOMING_MISSED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INCOMING_MISSED"
		);
	}
	jint DisconnectCause::INCOMING_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INCOMING_REJECTED"
		);
	}
	jint DisconnectCause::INVALID_CREDENTIALS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INVALID_CREDENTIALS"
		);
	}
	jint DisconnectCause::INVALID_NUMBER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INVALID_NUMBER"
		);
	}
	jint DisconnectCause::LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LIMIT_EXCEEDED"
		);
	}
	jint DisconnectCause::LOCAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LOCAL"
		);
	}
	jint DisconnectCause::LOST_SIGNAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LOST_SIGNAL"
		);
	}
	jint DisconnectCause::LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LOW_BATTERY"
		);
	}
	jint DisconnectCause::MAXIMUM_NUMBER_OF_CALLS_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"MAXIMUM_NUMBER_OF_CALLS_REACHED"
		);
	}
	jint DisconnectCause::MEDIA_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"MEDIA_TIMEOUT"
		);
	}
	jint DisconnectCause::MMI()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"MMI"
		);
	}
	jint DisconnectCause::NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NORMAL"
		);
	}
	jint DisconnectCause::NORMAL_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NORMAL_UNSPECIFIED"
		);
	}
	jint DisconnectCause::NOT_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NOT_DISCONNECTED"
		);
	}
	jint DisconnectCause::NOT_VALID()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NOT_VALID"
		);
	}
	jint DisconnectCause::NO_PHONE_NUMBER_SUPPLIED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NO_PHONE_NUMBER_SUPPLIED"
		);
	}
	jint DisconnectCause::NUMBER_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NUMBER_UNREACHABLE"
		);
	}
	jint DisconnectCause::OTASP_PROVISIONING_IN_PROCESS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OTASP_PROVISIONING_IN_PROCESS"
		);
	}
	jint DisconnectCause::OUTGOING_CANCELED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUTGOING_CANCELED"
		);
	}
	jint DisconnectCause::OUTGOING_EMERGENCY_CALL_PLACED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUTGOING_EMERGENCY_CALL_PLACED"
		);
	}
	jint DisconnectCause::OUTGOING_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUTGOING_FAILURE"
		);
	}
	jint DisconnectCause::OUT_OF_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUT_OF_NETWORK"
		);
	}
	jint DisconnectCause::OUT_OF_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUT_OF_SERVICE"
		);
	}
	jint DisconnectCause::POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"POWER_OFF"
		);
	}
	jint DisconnectCause::SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"SERVER_ERROR"
		);
	}
	jint DisconnectCause::SERVER_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"SERVER_UNREACHABLE"
		);
	}
	jint DisconnectCause::TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"TIMED_OUT"
		);
	}
	jint DisconnectCause::TOO_MANY_ONGOING_CALLS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"TOO_MANY_ONGOING_CALLS"
		);
	}
	jint DisconnectCause::UNOBTAINABLE_NUMBER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"UNOBTAINABLE_NUMBER"
		);
	}
	jint DisconnectCause::VIDEO_CALL_NOT_ALLOWED_WHILE_TTY_ENABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"VIDEO_CALL_NOT_ALLOWED_WHILE_TTY_ENABLED"
		);
	}
	jint DisconnectCause::VOICEMAIL_NUMBER_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"VOICEMAIL_NUMBER_MISSING"
		);
	}
	jint DisconnectCause::WFC_SERVICE_NOT_AVAILABLE_IN_THIS_LOCATION()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"WFC_SERVICE_NOT_AVAILABLE_IN_THIS_LOCATION"
		);
	}
	jint DisconnectCause::WIFI_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"WIFI_LOST"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

