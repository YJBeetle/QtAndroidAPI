#pragma once

#include "./KeyguardManager.def.hpp"
#include "./KeyguardManager_KeyguardLock.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void KeyguardManager_KeyguardLock::disableKeyguard() const
	{
		callMethod<void>(
			"disableKeyguard",
			"()V"
		);
	}
	inline void KeyguardManager_KeyguardLock::reenableKeyguard() const
	{
		callMethod<void>(
			"reenableKeyguard",
			"()V"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
