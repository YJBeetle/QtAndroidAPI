#pragma once

#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "./CallAudioState.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "./RemoteConference_Callback.def.hpp"
#include "./RemoteConnection.def.hpp"
#include "./RemoteConference.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RemoteConference::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline JObject RemoteConference::getConferenceableConnections() const
	{
		return callObjectMethod(
			"getConferenceableConnections",
			"()Ljava/util/List;"
		);
	}
	inline jint RemoteConference::getConnectionCapabilities() const
	{
		return callMethod<jint>(
			"getConnectionCapabilities",
			"()I"
		);
	}
	inline jint RemoteConference::getConnectionProperties() const
	{
		return callMethod<jint>(
			"getConnectionProperties",
			"()I"
		);
	}
	inline JObject RemoteConference::getConnections() const
	{
		return callObjectMethod(
			"getConnections",
			"()Ljava/util/List;"
		);
	}
	inline android::telecom::DisconnectCause RemoteConference::getDisconnectCause() const
	{
		return callObjectMethod(
			"getDisconnectCause",
			"()Landroid/telecom/DisconnectCause;"
		);
	}
	inline android::os::Bundle RemoteConference::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint RemoteConference::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline void RemoteConference::hold() const
	{
		callMethod<void>(
			"hold",
			"()V"
		);
	}
	inline void RemoteConference::merge() const
	{
		callMethod<void>(
			"merge",
			"()V"
		);
	}
	inline void RemoteConference::playDtmfTone(jchar arg0) const
	{
		callMethod<void>(
			"playDtmfTone",
			"(C)V",
			arg0
		);
	}
	inline void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.object()
		);
	}
	inline void RemoteConference::registerCallback(android::telecom::RemoteConference_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConference$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConference::separate(android::telecom::RemoteConnection arg0) const
	{
		callMethod<void>(
			"separate",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.object()
		);
	}
	inline void RemoteConference::setCallAudioState(android::telecom::CallAudioState arg0) const
	{
		callMethod<void>(
			"setCallAudioState",
			"(Landroid/telecom/CallAudioState;)V",
			arg0.object()
		);
	}
	inline void RemoteConference::stopDtmfTone() const
	{
		callMethod<void>(
			"stopDtmfTone",
			"()V"
		);
	}
	inline void RemoteConference::swap() const
	{
		callMethod<void>(
			"swap",
			"()V"
		);
	}
	inline void RemoteConference::unhold() const
	{
		callMethod<void>(
			"unhold",
			"()V"
		);
	}
	inline void RemoteConference::unregisterCallback(android::telecom::RemoteConference_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConference$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
