#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
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
	CameraAccessException::CameraAccessException(jint arg0, JString arg1)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	CameraAccessException::CameraAccessException(jint arg0, JThrowable arg1)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1.object<jthrowable>()
		) {}
	CameraAccessException::CameraAccessException(jint arg0, JString arg1, JThrowable arg2)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	jint CameraAccessException::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
} // namespace android::hardware::camera2

