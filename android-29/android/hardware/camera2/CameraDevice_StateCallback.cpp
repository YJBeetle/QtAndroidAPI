#include "./CameraDevice.hpp"
#include "./CameraDevice_StateCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraDevice_StateCallback::ERROR_CAMERA_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_DEVICE"
		);
	}
	jint CameraDevice_StateCallback::ERROR_CAMERA_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_DISABLED"
		);
	}
	jint CameraDevice_StateCallback::ERROR_CAMERA_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_IN_USE"
		);
	}
	jint CameraDevice_StateCallback::ERROR_CAMERA_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_CAMERA_SERVICE"
		);
	}
	jint CameraDevice_StateCallback::ERROR_MAX_CAMERAS_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"ERROR_MAX_CAMERAS_IN_USE"
		);
	}
	
	CameraDevice_StateCallback::CameraDevice_StateCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraDevice_StateCallback::CameraDevice_StateCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraDevice$StateCallback",
			"()V"
		);
	}
	
	// Methods
	void CameraDevice_StateCallback::onClosed(android::hardware::camera2::CameraDevice arg0)
	{
		__thiz.callMethod<void>(
			"onClosed",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraDevice_StateCallback::onDisconnected(android::hardware::camera2::CameraDevice arg0)
	{
		__thiz.callMethod<void>(
			"onDisconnected",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraDevice_StateCallback::onError(android::hardware::camera2::CameraDevice arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/hardware/camera2/CameraDevice;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void CameraDevice_StateCallback::onOpened(android::hardware::camera2::CameraDevice arg0)
	{
		__thiz.callMethod<void>(
			"onOpened",
			"(Landroid/hardware/camera2/CameraDevice;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::camera2

