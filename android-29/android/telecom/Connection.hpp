#pragma once

#include "../../JArray.hpp"
#include "../bluetooth/BluetoothDevice.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./CallAudioState.def.hpp"
#include "./Conference.def.hpp"
#include "./Connection_RttTextStream.def.hpp"
#include "./Connection_VideoProvider.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "./StatusHints.def.hpp"
#include "../../JString.hpp"
#include "./Connection.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint Connection::CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CANNOT_DOWNGRADE_VIDEO_TO_AUDIO"
		);
	}
	inline jint Connection::CAPABILITY_CAN_PAUSE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_PAUSE_VIDEO"
		);
	}
	inline jint Connection::CAPABILITY_CAN_PULL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_PULL_CALL"
		);
	}
	inline jint Connection::CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_SEND_RESPONSE_VIA_CONNECTION"
		);
	}
	inline jint Connection::CAPABILITY_CAN_UPGRADE_TO_VIDEO()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_CAN_UPGRADE_TO_VIDEO"
		);
	}
	inline jint Connection::CAPABILITY_DISCONNECT_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_DISCONNECT_FROM_CONFERENCE"
		);
	}
	inline jint Connection::CAPABILITY_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_HOLD"
		);
	}
	inline jint Connection::CAPABILITY_MANAGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MANAGE_CONFERENCE"
		);
	}
	inline jint Connection::CAPABILITY_MERGE_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MERGE_CONFERENCE"
		);
	}
	inline jint Connection::CAPABILITY_MUTE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_MUTE"
		);
	}
	inline jint Connection::CAPABILITY_RESPOND_VIA_TEXT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_RESPOND_VIA_TEXT"
		);
	}
	inline jint Connection::CAPABILITY_SEPARATE_FROM_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SEPARATE_FROM_CONFERENCE"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_BIDIRECTIONAL"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_RX"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORTS_VT_LOCAL_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_LOCAL_TX"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_BIDIRECTIONAL"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_RX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_RX"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORTS_VT_REMOTE_TX()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORTS_VT_REMOTE_TX"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORT_DEFLECT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORT_DEFLECT"
		);
	}
	inline jint Connection::CAPABILITY_SUPPORT_HOLD()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SUPPORT_HOLD"
		);
	}
	inline jint Connection::CAPABILITY_SWAP_CONFERENCE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"CAPABILITY_SWAP_CONFERENCE"
		);
	}
	inline JString Connection::EVENT_CALL_MERGE_FAILED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_MERGE_FAILED",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EVENT_CALL_PULL_FAILED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_CALL_PULL_FAILED",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EVENT_RTT_AUDIO_INDICATION_CHANGED()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EVENT_RTT_AUDIO_INDICATION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EXTRA_ANSWERING_DROPS_FG_CALL()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_ANSWERING_DROPS_FG_CALL_APP_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EXTRA_CALL_SUBJECT()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CALL_SUBJECT",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EXTRA_CHILD_ADDRESS()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_CHILD_ADDRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EXTRA_IS_RTT_AUDIO_PRESENT()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_IS_RTT_AUDIO_PRESENT",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EXTRA_LAST_FORWARDED_NUMBER()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_LAST_FORWARDED_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString Connection::EXTRA_SIP_INVITE()
	{
		return getStaticObjectField(
			"android.telecom.Connection",
			"EXTRA_SIP_INVITE",
			"Ljava/lang/String;"
		);
	}
	inline jint Connection::PROPERTY_HAS_CDMA_VOICE_PRIVACY()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_HAS_CDMA_VOICE_PRIVACY"
		);
	}
	inline jint Connection::PROPERTY_IS_EXTERNAL_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_IS_EXTERNAL_CALL"
		);
	}
	inline jint Connection::PROPERTY_IS_RTT()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_IS_RTT"
		);
	}
	inline jint Connection::PROPERTY_SELF_MANAGED()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"PROPERTY_SELF_MANAGED"
		);
	}
	inline jint Connection::STATE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_ACTIVE"
		);
	}
	inline jint Connection::STATE_DIALING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_DIALING"
		);
	}
	inline jint Connection::STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_DISCONNECTED"
		);
	}
	inline jint Connection::STATE_HOLDING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_HOLDING"
		);
	}
	inline jint Connection::STATE_INITIALIZING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_INITIALIZING"
		);
	}
	inline jint Connection::STATE_NEW()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_NEW"
		);
	}
	inline jint Connection::STATE_PULLING_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_PULLING_CALL"
		);
	}
	inline jint Connection::STATE_RINGING()
	{
		return getStaticField<jint>(
			"android.telecom.Connection",
			"STATE_RINGING"
		);
	}
	
	// Constructors
	inline Connection::Connection()
		: android::telecom::Conferenceable(
			"android.telecom.Connection",
			"()V"
		) {}
	
	// Methods
	inline JString Connection::capabilitiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"capabilitiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::telecom::Connection Connection::createCanceledConnection()
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"createCanceledConnection",
			"()Landroid/telecom/Connection;"
		);
	}
	inline android::telecom::Connection Connection::createFailedConnection(android::telecom::DisconnectCause arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"createFailedConnection",
			"(Landroid/telecom/DisconnectCause;)Landroid/telecom/Connection;",
			arg0.object()
		);
	}
	inline JString Connection::propertiesToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"propertiesToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Connection::stateToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.Connection",
			"stateToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline void Connection::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline android::net::Uri Connection::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline jint Connection::getAddressPresentation() const
	{
		return callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	inline jboolean Connection::getAudioModeIsVoip() const
	{
		return callMethod<jboolean>(
			"getAudioModeIsVoip",
			"()Z"
		);
	}
	inline android::telecom::CallAudioState Connection::getCallAudioState() const
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	inline JString Connection::getCallerDisplayName() const
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Connection::getCallerDisplayNamePresentation() const
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	inline android::telecom::Conference Connection::getConference() const
	{
		return callObjectMethod(
			"getConference",
			"()Landroid/telecom/Conference;"
		);
	}
	inline JObject Connection::getConferenceables() const
	{
		return callObjectMethod(
			"getConferenceables",
			"()Ljava/util/List;"
		);
	}
	inline jint Connection::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	inline jint Connection::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	inline android::telecom::DisconnectCause Connection::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	inline android::os::Bundle Connection::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint Connection::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline android::telecom::StatusHints Connection::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	inline android::telecom::Connection_VideoProvider Connection::getVideoProvider() const
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	inline void Connection::handleRttUpgradeResponse(android::telecom::Connection_RttTextStream arg0) const
	{
		callMethod<void>(
			"handleRttUpgradeResponse",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.object()
		);
	}
	inline jboolean Connection::isRingbackRequested() const
	{
		return callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	inline void Connection::onAbort() const
	{
		callMethod<void>(
			"onAbort",
			"()V"
		);
	}
	inline void Connection::onAnswer() const
	{
		callMethod<void>(
			"onAnswer",
			"()V"
		);
	}
	inline void Connection::onAnswer(jint arg0) const
	{
		callMethod<void>(
			"onAnswer",
			"(I)V",
			arg0
		);
	}
	inline void Connection::onCallAudioStateChanged(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	inline void Connection::onCallEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onCallEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Connection::onDeflect(android::net::Uri arg0) const
	{
		callMethod<void>(
			"onDeflect",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void Connection::onDisconnect() const
	{
		callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	inline void Connection::onExtrasChanged(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Connection::onHandoverComplete() const
	{
		callMethod<void>(
			"onHandoverComplete",
			"()V"
		);
	}
	inline void Connection::onHold() const
	{
		callMethod<void>(
			"onHold",
			"()V"
		);
	}
	inline void Connection::onPlayDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	inline void Connection::onPostDialContinue(jboolean arg0) const
	{
		callMethod<void>(
			"onPostDialContinue",
			"(Z)V",
			arg0
		);
	}
	inline void Connection::onPullExternalCall() const
	{
		callMethod<void>(
			"onPullExternalCall",
			"()V"
		);
	}
	inline void Connection::onReject() const
	{
		callMethod<void>(
			"onReject",
			"()V"
		);
	}
	inline void Connection::onReject(JString arg0) const
	{
		callMethod<void>(
			"onReject",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Connection::onSeparate() const
	{
		callMethod<void>(
			"onSeparate",
			"()V"
		);
	}
	inline void Connection::onShowIncomingCallUi() const
	{
		callMethod<void>(
			"onShowIncomingCallUi",
			"()V"
		);
	}
	inline void Connection::onSilence() const
	{
		callMethod<void>(
			"onSilence",
			"()V"
		);
	}
	inline void Connection::onStartRtt(android::telecom::Connection_RttTextStream arg0) const
	{
		callMethod<void>(
			"onStartRtt",
			"(Landroid/telecom/Connection$RttTextStream;)V",
			arg0.object()
		);
	}
	inline void Connection::onStateChanged(jint arg0) const
	{
		callMethod<void>(
			"onStateChanged",
			"(I)V",
			arg0
		);
	}
	inline void Connection::onStopDtmfTone() const
	{
		callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	inline void Connection::onStopRtt() const
	{
		callMethod<void>(
			"onStopRtt",
			"()V"
		);
	}
	inline void Connection::onUnhold() const
	{
		callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	inline void Connection::putExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Connection::removeExtras(JArray arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void Connection::removeExtras(JObject arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Connection::requestBluetoothAudio(android::bluetooth::BluetoothDevice arg0) const
	{
		callMethod<void>(
			"requestBluetoothAudio",
			"(Landroid/bluetooth/BluetoothDevice;)V",
			arg0.object()
		);
	}
	inline void Connection::sendConnectionEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendConnectionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Connection::sendRemoteRttRequest() const
	{
		callMethod<void>(
			"sendRemoteRttRequest",
			"()V"
		);
	}
	inline void Connection::sendRttInitiationFailure(jint arg0) const
	{
		callMethod<void>(
			"sendRttInitiationFailure",
			"(I)V",
			arg0
		);
	}
	inline void Connection::sendRttInitiationSuccess() const
	{
		callMethod<void>(
			"sendRttInitiationSuccess",
			"()V"
		);
	}
	inline void Connection::sendRttSessionRemotelyTerminated() const
	{
		callMethod<void>(
			"sendRttSessionRemotelyTerminated",
			"()V"
		);
	}
	inline void Connection::setActive() const
	{
		callMethod<void>(
			"setActive",
			"()V"
		);
	}
	inline void Connection::setAddress(android::net::Uri arg0, jint arg1) const
	{
		callMethod<void>(
			"setAddress",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Connection::setAudioModeIsVoip(jboolean arg0) const
	{
		callMethod<void>(
			"setAudioModeIsVoip",
			"(Z)V",
			arg0
		);
	}
	inline void Connection::setAudioRoute(jint arg0) const
	{
		callMethod<void>(
			"setAudioRoute",
			"(I)V",
			arg0
		);
	}
	inline void Connection::setCallerDisplayName(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setCallerDisplayName",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Connection::setConferenceableConnections(JObject arg0) const
	{
		callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Connection::setConferenceables(JObject arg0) const
	{
		callMethod<void>(
			"setConferenceables",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Connection::setConnectionCapabilities(jint arg0) const
	{
		callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	inline void Connection::setConnectionProperties(jint arg0) const
	{
		callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	inline void Connection::setDialing() const
	{
		callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	inline void Connection::setDisconnected(android::telecom::DisconnectCause arg0) const
	{
		callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.object()
		);
	}
	inline void Connection::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Connection::setInitialized() const
	{
		callMethod<void>(
			"setInitialized",
			"()V"
		);
	}
	inline void Connection::setInitializing() const
	{
		callMethod<void>(
			"setInitializing",
			"()V"
		);
	}
	inline void Connection::setNextPostDialChar(jchar arg0) const
	{
		callMethod<void>(
			"setNextPostDialChar",
			"(C)V",
			arg0
		);
	}
	inline void Connection::setOnHold() const
	{
		callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	inline void Connection::setPostDialWait(JString arg0) const
	{
		callMethod<void>(
			"setPostDialWait",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Connection::setPulling() const
	{
		callMethod<void>(
			"setPulling",
			"()V"
		);
	}
	inline void Connection::setRingbackRequested(jboolean arg0) const
	{
		callMethod<void>(
			"setRingbackRequested",
			"(Z)V",
			arg0
		);
	}
	inline void Connection::setRinging() const
	{
		callMethod<void>(
			"setRinging",
			"()V"
		);
	}
	inline void Connection::setStatusHints(android::telecom::StatusHints arg0) const
	{
		callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.object()
		);
	}
	inline void Connection::setVideoProvider(android::telecom::Connection_VideoProvider arg0) const
	{
		callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection$VideoProvider;)V",
			arg0.object()
		);
	}
	inline void Connection::setVideoState(jint arg0) const
	{
		callMethod<void>(
			"setVideoState",
			"(I)V",
			arg0
		);
	}
} // namespace android::telecom

// Base class headers
#include "./Conferenceable.hpp"

