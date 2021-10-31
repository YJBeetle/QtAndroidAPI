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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Conference(const char *className, const char *sig, Ts...agv) : android::telecom::Conferenceable(className, sig, std::forward<Ts>(agv)...) {}
		Conference(QAndroidJniObject obj);
		
		// Constructors
		Conference(android::telecom::PhoneAccountHandle arg0);
		
		// Methods
		static android::telecom::Conference createFailedConference(android::telecom::DisconnectCause arg0, android::telecom::PhoneAccountHandle arg1);
		jboolean addConnection(android::telecom::Connection arg0);
		void destroy();
		android::telecom::CallAudioState getCallAudioState();
		__JniBaseClass getConferenceableConnections();
		jint getConnectionCapabilities();
		jint getConnectionProperties();
		jlong getConnectionStartElapsedRealtimeMillis();
		jlong getConnectionTime();
		__JniBaseClass getConnections();
		android::telecom::DisconnectCause getDisconnectCause();
		android::os::Bundle getExtras();
		android::telecom::PhoneAccountHandle getPhoneAccountHandle();
		jint getState();
		android::telecom::StatusHints getStatusHints();
		android::telecom::Connection_VideoProvider getVideoProvider();
		jint getVideoState();
		jboolean isRingbackRequested();
		void onAddConferenceParticipants(__JniBaseClass arg0);
		void onAnswer(jint arg0);
		void onCallAudioStateChanged(android::telecom::CallAudioState arg0);
		void onConnectionAdded(android::telecom::Connection arg0);
		void onDisconnect();
		void onExtrasChanged(android::os::Bundle arg0);
		void onHold();
		void onMerge();
		void onMerge(android::telecom::Connection arg0);
		void onPlayDtmfTone(jchar arg0);
		void onReject();
		void onSeparate(android::telecom::Connection arg0);
		void onStopDtmfTone();
		void onSwap();
		void onUnhold();
		void putExtras(android::os::Bundle arg0);
		void removeConnection(android::telecom::Connection arg0);
		void removeExtras(jarray arg0);
		void removeExtras(__JniBaseClass arg0);
		void sendConferenceEvent(jstring arg0, android::os::Bundle arg1);
		void setActive();
		void setConferenceableConnections(__JniBaseClass arg0);
		void setConnectionCapabilities(jint arg0);
		void setConnectionProperties(jint arg0);
		void setConnectionStartElapsedRealTime(jlong arg0);
		void setConnectionStartElapsedRealtimeMillis(jlong arg0);
		void setConnectionTime(jlong arg0);
		void setDialing();
		void setDisconnected(android::telecom::DisconnectCause arg0);
		void setExtras(android::os::Bundle arg0);
		void setOnHold();
		void setRingbackRequested(jboolean arg0);
		void setRinging();
		void setStatusHints(android::telecom::StatusHints arg0);
		void setVideoProvider(android::telecom::Connection arg0, android::telecom::Connection_VideoProvider arg1);
		void setVideoState(android::telecom::Connection arg0, jint arg1);
		jstring toString();
	};
} // namespace android::telecom

