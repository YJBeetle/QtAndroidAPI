#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
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
	class RemoteConference;
}
namespace android::telecom
{
	class RemoteConnection_Callback;
}
namespace android::telecom
{
	class RemoteConnection_VideoProvider;
}
namespace android::telecom
{
	class StatusHints;
}

namespace android::telecom
{
	class RemoteConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteConnection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConnection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abort();
		void answer();
		void disconnect();
		android::net::Uri getAddress();
		jint getAddressPresentation();
		jstring getCallerDisplayName();
		jint getCallerDisplayNamePresentation();
		android::telecom::RemoteConference getConference();
		__JniBaseClass getConferenceableConnections();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		android::telecom::DisconnectCause getDisconnectCause();
		android::os::Bundle getExtras();
		jint getState();
		android::telecom::StatusHints getStatusHints();
		android::telecom::RemoteConnection_VideoProvider getVideoProvider();
		jint getVideoState();
		void hold();
		jboolean isRingbackRequested();
		jboolean isVoipAudioMode();
		void playDtmfTone(jchar arg0);
		void postDialContinue(jboolean arg0);
		void pullExternalCall();
		void registerCallback(android::telecom::RemoteConnection_Callback arg0);
		void registerCallback(android::telecom::RemoteConnection_Callback arg0, android::os::Handler arg1);
		void reject();
		void setCallAudioState(android::telecom::CallAudioState arg0);
		void stopDtmfTone();
		void unhold();
		void unregisterCallback(android::telecom::RemoteConnection_Callback arg0);
	};
} // namespace android::telecom

