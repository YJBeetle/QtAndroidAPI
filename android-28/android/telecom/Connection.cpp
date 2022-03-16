#include "../../JArray.hpp"
#include "../bluetooth/BluetoothDevice.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "./CallAudioState.hpp"
#include "./Conference.hpp"
#include "./Connection_RttTextStream.hpp"
#include "./Connection_VideoProvider.hpp"
#include "./DisconnectCause.hpp"
#include "./StatusHints.hpp"
#include "../../JString.hpp"
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
	JString Connection::EVENT_CALL_MERGE_FAILED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_MERGE_FAILED",
			"Ljava/lang/String;"
		);
	}
	JString Connection::EVENT_CALL_PULL_FAILED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_PULL_FAILED",
			"Ljava/lang/String;"
		);
	}
	JString Connection::EXTRA_ANSWERING_DROPS_FG_CALL()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL",
			"Ljava/lang/String;"
		);
	}
	JString Connection::EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Connection::EXTRA_CALL_SUBJECT()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CALL_SUBJECT",
			"Ljava/lang/String;"
		);
	}
	JString Connection::EXTRA_CHILD_ADDRESS()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CHILD_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	JString Connection::EXTRA_LAST_FORWARDED_NUMBER()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_LAST_FORWARDED_NUMBER",
			"Ljava/lang/String;"
		);
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
	
	// Constructors
	Connection::Connection()
		: android::telecom::Conferenceable(
			"android.telecom.Connection",
			"()V"
		) {}
	
	// Methods
	JString Connection::capabilitiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"capabilitiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
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
	JString Connection::propertiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"propertiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Connection::stateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void Connection::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	android::net::Uri Connection::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	jint Connection::getAddressPresentation() const
	{
		return callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	jboolean Connection::getAudioModeIsVoip() const
	{
		return callMethod<jboolean>(
			"getAudioModeIsVoip",
			"()Z"
		);
	}
	android::telecom::CallAudioState Connection::getCallAudioState() const
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	JString Connection::getCallerDisplayName() const
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/String;"
		);
	}
	jint Connection::getCallerDisplayNamePresentation() const
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	android::telecom::Conference Connection::getConference() const
	{
		return callObjectMethod(
			"getConference",
			"()Landroid/telecom/Conference;"
		);
	}
	JObject Connection::getConferenceables() const
	{
		return callObjectMethod(
			"getConferenceables",
			"()Ljava/util/List;"
		);
	}
	jint Connection::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint Connection::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	android::telecom::DisconnectCause Connection::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle Connection::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Connection::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	android::telecom::StatusHints Connection::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	android::telecom::Connection_VideoProvider Connection::getVideoProvider() const
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	void Connection::handleRttUpgradeResponse(android::telecom::Connection_RttTextStream arg0) const
	{
		callMethod<void>(
			"handleRttUpgradeResponse",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.object()
		);
	}
	jboolean Connection::isRingbackRequested() const
	{
		return callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	void Connection::onAbort() const
	{
		callMethod<void>(
			"onAbort",
			"()V"
		);
	}
	void Connection::onAnswer() const
	{
		callMethod<void>(
			"onAnswer",
			"()V"
		);
	}
	void Connection::onAnswer(jint arg0) const
	{
		callMethod<void>(
			"onAnswer",
			"(I)V",
			arg0
		);
	}
	void Connection::onCallAudioStateChanged(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void Connection::onCallEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Connection::onDeflect(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onDeflect",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void Connection::onDisconnect() const
	{
		callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	void Connection::onExtrasChanged(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Connection::onHandoverComplete() const
	{
		callMethod<void>(
			"onHandoverComplete",
			"()V"
		);
	}
	void Connection::onHold() const
	{
		callMethod<void>(
			"onHold",
			"()V"
		);
	}
	void Connection::onPlayDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Connection::onPostDialContinue(jboolean arg0) const
	{
		callMethod<void>(
			"onPostDialContinue",
			"(Z)V",
			arg0
		);
	}
	void Connection::onPullExternalCall() const
	{
		callMethod<void>(
			"onPullExternalCall",
			"()V"
		);
	}
	void Connection::onReject() const
	{
		callMethod<void>(
			"onReject",
			"()V"
		);
	}
	void Connection::onReject(JString arg0) const
	{
		callMethod<void>(
			"onReject",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Connection::onSeparate() const
	{
		callMethod<void>(
			"onSeparate",
			"()V"
		);
	}
	void Connection::onShowIncomingCallUi() const
	{
		callMethod<void>(
			"onShowIncomingCallUi",
			"()V"
		);
	}
	void Connection::onStartRtt(android::telecom::Connection_RttTextStream arg0) const
	{
		callMethod<void>(
			"onStartRtt",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.object()
		);
	}
	void Connection::onStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onStateChanged",
			"(I)V",
			arg0
		);
	}
	void Connection::onStopDtmfTone() const
	{
		callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	void Connection::onStopRtt() const
	{
		callMethod<void>(
			"onStopRtt",
			"()V"
		);
	}
	void Connection::onUnhold() const
	{
		callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	void Connection::putExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Connection::removeExtras(JArray arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void Connection::removeExtras(JObject arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Connection::requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0) const
	{
		callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	void Connection::sendConnectionEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendConnectionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Connection::sendRemoteRttRequest() const
	{
		callMethod<void>(
			"sendRemoteRttRequest",
			"()V"
		);
	}
	void Connection::sendRttInitiationFailure(jint arg0) const
	{
		callMethod<void>(
			"sendRttInitiationFailure",
			"(I)V",
			arg0
		);
	}
	void Connection::sendRttInitiationSuccess() const
	{
		callMethod<void>(
			"sendRttInitiationSuccess",
			"()V"
		);
	}
	void Connection::sendRttSessionRemotelyTerminated() const
	{
		callMethod<void>(
			"sendRttSessionRemotelyTerminated",
			"()V"
		);
	}
	void Connection::setActive() const
	{
		callMethod<void>(
			"setActive",
			"()V"
		);
	}
	void Connection::setAddress(android::net::Uri arg0, jint arg1) const
	{
		callMethod<void>(
			"setAddress",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	void Connection::setAudioModeIsVoip(jboolean arg0) const
	{
		callMethod<void>(
			"setAudioModeIsVoip",
			"(Z)V",
			arg0
		);
	}
	void Connection::setAudioRoute(jint arg0) const
	{
		callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0
		);
	}
	void Connection::setCallerDisplayName(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setCallerDisplayName",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Connection::setConferenceableConnections(JObject arg0) const
	{
		callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Connection::setConferenceables(JObject arg0) const
	{
		callMethod<void>(
			"setConferenceables",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Connection::setConnectionCapabilities(jint arg0) const
	{
		callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	void Connection::setConnectionProperties(jint arg0) const
	{
		callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	void Connection::setDialing() const
	{
		callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	void Connection::setDisconnected(android::telecom::DisconnectCause arg0) const
	{
		callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.object()
		);
	}
	void Connection::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Connection::setInitialized() const
	{
		callMethod<void>(
			"setInitialized",
			"()V"
		);
	}
	void Connection::setInitializing() const
	{
		callMethod<void>(
			"setInitializing",
			"()V"
		);
	}
	void Connection::setNextPostDialChar(jchar arg0) const
	{
		callMethod<void>(
			"setNextPostDialChar",
			"(C)V",
			arg0
		);
	}
	void Connection::setOnHold() const
	{
		callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	void Connection::setPostDialWait(JString arg0) const
	{
		callMethod<void>(
			"setPostDialWait",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Connection::setPulling() const
	{
		callMethod<void>(
			"setPulling",
			"()V"
		);
	}
	void Connection::setRingbackRequested(jboolean arg0) const
	{
		callMethod<void>(
			"setRingbackRequested",
			"(Z)V",
			arg0
		);
	}
	void Connection::setRinging() const
	{
		callMethod<void>(
			"setRinging",
			"()V"
		);
	}
	void Connection::setStatusHints(android::telecom::StatusHints arg0) const
	{
		callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.object()
		);
	}
	void Connection::setVideoProvider(android::telecom::Connection_VideoProvider arg0) const
	{
		callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection$VideoProvider;)V",
			arg0.object()
		);
	}
	void Connection::setVideoState(jint arg0) const
	{
		callMethod<void>(
			"setVideoState",
			"(I)V",
			arg0
		);
	}
} // namespace android::telecom

