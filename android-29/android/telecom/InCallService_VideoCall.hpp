#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::telecom
{
	class InCallService_VideoCall_Callback;
}
namespace android::telecom
{
	class VideoProfile;
}
namespace android::view
{
	class Surface;
}

namespace android::telecom
{
	class InCallService_VideoCall : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InCallService_VideoCall(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InCallService_VideoCall(QAndroidJniObject obj);
		
		// Constructors
		InCallService_VideoCall();
		
		// Methods
		void registerCallback(android::telecom::InCallService_VideoCall_Callback arg0);
		void registerCallback(android::telecom::InCallService_VideoCall_Callback arg0, android::os::Handler arg1);
		void requestCallDataUsage();
		void requestCameraCapabilities();
		void sendSessionModifyRequest(android::telecom::VideoProfile arg0);
		void sendSessionModifyResponse(android::telecom::VideoProfile arg0);
		void setCamera(jstring arg0);
		void setDeviceOrientation(jint arg0);
		void setDisplaySurface(android::view::Surface arg0);
		void setPauseImage(android::net::Uri arg0);
		void setPreviewSurface(android::view::Surface arg0);
		void setZoom(jfloat arg0);
		void unregisterCallback(android::telecom::InCallService_VideoCall_Callback arg0);
	};
} // namespace android::telecom

