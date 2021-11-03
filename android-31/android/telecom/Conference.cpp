#include "../../JArray.hpp"
#include "../os/Bundle.hpp"
#include "./CallAudioState.hpp"
#include "./Connection.hpp"
#include "./Connection_VideoProvider.hpp"
#include "./DisconnectCause.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./StatusHints.hpp"
#include "../../JString.hpp"
#include "./Conference.hpp"

namespace android::telecom
{
	// Fields
	jlong Conference::CONNECT_TIME_NOT_SPECIFIED()
	{
		return getStaticField<jlong>(
			"android.telecom.Conference",
			"CONNECT_TIME_NOT_SPECIFIED"
		);
	}
	
	// QJniObject forward
	Conference::Conference(QJniObject obj) : android::telecom::Conferenceable(obj) {}
	
	// Constructors
	Conference::Conference(android::telecom::PhoneAccountHandle arg0)
		: android::telecom::Conferenceable(
			"android.telecom.Conference",
			"(Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	android::telecom::Conference Conference::createFailedConference(android::telecom::DisconnectCause arg0, android::telecom::PhoneAccountHandle arg1)
	{
		return callStaticObjectMethod(
			"android.telecom.Conference",
			"createFailedConference",
			"(Landroid/telecom/DisconnectCause;Landroid/telecom/PhoneAccountHandle;)Landroid/telecom/Conference;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Conference::addConnection(android::telecom::Connection arg0) const
	{
		return callMethod<jboolean>(
			"addConnection",
			"(Landroid/telecom/Connection;)Z",
			arg0.object()
		);
	}
	void Conference::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	android::telecom::CallAudioState Conference::getCallAudioState() const
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	JObject Conference::getConferenceableConnections() const
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	jint Conference::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	jint Conference::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	jlong Conference::getConnectionStartElapsedRealtimeMillis() const
	{
		return callMethod<jlong>(
			"getConnectionStartElapsedRealtimeMillis",
			"()J"
		);
	}
	jlong Conference::getConnectionTime() const
	{
		return callMethod<jlong>(
			"getConnectionTime",
			"()J"
		);
	}
	JObject Conference::getConnections() const
	{
		return callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	android::telecom::DisconnectCause Conference::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	android::os::Bundle Conference::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::telecom::PhoneAccountHandle Conference::getPhoneAccountHandle() const
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	jint Conference::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	android::telecom::StatusHints Conference::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	android::telecom::Connection_VideoProvider Conference::getVideoProvider() const
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	jint Conference::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	jboolean Conference::isRingbackRequested() const
	{
		return callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	void Conference::onAddConferenceParticipants(JObject arg0) const
	{
		callMethod<void>(
			"onAddConferenceParticipants",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Conference::onAnswer(jint arg0) const
	{
		callMethod<void>(
			"onAnswer",
			"(I)V",
			arg0
		);
	}
	void Conference::onCallAudioStateChanged(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	void Conference::onConnectionAdded(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"onConnectionAdded",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::onDisconnect() const
	{
		callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	void Conference::onExtrasChanged(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Conference::onHold() const
	{
		callMethod<void>(
			"onHold",
			"()V"
		);
	}
	void Conference::onMerge() const
	{
		callMethod<void>(
			"onMerge",
			"()V"
		);
	}
	void Conference::onMerge(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"onMerge",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::onPlayDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	void Conference::onReject() const
	{
		callMethod<void>(
			"onReject",
			"()V"
		);
	}
	void Conference::onSeparate(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"onSeparate",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::onStopDtmfTone() const
	{
		callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	void Conference::onSwap() const
	{
		callMethod<void>(
			"onSwap",
			"()V"
		);
	}
	void Conference::onUnhold() const
	{
		callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	void Conference::putExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Conference::removeConnection(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"removeConnection",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	void Conference::removeExtras(JArray arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	void Conference::removeExtras(JObject arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Conference::sendConferenceEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendConferenceEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Conference::setActive() const
	{
		callMethod<void>(
			"setActive",
			"()V"
		);
	}
	void Conference::setConferenceableConnections(JObject arg0) const
	{
		callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Conference::setConnectionCapabilities(jint arg0) const
	{
		callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	void Conference::setConnectionProperties(jint arg0) const
	{
		callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	void Conference::setConnectionStartElapsedRealTime(jlong arg0) const
	{
		callMethod<void>(
			"setConnectionStartElapsedRealTime",
			"(J)V",
			arg0
		);
	}
	void Conference::setConnectionStartElapsedRealtimeMillis(jlong arg0) const
	{
		callMethod<void>(
			"setConnectionStartElapsedRealtimeMillis",
			"(J)V",
			arg0
		);
	}
	void Conference::setConnectionTime(jlong arg0) const
	{
		callMethod<void>(
			"setConnectionTime",
			"(J)V",
			arg0
		);
	}
	void Conference::setDialing() const
	{
		callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	void Conference::setDisconnected(android::telecom::DisconnectCause arg0) const
	{
		callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.object()
		);
	}
	void Conference::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Conference::setOnHold() const
	{
		callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	void Conference::setRingbackRequested(jboolean arg0) const
	{
		callMethod<void>(
			"setRingbackRequested",
			"(Z)V",
			arg0
		);
	}
	void Conference::setRinging() const
	{
		callMethod<void>(
			"setRinging",
			"()V"
		);
	}
	void Conference::setStatusHints(android::telecom::StatusHints arg0) const
	{
		callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.object()
		);
	}
	void Conference::setVideoProvider(android::telecom::Connection arg0, android::telecom::Connection_VideoProvider arg1) const
	{
		callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection$VideoProvider;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Conference::setVideoState(android::telecom::Connection arg0, jint arg1) const
	{
		callMethod<void>(
			"setVideoState",
			"(Landroid/telecom/Connection;I)V",
			arg0.object(),
			arg1
		);
	}
	JString Conference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telecom

