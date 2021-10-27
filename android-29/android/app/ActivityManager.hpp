#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Activity;
}
namespace __jni_impl::android::app
{
	class ActivityManager_MemoryInfo;
}
namespace __jni_impl::android::app
{
	class ActivityManager_RunningAppProcessInfo;
}
namespace __jni_impl::android::app
{
	class ActivityManager_TaskDescription;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content::pm
{
	class ConfigurationInfo;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::util
{
	class Size;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::app
{
	class ActivityManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_REPORT_HEAP_LIMIT();
		static jint LOCK_TASK_MODE_LOCKED();
		static jint LOCK_TASK_MODE_NONE();
		static jint LOCK_TASK_MODE_PINNED();
		static jstring META_HOME_ALTERNATE();
		static jint MOVE_TASK_NO_USER_ACTION();
		static jint MOVE_TASK_WITH_HOME();
		static jint RECENT_IGNORE_UNAVAILABLE();
		static jint RECENT_WITH_EXCLUDED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void getMyMemoryState(__jni_impl::android::app::ActivityManager_RunningAppProcessInfo arg0);
		static jboolean isRunningInTestHarness();
		static jboolean isRunningInUserTestHarness();
		static jboolean isUserAMonkey();
		static void setVrThread(jint arg0);
		jint addAppTask(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::app::ActivityManager_TaskDescription arg2, __jni_impl::android::graphics::Bitmap arg3);
		jboolean clearApplicationUserData();
		void clearWatchHeapLimit();
		void dumpPackageState(__jni_impl::java::io::FileDescriptor arg0, jstring arg1);
		void dumpPackageState(__jni_impl::java::io::FileDescriptor arg0, const QString &arg1);
		QAndroidJniObject getAppTaskThumbnailSize();
		QAndroidJniObject getAppTasks();
		QAndroidJniObject getDeviceConfigurationInfo();
		jint getLargeMemoryClass();
		jint getLauncherLargeIconDensity();
		jint getLauncherLargeIconSize();
		jint getLockTaskModeState();
		jint getMemoryClass();
		void getMemoryInfo(__jni_impl::android::app::ActivityManager_MemoryInfo arg0);
		jarray getProcessMemoryInfo(jintArray arg0);
		QAndroidJniObject getProcessesInErrorState();
		QAndroidJniObject getRecentTasks(jint arg0, jint arg1);
		QAndroidJniObject getRunningAppProcesses();
		QAndroidJniObject getRunningServiceControlPanel(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject getRunningServices(jint arg0);
		QAndroidJniObject getRunningTasks(jint arg0);
		jboolean isActivityStartAllowedOnDisplay(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2);
		jboolean isBackgroundRestricted();
		jboolean isInLockTaskMode();
		jboolean isLowRamDevice();
		void killBackgroundProcesses(jstring arg0);
		void killBackgroundProcesses(const QString &arg0);
		void moveTaskToFront(jint arg0, jint arg1);
		void moveTaskToFront(jint arg0, jint arg1, __jni_impl::android::os::Bundle arg2);
		void restartPackage(jstring arg0);
		void restartPackage(const QString &arg0);
		void setWatchHeapLimit(jlong arg0);
	};
} // namespace __jni_impl::android::app

#include "Activity.hpp"
#include "ActivityManager_MemoryInfo.hpp"
#include "ActivityManager_RunningAppProcessInfo.hpp"
#include "ActivityManager_TaskDescription.hpp"
#include "PendingIntent.hpp"
#include "../content/ComponentName.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/pm/ConfigurationInfo.hpp"
#include "../graphics/Bitmap.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../util/Size.hpp"
#include "../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void ActivityManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager",
			"(V)V");
	}
	
	// Methods
	void ActivityManager::getMyMemoryState(__jni_impl::android::app::ActivityManager_RunningAppProcessInfo arg0)
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
	jint ActivityManager::addAppTask(__jni_impl::android::app::Activity arg0, __jni_impl::android::content::Intent arg1, __jni_impl::android::app::ActivityManager_TaskDescription arg2, __jni_impl::android::graphics::Bitmap arg3)
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
	void ActivityManager::dumpPackageState(__jni_impl::java::io::FileDescriptor arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dumpPackageState",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ActivityManager::dumpPackageState(__jni_impl::java::io::FileDescriptor arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dumpPackageState",
			"(Ljava/io/FileDescriptor;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void ActivityManager::getMemoryInfo(__jni_impl::android::app::ActivityManager_MemoryInfo arg0)
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
	QAndroidJniObject ActivityManager::getRunningServiceControlPanel(__jni_impl::android::content::ComponentName arg0)
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
	jboolean ActivityManager::isActivityStartAllowedOnDisplay(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2)
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
	void ActivityManager::killBackgroundProcesses(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"killBackgroundProcesses",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void ActivityManager::moveTaskToFront(jint arg0, jint arg1, __jni_impl::android::os::Bundle arg2)
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
	void ActivityManager::restartPackage(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"restartPackage",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityManager : public __jni_impl::android::app::ActivityManager
	{
	public:
		ActivityManager(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager()
		{
			__constructor();
		}
	};
} // namespace android::app

