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
	
	// QAndroidJniObject forward
	CameraManager::CameraManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject CameraManager::getCameraCharacteristics(jstring arg0)
	{
		return callObjectMethod(
			"getCameraCharacteristics",
			"(Ljava/lang/String;)Landroid/hardware/camera2/CameraCharacteristics;",
			arg0
		);
	}
	jarray CameraManager::getCameraIdList()
	{
		return callObjectMethod(
			"getCameraIdList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	void CameraManager::openCamera(jstring arg0, android::hardware::camera2::CameraDevice_StateCallback arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Landroid/hardware/camera2/CameraDevice$StateCallback;Landroid/os/Handler;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void CameraManager::openCamera(jstring arg0, __JniBaseClass arg1, android::hardware::camera2::CameraDevice_StateCallback arg2)
	{
		callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraDevice$StateCallback;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void CameraManager::registerAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::registerAvailabilityCallback(__JniBaseClass arg0, android::hardware::camera2::CameraManager_AvailabilityCallback arg1)
	{
		callMethod<void>(
			"registerAvailabilityCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::registerTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::registerTorchCallback(__JniBaseClass arg0, android::hardware::camera2::CameraManager_TorchCallback arg1)
	{
		callMethod<void>(
			"registerTorchCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::setTorchMode(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setTorchMode",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void CameraManager::unregisterAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0)
	{
		callMethod<void>(
			"unregisterAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.object()
		);
	}
	void CameraManager::unregisterTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0)
	{
		callMethod<void>(
			"unregisterTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

