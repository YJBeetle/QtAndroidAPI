#include "./Activity.hpp"
#include "./LocalActivityManager.hpp"
#include "../os/Bundle.hpp"
#include "./ActivityGroup.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	ActivityGroup::ActivityGroup(QAndroidJniObject obj) : android::app::Activity(obj) {}
	
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
	QAndroidJniObject ActivityGroup::getCurrentActivity()
	{
		return callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject ActivityGroup::getLocalActivityManager()
	{
		return callObjectMethod(
			"getLocalActivityManager",
			"()Landroid/app/LocalActivityManager;"
		);
	}
} // namespace android::app

