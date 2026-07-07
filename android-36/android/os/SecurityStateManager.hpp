#pragma once

#include "./Bundle.def.hpp"
#include "../../JString.hpp"
#include "./SecurityStateManager.def.hpp"

namespace android::os
{
	// Fields
	inline JString SecurityStateManager::KEY_KERNEL_VERSION()
	{
		return getStaticObjectField(
			"android.os.SecurityStateManager",
			"KEY_KERNEL_VERSION",
			"Ljava/lang/String;"
		);
	}
	inline JString SecurityStateManager::KEY_SYSTEM_SPL()
	{
		return getStaticObjectField(
			"android.os.SecurityStateManager",
			"KEY_SYSTEM_SPL",
			"Ljava/lang/String;"
		);
	}
	inline JString SecurityStateManager::KEY_VENDOR_SPL()
	{
		return getStaticObjectField(
			"android.os.SecurityStateManager",
			"KEY_VENDOR_SPL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::Bundle SecurityStateManager::getGlobalSecurityState() const
	{
		return callObjectMethod(
			"getGlobalSecurityState",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
