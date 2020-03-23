#pragma once

#ifndef ANDROID_TELECOM_CONNECTIONSERVICE
#define ANDROID_TELECOM_CONNECTIONSERVICE

#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::telecom
{
	class RemoteConnection;
}
namespace __jni_impl::android::telecom
{
	class PhoneAccountHandle;
}
namespace __jni_impl::android::telecom
{
	class ConnectionRequest;
}
namespace __jni_impl::android::telecom
{
	class Conference;
}
namespace __jni_impl::android::telecom
{
	class Connection;
}
namespace __jni_impl::android::telecom
{
	class RemoteConference;
}

namespace __jni_impl::android::telecom
{
	class ConnectionService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		jboolean onUnbind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject createRemoteIncomingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		QAndroidJniObject createRemoteOutgoingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		void conferenceRemoteConnections(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::RemoteConnection arg1);
		void addConference(__jni_impl::android::telecom::Conference arg0);
		void addExistingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::Connection arg1);
		void connectionServiceFocusReleased();
		QAndroidJniObject getAllConnections();
		QAndroidJniObject getAllConferences();
		QAndroidJniObject onCreateIncomingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		void onCreateIncomingConnectionFailed(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		void onCreateOutgoingConnectionFailed(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		QAndroidJniObject onCreateOutgoingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		QAndroidJniObject onCreateOutgoingHandoverConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		QAndroidJniObject onCreateIncomingHandoverConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1);
		void onHandoverFailed(__jni_impl::android::telecom::ConnectionRequest arg0, jint arg1);
		void onConference(__jni_impl::android::telecom::Connection arg0, __jni_impl::android::telecom::Connection arg1);
		void onRemoteConferenceAdded(__jni_impl::android::telecom::RemoteConference arg0);
		void onRemoteExistingConnectionAdded(__jni_impl::android::telecom::RemoteConnection arg0);
		void onConnectionServiceFocusLost();
		void onConnectionServiceFocusGained();
	};
} // namespace __jni_impl::android::telecom

#include "../content/Intent.hpp"
#include "RemoteConnection.hpp"
#include "PhoneAccountHandle.hpp"
#include "ConnectionRequest.hpp"
#include "Conference.hpp"
#include "Connection.hpp"
#include "RemoteConference.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject ConnectionService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.ConnectionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ConnectionService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.ConnectionService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ConnectionService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	jboolean ConnectionService::onUnbind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ConnectionService::createRemoteIncomingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"createRemoteIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConnectionService::createRemoteOutgoingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"createRemoteOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/RemoteConnection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ConnectionService::conferenceRemoteConnections(__jni_impl::android::telecom::RemoteConnection arg0, __jni_impl::android::telecom::RemoteConnection arg1)
	{
		__thiz.callMethod<void>(
			"conferenceRemoteConnections",
			"(Landroid/telecom/RemoteConnection;Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ConnectionService::addConference(__jni_impl::android::telecom::Conference arg0)
	{
		__thiz.callMethod<void>(
			"addConference",
			"(Landroid/telecom/Conference;)V",
			arg0.__jniObject().object());
	}
	void ConnectionService::addExistingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::Connection arg1)
	{
		__thiz.callMethod<void>(
			"addExistingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/Connection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ConnectionService::connectionServiceFocusReleased()
	{
		__thiz.callMethod<void>(
			"connectionServiceFocusReleased",
			"()V");
	}
	QAndroidJniObject ConnectionService::getAllConnections()
	{
		return __thiz.callObjectMethod(
			"getAllConnections",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject ConnectionService::getAllConferences()
	{
		return __thiz.callObjectMethod(
			"getAllConferences",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject ConnectionService::onCreateIncomingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateIncomingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ConnectionService::onCreateIncomingConnectionFailed(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		__thiz.callMethod<void>(
			"onCreateIncomingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ConnectionService::onCreateOutgoingConnectionFailed(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		__thiz.callMethod<void>(
			"onCreateOutgoingConnectionFailed",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConnectionService::onCreateOutgoingConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateOutgoingConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConnectionService::onCreateOutgoingHandoverConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateOutgoingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ConnectionService::onCreateIncomingHandoverConnection(__jni_impl::android::telecom::PhoneAccountHandle arg0, __jni_impl::android::telecom::ConnectionRequest arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateIncomingHandoverConnection",
			"(Landroid/telecom/PhoneAccountHandle;Landroid/telecom/ConnectionRequest;)Landroid/telecom/Connection;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ConnectionService::onHandoverFailed(__jni_impl::android::telecom::ConnectionRequest arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onHandoverFailed",
			"(Landroid/telecom/ConnectionRequest;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ConnectionService::onConference(__jni_impl::android::telecom::Connection arg0, __jni_impl::android::telecom::Connection arg1)
	{
		__thiz.callMethod<void>(
			"onConference",
			"(Landroid/telecom/Connection;Landroid/telecom/Connection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void ConnectionService::onRemoteConferenceAdded(__jni_impl::android::telecom::RemoteConference arg0)
	{
		__thiz.callMethod<void>(
			"onRemoteConferenceAdded",
			"(Landroid/telecom/RemoteConference;)V",
			arg0.__jniObject().object());
	}
	void ConnectionService::onRemoteExistingConnectionAdded(__jni_impl::android::telecom::RemoteConnection arg0)
	{
		__thiz.callMethod<void>(
			"onRemoteExistingConnectionAdded",
			"(Landroid/telecom/RemoteConnection;)V",
			arg0.__jniObject().object());
	}
	void ConnectionService::onConnectionServiceFocusLost()
	{
		__thiz.callMethod<void>(
			"onConnectionServiceFocusLost",
			"()V");
	}
	void ConnectionService::onConnectionServiceFocusGained()
	{
		__thiz.callMethod<void>(
			"onConnectionServiceFocusGained",
			"()V");
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class ConnectionService : public __jni_impl::android::telecom::ConnectionService
	{
	public:
		ConnectionService(QAndroidJniObject obj) { __thiz = obj; }
		ConnectionService()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CONNECTIONSERVICE

