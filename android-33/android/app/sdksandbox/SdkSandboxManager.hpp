#pragma once

#include "./SdkSandboxManager.def.hpp"

namespace android::app::sdksandbox
{
	// Fields
	inline jint SdkSandboxManager::SDK_SANDBOX_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"SDK_SANDBOX_STATE_DISABLED"
		);
	}
	inline jint SdkSandboxManager::SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION()
	{
		return getStaticField<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SdkSandboxManager::getSdkSandboxState()
	{
		return callStaticMethod<jint>(
			"android.app.sdksandbox.SdkSandboxManager",
			"getSdkSandboxState",
			"()I"
		);
	}
} // namespace android::app::sdksandbox

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::sdksandbox;
#endif
