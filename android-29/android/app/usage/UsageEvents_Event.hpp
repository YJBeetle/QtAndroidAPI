#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Configuration;
}

namespace android::app::usage
{
	class UsageEvents_Event : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACTIVITY_PAUSED();
		static jint ACTIVITY_RESUMED();
		static jint ACTIVITY_STOPPED();
		static jint CONFIGURATION_CHANGE();
		static jint DEVICE_SHUTDOWN();
		static jint DEVICE_STARTUP();
		static jint FOREGROUND_SERVICE_START();
		static jint FOREGROUND_SERVICE_STOP();
		static jint KEYGUARD_HIDDEN();
		static jint KEYGUARD_SHOWN();
		static jint MOVE_TO_BACKGROUND();
		static jint MOVE_TO_FOREGROUND();
		static jint NONE();
		static jint SCREEN_INTERACTIVE();
		static jint SCREEN_NON_INTERACTIVE();
		static jint SHORTCUT_INVOCATION();
		static jint STANDBY_BUCKET_CHANGED();
		static jint USER_INTERACTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsageEvents_Event(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UsageEvents_Event(QAndroidJniObject obj);
		
		// Constructors
		UsageEvents_Event();
		
		// Methods
		jint getAppStandbyBucket();
		jstring getClassName();
		QAndroidJniObject getConfiguration();
		jint getEventType();
		jstring getPackageName();
		jstring getShortcutId();
		jlong getTimeStamp();
	};
} // namespace android::app::usage

