#pragma once

#include "./KeyguardManager_KeyguardDismissCallback.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline KeyguardManager_KeyguardDismissCallback::KeyguardManager_KeyguardDismissCallback()
		: JObject(
			"android.app.KeyguardManager$KeyguardDismissCallback",
			"()V"
		) {}
	
	// Methods
	inline void KeyguardManager_KeyguardDismissCallback::onDismissCancelled() const
	{
		callMethod<void>(
			"onDismissCancelled",
			"()V"
		);
	}
	inline void KeyguardManager_KeyguardDismissCallback::onDismissError() const
	{
		callMethod<void>(
			"onDismissError",
			"()V"
		);
	}
	inline void KeyguardManager_KeyguardDismissCallback::onDismissSucceeded() const
	{
		callMethod<void>(
			"onDismissSucceeded",
			"()V"
		);
	}
} // namespace android::app

// Base class headers

