#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "./CallAudioState.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "./RemoteConference.def.hpp"
#include "./RemoteConnection_Callback.def.hpp"
#include "./RemoteConnection_VideoProvider.def.hpp"
#include "./StatusHints.def.hpp"
#include "../../JString.hpp"
#include "./RemoteConnection.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RemoteConnection::abort() const
	{
		callMethod<void>(
			"abort",
			"()V"
		);
	}
	inline void RemoteConnection::addConferenceParticipants(JObject arg0) const
	{
		callMethod<void>(
			"addConferenceParticipants",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void RemoteConnection::answer() const
	{
		callMethod<void>(
			"answer",
			"()V"
		);
	}
	inline void RemoteConnection::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline android::net::Uri RemoteConnection::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline jint RemoteConnection::getAddressPresentation() const
	{
		return callMethod<jint>(
			"getAddressPresentation",
			"()I"
		);
	}
	inline JString RemoteConnection::getCallerDisplayName() const
	{
		return callObjectMethod(
			"getCallerDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint RemoteConnection::getCallerDisplayNamePresentation() const
	{
		return callMethod<jint>(
			"getCallerDisplayNamePresentation",
			"()I"
		);
	}
	inline android::telecom::RemoteConference RemoteConnection::getConference() const
	{
		return callObjectMethod(
			"getConference",
			"()Landroid/telecom/RemoteConference;"
		);
	}
	inline JObject RemoteConnection::getConferenceableConnections() const
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	inline jint RemoteConnection::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	inline jint RemoteConnection::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	inline android::telecom::DisconnectCause RemoteConnection::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	inline android::os::Bundle RemoteConnection::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint RemoteConnection::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline android::telecom::StatusHints RemoteConnection::getStatusHints() const
	{
		return callObjectMethod(
			"getStatusHints",
			"()Landroid/telecom/StatusHints;"
		);
	}
	inline android::telecom::RemoteConnection_VideoProvider RemoteConnection::getVideoProvider() const
	{
		return callObjectMethod(
			"getVideoProvider",
			"()Landroid/telecom/RemoteConnection$VideoProvider;"
		);
	}
	inline jint RemoteConnection::getVideoState() const
	{
		return callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	inline void RemoteConnection::hold() const
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	inline jboolean RemoteConnection::isRingbackRequested() const
	{
		return callMethod<jboolean>(
			"isRingbackRequested",
			"()Z"
		);
	}
	inline jboolean RemoteConnection::isVoipAudioMode() const
	{
		return callMethod<jboolean>(
			"isVoipAudioMode",
			"()Z"
		);
	}
	inline void RemoteConnection::playDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	inline void RemoteConnection::postDialContinue(jboolean arg0) const
	{
		callMethod<void>(
			"postDialContinue",
			"(Z)V",
			arg0
		);
	}
	inline void RemoteConnection::pullExternalCall() const
	{
		callMethod<void>(
			"pullExternalCall",
			"()V"
		);
	}
	inline void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.object()
		);
	}
	inline void RemoteConnection::registerCallback(android::telecom::RemoteConnection_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection::reject() const
	{
		callMethod<void>(
			"reject",
			"()V"
		);
	}
	inline void RemoteConnection::setCallAudioState(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	inline void RemoteConnection::stopDtmfTone() const
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	inline void RemoteConnection::unhold() const
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	inline void RemoteConnection::unregisterCallback(android::telecom::RemoteConnection_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
