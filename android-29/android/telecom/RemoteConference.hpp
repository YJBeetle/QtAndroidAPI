#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::telecom
{
	class CallAudioState;
}
namespace android::telecom
{
	class DisconnectCause;
}
namespace android::telecom
{
	class RemoteConference_Callback;
}
namespace android::telecom
{
	class RemoteConnection;
}

namespace android::telecom
{
	class RemoteConference : public __JniBaseClass
	{
	public:
		// Fields
		
		RemoteConference(QAndroidJniObject obj);
		// Constructors
		RemoteConference() = default;
		
		// Methods
		void disconnect();
		QAndroidJniObject getConferenceableConnections();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		QAndroidJniObject getConnections();
		QAndroidJniObject getDisconnectCause();
		QAndroidJniObject getExtras();
		jint getState();
		void hold();
		void merge();
		void playDtmfTone(jchar arg0);
		void registerCallback(android::telecom::RemoteConference_Callback arg0);
		void registerCallback(android::telecom::RemoteConference_Callback arg0, android::os::Handler arg1);
		void separate(android::telecom::RemoteConnection arg0);
		void setCallAudioState(android::telecom::CallAudioState arg0);
		void stopDtmfTone();
		void swap();
		void unhold();
		void unregisterCallback(android::telecom::RemoteConference_Callback arg0);
	};
} // namespace android::telecom

