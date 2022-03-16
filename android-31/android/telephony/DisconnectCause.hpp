#pragma once

#include "./DisconnectCause.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint DisconnectCause::ALREADY_DIALING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ALREADY_DIALING"
		);
	}
	inline jint DisconnectCause::ANSWERED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ANSWERED_ELSEWHERE"
		);
	}
	inline jint DisconnectCause::BUSY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"BUSY"
		);
	}
	inline jint DisconnectCause::CALLING_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CALLING_DISABLED"
		);
	}
	inline jint DisconnectCause::CALL_BARRED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CALL_BARRED"
		);
	}
	inline jint DisconnectCause::CALL_PULLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CALL_PULLED"
		);
	}
	inline jint DisconnectCause::CANT_CALL_WHILE_RINGING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CANT_CALL_WHILE_RINGING"
		);
	}
	inline jint DisconnectCause::CDMA_ACCESS_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_ACCESS_BLOCKED"
		);
	}
	inline jint DisconnectCause::CDMA_ACCESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_ACCESS_FAILURE"
		);
	}
	inline jint DisconnectCause::CDMA_ALREADY_ACTIVATED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_ALREADY_ACTIVATED"
		);
	}
	inline jint DisconnectCause::CDMA_DROP()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_DROP"
		);
	}
	inline jint DisconnectCause::CDMA_INTERCEPT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_INTERCEPT"
		);
	}
	inline jint DisconnectCause::CDMA_LOCKED_UNTIL_POWER_CYCLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_LOCKED_UNTIL_POWER_CYCLE"
		);
	}
	inline jint DisconnectCause::CDMA_NOT_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_NOT_EMERGENCY"
		);
	}
	inline jint DisconnectCause::CDMA_PREEMPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_PREEMPTED"
		);
	}
	inline jint DisconnectCause::CDMA_REORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_REORDER"
		);
	}
	inline jint DisconnectCause::CDMA_RETRY_ORDER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_RETRY_ORDER"
		);
	}
	inline jint DisconnectCause::CDMA_SO_REJECT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CDMA_SO_REJECT"
		);
	}
	inline jint DisconnectCause::CONGESTION()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CONGESTION"
		);
	}
	inline jint DisconnectCause::CS_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CS_RESTRICTED"
		);
	}
	inline jint DisconnectCause::CS_RESTRICTED_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CS_RESTRICTED_EMERGENCY"
		);
	}
	inline jint DisconnectCause::CS_RESTRICTED_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"CS_RESTRICTED_NORMAL"
		);
	}
	inline jint DisconnectCause::DATA_DISABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DATA_DISABLED"
		);
	}
	inline jint DisconnectCause::DATA_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DATA_LIMIT_REACHED"
		);
	}
	inline jint DisconnectCause::DIALED_CALL_FORWARDING_WHILE_ROAMING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIALED_CALL_FORWARDING_WHILE_ROAMING"
		);
	}
	inline jint DisconnectCause::DIALED_MMI()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIALED_MMI"
		);
	}
	inline jint DisconnectCause::DIAL_LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_LOW_BATTERY"
		);
	}
	inline jint DisconnectCause::DIAL_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_DIAL"
		);
	}
	inline jint DisconnectCause::DIAL_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	inline jint DisconnectCause::DIAL_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_SS"
		);
	}
	inline jint DisconnectCause::DIAL_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_MODIFIED_TO_USSD"
		);
	}
	inline jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_DIAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_DIAL"
		);
	}
	inline jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_DIAL_VIDEO"
		);
	}
	inline jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_SS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_SS"
		);
	}
	inline jint DisconnectCause::DIAL_VIDEO_MODIFIED_TO_USSD()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"DIAL_VIDEO_MODIFIED_TO_USSD"
		);
	}
	inline jint DisconnectCause::EMERGENCY_CALL_OVER_WFC_NOT_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"EMERGENCY_CALL_OVER_WFC_NOT_AVAILABLE"
		);
	}
	inline jint DisconnectCause::EMERGENCY_PERM_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"EMERGENCY_PERM_FAILURE"
		);
	}
	inline jint DisconnectCause::EMERGENCY_TEMP_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"EMERGENCY_TEMP_FAILURE"
		);
	}
	inline jint DisconnectCause::ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ERROR_UNSPECIFIED"
		);
	}
	inline jint DisconnectCause::FDN_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"FDN_BLOCKED"
		);
	}
	inline jint DisconnectCause::ICC_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"ICC_ERROR"
		);
	}
	inline jint DisconnectCause::IMEI_NOT_ACCEPTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMEI_NOT_ACCEPTED"
		);
	}
	inline jint DisconnectCause::IMS_ACCESS_BLOCKED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMS_ACCESS_BLOCKED"
		);
	}
	inline jint DisconnectCause::IMS_MERGED_SUCCESSFULLY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMS_MERGED_SUCCESSFULLY"
		);
	}
	inline jint DisconnectCause::IMS_SIP_ALTERNATE_EMERGENCY_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"IMS_SIP_ALTERNATE_EMERGENCY_CALL"
		);
	}
	inline jint DisconnectCause::INCOMING_AUTO_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INCOMING_AUTO_REJECTED"
		);
	}
	inline jint DisconnectCause::INCOMING_MISSED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INCOMING_MISSED"
		);
	}
	inline jint DisconnectCause::INCOMING_REJECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INCOMING_REJECTED"
		);
	}
	inline jint DisconnectCause::INVALID_CREDENTIALS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INVALID_CREDENTIALS"
		);
	}
	inline jint DisconnectCause::INVALID_NUMBER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"INVALID_NUMBER"
		);
	}
	inline jint DisconnectCause::LIMIT_EXCEEDED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LIMIT_EXCEEDED"
		);
	}
	inline jint DisconnectCause::LOCAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LOCAL"
		);
	}
	inline jint DisconnectCause::LOST_SIGNAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LOST_SIGNAL"
		);
	}
	inline jint DisconnectCause::LOW_BATTERY()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"LOW_BATTERY"
		);
	}
	inline jint DisconnectCause::MAXIMUM_NUMBER_OF_CALLS_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"MAXIMUM_NUMBER_OF_CALLS_REACHED"
		);
	}
	inline jint DisconnectCause::MEDIA_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"MEDIA_TIMEOUT"
		);
	}
	inline jint DisconnectCause::MMI()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"MMI"
		);
	}
	inline jint DisconnectCause::NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NORMAL"
		);
	}
	inline jint DisconnectCause::NORMAL_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NORMAL_UNSPECIFIED"
		);
	}
	inline jint DisconnectCause::NOT_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NOT_DISCONNECTED"
		);
	}
	inline jint DisconnectCause::NOT_VALID()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NOT_VALID"
		);
	}
	inline jint DisconnectCause::NO_PHONE_NUMBER_SUPPLIED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NO_PHONE_NUMBER_SUPPLIED"
		);
	}
	inline jint DisconnectCause::NUMBER_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"NUMBER_UNREACHABLE"
		);
	}
	inline jint DisconnectCause::OTASP_PROVISIONING_IN_PROCESS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OTASP_PROVISIONING_IN_PROCESS"
		);
	}
	inline jint DisconnectCause::OUTGOING_CANCELED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUTGOING_CANCELED"
		);
	}
	inline jint DisconnectCause::OUTGOING_EMERGENCY_CALL_PLACED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUTGOING_EMERGENCY_CALL_PLACED"
		);
	}
	inline jint DisconnectCause::OUTGOING_FAILURE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUTGOING_FAILURE"
		);
	}
	inline jint DisconnectCause::OUT_OF_NETWORK()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUT_OF_NETWORK"
		);
	}
	inline jint DisconnectCause::OUT_OF_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"OUT_OF_SERVICE"
		);
	}
	inline jint DisconnectCause::POWER_OFF()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"POWER_OFF"
		);
	}
	inline jint DisconnectCause::SERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"SERVER_ERROR"
		);
	}
	inline jint DisconnectCause::SERVER_UNREACHABLE()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"SERVER_UNREACHABLE"
		);
	}
	inline jint DisconnectCause::TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"TIMED_OUT"
		);
	}
	inline jint DisconnectCause::TOO_MANY_ONGOING_CALLS()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"TOO_MANY_ONGOING_CALLS"
		);
	}
	inline jint DisconnectCause::UNOBTAINABLE_NUMBER()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"UNOBTAINABLE_NUMBER"
		);
	}
	inline jint DisconnectCause::VIDEO_CALL_NOT_ALLOWED_WHILE_TTY_ENABLED()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"VIDEO_CALL_NOT_ALLOWED_WHILE_TTY_ENABLED"
		);
	}
	inline jint DisconnectCause::VOICEMAIL_NUMBER_MISSING()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"VOICEMAIL_NUMBER_MISSING"
		);
	}
	inline jint DisconnectCause::WFC_SERVICE_NOT_AVAILABLE_IN_THIS_LOCATION()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"WFC_SERVICE_NOT_AVAILABLE_IN_THIS_LOCATION"
		);
	}
	inline jint DisconnectCause::WIFI_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.DisconnectCause",
			"WIFI_LOST"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers

