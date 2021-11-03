#include "./ActivityManager_RecentTaskInfo.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "./ActivityManager_AppTask.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	ActivityManager_AppTask::ActivityManager_AppTask(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ActivityManager_AppTask::finishAndRemoveTask() const
	{
		callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	android::app::ActivityManager_RecentTaskInfo ActivityManager_AppTask::getTaskInfo() const
	{
		return callObjectMethod(
			"getTaskInfo",
			"()Landroid/app/ActivityManager$RecentTaskInfo;"
		);
	}
	void ActivityManager_AppTask::moveToFront() const
	{
		callMethod<void>(
			"moveToFront",
			"()V"
		);
	}
	void ActivityManager_AppTask::setExcludeFromRecents(jboolean arg0) const
	{
		callMethod<void>(
			"setExcludeFromRecents",
			"(Z)V",
			arg0
		);
	}
	void ActivityManager_AppTask::startActivity(android::content::Context arg0, android::content::Intent arg1, android::os::Bundle arg2) const
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

