#pragma once

#include "./CaptureRequest.def.hpp"
#include "../../../JString.hpp"
#include "./CaptureFailure.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	inline jint CaptureFailure::REASON_ERROR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_ERROR"
		);
	}
	inline jint CaptureFailure::REASON_FLUSHED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_FLUSHED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong CaptureFailure::getFrameNumber() const
	{
		return callMethod<jlong>(
			"getFrameNumber",
			"()J"
		);
	}
	inline JString CaptureFailure::getPhysicalCameraId() const
	{
		return callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;"
		);
	}
	inline jint CaptureFailure::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	inline android::hardware::camera2::CaptureRequest CaptureFailure::getRequest() const
	{
		return callObjectMethod(
			"getRequest",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	inline jint CaptureFailure::getSequenceId() const
	{
		return callMethod<jint>(
			"getSequenceId",
			"()I"
		);
	}
	inline jboolean CaptureFailure::wasImageCaptured() const
	{
		return callMethod<jboolean>(
			"wasImageCaptured",
			"()Z"
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
