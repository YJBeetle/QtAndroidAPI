#pragma once

#include "../../JArray.hpp"
#include "../os/Bundle.def.hpp"
#include "./CallAudioState.def.hpp"
#include "./Connection.def.hpp"
#include "./Connection_VideoProvider.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "./StatusHints.def.hpp"
#include "../../JString.hpp"
#include "./Conference.def.hpp"

namespace android::telecom
{
	// Fields
	inline jlong Conference::CONNECT_TIME_NOT_SPECIFIED()
	{
		return getStaticField<jlong>(
			"android.telecom.Conference",
			"CONNECT_TIME_NOT_SPECIFIED"
		);
	}
	
	// Constructors
	inline Conference::Conference(android::telecom::PhoneAccountHandle arg0)
		: android::telecom::Conferenceable(
			"android.telecom.Conference",
			"(Landroid/telecom/PhoneAccountHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean Conference::addConnection(android::telecom::Connection arg0) const
	{
		return callMethod<jboolean>(
			"addConnection",
			"(Landroid/telecom/Connection;)Z",
			arg0.object()
		);
	}
	inline void Conference::destroy() const
	{
		callMethod<void>(
			"destroy",
			"()V"
		);
	}
	inline android::telecom::CallAudioState Conference::getCallAudioState() const
	{
		return callObjectMethod(
			"getCallAudioState",
			"()Landroid/telecom/CallAudioState;"
		);
	}
	inline JObject Conference::getConferenceableConnections() const
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	inline jint Conference::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	inline jint Conference::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	inline jlong Conference::getConnectionStartElapsedRealtimeMillis() const
	{
		return callMethod<jlong>(
			"getConnectionStartElapsedRealtimeMillis",
			"()J"
		);
	}
	inline jlong Conference::getConnectionTime() const
	{
		return callMethod<jlong>(
			"getConnectionTime",
			"()J"
		);
	}
	inline JObject Conference::getConnections() const
	{
		return callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	inline android::telecom::DisconnectCause Conference::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	inline android::os::Bundle Conference::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::telecom::PhoneAccountHandle Conference::getPhoneAccountHandle() const
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline jint Conference::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline android::telecom::StatusHints Conference::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	inline android::telecom::Connection_VideoProvider Conference::getVideoProvider() const
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/Connection$VideoProvider;"
		);
	}
	inline jint Conference::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	inline void Conference::onCallAudioStateChanged(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"onCallAudioStateChanged",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	inline void Conference::onConnectionAdded(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"onConnectionAdded",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	inline void Conference::onDisconnect() const
	{
		callMethod<void>(
			"onDisconnect",
			"()V"
		);
	}
	inline void Conference::onExtrasChanged(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Conference::onHold() const
	{
		callMethod<void>(
			"onHold",
			"()V"
		);
	}
	inline void Conference::onMerge() const
	{
		callMethod<void>(
			"onMerge",
			"()V"
		);
	}
	inline void Conference::onMerge(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"onMerge",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	inline void Conference::onPlayDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"onPlayDtmfTone",
			"(C)V",
			arg0
		);
	}
	inline void Conference::onSeparate(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"onSeparate",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	inline void Conference::onStopDtmfTone() const
	{
		callMethod<void>(
			"onStopDtmfTone",
			"()V"
		);
	}
	inline void Conference::onSwap() const
	{
		callMethod<void>(
			"onSwap",
			"()V"
		);
	}
	inline void Conference::onUnhold() const
	{
		callMethod<void>(
			"onUnhold",
			"()V"
		);
	}
	inline void Conference::putExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"putExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Conference::removeConnection(android::telecom::Connection arg0) const
	{
		callMethod<void>(
			"removeConnection",
			"(Landroid/telecom/Connection;)V",
			arg0.object()
		);
	}
	inline void Conference::removeExtras(JArray arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void Conference::removeExtras(JObject arg0) const
	{
		callMethod<void>(
			"removeExtras",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Conference::sendConferenceEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendConferenceEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Conference::setActive() const
	{
		callMethod<void>(
			"setActive",
			"()V"
		);
	}
	inline void Conference::setConferenceableConnections(JObject arg0) const
	{
		callMethod<void>(
			"setConferenceableConnections",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Conference::setConnectionCapabilities(jint arg0) const
	{
		callMethod<void>(
			"setConnectionCapabilities",
			"(I)V",
			arg0
		);
	}
	inline void Conference::setConnectionProperties(jint arg0) const
	{
		callMethod<void>(
			"setConnectionProperties",
			"(I)V",
			arg0
		);
	}
	inline void Conference::setConnectionStartElapsedRealTime(jlong arg0) const
	{
		callMethod<void>(
			"setConnectionStartElapsedRealTime",
			"(J)V",
			arg0
		);
	}
	inline void Conference::setConnectionStartElapsedRealtimeMillis(jlong arg0) const
	{
		callMethod<void>(
			"setConnectionStartElapsedRealtimeMillis",
			"(J)V",
			arg0
		);
	}
	inline void Conference::setConnectionTime(jlong arg0) const
	{
		callMethod<void>(
			"setConnectionTime",
			"(J)V",
			arg0
		);
	}
	inline void Conference::setDialing() const
	{
		callMethod<void>(
			"setDialing",
			"()V"
		);
	}
	inline void Conference::setDisconnected(android::telecom::DisconnectCause arg0) const
	{
		callMethod<void>(
			"setDisconnected",
			"(Landroid/telecom/DisconnectCause;)V",
			arg0.object()
		);
	}
	inline void Conference::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Conference::setOnHold() const
	{
		callMethod<void>(
			"setOnHold",
			"()V"
		);
	}
	inline void Conference::setStatusHints(android::telecom::StatusHints arg0) const
	{
		callMethod<void>(
			"setStatusHints",
			"(Landroid/telecom/StatusHints;)V",
			arg0.object()
		);
	}
	inline void Conference::setVideoProvider(android::telecom::Connection arg0, android::telecom::Connection_VideoProvider arg1) const
	{
		callMethod<void>(
			"setVideoProvider",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection$VideoProvider;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Conference::setVideoState(android::telecom::Connection arg0, jint arg1) const
	{
		callMethod<void>(
			"setVideoState",
			"(Landroid/telecom/Connection;I)V",
			arg0.object(),
			arg1
		);
	}
	inline JString Conference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telecom

// Base class headers
#include "./Conferenceable.hpp"

