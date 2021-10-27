#include "./CaptureRequest.hpp"
#include "./CaptureFailure.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint CaptureFailure::REASON_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_ERROR"
		);
	}
	jint CaptureFailure::REASON_FLUSHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.CaptureFailure",
			"REASON_FLUSHED"
		);
	}
	
	CaptureFailure::CaptureFailure(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jlong CaptureFailure::getFrameNumber()
	{
		return __thiz.callMethod<jlong>(
			"getFrameNumber",
			"()J"
		);
	}
	jstring CaptureFailure::getPhysicalCameraId()
	{
		return __thiz.callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CaptureFailure::getReason()
	{
		return __thiz.callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	QAndroidJniObject CaptureFailure::getRequest()
	{
		return __thiz.callObjectMethod(
			"getRequest",
			"()Landroid/hardware/camera2/CaptureRequest;"
		);
	}
	jint CaptureFailure::getSequenceId()
	{
		return __thiz.callMethod<jint>(
			"getSequenceId",
			"()I"
		);
	}
	jboolean CaptureFailure::wasImageCaptured()
	{
		return __thiz.callMethod<jboolean>(
			"wasImageCaptured",
			"()Z"
		);
	}
} // namespace android::hardware::camera2

