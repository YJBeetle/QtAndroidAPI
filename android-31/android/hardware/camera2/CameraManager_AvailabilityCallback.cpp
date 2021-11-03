#include "./CameraManager_AvailabilityCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraManager_AvailabilityCallback::CameraManager_AvailabilityCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CameraManager_AvailabilityCallback::CameraManager_AvailabilityCallback()
		: JObject(
			"android.hardware.camera2.CameraManager$AvailabilityCallback",
			"()V"
		) {}
	
	// Methods
	void CameraManager_AvailabilityCallback::onCameraAccessPrioritiesChanged()
	{
		callMethod<void>(
			"onCameraAccessPrioritiesChanged",
			"()V"
		);
	}
	void CameraManager_AvailabilityCallback::onCameraAvailable(jstring arg0)
	{
		callMethod<void>(
			"onCameraAvailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CameraManager_AvailabilityCallback::onCameraUnavailable(jstring arg0)
	{
		callMethod<void>(
			"onCameraUnavailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CameraManager_AvailabilityCallback::onPhysicalCameraAvailable(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"onPhysicalCameraAvailable",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void CameraManager_AvailabilityCallback::onPhysicalCameraUnavailable(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"onPhysicalCameraUnavailable",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::hardware::camera2

