#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./DisconnectCause.def.hpp"
#include "./RemoteConference.def.hpp"
#include "./RemoteConnection.def.hpp"
#include "./RemoteConnection_VideoProvider.def.hpp"
#include "./StatusHints.def.hpp"
#include "../../JString.hpp"
#include "./RemoteConnection_Callback.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	inline RemoteConnection_Callback::RemoteConnection_Callback()
		: JObject(
			"android.telecom.RemoteConnection$Callback",
			"()V"
		) {}
	
	// Methods
	inline void RemoteConnection_Callback::onAddressChanged(android::telecom::RemoteConnection arg0, android::net::Uri arg1, jint arg2) const
	{
		callMethod<void>(
			"onAddressChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/net/Uri;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline void RemoteConnection_Callback::onCallerDisplayNameChanged(android::telecom::RemoteConnection arg0, JString arg1, jint arg2) const
	{
		callMethod<void>(
			"onCallerDisplayNameChanged",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline void RemoteConnection_Callback::onConferenceChanged(android::telecom::RemoteConnection arg0, android::telecom::RemoteConference arg1) const
	{
		callMethod<void>(
			"onConferenceChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConference;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_Callback::onConferenceableConnectionsChanged(android::telecom::RemoteConnection arg0, JObject arg1) const
	{
		callMethod<void>(
			"onConferenceableConnectionsChanged",
			"(Landroid/telecom/RemoteConnection;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_Callback::onConnectionCapabilitiesChanged(android::telecom::RemoteConnection arg0, jint arg1) const
	{
		callMethod<void>(
			"onConnectionCapabilitiesChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_Callback::onConnectionEvent(android::telecom::RemoteConnection arg0, JString arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"onConnectionEvent",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void RemoteConnection_Callback::onConnectionPropertiesChanged(android::telecom::RemoteConnection arg0, jint arg1) const
	{
		callMethod<void>(
			"onConnectionPropertiesChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_Callback::onDestroyed(android::telecom::RemoteConnection arg0) const
	{
		callMethod<void>(
			"onDestroyed",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.object()
		);
	}
	inline void RemoteConnection_Callback::onDisconnected(android::telecom::RemoteConnection arg0, android::telecom::DisconnectCause arg1) const
	{
		callMethod<void>(
			"onDisconnected",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/DisconnectCause;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_Callback::onExtrasChanged(android::telecom::RemoteConnection arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_Callback::onPostDialChar(android::telecom::RemoteConnection arg0, jchar arg1) const
	{
		callMethod<void>(
			"onPostDialChar",
			"(Landroid/telecom/RemoteConnection;C)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_Callback::onPostDialWait(android::telecom::RemoteConnection arg0, JString arg1) const
	{
		callMethod<void>(
			"onPostDialWait",
			"(Landroid/telecom/RemoteConnection;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void RemoteConnection_Callback::onRingbackRequested(android::telecom::RemoteConnection arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onRingbackRequested",
			"(Landroid/telecom/RemoteConnection;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_Callback::onStateChanged(android::telecom::RemoteConnection arg0, jint arg1) const
	{
		callMethod<void>(
			"onStateChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_Callback::onStatusHintsChanged(android::telecom::RemoteConnection arg0, android::telecom::StatusHints arg1) const
	{
		callMethod<void>(
			"onStatusHintsChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/StatusHints;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_Callback::onVideoProviderChanged(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection_VideoProvider arg1) const
	{
		callMethod<void>(
			"onVideoProviderChanged",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection$VideoProvider;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_Callback::onVideoStateChanged(android::telecom::RemoteConnection arg0, jint arg1) const
	{
		callMethod<void>(
			"onVideoStateChanged",
			"(Landroid/telecom/RemoteConnection;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_Callback::onVoipAudioChanged(android::telecom::RemoteConnection arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onVoipAudioChanged",
			"(Landroid/telecom/RemoteConnection;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
