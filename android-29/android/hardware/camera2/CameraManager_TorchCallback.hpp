#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK
#define ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2
{
	class CameraManager_TorchCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onTorchModeUnavailable(jstring arg0);
		void onTorchModeChanged(jstring arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::hardware::camera2


namespace __jni_impl::android::hardware::camera2
{
	// Fields
	
	// Constructors
	void CameraManager_TorchCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.CameraManager$TorchCallback",
			"()V");
	}
	
	// Methods
	void CameraManager_TorchCallback::onTorchModeUnavailable(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onTorchModeUnavailable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CameraManager_TorchCallback::onTorchModeChanged(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onTorchModeChanged",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::hardware::camera2

namespace android::hardware::camera2
{
	class CameraManager_TorchCallback : public __jni_impl::android::hardware::camera2::CameraManager_TorchCallback
	{
	public:
		CameraManager_TorchCallback(QAndroidJniObject obj) { __thiz = obj; }
		CameraManager_TorchCallback()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2

#endif // ANDROID_HARDWARE_CAMERA2_CAMERAMANAGER_TORCHCALLBACK

