#include "../bluetooth/BluetoothDevice.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./CallAudioState.hpp"
#include "./Conference.hpp"
#include "./Connection_RttTextStream.hpp"
#include "./Connection_VideoProvider.hpp"
#include "./DisconnectCause.hpp"
#include "./StatusHints.hpp"
#include "./Connection.hpp"

namespace android::telecom
{
	// Fields
	jint Connection::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"
		);
	}
	jint Connection::CAPABILITY_CAN_PAUSE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_PAUSE_VIDEO"
		);
	}
	jint Connection::CAPABILITY_CAN_PULL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_PULL_CALL"
		);
	}
	jint Connection::CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION"
		);
	}
	jint Connection::CAPABILITY_CAN_UPGRADE_TO_VIDEO()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_UPGRADE_TO_VIDEO"
		);
	}
	jint Connection::CAPABILITY_DISCONNECT_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_DISCONNECT_FROM_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_HOLD"
		);
	}
	jint Connection::CAPABILITY_MANAGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MANAGE_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_MERGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MERGE_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_MUTE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MUTE"
		);
	}
	jint Connection::CAPABILITY_RESPOND_VIA_TEXT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_RESPOND_VIA_TEXT"
		);
	}
	jint Connection::CAPABILITY_SEPARATE_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SEPARATE_FROM_CONFERENCE"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_RX"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_TX"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_RX"
		);
	}
	jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_TX"
		);
	}
	jint Connection::CAPABILITY_SUPPORT_DEFLECT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORT_DEFLECT"
		);
	}
	jint Connection::CAPABILITY_SUPPORT_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORT_HOLD"
		);
	}
	jint Connection::CAPABILITY_SWAP_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SWAP_CONFERENCE"
		);
	}
	jstring Connection::EVENT_CALL_MERGE_FAILED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_MERGE_FAILED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EVENT_CALL_PULL_FAILED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_PULL_FAILED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EVENT_RTT_AUDIO_INDICATION_CHANGED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_RTT_AUDIO_INDICATION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_ANSWERING_DROPS_FG_CALL()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_CALL_SUBJECT()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CALL_SUBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_CHILD_ADDRESS()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CHILD_ADDRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_IS_RTT_AUDIO_PRESENT()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_IS_RTT_AUDIO_PRESENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_LAST_FORWARDED_NUMBER()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_LAST_FORWARDED_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Connection::EXTRA_SIP_INVITE()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_SIP_INVITE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Connection::PROPERTY_HAS_CDMA_VOICE_PRIVACY()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_HAS_CDMA_VOICE_PRIVACY"
		);
	}
	jint Connection::PROPERTY_IS_EXTERNAL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_IS_EXTERNAL_CALL"
		);
	}
	jint Connection::PROPERTY_IS_RTT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_IS_RTT"
		);
	}
	jint Connection::PROPERTY_SELF_MANAGED()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_SELF_MANAGED"
		);
	}
	jint Connection::STATE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_ACTIVE"
		);
	}
	jint Connection::STATE_DIALING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_DIALING"
		);
	}
	jint Connection::STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_DISCONNECTED"
		);
	}
	jint Connection::STATE_HOLDING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_HOLDING"
		);
	}
	jint Connection::STATE_INITIALIZING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_INITIALIZING"
		);
	}
	jint Connection::STATE_NEW()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_NEW"
		);
	}
	jint Connection::STATE_PULLING_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_PULLING_CALL"
		);
	}
	jint Connection::STATE_RINGING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_RINGING"
		);
	}
	
	// QAndroidJniObject forward
	Connection::Connection(QAndroidJniObject obj) : android::telecom::Conferenceable(obj) {}
	
	// Constructors
	Connection::Connection()
		: android::telecom::Conferenceable(
			"android.telecom.Connection",
			"()V"
		) {}
	
	// Methods
	jstring Connection::capabilitiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"capabilitiesToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::telecom::Connection Connection::createCanceledConnection()
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"createCanceledConnection",
			"()Landroid/telecom/Connection;"
		);
	}
	android::telecom::Connection Connection::createFailedConnection(android::telecom::DisconnectCause arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"createFailedConnection",
			"(Landroid/telecom/DisconnectCause;)Landroid/telecom/Connection;",
			arg0.object()
		);
	}
	jstring Connection::propertiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"propertiesToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Connection::stateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Connection::destroy()
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	android::net::Uri Connection::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint Connection::getAddressPresentation()
	{
		return callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	jboolean Connection::getAudioModeIsVoip()
	{
		return callMethod<jboolean>(
			"getAudioModeIsVoip",
			"()Z"
		);
	}
	android::telecom::CallAudioState Connection::getCallAudioState()
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	jstring Connection::getCallerDisplayName()
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Connection::getCallerDisplayNamePresentation()
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	android::telecom::Conference Connection::getConference()
	{
		return callObjectMethod(
			"getConference",
			"()Landroid/telecom/Conference;"
		);
	}
	__JniBaseClass Connection::getConferenceables()
	{
		return callObjectMethod(
			"getConferenceables",
			"()Ljava/util/List;"
		);
	}
	jint Connection::getConnectionCapabilities()
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint Connection::getConnectionProperties()
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	android::telecom::DisconnectCause Connection::getDisconnectCause()
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle Connection::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Connection::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	android::telecom::StatusHints Connection::getStatusHints()
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	android::telecom::Connection_VideoProvider Connection::getVideoProvider()
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	void Connection::handleRttUpgradeResponse(android::telecom::Connection_RttTextStream arg0)
	{
		callMethod<void>(
			"handleRttUpgradeResponse",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.object()
		);
	}
	jboolean Connection::isRingbackRequested()
	{
		return callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	void Connection::onAbort()
	{
		callMethod<void>(
			"onAbort",
			"()V"
		);
	}
	void Connection::onAnswer()
	{
		callMethod<void>(
			"onAnswer",
			"()V"
		);
	}
	void Connection::onAnswer(jint arg0)
	{
		callMethod<void>(
			"onAnswer",
			"(I)V",
			arg0
		);
	}
	void Connection::onCallAudioStateChanged(android::telecom::CallAudioState arg0)
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void Connection::onCallEvent(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void Connection::onDeflect(android::net::Uri arg0)
	{
		callMethod<void>(
			"onDeflect",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void Connection::onDisconnect()
	{
		callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	void Connection::onExtrasChanged(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Connection::onHandoverComplete()
	{
		callMethod<void>(
			"onHandoverComplete",
			"()V"
		);
	}
	void Connection::onHold()
	{
		callMethod<void>(
			"onHold",
			"()V"
		);
	}
	void Connection::onPlayDtmfTone(jchar arg0)
	{
		callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Connection::onPostDialContinue(jboolean arg0)
	{
		callMethod<void>(
			"onPostDialContinue",
			"(Z)V",
			arg0
		);
	}
	void Connection::onPullExternalCall()
	{
		callMethod<void>(
			"onPullExternalCall",
			"()V"
		);
	}
	void Connection::onReject()
	{
		callMethod<void>(
			"onReject",
			"()V"
		);
	}
	void Connection::onReject(jstring arg0)
	{
		callMethod<void>(
			"onReject",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection::onSeparate()
	{
		callMethod<void>(
			"onSeparate",
			"()V"
		);
	}
	void Connection::onShowIncomingCallUi()
	{
		callMethod<void>(
			"onShowIncomingCallUi",
			"()V"
		);
	}
	void Connection::onSilence()
	{
		callMethod<void>(
			"onSilence",
			"()V"
		);
	}
	void Connection::onStartRtt(android::telecom::Connection_RttTextStream arg0)
	{
		callMethod<void>(
			"onStartRtt",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.object()
		);
	}
	void Connection::onStateChanged(jint arg0)
	{
		callMethod<void>(
			"onStateChanged",
			"(I)V",
			arg0
		);
	}
	void Connection::onStopDtmfTone()
	{
		callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	void Connection::onStopRtt()
	{
		callMethod<void>(
			"onStopRtt",
			"()V"
		);
	}
	void Connection::onUnhold()
	{
		callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	void Connection::putExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Connection::removeExtras(jarray arg0)
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection::removeExtras(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Connection::requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0)
	{
		callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	void Connection::sendConnectionEvent(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendConnectionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void Connection::sendRemoteRttRequest()
	{
		callMethod<void>(
			"sendRemoteRttRequest",
			"()V"
		);
	}
	void Connection::sendRttInitiationFailure(jint arg0)
	{
		callMethod<void>(
			"sendRttInitiationFailure",
			"(I)V",
			arg0
		);
	}
	void Connection::sendRttInitiationSuccess()
	{
		callMethod<void>(
			"sendRttInitiationSuccess",
			"()V"
		);
	}
	void Connection::sendRttSessionRemotelyTerminated()
	{
		callMethod<void>(
			"sendRttSessionRemotelyTerminated",
			"()V"
		);
	}
	void Connection::setActive()
	{
		callMethod<void>(
			"setActive",
			"()V"
		);
	}
	void Connection::setAddress(android::net::Uri arg0, jint arg1)
	{
		callMethod<void>(
			"setAddress",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	void Connection::setAudioModeIsVoip(jboolean arg0)
	{
		callMethod<void>(
			"setAudioModeIsVoip",
			"(Z)V",
			arg0
		);
	}
	void Connection::setAudioRoute(jint arg0)
	{
		callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0
		);
	}
	void Connection::setCallerDisplayName(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"setCallerDisplayName",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Connection::setConferenceableConnections(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Connection::setConferenceables(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setConferenceables",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Connection::setConnectionCapabilities(jint arg0)
	{
		callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	void Connection::setConnectionProperties(jint arg0)
	{
		callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	void Connection::setDialing()
	{
		callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	void Connection::setDisconnected(android::telecom::DisconnectCause arg0)
	{
		callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.object()
		);
	}
	void Connection::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Connection::setInitialized()
	{
		callMethod<void>(
			"setInitialized",
			"()V"
		);
	}
	void Connection::setInitializing()
	{
		callMethod<void>(
			"setInitializing",
			"()V"
		);
	}
	void Connection::setNextPostDialChar(jchar arg0)
	{
		callMethod<void>(
			"setNextPostDialChar",
			"(C)V",
			arg0
		);
	}
	void Connection::setOnHold()
	{
		callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	void Connection::setPostDialWait(jstring arg0)
	{
		callMethod<void>(
			"setPostDialWait",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection::setPulling()
	{
		callMethod<void>(
			"setPulling",
			"()V"
		);
	}
	void Connection::setRingbackRequested(jboolean arg0)
	{
		callMethod<void>(
			"setRingbackRequested",
			"(Z)V",
			arg0
		);
	}
	void Connection::setRinging()
	{
		callMethod<void>(
			"setRinging",
			"()V"
		);
	}
	void Connection::setStatusHints(android::telecom::StatusHints arg0)
	{
		callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.object()
		);
	}
	void Connection::setVideoProvider(android::telecom::Connection_VideoProvider arg0)
	{
		callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection$VideoProvider;)V",
			arg0.object()
		);
	}
	void Connection::setVideoState(jint arg0)
	{
		callMethod<void>(
			"setVideoState",
			"(I)V",
			arg0
		);
	}
} // namespace android::telecom

