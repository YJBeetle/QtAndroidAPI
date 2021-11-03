#pragma once

#include "../../JObject.hpp"

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
	class RemoteConference : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteConference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConference(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void disconnect();
		JObject getConferenceableConnections();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		JObject getConnections();
		android::telecom::DisconnectCause getDisconnectCause();
		android::os::Bundle getExtras();
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

