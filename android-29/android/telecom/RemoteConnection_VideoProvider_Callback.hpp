#pragma once

#include "../../JObject.hpp"

namespace android::telecom
{
	class RemoteConnection_VideoProvider;
}
namespace android::telecom
{
	class VideoProfile;
}
namespace android::telecom
{
	class VideoProfile_CameraCapabilities;
}

namespace android::telecom
{
	class RemoteConnection_VideoProvider_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteConnection_VideoProvider_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConnection_VideoProvider_Callback(QJniObject obj);
		
		// Constructors
		RemoteConnection_VideoProvider_Callback();
		
		// Methods
		void onCallDataUsageChanged(android::telecom::RemoteConnection_VideoProvider arg0, jlong arg1) const;
		void onCallSessionEvent(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1) const;
		void onCameraCapabilitiesChanged(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile_CameraCapabilities arg1) const;
		void onPeerDimensionsChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, jint arg2) const;
		void onSessionModifyRequestReceived(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile arg1) const;
		void onSessionModifyResponseReceived(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, android::telecom::VideoProfile arg2, android::telecom::VideoProfile arg3) const;
		void onVideoQualityChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1) const;
	};
} // namespace android::telecom

