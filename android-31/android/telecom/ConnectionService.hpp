#pragma once

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
class JString;

namespace android::telecom
{
	class ConnectionService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectionService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionService(QJniObject obj);
		
		// Constructors
		ConnectionService();
		
		// Methods
		void addConference(android::telecom::Conference arg0) const;
		void addExistingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::Connection arg1) const;
		void conferenceRemoteConnections(android::telecom::RemoteConnection arg0, android::telecom::RemoteConnection arg1) const;
		void connectionServiceFocusReleased() const;
		android::telecom::RemoteConference createRemoteIncomingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::RemoteConnection createRemoteIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::RemoteConference createRemoteOutgoingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::RemoteConnection createRemoteOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		JObject getAllConferences() const;
		JObject getAllConnections() const;
		JObject onBind(android::content::Intent arg0) const;
		void onConference(android::telecom::Connection arg0, android::telecom::Connection arg1) const;
		void onConnectionServiceFocusGained() const;
		void onConnectionServiceFocusLost() const;
		android::telecom::Conference onCreateIncomingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		void onCreateIncomingConferenceFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::Connection onCreateIncomingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		void onCreateIncomingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::Connection onCreateIncomingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::Conference onCreateOutgoingConference(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		void onCreateOutgoingConferenceFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::Connection onCreateOutgoingConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		void onCreateOutgoingConnectionFailed(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		android::telecom::Connection onCreateOutgoingHandoverConnection(android::telecom::PhoneAccountHandle arg0, android::telecom::ConnectionRequest arg1) const;
		void onHandoverFailed(android::telecom::ConnectionRequest arg0, jint arg1) const;
		void onRemoteConferenceAdded(android::telecom::RemoteConference arg0) const;
		void onRemoteExistingConnectionAdded(android::telecom::RemoteConnection arg0) const;
		jboolean onUnbind(android::content::Intent arg0) const;
	};
} // namespace android::telecom

