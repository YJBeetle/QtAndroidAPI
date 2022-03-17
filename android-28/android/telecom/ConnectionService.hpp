#pragma once

#include "../content/Intent.def.hpp"
#include "./Conference.def.hpp"
#include "./Connection.def.hpp"
#include "./ConnectionRequest.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "./RemoteConference.def.hpp"
#include "./RemoteConnection.def.hpp"
#include "../../JString.hpp"
#include "./ConnectionService.def.hpp"

namespace android::telecom
{
	// Fields
	inline JString ConnectionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.telecom.ConnectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline ConnectionService::ConnectionService()
		: android::app::Service(
			"android.telecom.ConnectionService",
			"()V"
		) {}
	
	// Methods
	inline void ConnectionService::addConference(android::telecom::Conference arg0) const
	{
		callMethod<void>(
			"addConference",
			"(Landroid/telecom/Conference;)V",
			arg0.object()
		);
	}
	inline void ConnectionService::addExistingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::Connection arg1) const
	{
		callMethod<void>(
			"addExistingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/Connection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectionService::conferenceRemoteConnections(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection arg1) const
	{
		callMethod<void>(
			"conferenceRemoteConnections",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectionService::connectionServiceFocusReleased() const
	{
		callMethod<void>(
			"connectionServiceFocusReleased",
			"()V"
		);
	}
	inline android::telecom::RemoteConnection ConnectionService::createRemoteIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"createRemoteIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telecom::RemoteConnection ConnectionService::createRemoteOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"createRemoteOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject ConnectionService::getAllConferences() const
	{
		return callObjectMethod(
			"getAllConferences",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject ConnectionService::getAllConnections() const
	{
		return callObjectMethod(
			"getAllConnections",
			"()Ljava/util/Collection;"
		);
	}
	inline JObject ConnectionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void ConnectionService::onConference(android::telecom::Connection arg0, android::telecom::Connection arg1) const
	{
		callMethod<void>(
			"onConference",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectionService::onConnectionServiceFocusGained() const
	{
		callMethod<void>(
			"onConnectionServiceFocusGained",
			"()V"
		);
	}
	inline void ConnectionService::onConnectionServiceFocusLost() const
	{
		callMethod<void>(
			"onConnectionServiceFocusLost",
			"()V"
		);
	}
	inline android::telecom::Connection ConnectionService::onCreateIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectionService::onCreateIncomingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		callMethod<void>(
			"onCreateIncomingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telecom::Connection ConnectionService::onCreateIncomingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateIncomingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telecom::Connection ConnectionService::onCreateOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectionService::onCreateOutgoingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		callMethod<void>(
			"onCreateOutgoingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telecom::Connection ConnectionService::onCreateOutgoingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const
	{
		return callObjectMethod(
			"onCreateOutgoingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ConnectionService::onHandoverFailed(android::telecom::ConnectionRequest arg0, jint arg1) const
	{
		callMethod<void>(
			"onHandoverFailed",
			"(Landroid/telecom/ConnectionRequest;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ConnectionService::onRemoteConferenceAdded(android::telecom::RemoteConference arg0) const
	{
		callMethod<void>(
			"onRemoteConferenceAdded",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.object()
		);
	}
	inline void ConnectionService::onRemoteExistingConnectionAdded(android::telecom::RemoteConnection arg0) const
	{
		callMethod<void>(
			"onRemoteExistingConnectionAdded",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.object()
		);
	}
	inline jboolean ConnectionService::onUnbind(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
} // namespace android::telecom

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
