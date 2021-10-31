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
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager",
			"ACTION_REPORT_HEAP_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager::LOCK_TASK_MODE_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_LOCKED"
		);
	}
	jint ActivityManager::LOCK_TASK_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_NONE"
		);
	}
	jint ActivityManager::LOCK_TASK_MODE_PINNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager",
			"LOCK_TASK_MODE_PINNED"
		);
	}
	jstring ActivityManager::META_HOME_ALTERNATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager",
			"META_HOME_ALTERNATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager::MOVE_TASK_NO_USER_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager",
			"MOVE_TASK_NO_USER_ACTION"
		);
	}
	jint ActivityManager::MOVE_TASK_WITH_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager",
			"MOVE_TASK_WITH_HOME"
		);
	}
	jint ActivityManager::RECENT_IGNORE_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager",
			"RECENT_IGNORE_UNAVAILABLE"
		);
	}
	jint ActivityManager::RECENT_WITH_EXCLUDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager",
			"RECENT_WITH_EXCLUDED"
		);
	}
	
	ActivityManager::ActivityManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ActivityManager::getMyMemoryState(android::app::ActivityManager_RunningAppProcessInfo arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.ActivityManager",
			"getMyMemoryState",
			"(Landroid/app/ActivityManager$RunningAppProcessInfo;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ActivityManager::isRunningInTestHarness()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isRunningInTestHarness",
			"()Z"
		);
	}
	jboolean ActivityManager::isRunningInUserTestHarness()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isRunningInUserTestHarness",
			"()Z"
		);
	}
	jboolean ActivityManager::isUserAMonkey()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.app.ActivityManager",
			"isUserAMonkey",
			"()Z"
		);
	}
	void ActivityManager::setVrThread(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.ActivityManager",
			"setVrThread",
			"(I)V",
			arg0
		);
	}
	jint ActivityManager::addAppTask(android::app::Activity arg0, android::content::Intent arg1, android::app::ActivityManager_TaskDescription arg2, android::graphics::Bitmap arg3)
	{
		return __thiz.callMethod<jint>(
			"addAppTask",
			"(Landroid/app/Activity;Landroid/content/Intent;Landroid/app/ActivityManager$TaskDescription;Landroid/graphics/Bitmap;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean ActivityManager::clearApplicationUserData()
	{
		return __thiz.callMethod<jboolean>(
			"clearApplicationUserData",
			"()Z"
		);
	}
	void ActivityManager::clearWatchHeapLimit()
	{
		__thiz.callMethod<void>(
			"clearWatchHeapLimit",
			"()V"
		);
	}
	void ActivityManager::dumpPackageState(java::io::FileDescriptor arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dumpPackageState",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ActivityManager::getAppTaskThumbnailSize()
	{
		return __thiz.callObjectMethod(
			"getAppTaskThumbnailSize",
			"()Landroid/util/Size;"
		);
	}
	QAndroidJniObject ActivityManager::getAppTasks()
	{
		return __thiz.callObjectMethod(
			"getAppTasks",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ActivityManager::getDeviceConfigurationInfo()
	{
		return __thiz.callObjectMethod(
			"getDeviceConfigurationInfo",
			"()Landroid/content/pm/ConfigurationInfo;"
		);
	}
	jint ActivityManager::getLargeMemoryClass()
	{
		return __thiz.callMethod<jint>(
			"getLargeMemoryClass",
			"()I"
		);
	}
	jint ActivityManager::getLauncherLargeIconDensity()
	{
		return __thiz.callMethod<jint>(
			"getLauncherLargeIconDensity",
			"()I"
		);
	}
	jint ActivityManager::getLauncherLargeIconSize()
	{
		return __thiz.callMethod<jint>(
			"getLauncherLargeIconSize",
			"()I"
		);
	}
	jint ActivityManager::getLockTaskModeState()
	{
		return __thiz.callMethod<jint>(
			"getLockTaskModeState",
			"()I"
		);
	}
	jint ActivityManager::getMemoryClass()
	{
		return __thiz.callMethod<jint>(
			"getMemoryClass",
			"()I"
		);
	}
	void ActivityManager::getMemoryInfo(android::app::ActivityManager_MemoryInfo arg0)
	{
		__thiz.callMethod<void>(
			"getMemoryInfo",
			"(Landroid/app/ActivityManager$MemoryInfo;)V",
			arg0.__jniObject().object()
		);
	}
	jarray ActivityManager::getProcessMemoryInfo(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getProcessMemoryInfo",
			"([I)[Landroid/os/Debug$MemoryInfo;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject ActivityManager::getProcessesInErrorState()
	{
		return __thiz.callObjectMethod(
			"getProcessesInErrorState",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ActivityManager::getRecentTasks(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getRecentTasks",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ActivityManager::getRunningAppProcesses()
	{
		return __thiz.callObjectMethod(
			"getRunningAppProcesses",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ActivityManager::getRunningServiceControlPanel(android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"getRunningServiceControlPanel",
			"(Landroid/content/ComponentName;)Landroid/app/PendingIntent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ActivityManager::getRunningServices(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRunningServices",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject ActivityManager::getRunningTasks(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRunningTasks",
			"(I)Ljava/util/List;",
			arg0
		);
	}
	jboolean ActivityManager::isActivityStartAllowedOnDisplay(android::content::Context arg0, jint arg1, android::content::Intent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"isActivityStartAllowedOnDisplay",
			"(Landroid/content/Context;ILandroid/content/Intent;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean ActivityManager::isBackgroundRestricted()
	{
		return __thiz.callMethod<jboolean>(
			"isBackgroundRestricted",
			"()Z"
		);
	}
	jboolean ActivityManager::isInLockTaskMode()
	{
		return __thiz.callMethod<jboolean>(
			"isInLockTaskMode",
			"()Z"
		);
	}
	jboolean ActivityManager::isLowRamDevice()
	{
		return __thiz.callMethod<jboolean>(
			"isLowRamDevice",
			"()Z"
		);
	}
	void ActivityManager::killBackgroundProcesses(jstring arg0)
	{
		__thiz.callMethod<void>(
			"killBackgroundProcesses",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ActivityManager::moveTaskToFront(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"moveTaskToFront",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ActivityManager::moveTaskToFront(jint arg0, jint arg1, android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"moveTaskToFront",
			"(IILandroid/os/Bundle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void ActivityManager::restartPackage(jstring arg0)
	{
		__thiz.callMethod<void>(
			"restartPackage",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ActivityManager::setWatchHeapLimit(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setWatchHeapLimit",
			"(J)V",
			arg0
		);
	}
} // namespace android::app

