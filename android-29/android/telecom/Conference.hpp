#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Conferenceable.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::telecom
{
	class CallAudioState;
}
namespace android::telecom
{
	class Connection;
}
namespace android::telecom
{
	class Connection_VideoProvider;
}
namespace android::telecom
{
	class DisconnectCause;
}
namespace android::telecom
{
	class PhoneAccountHandle;
}
namespace android::telecom
{
	class StatusHints;
}

namespace android::telecom
{
	class Conference : public android::telecom::Conferenceable
	{
	public:
		// Fields
		static jlong CONNECT_TIME_NOT_SPECIFIED();
		
		Conference(QAndroidJniObject obj);
		// Constructors
		Conference(android::telecom::PhoneAccountHandle arg0);
		Conference() = default;
		
		// Methods
		jboolean addConnection(android::telecom::Connection arg0);
		void destroy();
		QAndroidJniObject getCallAudioState();
		QAndroidJniObject getConferenceableConnections();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		jlong getConnectionTime();
		QAndroidJniObject getConnections();
		QAndroidJniObject getDisconnectCause();
		QAndroidJniObject getExtras();
		QAndroidJniObject getPhoneAccountHandle();
		jint getState();
		QAndroidJniObject getStatusHints();
		QAndroidJniObject getVideoProvider();
		jint getVideoState();
		void onCallAudioStateChanged(android::telecom::CallAudioState arg0);
		void onConnectionAdded(android::telecom::Connection arg0);
		void onDisconnect();
		void onExtrasChanged(android::os::Bundle arg0);
		void onHold();
		void onMerge();
		void onMerge(android::telecom::Connection arg0);
		void onPlayDtmfTone(jchar arg0);
		void onSeparate(android::telecom::Connection arg0);
		void onStopDtmfTone();
		void onSwap();
		void onUnhold();
		void putExtras(android::os::Bundle arg0);
		void removeConnection(android::telecom::Connection arg0);
		void removeExtras(jarray arg0);
		void removeExtras(__JniBaseClass arg0);
		void setActive();
		void setConferenceableConnections(__JniBaseClass arg0);
		void setConnectionCapabilities(jint arg0);
		void setConnectionProperties(jint arg0);
		void setConnectionStartElapsedRealTime(jlong arg0);
		void setConnectionTime(jlong arg0);
		void setDialing();
		void setDisconnected(android::telecom::DisconnectCause arg0);
		void setExtras(android::os::Bundle arg0);
		void setOnHold();
		void setStatusHints(android::telecom::StatusHints arg0);
		void setVideoProvider(android::telecom::Connection arg0, android::telecom::Connection_VideoProvider arg1);
		void setVideoState(android::telecom::Connection arg0, jint arg1);
		jstring toString();
	};
} // namespace android::telecom

