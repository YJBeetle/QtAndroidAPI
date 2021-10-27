#pragma once

#include "../../__JniBaseClass.hpp"

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
	class RemoteConference_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		RemoteConference_Callback(QAndroidJniObject obj);
		// Constructors
		RemoteConference_Callback();
		
		// Methods
		void onConferenceableConnectionsChanged(android::telecom::RemoteConference arg0, __JniBaseClass arg1);
		void onConnectionAdded(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1);
		void onConnectionCapabilitiesChanged(android::telecom::RemoteConference arg0, jint arg1);
		void onConnectionPropertiesChanged(android::telecom::RemoteConference arg0, jint arg1);
		void onConnectionRemoved(android::telecom::RemoteConference arg0, android::telecom::RemoteConnection arg1);
		void onDestroyed(android::telecom::RemoteConference arg0);
		void onDisconnected(android::telecom::RemoteConference arg0, android::telecom::DisconnectCause arg1);
		void onExtrasChanged(android::telecom::RemoteConference arg0, android::os::Bundle arg1);
		void onStateChanged(android::telecom::RemoteConference arg0, jint arg1, jint arg2);
	};
} // namespace android::telecom

