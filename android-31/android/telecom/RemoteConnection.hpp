#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::telecom
{
	class RemoteConnection : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConnection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void abort() const;
		void addConferenceParticipants(JObject arg0) const;
		void answer() const;
		void disconnect() const;
		android::net::Uri getAddress() const;
		jint getAddressPresentation() const;
		JString getCallerDisplayName() const;
		jint getCallerDisplayNamePresentation() const;
		android::telecom::RemoteConference getConference() const;
		JObject getConferenceableConnections() const;
		jint getConnectionCapabilities() const;
		jint getConnectionProperties() const;
		android::telecom::DisconnectCause getDisconnectCause() const;
		android::os::Bundle getExtras() const;
		jint getState() const;
		android::telecom::StatusHints getStatusHints() const;
		android::telecom::RemoteConnection_VideoProvider getVideoProvider() const;
		jint getVideoState() const;
		void hold() const;
		jboolean isRingbackRequested() const;
		jboolean isVoipAudioMode() const;
		void playDtmfTone(jchar arg0) const;
		void postDialContinue(jboolean arg0) const;
		void pullExternalCall() const;
		void registerCallback(android::telecom::RemoteConnection_Callback arg0) const;
		void registerCallback(android::telecom::RemoteConnection_Callback arg0, android::os::Handler arg1) const;
		void reject() const;
		void setCallAudioState(android::telecom::CallAudioState arg0) const;
		void stopDtmfTone() const;
		void unhold() const;
		void unregisterCallback(android::telecom::RemoteConnection_Callback arg0) const;
	};
} // namespace android::telecom

