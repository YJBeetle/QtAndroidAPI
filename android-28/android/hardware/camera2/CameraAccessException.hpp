#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CameraAccessException.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint CameraAccessException::CAMERA_DISABLED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISABLED"
		);
	}
	inline jint CameraAccessException::CAMERA_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_DISCONNECTED"
		);
	}
	inline jint CameraAccessException::CAMERA_ERROR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_ERROR"
		);
	}
	inline jint CameraAccessException::CAMERA_IN_USE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"CAMERA_IN_USE"
		);
	}
	inline jint CameraAccessException::MAX_CAMERAS_IN_USE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CameraAccessException",
			"MAX_CAMERAS_IN_USE"
		);
	}
	
	// Constructors
	inline CameraAccessException::CameraAccessException(jint arg0)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(I)V",
			arg0
		) {}
	inline CameraAccessException::CameraAccessException(jint arg0, JString arg1)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline CameraAccessException::CameraAccessException(jint arg0, JThrowable arg1)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1.object<jthrowable>()
		) {}
	inline CameraAccessException::CameraAccessException(jint arg0, JString arg1, JThrowable arg2)
		: android::util::AndroidException(
			"android.hardware.camera2.CameraAccessException",
			"(ILjava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline jint CameraAccessException::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
} // namespace android::hardware::camera2

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../util/AndroidException.hpp"

