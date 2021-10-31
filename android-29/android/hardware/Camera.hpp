#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Camera : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_NEW_PICTURE();
		static jstring ACTION_NEW_VIDEO();
		static jint CAMERA_ERROR_EVICTED();
		static jint CAMERA_ERROR_SERVER_DIED();
		static jint CAMERA_ERROR_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Camera(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Camera(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void getCameraInfo(jint arg0, android::hardware::Camera_CameraInfo arg1);
		static jint getNumberOfCameras();
		static QAndroidJniObject open();
		static QAndroidJniObject open(jint arg0);
		void addCallbackBuffer(jbyteArray arg0);
		void autoFocus(__JniBaseClass arg0);
		void cancelAutoFocus();
		jboolean enableShutterSound(jboolean arg0);
		QAndroidJniObject getParameters();
		void lock();
		void reconnect();
		void release();
		void setAutoFocusMoveCallback(__JniBaseClass arg0);
		void setDisplayOrientation(jint arg0);
		void setErrorCallback(__JniBaseClass arg0);
		void setFaceDetectionListener(__JniBaseClass arg0);
		void setOneShotPreviewCallback(__JniBaseClass arg0);
		void setParameters(android::hardware::Camera_Parameters arg0);
		void setPreviewCallback(__JniBaseClass arg0);
		void setPreviewCallbackWithBuffer(__JniBaseClass arg0);
		void setPreviewDisplay(__JniBaseClass arg0);
		void setPreviewTexture(android::graphics::SurfaceTexture arg0);
		void setZoomChangeListener(__JniBaseClass arg0);
		void startFaceDetection();
		void startPreview();
		void startSmoothZoom(jint arg0);
		void stopFaceDetection();
		void stopPreview();
		void stopSmoothZoom();
		void takePicture(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void takePicture(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		void unlock();
	};
} // namespace android::hardware

