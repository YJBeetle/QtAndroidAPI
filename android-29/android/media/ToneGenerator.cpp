#include "./ToneGenerator.hpp"

namespace android::media
{
	// Fields
	jint ToneGenerator::MAX_VOLUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"MAX_VOLUME"
		);
	}
	jint ToneGenerator::MIN_VOLUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"MIN_VOLUME"
		);
	}
	jint ToneGenerator::TONE_CDMA_ABBR_ALERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ABBR_ALERT"
		);
	}
	jint ToneGenerator::TONE_CDMA_ABBR_INTERCEPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ABBR_INTERCEPT"
		);
	}
	jint ToneGenerator::TONE_CDMA_ABBR_REORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ABBR_REORDER"
		);
	}
	jint ToneGenerator::TONE_CDMA_ALERT_AUTOREDIAL_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_AUTOREDIAL_LITE"
		);
	}
	jint ToneGenerator::TONE_CDMA_ALERT_CALL_GUARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_CALL_GUARD"
		);
	}
	jint ToneGenerator::TONE_CDMA_ALERT_INCALL_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_INCALL_LITE"
		);
	}
	jint ToneGenerator::TONE_CDMA_ALERT_NETWORK_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ALERT_NETWORK_LITE"
		);
	}
	jint ToneGenerator::TONE_CDMA_ANSWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ANSWER"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALLDROP_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALLDROP_LITE"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_INTERGROUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_INTERGROUP"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_NORMAL"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT3"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT5"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT6"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PAT7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PAT7"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_PING_RING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_PING_RING"
		);
	}
	jint ToneGenerator::TONE_CDMA_CALL_SIGNAL_ISDN_SP_PRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CALL_SIGNAL_ISDN_SP_PRI"
		);
	}
	jint ToneGenerator::TONE_CDMA_CONFIRM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_CONFIRM"
		);
	}
	jint ToneGenerator::TONE_CDMA_DIAL_TONE_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_DIAL_TONE_LITE"
		);
	}
	jint ToneGenerator::TONE_CDMA_EMERGENCY_RINGBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_EMERGENCY_RINGBACK"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_L()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_L"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_PBX_L()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_L"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_PBX_SLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_SLS"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_PBX_SS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_SS"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_PBX_SSL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_SSL"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_PBX_S_X4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_PBX_S_X4"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_SLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SLS"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_SS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SS"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_SSL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SSL"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_SS_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_SS_2"
		);
	}
	jint ToneGenerator::TONE_CDMA_HIGH_S_X4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_HIGH_S_X4"
		);
	}
	jint ToneGenerator::TONE_CDMA_INTERCEPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_INTERCEPT"
		);
	}
	jint ToneGenerator::TONE_CDMA_KEYPAD_VOLUME_KEY_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_KEYPAD_VOLUME_KEY_LITE"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_L()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_L"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_PBX_L()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_L"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_PBX_SLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_SLS"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_PBX_SS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_SS"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_PBX_SSL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_SSL"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_PBX_S_X4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_PBX_S_X4"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_SLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SLS"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_SS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SS"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_SSL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SSL"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_SS_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_SS_2"
		);
	}
	jint ToneGenerator::TONE_CDMA_LOW_S_X4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_LOW_S_X4"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_L()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_L"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_PBX_L()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_L"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_PBX_SLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_SLS"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_PBX_SS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_SS"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_PBX_SSL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_SSL"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_PBX_S_X4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_PBX_S_X4"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_SLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SLS"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_SS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SS"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_SSL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SSL"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_SS_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_SS_2"
		);
	}
	jint ToneGenerator::TONE_CDMA_MED_S_X4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_MED_S_X4"
		);
	}
	jint ToneGenerator::TONE_CDMA_NETWORK_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_BUSY"
		);
	}
	jint ToneGenerator::TONE_CDMA_NETWORK_BUSY_ONE_SHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_BUSY_ONE_SHOT"
		);
	}
	jint ToneGenerator::TONE_CDMA_NETWORK_CALLWAITING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_CALLWAITING"
		);
	}
	jint ToneGenerator::TONE_CDMA_NETWORK_USA_RINGBACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_NETWORK_USA_RINGBACK"
		);
	}
	jint ToneGenerator::TONE_CDMA_ONE_MIN_BEEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_ONE_MIN_BEEP"
		);
	}
	jint ToneGenerator::TONE_CDMA_PIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_PIP"
		);
	}
	jint ToneGenerator::TONE_CDMA_PRESSHOLDKEY_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_PRESSHOLDKEY_LITE"
		);
	}
	jint ToneGenerator::TONE_CDMA_REORDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_REORDER"
		);
	}
	jint ToneGenerator::TONE_CDMA_SIGNAL_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_SIGNAL_OFF"
		);
	}
	jint ToneGenerator::TONE_CDMA_SOFT_ERROR_LITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_CDMA_SOFT_ERROR_LITE"
		);
	}
	jint ToneGenerator::TONE_DTMF_0()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_0"
		);
	}
	jint ToneGenerator::TONE_DTMF_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_1"
		);
	}
	jint ToneGenerator::TONE_DTMF_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_2"
		);
	}
	jint ToneGenerator::TONE_DTMF_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_3"
		);
	}
	jint ToneGenerator::TONE_DTMF_4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_4"
		);
	}
	jint ToneGenerator::TONE_DTMF_5()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_5"
		);
	}
	jint ToneGenerator::TONE_DTMF_6()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_6"
		);
	}
	jint ToneGenerator::TONE_DTMF_7()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_7"
		);
	}
	jint ToneGenerator::TONE_DTMF_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_8"
		);
	}
	jint ToneGenerator::TONE_DTMF_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_9"
		);
	}
	jint ToneGenerator::TONE_DTMF_A()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_A"
		);
	}
	jint ToneGenerator::TONE_DTMF_B()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_B"
		);
	}
	jint ToneGenerator::TONE_DTMF_C()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_C"
		);
	}
	jint ToneGenerator::TONE_DTMF_D()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_D"
		);
	}
	jint ToneGenerator::TONE_DTMF_P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_P"
		);
	}
	jint ToneGenerator::TONE_DTMF_S()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_DTMF_S"
		);
	}
	jint ToneGenerator::TONE_PROP_ACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_ACK"
		);
	}
	jint ToneGenerator::TONE_PROP_BEEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_BEEP"
		);
	}
	jint ToneGenerator::TONE_PROP_BEEP2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_BEEP2"
		);
	}
	jint ToneGenerator::TONE_PROP_NACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_NACK"
		);
	}
	jint ToneGenerator::TONE_PROP_PROMPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_PROP_PROMPT"
		);
	}
	jint ToneGenerator::TONE_SUP_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_BUSY"
		);
	}
	jint ToneGenerator::TONE_SUP_CALL_WAITING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CALL_WAITING"
		);
	}
	jint ToneGenerator::TONE_SUP_CONFIRM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CONFIRM"
		);
	}
	jint ToneGenerator::TONE_SUP_CONGESTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CONGESTION"
		);
	}
	jint ToneGenerator::TONE_SUP_CONGESTION_ABBREV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_CONGESTION_ABBREV"
		);
	}
	jint ToneGenerator::TONE_SUP_DIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_DIAL"
		);
	}
	jint ToneGenerator::TONE_SUP_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_ERROR"
		);
	}
	jint ToneGenerator::TONE_SUP_INTERCEPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_INTERCEPT"
		);
	}
	jint ToneGenerator::TONE_SUP_INTERCEPT_ABBREV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_INTERCEPT_ABBREV"
		);
	}
	jint ToneGenerator::TONE_SUP_PIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_PIP"
		);
	}
	jint ToneGenerator::TONE_SUP_RADIO_ACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_RADIO_ACK"
		);
	}
	jint ToneGenerator::TONE_SUP_RADIO_NOTAVAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_RADIO_NOTAVAIL"
		);
	}
	jint ToneGenerator::TONE_SUP_RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ToneGenerator",
			"TONE_SUP_RINGTONE"
		);
	}
	
	// QAndroidJniObject forward
	ToneGenerator::ToneGenerator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ToneGenerator::ToneGenerator(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.media.ToneGenerator",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint ToneGenerator::getAudioSessionId()
	{
		return callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	void ToneGenerator::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jboolean ToneGenerator::startTone(jint arg0)
	{
		return callMethod<jboolean>(
			"startTone",
			"(I)Z",
			arg0
		);
	}
	jboolean ToneGenerator::startTone(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"startTone",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void ToneGenerator::stopTone()
	{
		callMethod<void>(
			"stopTone",
			"()V"
		);
	}
} // namespace android::media

