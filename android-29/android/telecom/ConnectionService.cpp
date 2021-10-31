#include "../content/Intent.hpp"
#include "./Conference.hpp"
#include "./Connection.hpp"
#include "./ConnectionRequest.hpp"
#include "./PhoneAccountHandle.hpp"
#include "./RemoteConference.hpp"
#include "./RemoteConnection.hpp"
#include "./ConnectionService.hpp"

namespace android::telecom
{
	// Fields
	jstring ConnectionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.ConnectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ConnectionService::ConnectionService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	ConnectionService::ConnectionService()
		: android::app::Service(
			"android.telecom.ConnectionService",
			"()V"
		) {}
	
	// Methods
	void ConnectionService::addConference(android::telecom::Conference arg0)
	{
		callMethod<void>(
			"addConference",
			"(Landroid/telecom/Conference;)V",
			arg0.object()
		);
	}
	void ConnectionService::addExistingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::Connection arg1)
	{
		callMethod<void>(
			"addExistingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/Connection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::conferenceRemoteConnections(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection arg1)
	{
		callMethod<void>(
			"conferenceRemoteConnections",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::connectionServiceFocusReleased()
	{
		callMethod<void>(
			"connectionServiceFocusReleased",
			"()V"
		);
	}
	android::telecom::RemoteConnection ConnectionService::createRemoteIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return callObjectMethod(
			"createRemoteIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::RemoteConnection ConnectionService::createRemoteOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return callObjectMethod(
			"createRemoteOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass ConnectionService::getAllConferences()
	{
		return callObjectMethod(
			"getAllConferences",
			"()Ljava/util/Collection;"
		);
	}
	__JniBaseClass ConnectionService::getAllConnections()
	{
		return callObjectMethod(
			"getAllConnections",
			"()Ljava/util/Collection;"
		);
	}
	__JniBaseClass ConnectionService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void ConnectionService::onConference(android::telecom::Connection arg0, android::telecom::Connection arg1)
	{
		callMethod<void>(
			"onConference",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onConnectionServiceFocusGained()
	{
		callMethod<void>(
			"onConnectionServiceFocusGained",
			"()V"
		);
	}
	void ConnectionService::onConnectionServiceFocusLost()
	{
		callMethod<void>(
			"onConnectionServiceFocusLost",
			"()V"
		);
	}
	android::telecom::Connection ConnectionService::onCreateIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return callObjectMethod(
			"onCreateIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onCreateIncomingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		callMethod<void>(
			"onCreateIncomingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Connection ConnectionService::onCreateIncomingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return callObjectMethod(
			"onCreateIncomingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Connection ConnectionService::onCreateOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return callObjectMethod(
			"onCreateOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onCreateOutgoingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		callMethod<void>(
			"onCreateOutgoingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::telecom::Connection ConnectionService::onCreateOutgoingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return callObjectMethod(
			"onCreateOutgoingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.object(),
			arg1.object()
		);
	}
	void ConnectionService::onHandoverFailed(android::telecom::ConnectionRequest arg0, jint arg1)
	{
		callMethod<void>(
			"onHandoverFailed",
			"(Landroid/telecom/ConnectionRequest;I)V",
			arg0.object(),
			arg1
		);
	}
	void ConnectionService::onRemoteConferenceAdded(android::telecom::RemoteConference arg0)
	{
		callMethod<void>(
			"onRemoteConferenceAdded",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.object()
		);
	}
	void ConnectionService::onRemoteExistingConnectionAdded(android::telecom::RemoteConnection arg0)
	{
		callMethod<void>(
			"onRemoteExistingConnectionAdded",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.object()
		);
	}
	jboolean ConnectionService::onUnbind(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
} // namespace android::telecom

