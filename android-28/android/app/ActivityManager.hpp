#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::app
{
	class Activity;
}
namespace android::app
{
	class ActivityManager_MemoryInfo;
}
namespace android::app
{
	class ActivityManager_RunningAppProcessInfo;
}
namespace android::app
{
	class ActivityManager_TaskDescription;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class ConfigurationInfo;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::util
{
	class Size;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;

namespace android::app
{
	class ActivityManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_REPORT_HEAP_LIMIT();
		static jint LOCK_TASK_MODE_LOCKED();
		static jint LOCK_TASK_MODE_NONE();
		static jint LOCK_TASK_MODE_PINNED();
		static JString META_HOME_ALTERNATE();
		static jint MOVE_TASK_NO_USER_ACTION();
		static jint MOVE_TASK_WITH_HOME();
		static jint RECENT_IGNORE_UNAVAILABLE();
		static jint RECENT_WITH_EXCLUDED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void getMyMemoryState(android::app::ActivityManager_RunningAppProcessInfo arg0);
		static jboolean isRunningInTestHarness();
		static jboolean isUserAMonkey();
		static void setVrThread(jint arg0);
		jint addAppTask(android::app::Activity arg0, android::content::Intent arg1, android::app::ActivityManager_TaskDescription arg2, android::graphics::Bitmap arg3) const;
		jboolean clearApplicationUserData() const;
		void clearWatchHeapLimit() const;
		void dumpPackageState(java::io::FileDescriptor arg0, JString arg1) const;
		android::util::Size getAppTaskThumbnailSize() const;
		JObject getAppTasks() const;
		android::content::pm::ConfigurationInfo getDeviceConfigurationInfo() const;
		jint getLargeMemoryClass() const;
		jint getLauncherLargeIconDensity() const;
		jint getLauncherLargeIconSize() const;
		jint getLockTaskModeState() const;
		jint getMemoryClass() const;
		void getMemoryInfo(android::app::ActivityManager_MemoryInfo arg0) const;
		JArray getProcessMemoryInfo(JIntArray arg0) const;
		JObject getProcessesInErrorState() const;
		JObject getRecentTasks(jint arg0, jint arg1) const;
		JObject getRunningAppProcesses() const;
		android::app::PendingIntent getRunningServiceControlPanel(android::content::ComponentName arg0) const;
		JObject getRunningServices(jint arg0) const;
		JObject getRunningTasks(jint arg0) const;
		jboolean isBackgroundRestricted() const;
		jboolean isInLockTaskMode() const;
		jboolean isLowRamDevice() const;
		void killBackgroundProcesses(JString arg0) const;
		void moveTaskToFront(jint arg0, jint arg1) const;
		void moveTaskToFront(jint arg0, jint arg1, android::os::Bundle arg2) const;
		void restartPackage(JString arg0) const;
		void setWatchHeapLimit(jlong arg0) const;
	};
} // namespace android::app

