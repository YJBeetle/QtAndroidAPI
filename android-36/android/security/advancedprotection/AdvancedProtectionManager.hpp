#pragma once

#include "./AdvancedProtectionManager.def.hpp"

namespace android::security::advancedprotection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AdvancedProtectionManager::isAdvancedProtectionEnabled() const
	{
		return callMethod<jboolean>(
			"isAdvancedProtectionEnabled",
			"()Z"
		);
	}
	inline void AdvancedProtectionManager::registerAdvancedProtectionCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerAdvancedProtectionCallback",
			"(Ljava/util/concurrent/Executor;Landroid/security/advancedprotection/AdvancedProtectionManager$Callback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AdvancedProtectionManager::unregisterAdvancedProtectionCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterAdvancedProtectionCallback",
			"(Landroid/security/advancedprotection/AdvancedProtectionManager$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::security::advancedprotection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security::advancedprotection;
#endif
