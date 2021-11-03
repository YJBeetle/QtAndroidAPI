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
class JString;

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
		void changeCameraCapabilities(android::telecom::VideoProfile_CameraCapabilities arg0) const;
		void changePeerDimensions(jint arg0, jint arg1) const;
		void changeVideoQuality(jint arg0) const;
		void handleCallSessionEvent(jint arg0) const;
		void onRequestCameraCapabilities() const;
		void onRequestConnectionDataUsage() const;
		void onSendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1) const;
		void onSendSessionModifyResponse(android::telecom::VideoProfile arg0) const;
		void onSetCamera(JString arg0) const;
		void onSetDeviceOrientation(jint arg0) const;
		void onSetDisplaySurface(android::view::Surface arg0) const;
		void onSetPauseImage(android::net::Uri arg0) const;
		void onSetPreviewSurface(android::view::Surface arg0) const;
		void onSetZoom(jfloat arg0) const;
		void receiveSessionModifyRequest(android::telecom::VideoProfile arg0) const;
		void receiveSessionModifyResponse(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2) const;
		void setCallDataUsage(jlong arg0) const;
	};
} // namespace android::telecom

