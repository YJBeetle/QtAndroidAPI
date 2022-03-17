#pragma once

#include "./ToneGenerator.def.hpp"

namespace android::media
{
	// Fields
	inline jint ToneGenerator::MAX_VOLUME()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"MAX_VOLUME"
		);
	}
	inline jint ToneGenerator::MIN_VOLUME()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"MIN_VOLUME"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ABBR_ALERT()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ABBR_ALERT"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ABBR_INTERCEPT()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ABBR_INTERCEPT"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ABBR_REORDER()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ABBR_REORDER"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ALERT_AUTOREDIAL_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_AUTOREDIAL_LITE"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ALERT_CALL_GUARD()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_CALL_GUARD"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ALERT_INCALL_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_INCALL_LITE"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ALERT_NETWORK_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_NETWORK_LITE"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ANSWER()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ANSWER"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALLDROP_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALLDROP_LITE"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_INTERGROUP()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_INTERGROUP"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_NORMAL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_NORMAL"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT3()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT3"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT5()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT5"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT6()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT6"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT7()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT7"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PING_RING()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PING_RING"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_SP_PRI()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_SP_PRI"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_CONFIRM()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CONFIRM"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_DIAL_TONE_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_DIAL_TONE_LITE"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_EMERGENCY_RINGBACK()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_EMERGENCY_RINGBACK"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_L()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_L"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_PBX_L()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_L"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_PBX_SLS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_SLS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_PBX_SS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_SS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_PBX_SSL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_SSL"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_PBX_S_X4()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_S_X4"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_SLS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SLS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_SS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_SSL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SSL"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_SS_2()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SS_2"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_HIGH_S_X4()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_S_X4"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_INTERCEPT()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_INTERCEPT"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_KEYPAD_VOLUME_KEY_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_KEYPAD_VOLUME_KEY_LITE"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_L()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_L"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_PBX_L()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_L"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_PBX_SLS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_SLS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_PBX_SS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_SS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_PBX_SSL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_SSL"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_PBX_S_X4()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_S_X4"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_SLS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SLS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_SS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_SSL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SSL"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_SS_2()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SS_2"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_LOW_S_X4()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_S_X4"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_L()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_L"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_PBX_L()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_L"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_PBX_SLS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_SLS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_PBX_SS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_SS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_PBX_SSL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_SSL"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_PBX_S_X4()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_S_X4"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_SLS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SLS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_SS()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SS"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_SSL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SSL"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_SS_2()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SS_2"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_MED_S_X4()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_S_X4"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_NETWORK_BUSY()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_BUSY"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_NETWORK_BUSY_ONE_SHOT()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_BUSY_ONE_SHOT"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_NETWORK_CALLWAITING()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_CALLWAITING"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_NETWORK_USA_RINGBACK()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_USA_RINGBACK"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_ONE_MIN_BEEP()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ONE_MIN_BEEP"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_PIP()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_PIP"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_PRESSHOLDKEY_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_PRESSHOLDKEY_LITE"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_REORDER()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_REORDER"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_SIGNAL_OFF()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_SIGNAL_OFF"
		);
	}
	inline jint ToneGenerator::TONE_CDMA_SOFT_ERROR_LITE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_SOFT_ERROR_LITE"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_0()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_0"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_1()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_1"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_2()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_2"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_3()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_3"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_4()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_4"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_5()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_5"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_6()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_6"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_7()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_7"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_8()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_8"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_9()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_9"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_A()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_A"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_B()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_B"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_C()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_C"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_D()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_D"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_P()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_P"
		);
	}
	inline jint ToneGenerator::TONE_DTMF_S()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_S"
		);
	}
	inline jint ToneGenerator::TONE_PROP_ACK()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_ACK"
		);
	}
	inline jint ToneGenerator::TONE_PROP_BEEP()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_BEEP"
		);
	}
	inline jint ToneGenerator::TONE_PROP_BEEP2()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_BEEP2"
		);
	}
	inline jint ToneGenerator::TONE_PROP_NACK()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_NACK"
		);
	}
	inline jint ToneGenerator::TONE_PROP_PROMPT()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_PROMPT"
		);
	}
	inline jint ToneGenerator::TONE_SUP_BUSY()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_BUSY"
		);
	}
	inline jint ToneGenerator::TONE_SUP_CALL_WAITING()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CALL_WAITING"
		);
	}
	inline jint ToneGenerator::TONE_SUP_CONFIRM()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CONFIRM"
		);
	}
	inline jint ToneGenerator::TONE_SUP_CONGESTION()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CONGESTION"
		);
	}
	inline jint ToneGenerator::TONE_SUP_CONGESTION_ABBREV()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CONGESTION_ABBREV"
		);
	}
	inline jint ToneGenerator::TONE_SUP_DIAL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_DIAL"
		);
	}
	inline jint ToneGenerator::TONE_SUP_ERROR()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_ERROR"
		);
	}
	inline jint ToneGenerator::TONE_SUP_INTERCEPT()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_INTERCEPT"
		);
	}
	inline jint ToneGenerator::TONE_SUP_INTERCEPT_ABBREV()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_INTERCEPT_ABBREV"
		);
	}
	inline jint ToneGenerator::TONE_SUP_PIP()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_PIP"
		);
	}
	inline jint ToneGenerator::TONE_SUP_RADIO_ACK()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_RADIO_ACK"
		);
	}
	inline jint ToneGenerator::TONE_SUP_RADIO_NOTAVAIL()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_RADIO_NOTAVAIL"
		);
	}
	inline jint ToneGenerator::TONE_SUP_RINGTONE()
	{
		return getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_RINGTONE"
		);
	}
	
	// Constructors
	inline ToneGenerator::ToneGenerator(jint arg0, jint arg1)
		: JObject(
			"android.media.ToneGenerator",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint ToneGenerator::getAudioSessionId() const
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	inline void ToneGenerator::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline jboolean ToneGenerator::startTone(jint arg0) const
	{
		return callMethod<jboolean>(
			"startTone",
			"(I)Z",
			arg0
		);
	}
	inline jboolean ToneGenerator::startTone(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"startTone",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void ToneGenerator::stopTone() const
	{
		callMethod<void>(
			"stopTone",
			"()V"
		);
	}
} // namespace android::media

// Base class headers

