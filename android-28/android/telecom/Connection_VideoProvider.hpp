#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::telecom
{
	class VideoProfile;
}
namespace android::telecom
{
	class VideoProfile_CameraCapabilities;
}
namespace android::view
{
	class Surface;
}

namespace android::telecom
{
	class Connection_VideoProvider : public JObject
	{
	public:
		// Fields
		static jint SESSION_EVENT_CAMERA_FAILURE();
		static jint SESSION_EVENT_CAMERA_PERMISSION_ERROR();
		static jint SESSION_EVENT_CAMERA_READY();
		static jint SESSION_EVENT_RX_PAUSE();
		static jint SESSION_EVENT_RX_RESUME();
		static jint SESSION_EVENT_TX_START();
		static jint SESSION_EVENT_TX_STOP();
		static jint SESSION_MODIFY_REQUEST_FAIL();
		static jint SESSION_MODIFY_REQUEST_INVALID();
		static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE();
		static jint SESSION_MODIFY_REQUEST_SUCCESS();
		static jint SESSION_MODIFY_REQUEST_TIMED_OUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Connection_VideoProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Connection_VideoProvider(QAndroidJniObject obj);
		
		// Constructors
		Connection_VideoProvider();
		
		// Methods
		void changeCameraCapabilities(android::telecom::VideoProfile_CameraCapabilities arg0);
		void changePeerDimensions(jint arg0, jint arg1);
		void changeVideoQuality(jint arg0);
		void handleCallSessionEvent(jint arg0);
		void onRequestCameraCapabilities();
		void onRequestConnectionDataUsage();
		void onSendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1);
		void onSendSessionModifyResponse(android::telecom::VideoProfile arg0);
		void onSetCamera(jstring arg0);
		void onSetDeviceOrientation(jint arg0);
		void onSetDisplaySurface(android::view::Surface arg0);
		void onSetPauseImage(android::net::Uri arg0);
		void onSetPreviewSurface(android::view::Surface arg0);
		void onSetZoom(jfloat arg0);
		void receiveSessionModifyRequest(android::telecom::VideoProfile arg0);
		void receiveSessionModifyResponse(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2);
		void setCallDataUsage(jlong arg0);
	};
} // namespace android::telecom

