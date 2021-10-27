#include "./ActivityManager_RecentTaskInfo.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./ActivityManager_AppTask.hpp"

namespace android::app
{
	// Fields
	
	ActivityManager_AppTask::ActivityManager_AppTask(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ActivityManager_AppTask::finishAndRemoveTask()
	{
		__thiz.callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	QAndroidJniObject ActivityManager_AppTask::getTaskInfo()
	{
		return __thiz.callObjectMethod(
			"getTaskInfo",
			"()Landroid/app/ActivityManager$RecentTaskInfo;"
		);
	}
	void ActivityManager_AppTask::moveToFront()
	{
		__thiz.callMethod<void>(
			"moveToFront",
			"()V"
		);
	}
	void ActivityManager_AppTask::setExcludeFromRecents(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setExcludeFromRecents",
			"(Z)V",
			arg0
		);
	}
	void ActivityManager_AppTask::startActivity(android::content::Context arg0, android::content::Intent arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::app

