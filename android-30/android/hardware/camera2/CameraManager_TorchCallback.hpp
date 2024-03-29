#pragma once

#include "../../../JString.hpp"
#include "./CameraManager_TorchCallback.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraManager_TorchCallback::CameraManager_TorchCallback()
		: JObject(
			"android.hardware.camera2.CameraManager$TorchCallback",
			"()V"
		) {}
	
	// Methods
	inline void CameraManager_TorchCallback::onTorchModeChanged(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onTorchModeChanged",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void CameraManager_TorchCallback::onTorchModeUnavailable(JString arg0) const
	{
		callMethod<void>(
			"onTorchModeUnavailable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
