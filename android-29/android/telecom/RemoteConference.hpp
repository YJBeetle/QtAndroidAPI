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
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteConference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConference(QJniObject obj);
		
		// Constructors
		
		// Methods
		void disconnect() const;
		JObject getConferenceableConnections() const;
		jint getConnectionCapabilities() const;
		jint getConnectionProperties() const;
		JObject getConnections() const;
		android::telecom::DisconnectCause getDisconnectCause() const;
		android::os::Bundle getExtras() const;
		jint getState() const;
		void hold() const;
		void merge() const;
		void playDtmfTone(jchar arg0) const;
		void registerCallback(android::telecom::RemoteConference_Callback arg0) const;
		void registerCallback(android::telecom::RemoteConference_Callback arg0, android::os::Handler arg1) const;
		void separate(android::telecom::RemoteConnection arg0) const;
		void setCallAudioState(android::telecom::CallAudioState arg0) const;
		void stopDtmfTone() const;
		void swap() const;
		void unhold() const;
		void unregisterCallback(android::telecom::RemoteConference_Callback arg0) const;
	};
} // namespace android::telecom

