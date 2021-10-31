#include "./ActivityInfo_WindowLayout.hpp"
#include "../../os/Parcel.hpp"
#include "./ActivityInfo.hpp"

namespace android::content::pm
{
	// Fields
	jint ActivityInfo::COLOR_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_DEFAULT"
		);
	}
	jint ActivityInfo::COLOR_MODE_HDR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_HDR"
		);
	}
	jint ActivityInfo::COLOR_MODE_WIDE_COLOR_GAMUT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_WIDE_COLOR_GAMUT"
		);
	}
	jint ActivityInfo::CONFIG_COLOR_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_COLOR_MODE"
		);
	}
	jint ActivityInfo::CONFIG_DENSITY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_DENSITY"
		);
	}
	jint ActivityInfo::CONFIG_FONT_SCALE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_FONT_SCALE"
		);
	}
	jint ActivityInfo::CONFIG_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_KEYBOARD"
		);
	}
	jint ActivityInfo::CONFIG_KEYBOARD_HIDDEN()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_KEYBOARD_HIDDEN"
		);
	}
	jint ActivityInfo::CONFIG_LAYOUT_DIRECTION()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_LAYOUT_DIRECTION"
		);
	}
	jint ActivityInfo::CONFIG_LOCALE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_LOCALE"
		);
	}
	jint ActivityInfo::CONFIG_MCC()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_MCC"
		);
	}
	jint ActivityInfo::CONFIG_MNC()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_MNC"
		);
	}
	jint ActivityInfo::CONFIG_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_NAVIGATION"
		);
	}
	jint ActivityInfo::CONFIG_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_ORIENTATION"
		);
	}
	jint ActivityInfo::CONFIG_SCREEN_LAYOUT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SCREEN_LAYOUT"
		);
	}
	jint ActivityInfo::CONFIG_SCREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SCREEN_SIZE"
		);
	}
	jint ActivityInfo::CONFIG_SMALLEST_SCREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SMALLEST_SCREEN_SIZE"
		);
	}
	jint ActivityInfo::CONFIG_TOUCHSCREEN()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_TOUCHSCREEN"
		);
	}
	jint ActivityInfo::CONFIG_UI_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_UI_MODE"
		);
	}
	__JniBaseClass ActivityInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ActivityInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_ALWAYS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_ALWAYS"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_INTO_EXISTING()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_INTO_EXISTING"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_NEVER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_NEVER"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_NONE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_NONE"
		);
	}
	jint ActivityInfo::FLAG_ALLOW_TASK_REPARENTING()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ALLOW_TASK_REPARENTING"
		);
	}
	jint ActivityInfo::FLAG_ALWAYS_RETAIN_TASK_STATE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ALWAYS_RETAIN_TASK_STATE"
		);
	}
	jint ActivityInfo::FLAG_AUTO_REMOVE_FROM_RECENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_AUTO_REMOVE_FROM_RECENTS"
		);
	}
	jint ActivityInfo::FLAG_CLEAR_TASK_ON_LAUNCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_CLEAR_TASK_ON_LAUNCH"
		);
	}
	jint ActivityInfo::FLAG_ENABLE_VR_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ENABLE_VR_MODE"
		);
	}
	jint ActivityInfo::FLAG_EXCLUDE_FROM_RECENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_EXCLUDE_FROM_RECENTS"
		);
	}
	jint ActivityInfo::FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS"
		);
	}
	jint ActivityInfo::FLAG_FINISH_ON_TASK_LAUNCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_FINISH_ON_TASK_LAUNCH"
		);
	}
	jint ActivityInfo::FLAG_HARDWARE_ACCELERATED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	jint ActivityInfo::FLAG_IMMERSIVE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_IMMERSIVE"
		);
	}
	jint ActivityInfo::FLAG_MULTIPROCESS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_MULTIPROCESS"
		);
	}
	jint ActivityInfo::FLAG_NO_HISTORY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_NO_HISTORY"
		);
	}
	jint ActivityInfo::FLAG_RELINQUISH_TASK_IDENTITY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_RELINQUISH_TASK_IDENTITY"
		);
	}
	jint ActivityInfo::FLAG_RESUME_WHILE_PAUSING()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_RESUME_WHILE_PAUSING"
		);
	}
	jint ActivityInfo::FLAG_SINGLE_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_SINGLE_USER"
		);
	}
	jint ActivityInfo::FLAG_STATE_NOT_NEEDED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_STATE_NOT_NEEDED"
		);
	}
	jint ActivityInfo::LAUNCH_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_MULTIPLE"
		);
	}
	jint ActivityInfo::LAUNCH_SINGLE_INSTANCE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_INSTANCE"
		);
	}
	jint ActivityInfo::LAUNCH_SINGLE_TASK()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_TASK"
		);
	}
	jint ActivityInfo::LAUNCH_SINGLE_TOP()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_TOP"
		);
	}
	jint ActivityInfo::PERSIST_ACROSS_REBOOTS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_ACROSS_REBOOTS"
		);
	}
	jint ActivityInfo::PERSIST_NEVER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_NEVER"
		);
	}
	jint ActivityInfo::PERSIST_ROOT_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_ROOT_ONLY"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_BEHIND()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_BEHIND"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_FULL_SENSOR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_FULL_SENSOR"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_FULL_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_FULL_USER"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_LOCKED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_LOCKED"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_NOSENSOR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_NOSENSOR"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_PORTRAIT"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_REVERSE_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_REVERSE_PORTRAIT"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_SENSOR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR_PORTRAIT"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_UNSPECIFIED"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_USER_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_USER_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER_PORTRAIT"
		);
	}
	jint ActivityInfo::UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW"
		);
	}
	jint ActivityInfo::colorMode()
	{
		return getField<jint>(
			"colorMode"
		);
	}
	jint ActivityInfo::configChanges()
	{
		return getField<jint>(
			"configChanges"
		);
	}
	jint ActivityInfo::documentLaunchMode()
	{
		return getField<jint>(
			"documentLaunchMode"
		);
	}
	jint ActivityInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jint ActivityInfo::launchMode()
	{
		return getField<jint>(
			"launchMode"
		);
	}
	jint ActivityInfo::maxRecents()
	{
		return getField<jint>(
			"maxRecents"
		);
	}
	jstring ActivityInfo::parentActivityName()
	{
		return getObjectField(
			"parentActivityName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityInfo::permission()
	{
		return getObjectField(
			"permission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityInfo::persistableMode()
	{
		return getField<jint>(
			"persistableMode"
		);
	}
	jint ActivityInfo::screenOrientation()
	{
		return getField<jint>(
			"screenOrientation"
		);
	}
	jint ActivityInfo::softInputMode()
	{
		return getField<jint>(
			"softInputMode"
		);
	}
	jstring ActivityInfo::targetActivity()
	{
		return getObjectField(
			"targetActivity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityInfo::taskAffinity()
	{
		return getObjectField(
			"taskAffinity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityInfo::theme()
	{
		return getField<jint>(
			"theme"
		);
	}
	jint ActivityInfo::uiOptions()
	{
		return getField<jint>(
			"uiOptions"
		);
	}
	android::content::pm::ActivityInfo_WindowLayout ActivityInfo::windowLayout()
	{
		return getObjectField(
			"windowLayout",
			"Landroid/content/pm/ActivityInfo$WindowLayout;"
		);
	}
	
	// QJniObject forward
	ActivityInfo::ActivityInfo(QJniObject obj) : android::content::pm::ComponentInfo(obj) {}
	
	// Constructors
	ActivityInfo::ActivityInfo()
		: android::content::pm::ComponentInfo(
			"android.content.pm.ActivityInfo",
			"()V"
		) {}
	ActivityInfo::ActivityInfo(android::content::pm::ActivityInfo &arg0)
		: android::content::pm::ComponentInfo(
			"android.content.pm.ActivityInfo",
			"(Landroid/content/pm/ActivityInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ActivityInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jint ActivityInfo::getThemeResource()
	{
		return callMethod<jint>(
			"getThemeResource",
			"()I"
		);
	}
	jstring ActivityInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ActivityInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

