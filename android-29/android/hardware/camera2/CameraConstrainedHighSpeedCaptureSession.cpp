#include "./CaptureRequest.hpp"
#include "./CameraConstrainedHighSpeedCaptureSession.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CameraConstrainedHighSpeedCaptureSession::CameraConstrainedHighSpeedCaptureSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraConstrainedHighSpeedCaptureSession::CameraConstrainedHighSpeedCaptureSession()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraConstrainedHighSpeedCaptureSession",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CameraConstrainedHighSpeedCaptureSession::createHighSpeedRequestList(android::hardware::camera2::CaptureRequest arg0)
	{
		return __thiz.callObjectMethod(
			"createHighSpeedRequestList",
			"(Landroid/hardware/camera2/CaptureRequest;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::camera2

