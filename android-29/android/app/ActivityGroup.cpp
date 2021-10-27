#include "./Activity.hpp"
#include "./LocalActivityManager.hpp"
#include "../os/Bundle.hpp"
#include "./ActivityGroup.hpp"

namespace android::app
{
	// Fields
	
	ActivityGroup::ActivityGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityGroup::ActivityGroup()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityGroup",
			"()V"
		);
	}
	ActivityGroup::ActivityGroup(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityGroup",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject ActivityGroup::getCurrentActivity()
	{
		return __thiz.callObjectMethod(
			"getCurrentActivity",
			"()Landroid/app/Activity;"
		);
	}
	QAndroidJniObject ActivityGroup::getLocalActivityManager()
	{
		return __thiz.callObjectMethod(
			"getLocalActivityManager",
			"()Landroid/app/LocalActivityManager;"
		);
	}
} // namespace android::app

