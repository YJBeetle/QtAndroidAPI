#include "../../JByteArray.hpp"
#include "../graphics/SurfaceTexture.hpp"
#include "./Camera_CameraInfo.hpp"
#include "./Camera_Parameters.hpp"
#include "../../JString.hpp"
#include "./Camera.hpp"

namespace android::hardware
{
	// Fields
	JString Camera::ACTION_NEW_PICTURE()
	{
		return getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_PICTURE",
			"Ljava/lang/String;"
		);
	}
	JString Camera::ACTION_NEW_VIDEO()
	{
		return getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_VIDEO",
			"Ljava/lang/String;"
		);
	}
	jint Camera::CAMERA_ERROR_EVICTED()
	{
		return getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_EVICTED"
		);
	}
	jint Camera::CAMERA_ERROR_SERVER_DIED()
	{
		return getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_SERVER_DIED"
		);
	}
	jint Camera::CAMERA_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	Camera::Camera(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Camera::getCameraInfo(jint arg0, android::hardware::Camera_CameraInfo arg1)
	{
		callStaticMethod<void>(
			"android.hardware.Camera",
			"getCameraInfo",
			"(ILandroid/hardware/Camera$CameraInfo;)V",
			arg0,
			arg1.object()
		);
	}
	jint Camera::getNumberOfCameras()
	{
		return callStaticMethod<jint>(
			"android.hardware.Camera",
			"getNumberOfCameras",
			"()I"
		);
	}
	android::hardware::Camera Camera::open()
	{
		return callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"()Landroid/hardware/Camera;"
		);
	}
	android::hardware::Camera Camera::open(jint arg0)
	{
		return callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"(I)Landroid/hardware/Camera;",
			arg0
		);
	}
	void Camera::addCallbackBuffer(JByteArray arg0) const
	{
		callMethod<void>(
			"addCallbackBuffer",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Camera::autoFocus(JObject arg0) const
	{
		callMethod<void>(
			"autoFocus",
			"(Landroid/hardware/Camera$AutoFocusCallback;)V",
			arg0.object()
		);
	}
	void Camera::cancelAutoFocus() const
	{
		callMethod<void>(
			"cancelAutoFocus",
			"()V"
		);
	}
	jboolean Camera::enableShutterSound(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"enableShutterSound",
			"(Z)Z",
			arg0
		);
	}
	android::hardware::Camera_Parameters Camera::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Landroid/hardware/Camera$Parameters;"
		);
	}
	void Camera::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	void Camera::reconnect() const
	{
		callMethod<void>(
			"reconnect",
			"()V"
		);
	}
	void Camera::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void Camera::setAutoFocusMoveCallback(JObject arg0) const
	{
		callMethod<void>(
			"setAutoFocusMoveCallback",
			"(Landroid/hardware/Camera$AutoFocusMoveCallback;)V",
			arg0.object()
		);
	}
	void Camera::setDisplayOrientation(jint arg0) const
	{
		callMethod<void>(
			"setDisplayOrientation",
			"(I)V",
			arg0
		);
	}
	void Camera::setErrorCallback(JObject arg0) const
	{
		callMethod<void>(
			"setErrorCallback",
			"(Landroid/hardware/Camera$ErrorCallback;)V",
			arg0.object()
		);
	}
	void Camera::setFaceDetectionListener(JObject arg0) const
	{
		callMethod<void>(
			"setFaceDetectionListener",
			"(Landroid/hardware/Camera$FaceDetectionListener;)V",
			arg0.object()
		);
	}
	void Camera::setOneShotPreviewCallback(JObject arg0) const
	{
		callMethod<void>(
			"setOneShotPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	void Camera::setParameters(android::hardware::Camera_Parameters arg0) const
	{
		callMethod<void>(
			"setParameters",
			"(Landroid/hardware/Camera$Parameters;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewCallback(JObject arg0) const
	{
		callMethod<void>(
			"setPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewCallbackWithBuffer(JObject arg0) const
	{
		callMethod<void>(
			"setPreviewCallbackWithBuffer",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewDisplay(JObject arg0) const
	{
		callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	void Camera::setPreviewTexture(android::graphics::SurfaceTexture arg0) const
	{
		callMethod<void>(
			"setPreviewTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.object()
		);
	}
	void Camera::setZoomChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setZoomChangeListener",
			"(Landroid/hardware/Camera$OnZoomChangeListener;)V",
			arg0.object()
		);
	}
	void Camera::startFaceDetection() const
	{
		callMethod<void>(
			"startFaceDetection",
			"()V"
		);
	}
	void Camera::startPreview() const
	{
		callMethod<void>(
			"startPreview",
			"()V"
		);
	}
	void Camera::startSmoothZoom(jint arg0) const
	{
		callMethod<void>(
			"startSmoothZoom",
			"(I)V",
			arg0
		);
	}
	void Camera::stopFaceDetection() const
	{
		callMethod<void>(
			"stopFaceDetection",
			"()V"
		);
	}
	void Camera::stopPreview() const
	{
		callMethod<void>(
			"stopPreview",
			"()V"
		);
	}
	void Camera::stopSmoothZoom() const
	{
		callMethod<void>(
			"stopSmoothZoom",
			"()V"
		);
	}
	void Camera::takePicture(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Camera::takePicture(JObject arg0, JObject arg1, JObject arg2, JObject arg3) const
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
	void Camera::unlock() const
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::hardware

