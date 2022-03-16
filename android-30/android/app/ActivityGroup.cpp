#include "./Activity.hpp"
#include "./LocalActivityManager.hpp"
#include "../os/Bundle.hpp"
#include "./ActivityGroup.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	ActivityGroup::ActivityGroup()
		: android::app::Activity(
			"android.app.ActivityGroup",
			"()V"
		) {}
	ActivityGroup::ActivityGroup(jboolean arg0)
		: android::app::Activity(
			"android.app.ActivityGroup",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	android::app::Activity ActivityGroup::getCurrentActivity() const
	{
		return callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	android::app::LocalActivityManager ActivityGroup::getLocalActivityManager() const
	{
		return callObjectMethod(
			"getLocalActivityManager",
			"()Landroid/app/LocalActivityManager;"
		);
	}
} // namespace android::app

