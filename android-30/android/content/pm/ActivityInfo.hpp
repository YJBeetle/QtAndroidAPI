#pragma once

#include "./ComponentInfo.hpp"

namespace android::content::pm
{
	class ActivityInfo_WindowLayout;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class ActivityInfo : public android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static jint COLOR_MODE_DEFAULT();
		static jint COLOR_MODE_HDR();
		static jint COLOR_MODE_WIDE_COLOR_GAMUT();
		static jint CONFIG_COLOR_MODE();
		static jint CONFIG_DENSITY();
		static jint CONFIG_FONT_SCALE();
		static jint CONFIG_KEYBOARD();
		static jint CONFIG_KEYBOARD_HIDDEN();
		static jint CONFIG_LAYOUT_DIRECTION();
		static jint CONFIG_LOCALE();
		static jint CONFIG_MCC();
		static jint CONFIG_MNC();
		static jint CONFIG_NAVIGATION();
		static jint CONFIG_ORIENTATION();
		static jint CONFIG_SCREEN_LAYOUT();
		static jint CONFIG_SCREEN_SIZE();
		static jint CONFIG_SMALLEST_SCREEN_SIZE();
		static jint CONFIG_TOUCHSCREEN();
		static jint CONFIG_UI_MODE();
		static JObject CREATOR();
		static jint DOCUMENT_LAUNCH_ALWAYS();
		static jint DOCUMENT_LAUNCH_INTO_EXISTING();
		static jint DOCUMENT_LAUNCH_NEVER();
		static jint DOCUMENT_LAUNCH_NONE();
		static jint FLAG_ALLOW_TASK_REPARENTING();
		static jint FLAG_ALWAYS_RETAIN_TASK_STATE();
		static jint FLAG_AUTO_REMOVE_FROM_RECENTS();
		static jint FLAG_CLEAR_TASK_ON_LAUNCH();
		static jint FLAG_ENABLE_VR_MODE();
		static jint FLAG_EXCLUDE_FROM_RECENTS();
		static jint FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS();
		static jint FLAG_FINISH_ON_TASK_LAUNCH();
		static jint FLAG_HARDWARE_ACCELERATED();
		static jint FLAG_IMMERSIVE();
		static jint FLAG_MULTIPROCESS();
		static jint FLAG_NO_HISTORY();
		static jint FLAG_PREFER_MINIMAL_POST_PROCESSING();
		static jint FLAG_RELINQUISH_TASK_IDENTITY();
		static jint FLAG_RESUME_WHILE_PAUSING();
		static jint FLAG_SINGLE_USER();
		static jint FLAG_STATE_NOT_NEEDED();
		static jint LAUNCH_MULTIPLE();
		static jint LAUNCH_SINGLE_INSTANCE();
		static jint LAUNCH_SINGLE_TASK();
		static jint LAUNCH_SINGLE_TOP();
		static jint PERSIST_ACROSS_REBOOTS();
		static jint PERSIST_NEVER();
		static jint PERSIST_ROOT_ONLY();
		static jint SCREEN_ORIENTATION_BEHIND();
		static jint SCREEN_ORIENTATION_FULL_SENSOR();
		static jint SCREEN_ORIENTATION_FULL_USER();
		static jint SCREEN_ORIENTATION_LANDSCAPE();
		static jint SCREEN_ORIENTATION_LOCKED();
		static jint SCREEN_ORIENTATION_NOSENSOR();
		static jint SCREEN_ORIENTATION_PORTRAIT();
		static jint SCREEN_ORIENTATION_REVERSE_LANDSCAPE();
		static jint SCREEN_ORIENTATION_REVERSE_PORTRAIT();
		static jint SCREEN_ORIENTATION_SENSOR();
		static jint SCREEN_ORIENTATION_SENSOR_LANDSCAPE();
		static jint SCREEN_ORIENTATION_SENSOR_PORTRAIT();
		static jint SCREEN_ORIENTATION_UNSPECIFIED();
		static jint SCREEN_ORIENTATION_USER();
		static jint SCREEN_ORIENTATION_USER_LANDSCAPE();
		static jint SCREEN_ORIENTATION_USER_PORTRAIT();
		static jint UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW();
		jint colorMode();
		jint configChanges();
		jint documentLaunchMode();
		jint flags();
		jint launchMode();
		jint maxRecents();
		JString parentActivityName();
		JString permission();
		jint persistableMode();
		jint screenOrientation();
		jint softInputMode();
		JString targetActivity();
		JString taskAffinity();
		jint theme();
		jint uiOptions();
		android::content::pm::ActivityInfo_WindowLayout windowLayout();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActivityInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::ComponentInfo(className, sig, std::forward<Ts>(agv)...) {}
		ActivityInfo(QAndroidJniObject obj);
		
		// Constructors
		ActivityInfo();
		ActivityInfo(android::content::pm::ActivityInfo &arg0);
		
		// Methods
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		jint getThemeResource() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

