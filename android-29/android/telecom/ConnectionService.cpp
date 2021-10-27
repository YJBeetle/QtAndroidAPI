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
	
	ConnectionService::ConnectionService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConnectionService::ConnectionService()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.ConnectionService",
			"()V"
		);
	}
	
	// Methods
	void ConnectionService::addConference(android::telecom::Conference arg0)
	{
		__thiz.callMethod<void>(
			"addConference",
			"(Landroid/telecom/Conference;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectionService::addExistingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::Connection arg1)
	{
		__thiz.callMethod<void>(
			"addExistingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/Connection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectionService::conferenceRemoteConnections(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection arg1)
	{
		__thiz.callMethod<void>(
			"conferenceRemoteConnections",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectionService::connectionServiceFocusReleased()
	{
		__thiz.callMethod<void>(
			"connectionServiceFocusReleased",
			"()V"
		);
	}
	QAndroidJniObject ConnectionService::createRemoteIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"createRemoteIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectionService::createRemoteOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"createRemoteOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectionService::getAllConferences()
	{
		return __thiz.callObjectMethod(
			"getAllConferences",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject ConnectionService::getAllConnections()
	{
		return __thiz.callObjectMethod(
			"getAllConnections",
			"()Ljava/util/Collection;"
		);
	}
	QAndroidJniObject ConnectionService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void ConnectionService::onConference(android::telecom::Connection arg0, android::telecom::Connection arg1)
	{
		__thiz.callMethod<void>(
			"onConference",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectionService::onConnectionServiceFocusGained()
	{
		__thiz.callMethod<void>(
			"onConnectionServiceFocusGained",
			"()V"
		);
	}
	void ConnectionService::onConnectionServiceFocusLost()
	{
		__thiz.callMethod<void>(
			"onConnectionServiceFocusLost",
			"()V"
		);
	}
	QAndroidJniObject ConnectionService::onCreateIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectionService::onCreateIncomingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		__thiz.callMethod<void>(
			"onCreateIncomingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectionService::onCreateIncomingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateIncomingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectionService::onCreateOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectionService::onCreateOutgoingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		__thiz.callMethod<void>(
			"onCreateOutgoingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ConnectionService::onCreateOutgoingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateOutgoingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ConnectionService::onHandoverFailed(android::telecom::ConnectionRequest arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onHandoverFailed",
			"(Landroid/telecom/ConnectionRequest;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ConnectionService::onRemoteConferenceAdded(android::telecom::RemoteConference arg0)
	{
		__thiz.callMethod<void>(
			"onRemoteConferenceAdded",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.__jniObject().object()
		);
	}
	void ConnectionService::onRemoteExistingConnectionAdded(android::telecom::RemoteConnection arg0)
	{
		__thiz.callMethod<void>(
			"onRemoteExistingConnectionAdded",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ConnectionService::onUnbind(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telecom

