#include "./ActivityManager_RecentTaskInfo.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./ActivityManager_AppTask.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	ActivityManager_AppTask::ActivityManager_AppTask(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void ActivityManager_AppTask::finishAndRemoveTask()
	{
		callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	android::app::ActivityManager_RecentTaskInfo ActivityManager_AppTask::getTaskInfo()
	{
		return callObjectMethod(
			"getTaskInfo",
			"()Landroid/app/ActivityManager$RecentTaskInfo;"
		);
	}
	void ActivityManager_AppTask::moveToFront()
	{
		callMethod<void>(
			"moveToFront",
			"()V"
		);
	}
	void ActivityManager_AppTask::setExcludeFromRecents(jboolean arg0)
	{
		callMethod<void>(
			"setExcludeFromRecents",
			"(Z)V",
			arg0
		);
	}
	void ActivityManager_AppTask::startActivity(android::content::Context arg0, android::content::Intent arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Context;Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::app
