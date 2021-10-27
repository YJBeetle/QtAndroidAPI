#include "./ActivityInfo_WindowLayout.hpp"
#include "../../os/Parcel.hpp"
#include "./ActivityInfo.hpp"

namespace android::content::pm
{
	// Fields
	jint ActivityInfo::COLOR_MODE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_DEFAULT"
		);
	}
	jint ActivityInfo::COLOR_MODE_HDR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_HDR"
		);
	}
	jint ActivityInfo::COLOR_MODE_WIDE_COLOR_GAMUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"COLOR_MODE_WIDE_COLOR_GAMUT"
		);
	}
	jint ActivityInfo::CONFIG_COLOR_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_COLOR_MODE"
		);
	}
	jint ActivityInfo::CONFIG_DENSITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_DENSITY"
		);
	}
	jint ActivityInfo::CONFIG_FONT_SCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_FONT_SCALE"
		);
	}
	jint ActivityInfo::CONFIG_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_KEYBOARD"
		);
	}
	jint ActivityInfo::CONFIG_KEYBOARD_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_KEYBOARD_HIDDEN"
		);
	}
	jint ActivityInfo::CONFIG_LAYOUT_DIRECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_LAYOUT_DIRECTION"
		);
	}
	jint ActivityInfo::CONFIG_LOCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_LOCALE"
		);
	}
	jint ActivityInfo::CONFIG_MCC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_MCC"
		);
	}
	jint ActivityInfo::CONFIG_MNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_MNC"
		);
	}
	jint ActivityInfo::CONFIG_NAVIGATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_NAVIGATION"
		);
	}
	jint ActivityInfo::CONFIG_ORIENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_ORIENTATION"
		);
	}
	jint ActivityInfo::CONFIG_SCREEN_LAYOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SCREEN_LAYOUT"
		);
	}
	jint ActivityInfo::CONFIG_SCREEN_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SCREEN_SIZE"
		);
	}
	jint ActivityInfo::CONFIG_SMALLEST_SCREEN_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_SMALLEST_SCREEN_SIZE"
		);
	}
	jint ActivityInfo::CONFIG_TOUCHSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_TOUCHSCREEN"
		);
	}
	jint ActivityInfo::CONFIG_UI_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"CONFIG_UI_MODE"
		);
	}
	QAndroidJniObject ActivityInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ActivityInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_ALWAYS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_ALWAYS"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_INTO_EXISTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_INTO_EXISTING"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_NEVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_NEVER"
		);
	}
	jint ActivityInfo::DOCUMENT_LAUNCH_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"DOCUMENT_LAUNCH_NONE"
		);
	}
	jint ActivityInfo::FLAG_ALLOW_TASK_REPARENTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ALLOW_TASK_REPARENTING"
		);
	}
	jint ActivityInfo::FLAG_ALWAYS_RETAIN_TASK_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ALWAYS_RETAIN_TASK_STATE"
		);
	}
	jint ActivityInfo::FLAG_AUTO_REMOVE_FROM_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_AUTO_REMOVE_FROM_RECENTS"
		);
	}
	jint ActivityInfo::FLAG_CLEAR_TASK_ON_LAUNCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_CLEAR_TASK_ON_LAUNCH"
		);
	}
	jint ActivityInfo::FLAG_ENABLE_VR_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_ENABLE_VR_MODE"
		);
	}
	jint ActivityInfo::FLAG_EXCLUDE_FROM_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_EXCLUDE_FROM_RECENTS"
		);
	}
	jint ActivityInfo::FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_FINISH_ON_CLOSE_SYSTEM_DIALOGS"
		);
	}
	jint ActivityInfo::FLAG_FINISH_ON_TASK_LAUNCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_FINISH_ON_TASK_LAUNCH"
		);
	}
	jint ActivityInfo::FLAG_HARDWARE_ACCELERATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	jint ActivityInfo::FLAG_IMMERSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_IMMERSIVE"
		);
	}
	jint ActivityInfo::FLAG_MULTIPROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_MULTIPROCESS"
		);
	}
	jint ActivityInfo::FLAG_NO_HISTORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_NO_HISTORY"
		);
	}
	jint ActivityInfo::FLAG_RELINQUISH_TASK_IDENTITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_RELINQUISH_TASK_IDENTITY"
		);
	}
	jint ActivityInfo::FLAG_RESUME_WHILE_PAUSING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_RESUME_WHILE_PAUSING"
		);
	}
	jint ActivityInfo::FLAG_SINGLE_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_SINGLE_USER"
		);
	}
	jint ActivityInfo::FLAG_STATE_NOT_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"FLAG_STATE_NOT_NEEDED"
		);
	}
	jint ActivityInfo::LAUNCH_MULTIPLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_MULTIPLE"
		);
	}
	jint ActivityInfo::LAUNCH_SINGLE_INSTANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_INSTANCE"
		);
	}
	jint ActivityInfo::LAUNCH_SINGLE_TASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_TASK"
		);
	}
	jint ActivityInfo::LAUNCH_SINGLE_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"LAUNCH_SINGLE_TOP"
		);
	}
	jint ActivityInfo::PERSIST_ACROSS_REBOOTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_ACROSS_REBOOTS"
		);
	}
	jint ActivityInfo::PERSIST_NEVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_NEVER"
		);
	}
	jint ActivityInfo::PERSIST_ROOT_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"PERSIST_ROOT_ONLY"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_BEHIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_BEHIND"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_FULL_SENSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_FULL_SENSOR"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_FULL_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_FULL_USER"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_LOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_LOCKED"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_NOSENSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_NOSENSOR"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_PORTRAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_PORTRAIT"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_REVERSE_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_REVERSE_PORTRAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_REVERSE_PORTRAIT"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_SENSOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_SENSOR_PORTRAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_SENSOR_PORTRAIT"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_UNSPECIFIED"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_USER_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER_LANDSCAPE"
		);
	}
	jint ActivityInfo::SCREEN_ORIENTATION_USER_PORTRAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"SCREEN_ORIENTATION_USER_PORTRAIT"
		);
	}
	jint ActivityInfo::UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ActivityInfo",
			"UIOPTION_SPLIT_ACTION_BAR_WHEN_NARROW"
		);
	}
	jint ActivityInfo::colorMode()
	{
		return __thiz.getField<jint>(
			"colorMode"
		);
	}
	jint ActivityInfo::configChanges()
	{
		return __thiz.getField<jint>(
			"configChanges"
		);
	}
	jint ActivityInfo::documentLaunchMode()
	{
		return __thiz.getField<jint>(
			"documentLaunchMode"
		);
	}
	jint ActivityInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jint ActivityInfo::launchMode()
	{
		return __thiz.getField<jint>(
			"launchMode"
		);
	}
	jint ActivityInfo::maxRecents()
	{
		return __thiz.getField<jint>(
			"maxRecents"
		);
	}
	jstring ActivityInfo::parentActivityName()
	{
		return __thiz.getObjectField(
			"parentActivityName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityInfo::permission()
	{
		return __thiz.getObjectField(
			"permission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityInfo::persistableMode()
	{
		return __thiz.getField<jint>(
			"persistableMode"
		);
	}
	jint ActivityInfo::screenOrientation()
	{
		return __thiz.getField<jint>(
			"screenOrientation"
		);
	}
	jint ActivityInfo::softInputMode()
	{
		return __thiz.getField<jint>(
			"softInputMode"
		);
	}
	jstring ActivityInfo::targetActivity()
	{
		return __thiz.getObjectField(
			"targetActivity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ActivityInfo::taskAffinity()
	{
		return __thiz.getObjectField(
			"taskAffinity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityInfo::theme()
	{
		return __thiz.getField<jint>(
			"theme"
		);
	}
	jint ActivityInfo::uiOptions()
	{
		return __thiz.getField<jint>(
			"uiOptions"
		);
	}
	QAndroidJniObject ActivityInfo::windowLayout()
	{
		return __thiz.getObjectField(
			"windowLayout",
			"Landroid/content/pm/ActivityInfo$WindowLayout;"
		);
	}
	
	ActivityInfo::ActivityInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityInfo::ActivityInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ActivityInfo",
			"()V"
		);
	}
	ActivityInfo::ActivityInfo(android::content::pm::ActivityInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ActivityInfo",
			"(Landroid/content/pm/ActivityInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ActivityInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ActivityInfo::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint ActivityInfo::getThemeResource()
	{
		return __thiz.callMethod<jint>(
			"getThemeResource",
			"()I"
		);
	}
	jstring ActivityInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ActivityInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

