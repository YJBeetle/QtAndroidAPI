#include "./Activity.hpp"
#include "./ActivityManager_MemoryInfo.hpp"
#include "./ActivityManager_RunningAppProcessInfo.hpp"
#include "./ActivityManager_TaskDescription.hpp"
#include "./PendingIntent.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/pm/ConfigurationInfo.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../util/Size.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "./ActivityManager.hpp"

namespace android::app
{
	// Fields
	jstring ActivityManager::ACTION_REPORT_HEAP_LIMIT()
	{
		return getStaticObjectField(
			"android.app.ActivityManager",
			"ACTION_REPORT_HEAP_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager::LOCK_TASK_MODE_LOCKED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_LOCKED"
		);
	}
	jint ActivityManager::LOCK_TASK_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_NONE"
		);
	}
	jint ActivityManager::LOCK_TASK_MODE_PINNED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_PINNED"
		);
	}
	jstring ActivityManager::META_HOME_ALTERNATE()
	{
		return getStaticObjectField(
			"android.app.ActivityManager",
			"META_HOME_ALTERNATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager::MOVE_TASK_NO_USER_ACTION()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"MOVE_TASK_NO_USER_ACTION"
		);
	}
	jint ActivityManager::MOVE_TASK_WITH_HOME()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"MOVE_TASK_WITH_HOME"
		);
	}
	jint ActivityManager::RECENT_IGNORE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"RECENT_IGNORE_UNAVAILABLE"
		);
	}
	jint ActivityManager::RECENT_WITH_EXCLUDED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager",
			"RECENT_WITH_EXCLUDED"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager::ActivityManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ActivityManager::getMyMemoryState(android::app::ActivityManager_RunningAppProcessInfo arg0)
	{
		callStaticMethod<void>(
			"android.app.ActivityManager",
			"getMyMemoryState",
			"(Landroid/app/ActivityManager$RunningAppProcessInfo;)V",
			arg0.object()
		);
	}
	jboolean ActivityManager::isRunningInTestHarness()
	{
		return callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isRunningInTestHarness",
			"()Z"
		);
	}
	jboolean ActivityManager::isUserAMonkey()
	{
		return callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isUserAMonkey",
			"()Z"
		);
	}
	void ActivityManager::setVrThread(jint arg0)
	{
		callStaticMethod<void>(
			"android.app.ActivityManager",
			"setVrThread",
			"(I)V",
			arg0
		);
	}
	jint ActivityManager::addAppTask(android::app::Activity arg0, android::content::Intent arg1, android::app::ActivityManager_TaskDescription arg2, android::graphics::Bitmap arg3)
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
	jboolean ActivityManager::clearApplicationUserData()
	{
		return callMethod<jboolean>(
			"clearApplicationUserData",
			"()Z"
		);
	}
	void ActivityManager::clearWatchHeapLimit()
	{
		callMethod<void>(
			"clearWatchHeapLimit",
			"()V"
		);
	}
	void ActivityManager::dumpPackageState(java::io::FileDescriptor arg0, jstring arg1)
	{
		callMethod<void>(
			"dumpPackageState",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	android::util::Size ActivityManager::getAppTaskThumbnailSize()
	{
		return callObjectMethod(
			"getAppTaskThumbnailSize",
			"()Landroid/util/Size;"
		);
	}
	JObject ActivityManager::getAppTasks()
	{
		return callObjectMethod(
			"getAppTasks",
			"()Ljava/util/List;"
		);
	}
	android::content::pm::ConfigurationInfo ActivityManager::getDeviceConfigurationInfo()
	{
		return callObjectMethod(
			"getDeviceConfigurationInfo",
			"()Landroid/content/pm/ConfigurationInfo;"
		);
	}
	jint ActivityManager::getLargeMemoryClass()
	{
		return callMethod<jint>(
			"getLargeMemoryClass",
			"()I"
		);
	}
	jint ActivityManager::getLauncherLargeIconDensity()
	{
		return callMethod<jint>(
			"getLauncherLargeIconDensity",
			"()I"
		);
	}
	jint ActivityManager::getLauncherLargeIconSize()
	{
		return callMethod<jint>(
			"getLauncherLargeIconSize",
			"()I"
		);
	}
	jint ActivityManager::getLockTaskModeState()
	{
		return callMethod<jint>(
			"getLockTaskModeState",
			"()I"
		);
	}
	jint ActivityManager::getMemoryClass()
	{
		return callMethod<jint>(
			"getMemoryClass",
			"()I"
		);
	}
	void ActivityManager::getMemoryInfo(android::app::ActivityManager_MemoryInfo arg0)
	{
		callMethod<void>(
			"getMemoryInfo",
			"(Landroid/app/ActivityManager$MemoryInfo;)V",
			arg0.object()
		);
	}
	jarray ActivityManager::getProcessMemoryInfo(jintArray arg0)
	{
		return callObjectMethod(
			"getProcessMemoryInfo",
			"([I)[Landroid/os/Debug$MemoryInfo;",
			arg0
		).object<jarray>();
	}
	JObject ActivityManager::getProcessesInErrorState()
	{
		return callObjectMethod(
			"getProcessesInErrorState",
			"()Ljava/util/List;"
		);
	}
	JObject ActivityManager::getRecentTasks(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getRecentTasks",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	JObject ActivityManager::getRunningAppProcesses()
	{
		return callObjectMethod(
			"getRunningAppProcesses",
			"()Ljava/util/List;"
		);
	}
	android::app::PendingIntent ActivityManager::getRunningServiceControlPanel(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"getRunningServiceControlPanel",
			"(Landroid/content/ComponentName;)Landroid/app/PendingIntent;",
			arg0.object()
		);
	}
	JObject ActivityManager::getRunningServices(jint arg0)
	{
		return callObjectMethod(
			"getRunningServices",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	JObject ActivityManager::getRunningTasks(jint arg0)
	{
		return callObjectMethod(
			"getRunningTasks",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean ActivityManager::isBackgroundRestricted()
	{
		return callMethod<jboolean>(
			"isBackgroundRestricted",
			"()Z"
		);
	}
	jboolean ActivityManager::isInLockTaskMode()
	{
		return callMethod<jboolean>(
			"isInLockTaskMode",
			"()Z"
		);
	}
	jboolean ActivityManager::isLowRamDevice()
	{
		return callMethod<jboolean>(
			"isLowRamDevice",
			"()Z"
		);
	}
	void ActivityManager::killBackgroundProcesses(jstring arg0)
	{
		callMethod<void>(
			"killBackgroundProcesses",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ActivityManager::moveTaskToFront(jint arg0, jint arg1)
	{
		callMethod<void>(
			"moveTaskToFront",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ActivityManager::moveTaskToFront(jint arg0, jint arg1, android::os::Bundle arg2)
	{
		callMethod<void>(
			"moveTaskToFront",
			"(IILandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void ActivityManager::restartPackage(jstring arg0)
	{
		callMethod<void>(
			"restartPackage",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ActivityManager::setWatchHeapLimit(jlong arg0)
	{
		callMethod<void>(
			"setWatchHeapLimit",
			"(J)V",
			arg0
		);
	}
} // namespace android::app

