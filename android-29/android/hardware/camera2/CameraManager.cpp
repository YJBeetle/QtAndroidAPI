#include "../../../JArray.hpp"
#include "../../content/Context.hpp"
#include "./CameraCharacteristics.hpp"
#include "./CameraDevice_StateCallback.hpp"
#include "./CameraManager_AvailabilityCallback.hpp"
#include "./CameraManager_TorchCallback.hpp"
#include "../../os/Handler.hpp"
#include "../../../JString.hpp"
#include "./CameraManager.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QJniObject forward
	CameraManager::CameraManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::hardware::camera2::CameraCharacteristics CameraManager::getCameraCharacteristics(JString arg0) const
	{
		return callObjectMethod(
			"getCameraCharacteristics",
			"(Ljava/lang/String;)Landroid/hardware/camera2/CameraCharacteristics;",
			arg0.object<jstring>()
		);
	}
	JArray CameraManager::getCameraIdList() const
	{
		return callObjectMethod(
			"getCameraIdList",
			"()[Ljava/lang/String;"
		);
	}
	void CameraManager::openCamera(JString arg0, android::hardware::camera2::CameraDevice_StateCallback arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Landroid/hardware/camera2/CameraDevice$StateCallback;Landroid/os/Handler;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraManager::openCamera(JString arg0, JObject arg1, android::hardware::camera2::CameraDevice_StateCallback arg2) const
	{
		callMethod<void>(
			"openCamera",
			"(Ljava/lang/String;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraDevice$StateCallback;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void CameraManager::registerAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::registerAvailabilityCallback(JObject arg0, android::hardware::camera2::CameraManager_AvailabilityCallback arg1) const
	{
		callMethod<void>(
			"registerAvailabilityCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::registerTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::registerTorchCallback(JObject arg0, android::hardware::camera2::CameraManager_TorchCallback arg1) const
	{
		callMethod<void>(
			"registerTorchCallback",
			"(Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CameraManager::setTorchMode(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setTorchMode",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void CameraManager::unregisterAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0) const
	{
		callMethod<void>(
			"unregisterAvailabilityCallback",
			"(Landroid/hardware/camera2/CameraManager$AvailabilityCallback;)V",
			arg0.object()
		);
	}
	void CameraManager::unregisterTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0) const
	{
		callMethod<void>(
			"unregisterTorchCallback",
			"(Landroid/hardware/camera2/CameraManager$TorchCallback;)V",
			arg0.object()
		);
	}
} // namespace android::hardware::camera2

