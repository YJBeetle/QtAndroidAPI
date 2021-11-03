#pragma once

#include "../../JObject.hpp"

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

namespace android::hardware
{
	class Camera : public JObject
	{
	public:
		// Fields
		static jstring ACTION_NEW_PICTURE();
		static jstring ACTION_NEW_VIDEO();
		static jint CAMERA_ERROR_EVICTED();
		static jint CAMERA_ERROR_SERVER_DIED();
		static jint CAMERA_ERROR_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Camera(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void getCameraInfo(jint arg0, android::hardware::Camera_CameraInfo arg1);
		static jint getNumberOfCameras();
		static android::hardware::Camera open();
		static android::hardware::Camera open(jint arg0);
		void addCallbackBuffer(jbyteArray arg0);
		void autoFocus(JObject arg0);
		void cancelAutoFocus();
		jboolean enableShutterSound(jboolean arg0);
		android::hardware::Camera_Parameters getParameters();
		void lock();
		void reconnect();
		void release();
		void setAutoFocusMoveCallback(JObject arg0);
		void setDisplayOrientation(jint arg0);
		void setErrorCallback(JObject arg0);
		void setFaceDetectionListener(JObject arg0);
		void setOneShotPreviewCallback(JObject arg0);
		void setParameters(android::hardware::Camera_Parameters arg0);
		void setPreviewCallback(JObject arg0);
		void setPreviewCallbackWithBuffer(JObject arg0);
		void setPreviewDisplay(JObject arg0);
		void setPreviewTexture(android::graphics::SurfaceTexture arg0);
		void setZoomChangeListener(JObject arg0);
		void startFaceDetection();
		void startPreview();
		void startSmoothZoom(jint arg0);
		void stopFaceDetection();
		void stopPreview();
		void stopSmoothZoom();
		void takePicture(JObject arg0, JObject arg1, JObject arg2);
		void takePicture(JObject arg0, JObject arg1, JObject arg2, JObject arg3);
		void unlock();
	};
} // namespace android::hardware

