#include "../../../JString.hpp"
#include "./CameraManager_AvailabilityCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	CameraManager_AvailabilityCallback::CameraManager_AvailabilityCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CameraManager_AvailabilityCallback::CameraManager_AvailabilityCallback()
		: JObject(
			"android.hardware.camera2.CameraManager$AvailabilityCallback",
			"()V"
		) {}
	
	// Methods
	void CameraManager_AvailabilityCallback::onCameraAccessPrioritiesChanged() const
	{
		callMethod<void>(
			"onCameraAccessPrioritiesChanged",
			"()V"
		);
	}
	void CameraManager_AvailabilityCallback::onCameraAvailable(JString arg0) const
	{
		callMethod<void>(
			"onCameraAvailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void CameraManager_AvailabilityCallback::onCameraUnavailable(JString arg0) const
	{
		callMethod<void>(
			"onCameraUnavailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::hardware::camera2

