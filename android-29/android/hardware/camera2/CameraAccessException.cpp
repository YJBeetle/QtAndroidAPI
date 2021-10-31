#include "./CameraAccessException.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraAccessException::CAMERA_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISABLED"
		);
	}
	jint CameraAccessException::CAMERA_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISCONNECTED"
		);
	}
	jint CameraAccessException::CAMERA_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_ERROR"
		);
	}
	jint CameraAccessException::CAMERA_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_IN_USE"
		);
	}
	jint CameraAccessException::MAX_CAMERAS_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"MAX_CAMERAS_IN_USE"
		);
	}
	
	CameraAccessException::CameraAccessException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraAccessException::CameraAccessException(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(I)V",
			arg0
		);
	}
	CameraAccessException::CameraAccessException(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	CameraAccessException::CameraAccessException(jint arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	CameraAccessException::CameraAccessException(jint arg0, jstring arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint CameraAccessException::getReason()
	{
		return __thiz.callMethod<jint>(
			"getReason",
			"()I"
		);
	}
} // namespace android::hardware::camera2

