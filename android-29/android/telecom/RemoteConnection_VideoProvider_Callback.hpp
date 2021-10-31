#pragma once

#include "../../__JniBaseClass.hpp"

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
	class RemoteConnection_VideoProvider_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteConnection_VideoProvider_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConnection_VideoProvider_Callback(QAndroidJniObject obj);
		
		// Constructors
		RemoteConnection_VideoProvider_Callback();
		
		// Methods
		void onCallDataUsageChanged(android::telecom::RemoteConnection_VideoProvider arg0, jlong arg1);
		void onCallSessionEvent(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1);
		void onCameraCapabilitiesChanged(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile_CameraCapabilities arg1);
		void onPeerDimensionsChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, jint arg2);
		void onSessionModifyRequestReceived(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile arg1);
		void onSessionModifyResponseReceived(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, android::telecom::VideoProfile arg2, android::telecom::VideoProfile arg3);
		void onVideoQualityChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1);
	};
} // namespace android::telecom

