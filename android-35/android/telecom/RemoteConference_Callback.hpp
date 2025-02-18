#pragma once

#include "../os/Bundle.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "./RemoteConference.def.hpp"
#include "./RemoteConnection.def.hpp"
#include "./RemoteConference_Callback.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	inline RemoteConference_Callback::RemoteConference_Callback()
		: JObject(
			"android.telecom.RemoteConference$Callback",
			"()V"
		) {}
	
	// Methods
	inline void RemoteConference_Callback::onConferenceableConnectionsChanged(android::telecom::RemoteConference arg0, JObject arg1) const
	{
		callMethod<void>(
			"onConferenceableConnectionsChanged",
			"(Landroid/telecom/RemoteConference;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConference_Callback::onConnectionAdded(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1) const
	{
		callMethod<void>(
			"onConnectionAdded",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/RemoteConnection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConference_Callback::onConnectionCapabilitiesChanged(android::telecom::RemoteConference arg0, jint arg1) const
	{
		callMethod<void>(
			"onConnectionCapabilitiesChanged",
			"(Landroid/telecom/RemoteConference;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConference_Callback::onConnectionPropertiesChanged(android::telecom::RemoteConference arg0, jint arg1) const
	{
		callMethod<void>(
			"onConnectionPropertiesChanged",
			"(Landroid/telecom/RemoteConference;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConference_Callback::onConnectionRemoved(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1) const
	{
		callMethod<void>(
			"onConnectionRemoved",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/RemoteConnection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConference_Callback::onDestroyed(android::telecom::RemoteConference arg0) const
	{
		callMethod<void>(
			"onDestroyed",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.object()
		);
	}
	inline void RemoteConference_Callback::onDisconnected(android::telecom::RemoteConference arg0, android::telecom::DisconnectCause arg1) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Landroid/telecom/RemoteConference;Landroid/telecom/DisconnectCause;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConference_Callback::onExtrasChanged(android::telecom::RemoteConference arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/telecom/RemoteConference;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConference_Callback::onStateChanged(android::telecom::RemoteConference arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/RemoteConference;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
