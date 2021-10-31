#include "./CameraAccessException.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CameraAccessException::CAMERA_DISABLED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISABLED"
		);
	}
	jint CameraAccessException::CAMERA_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISCONNECTED"
		);
	}
	jint CameraAccessException::CAMERA_ERROR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_ERROR"
		);
	}
	jint CameraAccessException::CAMERA_IN_USE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_IN_USE"
		);
	}
	jint CameraAccessException::MAX_CAMERAS_IN_USE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"MAX_CAMERAS_IN_USE"
		);
	}
	
	// QJniObject forward
	CameraAccessException::CameraAccessException(QJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	CameraAccessException::CameraAccessException(jint arg0)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(I)V",
			arg0
		) {}
	CameraAccessException::CameraAccessException(jint arg0, jstring arg1)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	CameraAccessException::CameraAccessException(jint arg0, jthrowable arg1)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	CameraAccessException::CameraAccessException(jint arg0, jstring arg1, jthrowable arg2)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint CameraAccessException::getReason()
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
} // namespace android::hardware::camera2

