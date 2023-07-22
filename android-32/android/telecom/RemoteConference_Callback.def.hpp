#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class DisconnectCause;
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
	class RemoteConference_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteConference_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConference_Callback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteConference_Callback();
		
		// Methods
		void onConferenceableConnectionsChanged(android::telecom::RemoteConference arg0, JObject arg1) const;
		void onConnectionAdded(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1) const;
		void onConnectionCapabilitiesChanged(android::telecom::RemoteConference arg0, jint arg1) const;
		void onConnectionPropertiesChanged(android::telecom::RemoteConference arg0, jint arg1) const;
		void onConnectionRemoved(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1) const;
		void onDestroyed(android::telecom::RemoteConference arg0) const;
		void onDisconnected(android::telecom::RemoteConference arg0, android::telecom::DisconnectCause arg1) const;
		void onExtrasChanged(android::telecom::RemoteConference arg0, android::os::Bundle arg1) const;
		void onStateChanged(android::telecom::RemoteConference arg0, jint arg1, jint arg2) const;
	};
} // namespace android::telecom

