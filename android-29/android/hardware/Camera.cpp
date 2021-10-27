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
	
	Camera::Camera(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Camera::getCameraInfo(jint arg0, android::hardware::Camera_CameraInfo arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.hardware.Camera",
			"getCameraInfo",
			"(ILandroid/hardware/Camera$CameraInfo;)V",
			arg0,
			arg1.__jniObject().object()
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
		__thiz.callMethod<void>(
			"addCallbackBuffer",
			"([B)V",
			arg0
		);
	}
	void Camera::autoFocus(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"autoFocus",
			"(Landroid/hardware/Camera$AutoFocusCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::cancelAutoFocus()
	{
		__thiz.callMethod<void>(
			"cancelAutoFocus",
			"()V"
		);
	}
	jboolean Camera::enableShutterSound(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"enableShutterSound",
			"(Z)Z",
			arg0
		);
	}
	QAndroidJniObject Camera::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Landroid/hardware/Camera$Parameters;"
		);
	}
	void Camera::lock()
	{
		__thiz.callMethod<void>(
			"lock",
			"()V"
		);
	}
	void Camera::reconnect()
	{
		__thiz.callMethod<void>(
			"reconnect",
			"()V"
		);
	}
	void Camera::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void Camera::setAutoFocusMoveCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAutoFocusMoveCallback",
			"(Landroid/hardware/Camera$AutoFocusMoveCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setDisplayOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayOrientation",
			"(I)V",
			arg0
		);
	}
	void Camera::setErrorCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorCallback",
			"(Landroid/hardware/Camera$ErrorCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setFaceDetectionListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFaceDetectionListener",
			"(Landroid/hardware/Camera$FaceDetectionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setOneShotPreviewCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOneShotPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setParameters(android::hardware::Camera_Parameters arg0)
	{
		__thiz.callMethod<void>(
			"setParameters",
			"(Landroid/hardware/Camera$Parameters;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setPreviewCallback(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewCallback",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setPreviewCallbackWithBuffer(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewCallbackWithBuffer",
			"(Landroid/hardware/Camera$PreviewCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setPreviewDisplay(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewDisplay",
			"(Landroid/view/SurfaceHolder;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setPreviewTexture(android::graphics::SurfaceTexture arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewTexture",
			"(Landroid/graphics/SurfaceTexture;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::setZoomChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setZoomChangeListener",
			"(Landroid/hardware/Camera$OnZoomChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Camera::startFaceDetection()
	{
		__thiz.callMethod<void>(
			"startFaceDetection",
			"()V"
		);
	}
	void Camera::startPreview()
	{
		__thiz.callMethod<void>(
			"startPreview",
			"()V"
		);
	}
	void Camera::startSmoothZoom(jint arg0)
	{
		__thiz.callMethod<void>(
			"startSmoothZoom",
			"(I)V",
			arg0
		);
	}
	void Camera::stopFaceDetection()
	{
		__thiz.callMethod<void>(
			"stopFaceDetection",
			"()V"
		);
	}
	void Camera::stopPreview()
	{
		__thiz.callMethod<void>(
			"stopPreview",
			"()V"
		);
	}
	void Camera::stopSmoothZoom()
	{
		__thiz.callMethod<void>(
			"stopSmoothZoom",
			"()V"
		);
	}
	void Camera::takePicture(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Camera::takePicture(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"takePicture",
			"(Landroid/hardware/Camera$ShutterCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;Landroid/hardware/Camera$PictureCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void Camera::unlock()
	{
		__thiz.callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::hardware

