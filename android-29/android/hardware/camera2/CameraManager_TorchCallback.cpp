#include "./CameraManager_TorchCallback.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CameraManager_TorchCallback::CameraManager_TorchCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CameraManager_TorchCallback::CameraManager_TorchCallback()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraManager$TorchCallback",
			"()V"
		);
	}
	
	// Methods
	void CameraManager_TorchCallback::onTorchModeChanged(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onTorchModeChanged",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void CameraManager_TorchCallback::onTorchModeUnavailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onTorchModeUnavailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::hardware::camera2

