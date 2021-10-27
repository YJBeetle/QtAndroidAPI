#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class ToneGenerator : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAX_VOLUME();
		static jint MIN_VOLUME();
		static jint TONE_CDMA_ABBR_ALERT();
		static jint TONE_CDMA_ABBR_INTERCEPT();
		static jint TONE_CDMA_ABBR_REORDER();
		static jint TONE_CDMA_ALERT_AUTOREDIAL_LITE();
		static jint TONE_CDMA_ALERT_CALL_GUARD();
		static jint TONE_CDMA_ALERT_INCALL_LITE();
		static jint TONE_CDMA_ALERT_NETWORK_LITE();
		static jint TONE_CDMA_ANSWER();
		static jint TONE_CDMA_CALLDROP_LITE();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_INTERGROUP();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_NORMAL();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_PAT3();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_PAT5();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_PAT6();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_PAT7();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_PING_RING();
		static jint TONE_CDMA_CALL_SIGNAL_ISDN_SP_PRI();
		static jint TONE_CDMA_CONFIRM();
		static jint TONE_CDMA_DIAL_TONE_LITE();
		static jint TONE_CDMA_EMERGENCY_RINGBACK();
		static jint TONE_CDMA_HIGH_L();
		static jint TONE_CDMA_HIGH_PBX_L();
		static jint TONE_CDMA_HIGH_PBX_SLS();
		static jint TONE_CDMA_HIGH_PBX_SS();
		static jint TONE_CDMA_HIGH_PBX_SSL();
		static jint TONE_CDMA_HIGH_PBX_S_X4();
		static jint TONE_CDMA_HIGH_SLS();
		static jint TONE_CDMA_HIGH_SS();
		static jint TONE_CDMA_HIGH_SSL();
		static jint TONE_CDMA_HIGH_SS_2();
		static jint TONE_CDMA_HIGH_S_X4();
		static jint TONE_CDMA_INTERCEPT();
		static jint TONE_CDMA_KEYPAD_VOLUME_KEY_LITE();
		static jint TONE_CDMA_LOW_L();
		static jint TONE_CDMA_LOW_PBX_L();
		static jint TONE_CDMA_LOW_PBX_SLS();
		static jint TONE_CDMA_LOW_PBX_SS();
		static jint TONE_CDMA_LOW_PBX_SSL();
		static jint TONE_CDMA_LOW_PBX_S_X4();
		static jint TONE_CDMA_LOW_SLS();
		static jint TONE_CDMA_LOW_SS();
		static jint TONE_CDMA_LOW_SSL();
		static jint TONE_CDMA_LOW_SS_2();
		static jint TONE_CDMA_LOW_S_X4();
		static jint TONE_CDMA_MED_L();
		static jint TONE_CDMA_MED_PBX_L();
		static jint TONE_CDMA_MED_PBX_SLS();
		static jint TONE_CDMA_MED_PBX_SS();
		static jint TONE_CDMA_MED_PBX_SSL();
		static jint TONE_CDMA_MED_PBX_S_X4();
		static jint TONE_CDMA_MED_SLS();
		static jint TONE_CDMA_MED_SS();
		static jint TONE_CDMA_MED_SSL();
		static jint TONE_CDMA_MED_SS_2();
		static jint TONE_CDMA_MED_S_X4();
		static jint TONE_CDMA_NETWORK_BUSY();
		static jint TONE_CDMA_NETWORK_BUSY_ONE_SHOT();
		static jint TONE_CDMA_NETWORK_CALLWAITING();
		static jint TONE_CDMA_NETWORK_USA_RINGBACK();
		static jint TONE_CDMA_ONE_MIN_BEEP();
		static jint TONE_CDMA_PIP();
		static jint TONE_CDMA_PRESSHOLDKEY_LITE();
		static jint TONE_CDMA_REORDER();
		static jint TONE_CDMA_SIGNAL_OFF();
		static jint TONE_CDMA_SOFT_ERROR_LITE();
		static jint TONE_DTMF_0();
		static jint TONE_DTMF_1();
		static jint TONE_DTMF_2();
		static jint TONE_DTMF_3();
		static jint TONE_DTMF_4();
		static jint TONE_DTMF_5();
		static jint TONE_DTMF_6();
		static jint TONE_DTMF_7();
		static jint TONE_DTMF_8();
		static jint TONE_DTMF_9();
		static jint TONE_DTMF_A();
		static jint TONE_DTMF_B();
		static jint TONE_DTMF_C();
		static jint TONE_DTMF_D();
		static jint TONE_DTMF_P();
		static jint TONE_DTMF_S();
		static jint TONE_PROP_ACK();
		static jint TONE_PROP_BEEP();
		static jint TONE_PROP_BEEP2();
		static jint TONE_PROP_NACK();
		static jint TONE_PROP_PROMPT();
		static jint TONE_SUP_BUSY();
		static jint TONE_SUP_CALL_WAITING();
		static jint TONE_SUP_CONFIRM();
		static jint TONE_SUP_CONGESTION();
		static jint TONE_SUP_CONGESTION_ABBREV();
		static jint TONE_SUP_DIAL();
		static jint TONE_SUP_ERROR();
		static jint TONE_SUP_INTERCEPT();
		static jint TONE_SUP_INTERCEPT_ABBREV();
		static jint TONE_SUP_PIP();
		static jint TONE_SUP_RADIO_ACK();
		static jint TONE_SUP_RADIO_NOTAVAIL();
		static jint TONE_SUP_RINGTONE();
		
		ToneGenerator(QAndroidJniObject obj);
		// Constructors
		ToneGenerator(jint &arg0, jint &arg1);
		ToneGenerator() = default;
		
		// Methods
		jint getAudioSessionId();
		void release();
		jboolean startTone(jint arg0);
		jboolean startTone(jint arg0, jint arg1);
		void stopTone();
	};
} // namespace android::media

