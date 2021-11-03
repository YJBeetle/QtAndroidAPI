#include "../../../JString.hpp"
#include "./CameraManager_TorchCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraManager_TorchCallback::CameraManager_TorchCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CameraManager_TorchCallback::CameraManager_TorchCallback()
		: JObject(
			"android.hardware.camera2.CameraManager$TorchCallback",
			"()V"
		) {}
	
	// Methods
	void CameraManager_TorchCallback::onTorchModeChanged(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onTorchModeChanged",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void CameraManager_TorchCallback::onTorchModeUnavailable(JString arg0) const
	{
		callMethod<void>(
			"onTorchModeUnavailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::hardware::camera2

