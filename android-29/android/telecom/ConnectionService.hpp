#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::telecom
{
	class Conference;
}
namespace android::telecom
{
	class Connection;
}
namespace android::telecom
{
	class ConnectionRequest;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
namespace android::telecom
{
	class RemoteConference;
}
namespace android::telecom
{
	class RemoteConnection;
}

namespace android::telecom
{
	class ConnectionService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionService(QAndroidJniObject obj);
		
		// Constructors
		ConnectionService();
		
		// Methods
		void addConference(android::telecom::Conference arg0);
		void addExistingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::Connection arg1);
		void conferenceRemoteConnections(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection arg1);
		void connectionServiceFocusReleased();
		QAndroidJniObject createRemoteIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		QAndroidJniObject createRemoteOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		QAndroidJniObject getAllConferences();
		QAndroidJniObject getAllConnections();
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onConference(android::telecom::Connection arg0, android::telecom::Connection arg1);
		void onConnectionServiceFocusGained();
		void onConnectionServiceFocusLost();
		QAndroidJniObject onCreateIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		void onCreateIncomingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		QAndroidJniObject onCreateIncomingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		QAndroidJniObject onCreateOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		void onCreateOutgoingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		QAndroidJniObject onCreateOutgoingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1);
		void onHandoverFailed(android::telecom::ConnectionRequest arg0, jint arg1);
		void onRemoteConferenceAdded(android::telecom::RemoteConference arg0);
		void onRemoteExistingConnectionAdded(android::telecom::RemoteConnection arg0);
		jboolean onUnbind(android::content::Intent arg0);
	};
} // namespace android::telecom

