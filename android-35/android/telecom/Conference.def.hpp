#pragma once

#include "./Conferenceable.def.hpp"

class JArray;
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
	class CallEndpoint;
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
class JString;

namespace android::telecom
{
	class Conference : public android::telecom::Conferenceable
	{
	public:
		// Fields
		static jlong CONNECT_TIME_NOT_SPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit Conference(const char *className, const char *sig, Ts...agv) : android::telecom::Conferenceable(className, sig, std::forward<Ts>(agv)...) {}
		Conference(QJniObject obj) : android::telecom::Conferenceable(obj) {}
		
		// Constructors
		Conference(android::telecom::PhoneAccountHandle arg0);
		
		// Methods
		static android::telecom::Conference createFailedConference(android::telecom::DisconnectCause arg0, android::telecom::PhoneAccountHandle arg1);
		jboolean addConnection(android::telecom::Connection arg0) const;
		void destroy() const;
		android::telecom::CallAudioState getCallAudioState() const;
		JObject getConferenceableConnections() const;
		jint getConnectionCapabilities() const;
		jint getConnectionProperties() const;
		jlong getConnectionStartElapsedRealtimeMillis() const;
		jlong getConnectionTime() const;
		JObject getConnections() const;
		android::telecom::CallEndpoint getCurrentCallEndpoint() const;
		android::telecom::DisconnectCause getDisconnectCause() const;
		android::os::Bundle getExtras() const;
		android::telecom::PhoneAccountHandle getPhoneAccountHandle() const;
		jint getState() const;
		android::telecom::StatusHints getStatusHints() const;
		android::telecom::Connection_VideoProvider getVideoProvider() const;
		jint getVideoState() const;
		jboolean isRingbackRequested() const;
		void onAddConferenceParticipants(JObject arg0) const;
		void onAnswer(jint arg0) const;
		void onAvailableCallEndpointsChanged(JObject arg0) const;
		void onCallAudioStateChanged(android::telecom::CallAudioState arg0) const;
		void onCallEndpointChanged(android::telecom::CallEndpoint arg0) const;
		void onConnectionAdded(android::telecom::Connection arg0) const;
		void onDisconnect() const;
		void onExtrasChanged(android::os::Bundle arg0) const;
		void onHold() const;
		void onMerge() const;
		void onMerge(android::telecom::Connection arg0) const;
		void onMuteStateChanged(jboolean arg0) const;
		void onPlayDtmfTone(jchar arg0) const;
		void onReject() const;
		void onSeparate(android::telecom::Connection arg0) const;
		void onStopDtmfTone() const;
		void onSwap() const;
		void onUnhold() const;
		void putExtras(android::os::Bundle arg0) const;
		void removeConnection(android::telecom::Connection arg0) const;
		void removeExtras(JArray arg0) const;
		void removeExtras(JObject arg0) const;
		void sendConferenceEvent(JString arg0, android::os::Bundle arg1) const;
		void setActive() const;
		void setConferenceableConnections(JObject arg0) const;
		void setConnectionCapabilities(jint arg0) const;
		void setConnectionProperties(jint arg0) const;
		void setConnectionStartElapsedRealTime(jlong arg0) const;
		void setConnectionStartElapsedRealtimeMillis(jlong arg0) const;
		void setConnectionTime(jlong arg0) const;
		void setDialing() const;
		void setDisconnected(android::telecom::DisconnectCause arg0) const;
		void setExtras(android::os::Bundle arg0) const;
		void setOnHold() const;
		void setRingbackRequested(jboolean arg0) const;
		void setRinging() const;
		void setStatusHints(android::telecom::StatusHints arg0) const;
		void setVideoProvider(android::telecom::Connection arg0, android::telecom::Connection_VideoProvider arg1) const;
		void setVideoState(android::telecom::Connection arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace android::telecom

