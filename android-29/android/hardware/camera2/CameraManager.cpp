#include "../../content/Context.hpp"
#include "./CameraCharacteristics.hpp"
#include "./CameraDevice_StateCallback.hpp"
#include "./CameraManager_AvailabilityCallback.hpp"
#include "./CameraManager_TorchCallback.hpp"
#include "../../os/Handler.hpp"
#include "./CameraManager.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	CameraManager::CameraManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CameraManager::getCameraCharacteristics(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCameraCharacteristics",
			"(Ljava/lang/String;)Landroid/hardware/camera2/CameraCharacteristics;",
			arg0
		);
	}
	jarray CameraManager::getCameraIdList()
	{
		return __thiz.callObjectMethod(
			"getCameraIdList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void CameraManager::openCamera(jstring arg0, android::hardware::camera2::CameraDevice_StateCallback arg1, android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Landroid/hardware/camera2/CameraDevice$StateCallback;Landroid/os/Handler;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraManager::openCamera(jstring arg0, __JniBaseClass arg1, android::hardware::camera2::CameraDevice_StateCallback arg2)
	{
		__thiz.callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraDevice$StateCallback;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void CameraManager::registerAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::registerAvailabilityCallback(__JniBaseClass arg0, android::hardware::camera2::CameraManager_AvailabilityCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerAvailabilityCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::registerTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::registerTorchCallback(__JniBaseClass arg0, android::hardware::camera2::CameraManager_TorchCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerTorchCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CameraManager::setTorchMode(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTorchMode",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void CameraManager::unregisterAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void CameraManager::unregisterTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::hardware::camera2

