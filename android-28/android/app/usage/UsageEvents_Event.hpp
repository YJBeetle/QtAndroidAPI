#pragma once

#include "../../../JObject.hpp"

namespace android::content::res
{
	class Configuration;
}

namespace android::app::usage
{
	class UsageEvents_Event : public JObject
	{
	public:
		// Fields
		static jint CONFIGURATION_CHANGE();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit UsageEvents_Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsageEvents_Event(QJniObject obj);
		
		// Constructors
		UsageEvents_Event();
		
		// Methods
		jint getAppStandbyBucket();
		jstring getClassName();
		android::content::res::Configuration getConfiguration();
		jint getEventType();
		jstring getPackageName();
		jstring getShortcutId();
		jlong getTimeStamp();
	};
} // namespace android::app::usage

