#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::graphics
{
	class SurfaceTexture;
}
namespace android::hardware
{
	class Camera_CameraInfo;
}
namespace android::hardware
{
	class Camera_Parameters;
}
class JString;

namespace android::hardware
{
	class Camera : public JObject
	{
	public:
		// Fields
		static JString ACTION_NEW_PICTURE();
		static JString ACTION_NEW_VIDEO();
		static jint CAMERA_ERROR_EVICTED();
		static jint CAMERA_ERROR_SERVER_DIED();
		static jint CAMERA_ERROR_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit Camera(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void getCameraInfo(jint arg0, android::hardware::Camera_CameraInfo arg1);
		static jint getNumberOfCameras();
		static android::hardware::Camera open();
		static android::hardware::Camera open(jint arg0);
		void addCallbackBuffer(JByteArray arg0) const;
		void autoFocus(JObject arg0) const;
		void cancelAutoFocus() const;
		jboolean enableShutterSound(jboolean arg0) const;
		android::hardware::Camera_Parameters getParameters() const;
		void lock() const;
		void reconnect() const;
		void release() const;
		void setAutoFocusMoveCallback(JObject arg0) const;
		void setDisplayOrientation(jint arg0) const;
		void setErrorCallback(JObject arg0) const;
		void setFaceDetectionListener(JObject arg0) const;
		void setOneShotPreviewCallback(JObject arg0) const;
		void setParameters(android::hardware::Camera_Parameters arg0) const;
		void setPreviewCallback(JObject arg0) const;
		void setPreviewCallbackWithBuffer(JObject arg0) const;
		void setPreviewDisplay(JObject arg0) const;
		void setPreviewTexture(android::graphics::SurfaceTexture arg0) const;
		void setZoomChangeListener(JObject arg0) const;
		void startFaceDetection() const;
		void startPreview() const;
		void startSmoothZoom(jint arg0) const;
		void stopFaceDetection() const;
		void stopPreview() const;
		void stopSmoothZoom() const;
		void takePicture(JObject arg0, JObject arg1, JObject arg2) const;
		void takePicture(JObject arg0, JObject arg1, JObject arg2, JObject arg3) const;
		void unlock() const;
	};
} // namespace android::hardware

