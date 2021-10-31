#pragma once

#include "../../__JniBaseClass.hpp"

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
	class InCallService_VideoCall_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InCallService_VideoCall_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InCallService_VideoCall_Callback(QJniObject obj);
		
		// Constructors
		InCallService_VideoCall_Callback();
		
		// Methods
		void onCallDataUsageChanged(jlong arg0);
		void onCallSessionEvent(jint arg0);
		void onCameraCapabilitiesChanged(android::telecom::VideoProfile_CameraCapabilities arg0);
		void onPeerDimensionsChanged(jint arg0, jint arg1);
		void onSessionModifyRequestReceived(android::telecom::VideoProfile arg0);
		void onSessionModifyResponseReceived(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2);
		void onVideoQualityChanged(jint arg0);
	};
} // namespace android::telecom

