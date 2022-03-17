#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./Activity.def.hpp"
#include "./ActivityManager_MemoryInfo.def.hpp"
#include "./ActivityManager_RunningAppProcessInfo.def.hpp"
#include "./ActivityManager_TaskDescription.def.hpp"
#include "./PendingIntent.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/pm/ConfigurationInfo.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../util/Size.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./ActivityManager.def.hpp"

namespace android::app
{
	// Fields
	inline JString ActivityManager::ACTION_REPORT_HEAP_LIMIT()
	{
		return getStaticObjectField(
			"android.app.ActivityManager",
			"ACTION_REPORT_HEAP_LIMIT",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityManager::LOCK_TASK_MODE_LOCKED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_LOCKED"
		);
	}
	inline jint ActivityManager::LOCK_TASK_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_NONE"
		);
	}
	inline jint ActivityManager::LOCK_TASK_MODE_PINNED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_PINNED"
		);
	}
	inline JString ActivityManager::META_HOME_ALTERNATE()
	{
		return getStaticObjectField(
			"android.app.ActivityManager",
			"META_HOME_ALTERNATE",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityManager::MOVE_TASK_NO_USER_ACTION()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"MOVE_TASK_NO_USER_ACTION"
		);
	}
	inline jint ActivityManager::MOVE_TASK_WITH_HOME()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"MOVE_TASK_WITH_HOME"
		);
	}
	inline jint ActivityManager::RECENT_IGNORE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"RECENT_IGNORE_UNAVAILABLE"
		);
	}
	inline jint ActivityManager::RECENT_WITH_EXCLUDED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"RECENT_WITH_EXCLUDED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void ActivityManager::getMyMemoryState(android::app::ActivityManager_RunningAppProcessInfo arg0)
	{
		callStaticMethod<void>(
			"android.app.ActivityManager",
			"getMyMemoryState",
			"(Landroid/app/ActivityManager$RunningAppProcessInfo;)V",
			arg0.object()
		);
	}
	inline jboolean ActivityManager::isRunningInTestHarness()
	{
		return callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isRunningInTestHarness",
			"()Z"
		);
	}
	inline jboolean ActivityManager::isRunningInUserTestHarness()
	{
		return callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isRunningInUserTestHarness",
			"()Z"
		);
	}
	inline jboolean ActivityManager::isUserAMonkey()
	{
		return callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isUserAMonkey",
			"()Z"
		);
	}
	inline void ActivityManager::setVrThread(jint arg0)
	{
		callStaticMethod<void>(
			"android.app.ActivityManager",
			"setVrThread",
			"(I)V",
			arg0
		);
	}
	inline jint ActivityManager::addAppTask(android::app::Activity arg0, android::content::Intent arg1, android::app::ActivityManager_TaskDescription arg2, android::graphics::Bitmap arg3) const
	{
		return callMethod<jint>(
			"addAppTask",
			"(Landroid/app/Activity;Landroid/content/Intent;Landroid/app/ActivityManager$TaskDescription;Landroid/graphics/Bitmap;)I",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean ActivityManager::clearApplicationUserData() const
	{
		return callMethod<jboolean>(
			"clearApplicationUserData",
			"()Z"
		);
	}
	inline void ActivityManager::clearWatchHeapLimit() const
	{
		callMethod<void>(
			"clearWatchHeapLimit",
			"()V"
		);
	}
	inline void ActivityManager::dumpPackageState(java::io::FileDescriptor arg0, JString arg1) const
	{
		callMethod<void>(
			"dumpPackageState",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::util::Size ActivityManager::getAppTaskThumbnailSize() const
	{
		return callObjectMethod(
			"getAppTaskThumbnailSize",
			"()Landroid/util/Size;"
		);
	}
	inline JObject ActivityManager::getAppTasks() const
	{
		return callObjectMethod(
			"getAppTasks",
			"()Ljava/util/List;"
		);
	}
	inline android::content::pm::ConfigurationInfo ActivityManager::getDeviceConfigurationInfo() const
	{
		return callObjectMethod(
			"getDeviceConfigurationInfo",
			"()Landroid/content/pm/ConfigurationInfo;"
		);
	}
	inline jint ActivityManager::getLargeMemoryClass() const
	{
		return callMethod<jint>(
			"getLargeMemoryClass",
			"()I"
		);
	}
	inline jint ActivityManager::getLauncherLargeIconDensity() const
	{
		return callMethod<jint>(
			"getLauncherLargeIconDensity",
			"()I"
		);
	}
	inline jint ActivityManager::getLauncherLargeIconSize() const
	{
		return callMethod<jint>(
			"getLauncherLargeIconSize",
			"()I"
		);
	}
	inline jint ActivityManager::getLockTaskModeState() const
	{
		return callMethod<jint>(
			"getLockTaskModeState",
			"()I"
		);
	}
	inline jint ActivityManager::getMemoryClass() const
	{
		return callMethod<jint>(
			"getMemoryClass",
			"()I"
		);
	}
	inline void ActivityManager::getMemoryInfo(android::app::ActivityManager_MemoryInfo arg0) const
	{
		callMethod<void>(
			"getMemoryInfo",
			"(Landroid/app/ActivityManager$MemoryInfo;)V",
			arg0.object()
		);
	}
	inline JArray ActivityManager::getProcessMemoryInfo(JIntArray arg0) const
	{
		return callObjectMethod(
			"getProcessMemoryInfo",
			"([I)[Landroid/os/Debug$MemoryInfo;",
			arg0.object<jintArray>()
		);
	}
	inline JObject ActivityManager::getProcessesInErrorState() const
	{
		return callObjectMethod(
			"getProcessesInErrorState",
			"()Ljava/util/List;"
		);
	}
	inline JObject ActivityManager::getRecentTasks(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getRecentTasks",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	inline JObject ActivityManager::getRunningAppProcesses() const
	{
		return callObjectMethod(
			"getRunningAppProcesses",
			"()Ljava/util/List;"
		);
	}
	inline android::app::PendingIntent ActivityManager::getRunningServiceControlPanel(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"getRunningServiceControlPanel",
			"(Landroid/content/ComponentName;)Landroid/app/PendingIntent;",
			arg0.object()
		);
	}
	inline JObject ActivityManager::getRunningServices(jint arg0) const
	{
		return callObjectMethod(
			"getRunningServices",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline JObject ActivityManager::getRunningTasks(jint arg0) const
	{
		return callObjectMethod(
			"getRunningTasks",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	inline jboolean ActivityManager::isActivityStartAllowedOnDisplay(android::content::Context arg0, jint arg1, android::content::Intent arg2) const
	{
		return callMethod<jboolean>(
			"isActivityStartAllowedOnDisplay",
			"(Landroid/content/Context;ILandroid/content/Intent;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean ActivityManager::isBackgroundRestricted() const
	{
		return callMethod<jboolean>(
			"isBackgroundRestricted",
			"()Z"
		);
	}
	inline jboolean ActivityManager::isInLockTaskMode() const
	{
		return callMethod<jboolean>(
			"isInLockTaskMode",
			"()Z"
		);
	}
	inline jboolean ActivityManager::isLowRamDevice() const
	{
		return callMethod<jboolean>(
			"isLowRamDevice",
			"()Z"
		);
	}
	inline void ActivityManager::killBackgroundProcesses(JString arg0) const
	{
		callMethod<void>(
			"killBackgroundProcesses",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ActivityManager::moveTaskToFront(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"moveTaskToFront",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ActivityManager::moveTaskToFront(jint arg0, jint arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"moveTaskToFront",
			"(IILandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline void ActivityManager::restartPackage(JString arg0) const
	{
		callMethod<void>(
			"restartPackage",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ActivityManager::setWatchHeapLimit(jlong arg0) const
	{
		callMethod<void>(
			"setWatchHeapLimit",
			"(J)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
