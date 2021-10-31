#include "./CaptureRequest.hpp"
#include "./CaptureFailure.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CaptureFailure::REASON_ERROR()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_ERROR"
		);
	}
	jint CaptureFailure::REASON_FLUSHED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_FLUSHED"
		);
	}
	
	// QAndroidJniObject forward
	CaptureFailure::CaptureFailure(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jlong CaptureFailure::getFrameNumber()
	{
		return callMethod<jlong>(
			"getFrameNumber",
			"()J"
		);
	}
	jstring CaptureFailure::getPhysicalCameraId()
	{
		return callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CaptureFailure::getReason()
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	android::hardware::camera2::CaptureRequest CaptureFailure::getRequest()
	{
		return callObjectMethod(
			"getRequest",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint CaptureFailure::getSequenceId()
	{
		return callMethod<jint>(
			"getSequenceId",
			"()I"
		);
	}
	jboolean CaptureFailure::wasImageCaptured()
	{
		return callMethod<jboolean>(
			"wasImageCaptured",
			"()Z"
		);
	}
} // namespace android::hardware::camera2

