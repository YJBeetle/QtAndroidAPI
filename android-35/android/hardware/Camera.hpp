#pragma once

#include "../../JByteArray.hpp"
#include "../graphics/SurfaceTexture.def.hpp"
#include "./Camera_CameraInfo.def.hpp"
#include "./Camera_Parameters.def.hpp"
#include "../../JString.hpp"
#include "./Camera.def.hpp"

namespace android::hardware
{
	// Fields
	inline JString Camera::ACTION_NEW_PICTURE()
	{
		return getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_PICTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString Camera::ACTION_NEW_VIDEO()
	{
		return getStaticObjectField(
			"android.hardware.Camera",
			"ACTION_NEW_VIDEO",
			"Ljava/lang/String;"
		);
	}
	inline jint Camera::CAMERA_ERROR_EVICTED()
	{
		return getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_EVICTED"
		);
	}
	inline jint Camera::CAMERA_ERROR_SERVER_DIED()
	{
		return getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_SERVER_DIED"
		);
	}
	inline jint Camera::CAMERA_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.hardware.Camera",
			"CAMERA_ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline void Camera::getCameraInfo(jint arg0, android::hardware::Camera_CameraInfo arg1)
	{
		callStaticMethod<void>(
			"android.hardware.Camera",
			"getCameraInfo",
			"(ILandroid/hardware/Camera$CameraInfo;)V",
			arg0,
			arg1.object()
		);
	}
	inline jint Camera::getNumberOfCameras()
	{
		return callStaticMethod<jint>(
			"android.hardware.Camera",
			"getNumberOfCameras",
			"()I"
		);
	}
	inline android::hardware::Camera Camera::open()
	{
		return callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"()Landroid/hardware/Camera;"
		);
	}
	inline android::hardware::Camera Camera::open(jint arg0)
	{
		return callStaticObjectMethod(
			"android.hardware.Camera",
			"open",
			"(I)Landroid/hardware/Camera;",
			arg0
		);
	}
	inline void Camera::addCallbackBuffer(JByteArray arg0) const
	{
		callMethod<void>(
			"addCallbackBuffer",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Camera::autoFocus(JObject arg0) const
	{
		callMethod<void>(
			"autoFocus",
			"(Landroid/hardware/Camera$AutoFocusCallback;)V",
			arg0.object()
		);
	}
	inline void Camera::cancelAutoFocus() const
	{
		callMethod<void>(
			"cancelAutoFocus",
			"()V"
		);
	}
	inline jboolean Camera::enableShutterSound(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"enableShutterSound",
			"(Z)Z",
			arg0
		);
	}
	inline android::hardware::Camera_Parameters Camera::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Landroid/hardware/Camera$Parameters;"
		);
	}
	inline void Camera::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	inline void Camera::reconnect() const
	{
		callMethod<void>(
			"reconnect",
			"()V"
		);
	}
	inline void Camera::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void Camera::setAutoFocusMoveCallback(JObject arg0) const
	{
		callMethod<void>(
			"setAutoFocusMoveCallback",
			"(Landroid/hardware/Camera$AutoFocusMoveCallback;)V",
			arg0.object()
		);
	}
	inline void Camera::setDisplayOrientation(jint arg0) const
	{
		callMethod<void>(
			"setDisplayOrientation",
			"(I)V",
			arg0
		);
	}
	inline void Camera::setErrorCallback(JObject arg0) const
	{
		callMethod<void>(
			"setErrorCallback",
			"(Landroid/hardware/Camera$ErrorCallback;)V",
			arg0.object()
		);
	}
	inline void Camera::setFaceDetectionListener(JObject arg0) const
	{
		callMethod<void>(
			"setFaceDetectionListener",
			"(Landroid/hardware/Camera$FaceDetectionListener;)V",
			arg0.object()
		);
	}
	inline void Camera::setOneShotPreviewCallback(JObject arg0) const
	{
		callMethod<void>(
			"setOneShotPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	inline void Camera::setParameters(android::hardware::Camera_Parameters arg0) const
	{
		callMethod<void>(
			"setParameters",
			"(Landroid/hardware/Camera$Parameters;)V",
			arg0.object()
		);
	}
	inline void Camera::setPreviewCallback(JObject arg0) const
	{
		callMethod<void>(
			"setPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	inline void Camera::setPreviewCallbackWithBuffer(JObject arg0) const
	{
		callMethod<void>(
			"setPreviewCallbackWithBuffer",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.object()
		);
	}
	inline void Camera::setPreviewDisplay(JObject arg0) const
	{
		callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.object()
		);
	}
	inline void Camera::setPreviewTexture(android::graphics::SurfaceTexture arg0) const
	{
		callMethod<void>(
			"setPreviewTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.object()
		);
	}
	inline void Camera::setZoomChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setZoomChangeListener",
			"(Landroid/hardware/Camera$OnZoomChangeListener;)V",
			arg0.object()
		);
	}
	inline void Camera::startFaceDetection() const
	{
		callMethod<void>(
			"startFaceDetection",
			"()V"
		);
	}
	inline void Camera::startPreview() const
	{
		callMethod<void>(
			"startPreview",
			"()V"
		);
	}
	inline void Camera::startSmoothZoom(jint arg0) const
	{
		callMethod<void>(
			"startSmoothZoom",
			"(I)V",
			arg0
		);
	}
	inline void Camera::stopFaceDetection() const
	{
		callMethod<void>(
			"stopFaceDetection",
			"()V"
		);
	}
	inline void Camera::stopPreview() const
	{
		callMethod<void>(
			"stopPreview",
			"()V"
		);
	}
	inline void Camera::stopSmoothZoom() const
	{
		callMethod<void>(
			"stopSmoothZoom",
			"()V"
		);
	}
	inline void Camera::takePicture(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Camera::takePicture(JObject arg0, JObject arg1, JObject arg2, JObject arg3) const
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
	inline void Camera::unlock() const
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
