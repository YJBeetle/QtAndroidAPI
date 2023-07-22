#pragma once

#include "../../content/Intent.def.hpp"
#include "./UnsafeIntentLaunchViolation.def.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// Constructors
	inline UnsafeIntentLaunchViolation::UnsafeIntentLaunchViolation(android::content::Intent arg0)
		: android::os::strictmode::Violation(
			"android.os.strictmode.UnsafeIntentLaunchViolation",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::content::Intent UnsafeIntentLaunchViolation::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
} // namespace android::os::strictmode

// Base class headers
#include "./Violation.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::strictmode;
#endif
