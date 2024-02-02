#pragma once

#include "../../../../JString.hpp"
#include "./SdkSandboxController.def.hpp"

namespace android::app::sdksandbox::sdkprovider
{
	// Fields
	inline JString SdkSandboxController::SDK_SANDBOX_CONTROLLER_SERVICE()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.sdkprovider.SdkSandboxController",
			"SDK_SANDBOX_CONTROLLER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SdkSandboxController::getClientSharedPreferences() const
	{
		return callObjectMethod(
			"getClientSharedPreferences",
			"()Landroid/content/SharedPreferences;"
		);
	}
	inline JObject SdkSandboxController::getSandboxedSdks() const
	{
		return callObjectMethod(
			"getSandboxedSdks",
			"()Ljava/util/List;"
		);
	}
	inline JObject SdkSandboxController::registerSdkSandboxActivityHandler(JObject arg0) const
	{
		return callObjectMethod(
			"registerSdkSandboxActivityHandler",
			"(Landroid/app/sdksandbox/sdkprovider/SdkSandboxActivityHandler;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void SdkSandboxController::unregisterSdkSandboxActivityHandler(JObject arg0) const
	{
		callMethod<void>(
			"unregisterSdkSandboxActivityHandler",
			"(Landroid/app/sdksandbox/sdkprovider/SdkSandboxActivityHandler;)V",
			arg0.object()
		);
	}
} // namespace android::app::sdksandbox::sdkprovider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::sdksandbox::sdkprovider;
#endif
