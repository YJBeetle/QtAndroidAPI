#pragma once

#include "./ActivityManager_RecentTaskInfo.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./ActivityManager_AppTask.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void ActivityManager_AppTask::finishAndRemoveTask() const
	{
		callMethod<void>(
			"finishAndRemoveTask",
			"()V"
		);
	}
	inline android::app::ActivityManager_RecentTaskInfo ActivityManager_AppTask::getTaskInfo() const
	{
		return callObjectMethod(
			"getTaskInfo",
			"()Landroid/app/ActivityManager$RecentTaskInfo;"
		);
	}
	inline void ActivityManager_AppTask::moveToFront() const
	{
		callMethod<void>(
			"moveToFront",
			"()V"
		);
	}
	inline void ActivityManager_AppTask::setExcludeFromRecents(jboolean arg0) const
	{
		callMethod<void>(
			"setExcludeFromRecents",
			"(Z)V",
			arg0
		);
	}
	inline void ActivityManager_AppTask::startActivity(android::content::Context arg0, android::content::Intent arg1, android::os::Bundle arg2) const
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

// Base class headers

