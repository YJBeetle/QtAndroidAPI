#pragma once

#include "./Conferenceable.hpp"

class JArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class CallAudioState;
}
namespace android::telecom
{
	class Conference;
}
namespace android::telecom
{
	class Connection_RttTextStream;
}
namespace android::telecom
{
	class Connection_VideoProvider;
}
namespace android::telecom
{
	class DisconnectCause;
}
namespace android::telecom
{
	class StatusHints;
}
class JString;

namespace android::telecom
{
	class Connection : public android::telecom::Conferenceable
	{
	public:
		// Fields
		static jint AUDIO_CODEC_AMR();
		static jint AUDIO_CODEC_AMR_WB();
		static jint AUDIO_CODEC_EVRC();
		static jint AUDIO_CODEC_EVRC_B();
		static jint AUDIO_CODEC_EVRC_NW();
		static jint AUDIO_CODEC_EVRC_WB();
		static jint AUDIO_CODEC_EVS_FB();
		static jint AUDIO_CODEC_EVS_NB();
		static jint AUDIO_CODEC_EVS_SWB();
		static jint AUDIO_CODEC_EVS_WB();
		static jint AUDIO_CODEC_G711A();
		static jint AUDIO_CODEC_G711AB();
		static jint AUDIO_CODEC_G711U();
		static jint AUDIO_CODEC_G722();
		static jint AUDIO_CODEC_G723();
		static jint AUDIO_CODEC_G729();
		static jint AUDIO_CODEC_GSM_EFR();
		static jint AUDIO_CODEC_GSM_FR();
		static jint AUDIO_CODEC_GSM_HR();
		static jint AUDIO_CODEC_NONE();
		static jint AUDIO_CODEC_QCELP13K();
		static jint CAPABILITY_ADD_PARTICIPANT();
		static jint CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO();
		static jint CAPABILITY_CAN_PAUSE_VIDEO();
		static jint CAPABILITY_CAN_PULL_CALL();
		static jint CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION();
		static jint CAPABILITY_CAN_UPGRADE_TO_VIDEO();
		static jint CAPABILITY_DISCONNECT_FROM_CONFERENCE();
		static jint CAPABILITY_HOLD();
		static jint CAPABILITY_MANAGE_CONFERENCE();
		static jint CAPABILITY_MERGE_CONFERENCE();
		static jint CAPABILITY_MUTE();
		static jint CAPABILITY_RESPOND_VIA_TEXT();
		static jint CAPABILITY_SEPARATE_FROM_CONFERENCE();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_RX();
		static jint CAPABILITY_SUPPORTS_VT_LOCAL_TX();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_RX();
		static jint CAPABILITY_SUPPORTS_VT_REMOTE_TX();
		static jint CAPABILITY_SUPPORT_DEFLECT();
		static jint CAPABILITY_SUPPORT_HOLD();
		static jint CAPABILITY_SWAP_CONFERENCE();
		static JString EVENT_CALL_HOLD_FAILED();
		static JString EVENT_CALL_MERGE_FAILED();
		static JString EVENT_CALL_PULL_FAILED();
		static JString EVENT_CALL_REMOTELY_HELD();
		static JString EVENT_CALL_REMOTELY_UNHELD();
		static JString EVENT_CALL_SWITCH_FAILED();
		static JString EVENT_MERGE_COMPLETE();
		static JString EVENT_MERGE_START();
		static JString EVENT_ON_HOLD_TONE_END();
		static JString EVENT_ON_HOLD_TONE_START();
		static JString EVENT_RTT_AUDIO_INDICATION_CHANGED();
		static JString EXTRA_ANSWERING_DROPS_FG_CALL();
		static JString EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME();
		static JString EXTRA_AUDIO_CODEC();
		static JString EXTRA_AUDIO_CODEC_BANDWIDTH_KHZ();
		static JString EXTRA_AUDIO_CODEC_BITRATE_KBPS();
		static JString EXTRA_CALL_SUBJECT();
		static JString EXTRA_CHILD_ADDRESS();
		static JString EXTRA_IS_RTT_AUDIO_PRESENT();
		static JString EXTRA_LAST_FORWARDED_NUMBER();
		static JString EXTRA_SIP_INVITE();
		static jint PROPERTY_ASSISTED_DIALING();
		static jint PROPERTY_CROSS_SIM();
		static jint PROPERTY_HAS_CDMA_VOICE_PRIVACY();
		static jint PROPERTY_HIGH_DEF_AUDIO();
		static jint PROPERTY_IS_ADHOC_CONFERENCE();
		static jint PROPERTY_IS_EXTERNAL_CALL();
		static jint PROPERTY_IS_RTT();
		static jint PROPERTY_NETWORK_IDENTIFIED_EMERGENCY_CALL();
		static jint PROPERTY_SELF_MANAGED();
		static jint PROPERTY_WIFI();
		static jint STATE_ACTIVE();
		static jint STATE_DIALING();
		static jint STATE_DISCONNECTED();
		static jint STATE_HOLDING();
		static jint STATE_INITIALIZING();
		static jint STATE_NEW();
		static jint STATE_PULLING_CALL();
		static jint STATE_RINGING();
		static jint VERIFICATION_STATUS_FAILED();
		static jint VERIFICATION_STATUS_NOT_VERIFIED();
		static jint VERIFICATION_STATUS_PASSED();
		
		// QJniObject forward
		template<typename ...Ts> explicit Connection(const char *className, const char *sig, Ts...agv) : android::telecom::Conferenceable(className, sig, std::forward<Ts>(agv)...) {}
		Connection(QJniObject obj);
		
		// Constructors
		Connection();
		
		// Methods
		static JString capabilitiesToString(jint arg0);
		static android::telecom::Connection createCanceledConnection();
		static android::telecom::Connection createFailedConnection(android::telecom::DisconnectCause arg0);
		static JString propertiesToString(jint arg0);
		static JString stateToString(jint arg0);
		void destroy();
		android::net::Uri getAddress();
		jint getAddressPresentation();
		jboolean getAudioModeIsVoip();
		android::telecom::CallAudioState getCallAudioState();
		JString getCallerDisplayName();
		jint getCallerDisplayNamePresentation();
		jint getCallerNumberVerificationStatus();
		android::telecom::Conference getConference();
		JObject getConferenceables();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		android::telecom::DisconnectCause getDisconnectCause();
		android::os::Bundle getExtras();
		jint getState();
		android::telecom::StatusHints getStatusHints();
		android::telecom::Connection_VideoProvider getVideoProvider();
		jint getVideoState();
		void handleRttUpgradeResponse(android::telecom::Connection_RttTextStream arg0);
		jboolean isRingbackRequested();
		void notifyConferenceMergeFailed();
		void onAbort();
		void onAddConferenceParticipants(JObject arg0);
		void onAnswer();
		void onAnswer(jint arg0);
		void onCallAudioStateChanged(android::telecom::CallAudioState arg0);
		void onCallEvent(JString arg0, android::os::Bundle arg1);
		void onDeflect(android::net::Uri arg0);
		void onDisconnect();
		void onExtrasChanged(android::os::Bundle arg0);
		void onHandoverComplete();
		void onHold();
		void onPlayDtmfTone(jchar arg0);
		void onPostDialContinue(jboolean arg0);
		void onPullExternalCall();
		void onReject();
		void onReject(jint arg0);
		void onReject(JString arg0);
		void onSeparate();
		void onShowIncomingCallUi();
		void onSilence();
		void onStartRtt(android::telecom::Connection_RttTextStream arg0);
		void onStateChanged(jint arg0);
		void onStopDtmfTone();
		void onStopRtt();
		void onTrackedByNonUiService(jboolean arg0);
		void onUnhold();
		void onUsingAlternativeUi(jboolean arg0);
		void putExtras(android::os::Bundle arg0);
		void removeExtras(JArray arg0);
		void removeExtras(JObject arg0);
		void requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0);
		void sendConnectionEvent(JString arg0, android::os::Bundle arg1);
		void sendRemoteRttRequest();
		void sendRttInitiationFailure(jint arg0);
		void sendRttInitiationSuccess();
		void sendRttSessionRemotelyTerminated();
		void setActive();
		void setAddress(android::net::Uri arg0, jint arg1);
		void setAudioModeIsVoip(jboolean arg0);
		void setAudioRoute(jint arg0);
		void setCallerDisplayName(JString arg0, jint arg1);
		void setCallerNumberVerificationStatus(jint arg0);
		void setConferenceableConnections(JObject arg0);
		void setConferenceables(JObject arg0);
		void setConnectionCapabilities(jint arg0);
		void setConnectionProperties(jint arg0);
		void setDialing();
		void setDisconnected(android::telecom::DisconnectCause arg0);
		void setExtras(android::os::Bundle arg0);
		void setInitialized();
		void setInitializing();
		void setNextPostDialChar(jchar arg0);
		void setOnHold();
		void setPostDialWait(JString arg0);
		void setPulling();
		void setRingbackRequested(jboolean arg0);
		void setRinging();
		void setStatusHints(android::telecom::StatusHints arg0);
		void setVideoProvider(android::telecom::Connection_VideoProvider arg0);
		void setVideoState(jint arg0);
	};
} // namespace android::telecom

