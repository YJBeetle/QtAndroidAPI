#pragma once

#include "./ActivityInfo_WindowLayout.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ActivityInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline jint ActivityInfo::COLOR_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_DEFAULT"
		);
	}
	inline jint ActivityInfo::COLOR_MODE_HDR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_HDR"
		);
	}
	inline jint ActivityInfo::COLOR_MODE_WIDE_COLOR_GAMUT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_WIDE_COLOR_GAMUT"
		);
	}
	inline jint ActivityInfo::CONFIG_COLOR_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_COLOR_MODE"
		);
	}
	inline jint ActivityInfo::CONFIG_DENSITY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_DENSITY"
		);
	}
	inline jint ActivityInfo::CONFIG_FONT_SCALE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_FONT_SCALE"
		);
	}
	inline jint ActivityInfo::CONFIG_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_KEYBOARD"
		);
	}
	inline jint ActivityInfo::CONFIG_KEYBOARD_HIDDEN()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_KEYBOARD_HIDDEN"
		);
	}
	inline jint ActivityInfo::CONFIG_LAYOUT_DIRECTION()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_LAYOUT_DIRECTION"
		);
	}
	inline jint ActivityInfo::CONFIG_LOCALE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_LOCALE"
		);
	}
	inline jint ActivityInfo::CONFIG_MCC()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_MCC"
		);
	}
	inline jint ActivityInfo::CONFIG_MNC()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_MNC"
		);
	}
	inline jint ActivityInfo::CONFIG_NAVIGATION()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_NAVIGATION"
		);
	}
	inline jint ActivityInfo::CONFIG_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_ORIENTATION"
		);
	}
	inline jint ActivityInfo::CONFIG_SCREEN_LAYOUT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SCREEN_LAYOUT"
		);
	}
	inline jint ActivityInfo::CONFIG_SCREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SCREEN_SIZE"
		);
	}
	inline jint ActivityInfo::CONFIG_SMALLEST_SCREEN_SIZE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SMALLEST_SCREEN_SIZE"
		);
	}
	inline jint ActivityInfo::CONFIG_TOUCHSCREEN()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_TOUCHSCREEN"
		);
	}
	inline jint ActivityInfo::CONFIG_UI_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_UI_MODE"
		);
	}
	inline JObject ActivityInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ActivityInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ActivityInfo::DOCUMENT_LAUNCH_ALWAYS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_ALWAYS"
		);
	}
	inline jint ActivityInfo::DOCUMENT_LAUNCH_INTO_EXISTING()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_INTO_EXISTING"
		);
	}
	inline jint ActivityInfo::DOCUMENT_LAUNCH_NEVER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_NEVER"
		);
	}
	inline jint ActivityInfo::DOCUMENT_LAUNCH_NONE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_NONE"
		);
	}
	inline jint ActivityInfo::FLAG_ALLOW_TASK_REPARENTING()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ALLOW_TASK_REPARENTING"
		);
	}
	inline jint ActivityInfo::FLAG_ALWAYS_RETAIN_TASK_STATE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ALWAYS_RETAIN_TASK_STATE"
		);
	}
	inline jint ActivityInfo::FLAG_AUTO_REMOVE_FROM_RECENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_AUTO_REMOVE_FROM_RECENTS"
		);
	}
	inline jint ActivityInfo::FLAG_CLEAR_TASK_ON_LAUNCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_CLEAR_TASK_ON_LAUNCH"
		);
	}
	inline jint ActivityInfo::FLAG_ENABLE_VR_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ENABLE_VR_MODE"
		);
	}
	inline jint ActivityInfo::FLAG_EXCLUDE_FROM_RECENTS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_EXCLUDE_FROM_RECENTS"
		);
	}
	inline jint ActivityInfo::FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS"
		);
	}
	inline jint ActivityInfo::FLAG_FINISH_ON_TASK_LAUNCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_FINISH_ON_TASK_LAUNCH"
		);
	}
	inline jint ActivityInfo::FLAG_HARDWARE_ACCELERATED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	inline jint ActivityInfo::FLAG_IMMERSIVE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_IMMERSIVE"
		);
	}
	inline jint ActivityInfo::FLAG_MULTIPROCESS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_MULTIPROCESS"
		);
	}
	inline jint ActivityInfo::FLAG_NO_HISTORY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_NO_HISTORY"
		);
	}
	inline jint ActivityInfo::FLAG_RELINQUISH_TASK_IDENTITY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_RELINQUISH_TASK_IDENTITY"
		);
	}
	inline jint ActivityInfo::FLAG_RESUME_WHILE_PAUSING()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_RESUME_WHILE_PAUSING"
		);
	}
	inline jint ActivityInfo::FLAG_SINGLE_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_SINGLE_USER"
		);
	}
	inline jint ActivityInfo::FLAG_STATE_NOT_NEEDED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_STATE_NOT_NEEDED"
		);
	}
	inline jint ActivityInfo::LAUNCH_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_MULTIPLE"
		);
	}
	inline jint ActivityInfo::LAUNCH_SINGLE_INSTANCE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_INSTANCE"
		);
	}
	inline jint ActivityInfo::LAUNCH_SINGLE_TASK()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_TASK"
		);
	}
	inline jint ActivityInfo::LAUNCH_SINGLE_TOP()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_TOP"
		);
	}
	inline jint ActivityInfo::PERSIST_ACROSS_REBOOTS()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_ACROSS_REBOOTS"
		);
	}
	inline jint ActivityInfo::PERSIST_NEVER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_NEVER"
		);
	}
	inline jint ActivityInfo::PERSIST_ROOT_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_ROOT_ONLY"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_BEHIND()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_BEHIND"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_FULL_SENSOR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_FULL_SENSOR"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_FULL_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_FULL_USER"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_LANDSCAPE"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_LOCKED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_LOCKED"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_NOSENSOR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_NOSENSOR"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_PORTRAIT"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_REVERSE_LANDSCAPE"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_REVERSE_PORTRAIT"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_SENSOR()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR_LANDSCAPE"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR_PORTRAIT"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_UNSPECIFIED"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_USER()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_USER_LANDSCAPE()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER_LANDSCAPE"
		);
	}
	inline jint ActivityInfo::SCREEN_ORIENTATION_USER_PORTRAIT()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER_PORTRAIT"
		);
	}
	inline jint ActivityInfo::UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW()
	{
		return getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW"
		);
	}
	inline jint ActivityInfo::colorMode()
	{
		return getField<jint>(
			"colorMode"
		);
	}
	inline jint ActivityInfo::configChanges()
	{
		return getField<jint>(
			"configChanges"
		);
	}
	inline jint ActivityInfo::documentLaunchMode()
	{
		return getField<jint>(
			"documentLaunchMode"
		);
	}
	inline jint ActivityInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jint ActivityInfo::launchMode()
	{
		return getField<jint>(
			"launchMode"
		);
	}
	inline jint ActivityInfo::maxRecents()
	{
		return getField<jint>(
			"maxRecents"
		);
	}
	inline JString ActivityInfo::parentActivityName()
	{
		return getObjectField(
			"parentActivityName",
			"Ljava/lang/String;"
		);
	}
	inline JString ActivityInfo::permission()
	{
		return getObjectField(
			"permission",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityInfo::persistableMode()
	{
		return getField<jint>(
			"persistableMode"
		);
	}
	inline jint ActivityInfo::screenOrientation()
	{
		return getField<jint>(
			"screenOrientation"
		);
	}
	inline jint ActivityInfo::softInputMode()
	{
		return getField<jint>(
			"softInputMode"
		);
	}
	inline JString ActivityInfo::targetActivity()
	{
		return getObjectField(
			"targetActivity",
			"Ljava/lang/String;"
		);
	}
	inline JString ActivityInfo::taskAffinity()
	{
		return getObjectField(
			"taskAffinity",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityInfo::theme()
	{
		return getField<jint>(
			"theme"
		);
	}
	inline jint ActivityInfo::uiOptions()
	{
		return getField<jint>(
			"uiOptions"
		);
	}
	inline android::content::pm::ActivityInfo_WindowLayout ActivityInfo::windowLayout()
	{
		return getObjectField(
			"windowLayout",
			"Landroid/content/pm/ActivityInfo$WindowLayout;"
		);
	}
	
	// Constructors
	inline ActivityInfo::ActivityInfo()
		: android::content::pm::ComponentInfo(
			"android.content.pm.ActivityInfo",
			"()V"
		) {}
	inline ActivityInfo::ActivityInfo(android::content::pm::ActivityInfo &arg0)
		: android::content::pm::ComponentInfo(
			"android.content.pm.ActivityInfo",
			"(Landroid/content/pm/ActivityInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ActivityInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ActivityInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint ActivityInfo::getThemeResource() const
	{
		return callMethod<jint>(
			"getThemeResource",
			"()I"
		);
	}
	inline JString ActivityInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ActivityInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers
#include "./PackageItemInfo.hpp"
#include "./ComponentInfo.hpp"

