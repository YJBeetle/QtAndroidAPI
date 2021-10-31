#include "../graphics/SurfaceTexture.hpp"
#include "./Camera_CameraInfo.hpp"
#include "./Camera_Parameters.hpp"
#include "./Camera.hpp"

namespace android::hardware
{
	// Fields
	jstring Camera::ACTION_NEW_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera::ACTION_NEW_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Camera::CAMERA_ERROR_EVICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_EVICTED"
		);
	}
	jint Camera::CAMERA_ERROR_SERVER_DIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_SERVER_DIED"
		);
	}
	jint Camera::CAMERA_ERROR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	Camera::Camera(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void Camera::getCameraInfo(jint arg0, android::hardware::Camera_CameraInfo arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.hardware.Camera",
			"getCameraInfo",
			"(ILandroid/hardware/Camera$CameraInfo;)V",
			arg0,
			arg1.object()
		);
	}
	jint Camera::getNumberOfCameras()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.hardware.Camera",
			"getNumberOfCameras",
			"()I"
		);
	}
	QAndroidJniObject Camera::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"()Landroid/hardware/Camera;"
		);
	}
	QAndroidJniObject Camera::open(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"(I)Landroid/hardware/Camera;",
			arg0
		);
	}
	void Camera::addCallbackBuffer(jbyteArray arg0)
	{
		callMethod<void>(
			"addCallbackBuffer",
			"([B)V",
			arg0
		);
	}
	void Camera::autoFocus(__JniBaseClass arg0)
	{
		callMethod<void>(
			"autoFocus",
			"(Landroid/hardware/Camera$AutoFocusCallback;)V",
			arg0.object()
		);
	}
	void Camera::cancelAutoFocus()
	{
		callMethod<void>(
			"cancelAutoFocus",
			"()V"
		);
	}
	jboolean Camera::enableShutterSound(jboolean arg0)
	{
		return callMethod<jboolean>(
			"enableShutterSound",
			"(Z)Z",
			arg0
		);
	}
	QAndroidJniObject Camera::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Landroid/hardware/Camera$Parameters;"
		);
	}
	void Camera::lock()
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	void Camera::reconnect()
	{
		callMethod<void>(
			"reconnect",
			"()V"
		);
	}
	void Camera::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void Camera::setAutoFocusMoveCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setAutoFocusMoveCallback",
			"(Landroid/hardware/Camera$AutoFocusMoveCallback;)V",
			arg0.object()
		);
	}
	void Camera::setDisplayOrientation(jint arg0)
	{
		callMethod<void>(
			"setDisplayOrientation",
			"(I)V",
			arg0
		);
	}
	void Camera::setErrorCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setErrorCallback",
			"(Landroid/hardware/Camera$ErrorCallback;)V",
			arg0.object()
		);
	}
	void Camera::setFaceDetectionListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFaceDetectionListener",
			"(Landroid/hardware/Camera$FaceDetectionListener;)V",
			arg0.object()
		);
	}
	void Camera::setOneShotPreviewCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOneShotPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	void Camera::setParameters(android::hardware::Camera_Parameters arg0)
	{
		callMethod<void>(
			"setParameters",
			"(Landroid/hardware/Camera$Parameters;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewCallbackWithBuffer(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setPreviewCallbackWithBuffer",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewDisplay(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewTexture(android::graphics::SurfaceTexture arg0)
	{
		callMethod<void>(
			"setPreviewTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.object()
		);
	}
	void Camera::setZoomChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setZoomChangeListener",
			"(Landroid/hardware/Camera$OnZoomChangeListener;)V",
			arg0.object()
		);
	}
	void Camera::startFaceDetection()
	{
		callMethod<void>(
			"startFaceDetection",
			"()V"
		);
	}
	void Camera::startPreview()
	{
		callMethod<void>(
			"startPreview",
			"()V"
		);
	}
	void Camera::startSmoothZoom(jint arg0)
	{
		callMethod<void>(
			"startSmoothZoom",
			"(I)V",
			arg0
		);
	}
	void Camera::stopFaceDetection()
	{
		callMethod<void>(
			"stopFaceDetection",
			"()V"
		);
	}
	void Camera::stopPreview()
	{
		callMethod<void>(
			"stopPreview",
			"()V"
		);
	}
	void Camera::stopSmoothZoom()
	{
		callMethod<void>(
			"stopSmoothZoom",
			"()V"
		);
	}
	void Camera::takePicture(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Camera::takePicture(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	void Camera::unlock()
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::hardware

