#include "./CameraManager_AvailabilityCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CameraManager_AvailabilityCallback::CameraManager_AvailabilityCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraManager_AvailabilityCallback::CameraManager_AvailabilityCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraManager$AvailabilityCallback",
			"()V"
		);
	}
	
	// Methods
	void CameraManager_AvailabilityCallback::onCameraAccessPrioritiesChanged()
	{
		__thiz.callMethod<void>(
			"onCameraAccessPrioritiesChanged",
			"()V"
		);
	}
	void CameraManager_AvailabilityCallback::onCameraAvailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onCameraAvailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CameraManager_AvailabilityCallback::onCameraUnavailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onCameraUnavailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::hardware::camera2

