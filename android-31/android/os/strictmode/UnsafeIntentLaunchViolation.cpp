#include "../../content/Intent.hpp"
#include "./UnsafeIntentLaunchViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QJniObject forward
	UnsafeIntentLaunchViolation::UnsafeIntentLaunchViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
	
	// Constructors
	UnsafeIntentLaunchViolation::UnsafeIntentLaunchViolation(android::content::Intent arg0)
		: android::os::strictmode::Violation(
			"android.os.strictmode.UnsafeIntentLaunchViolation",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	
	// Methods
	android::content::Intent UnsafeIntentLaunchViolation::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
} // namespace android::os::strictmode

