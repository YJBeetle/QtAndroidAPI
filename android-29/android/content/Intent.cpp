#include "./ClipData.hpp"
#include "./ComponentName.hpp"
#include "./ContentResolver.hpp"
#include "./Context.hpp"
#include "./IntentSender.hpp"
#include "./pm/ActivityInfo.hpp"
#include "./pm/PackageManager.hpp"
#include "./res/Resources.hpp"
#include "../graphics/Rect.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Intent.hpp"

namespace android::content
{
	// Fields
	jstring Intent::ACTION_AIRPLANE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_AIRPLANE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ALL_APPS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ALL_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ANSWER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ANSWER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_APPLICATION_PREFERENCES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_APPLICATION_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_APPLICATION_RESTRICTIONS_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_APPLICATION_RESTRICTIONS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_APP_ERROR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_APP_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ASSIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ASSIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ATTACH_DATA()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ATTACH_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BATTERY_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BATTERY_LOW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_LOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BATTERY_OKAY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_OKAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BOOT_COMPLETED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BOOT_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BUG_REPORT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BUG_REPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CALL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CALL_BUTTON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CALL_BUTTON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CAMERA_BUTTON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CAMERA_BUTTON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CARRIER_SETUP()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CARRIER_SETUP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CHOOSER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CHOOSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CLOSE_SYSTEM_DIALOGS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CLOSE_SYSTEM_DIALOGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CONFIGURATION_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CONFIGURATION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CREATE_DOCUMENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CREATE_DOCUMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CREATE_SHORTCUT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CREATE_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DATE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEFAULT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEFINE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEFINE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DELETE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DELETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEVICE_STORAGE_LOW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEVICE_STORAGE_LOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEVICE_STORAGE_OK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEVICE_STORAGE_OK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DIAL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DOCK_EVENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DOCK_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DREAMING_STARTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DREAMING_STARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DREAMING_STOPPED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DREAMING_STOPPED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_EDIT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_EDIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_EXTERNAL_APPLICATIONS_AVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_EXTERNAL_APPLICATIONS_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_FACTORY_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_FACTORY_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GET_CONTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GET_CONTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GET_RESTRICTION_ENTRIES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GET_RESTRICTION_ENTRIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GTALK_SERVICE_CONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GTALK_SERVICE_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GTALK_SERVICE_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GTALK_SERVICE_DISCONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_HEADSET_PLUG()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_HEADSET_PLUG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INPUT_METHOD_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INPUT_METHOD_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSERT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSERT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSERT_OR_EDIT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSERT_OR_EDIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSTALL_FAILURE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSTALL_FAILURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSTALL_PACKAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSTALL_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_LOCALE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_LOCALE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_LOCKED_BOOT_COMPLETED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_LOCKED_BOOT_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MAIN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_ADDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_ADDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_AVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_UNAVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_UNAVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_UNLOCKED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_UNLOCKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGE_NETWORK_USAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGE_NETWORK_USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGE_PACKAGE_STORAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGE_PACKAGE_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_BAD_REMOVAL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_BAD_REMOVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_BUTTON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_BUTTON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_CHECKING()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_CHECKING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_EJECT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_EJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_MOUNTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_MOUNTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_NOFS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_NOFS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SCANNER_FINISHED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_FINISHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SCANNER_SCAN_FILE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_SCAN_FILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SCANNER_STARTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_STARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SHARED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SHARED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_UNMOUNTABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_UNMOUNTABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_UNMOUNTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_UNMOUNTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MY_PACKAGE_REPLACED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_REPLACED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MY_PACKAGE_SUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_SUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MY_PACKAGE_UNSUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_UNSUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_NEW_OUTGOING_CALL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_NEW_OUTGOING_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_OPEN_DOCUMENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_OPEN_DOCUMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_OPEN_DOCUMENT_TREE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_OPEN_DOCUMENT_TREE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGES_SUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGES_SUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGES_UNSUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGES_UNSUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_ADDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_ADDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_DATA_CLEARED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_DATA_CLEARED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_FIRST_LAUNCH()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_FIRST_LAUNCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_FULLY_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_FULLY_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_INSTALL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_INSTALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_NEEDS_VERIFICATION()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_NEEDS_VERIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_REPLACED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_REPLACED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_RESTARTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_RESTARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_VERIFIED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_VERIFIED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PASTE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PASTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PICK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PICK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PICK_ACTIVITY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PICK_ACTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_POWER_CONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_POWER_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_DISCONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_POWER_USAGE_SUMMARY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_USAGE_SUMMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PROCESS_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PROCESS_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PROVIDER_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PROVIDER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_QUICK_CLOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_QUICK_CLOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_QUICK_VIEW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_QUICK_VIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_REBOOT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_REBOOT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_RUN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_RUN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SCREEN_OFF()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SCREEN_OFF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SCREEN_ON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SCREEN_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEARCH()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEARCH_LONG_PRESS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEARCH_LONG_PRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SENDTO()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SENDTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEND_MULTIPLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEND_MULTIPLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SET_WALLPAPER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SET_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SHOW_APP_INFO()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SHOW_APP_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SHUTDOWN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SHUTDOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SYNC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SYNC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SYSTEM_TUTORIAL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SYSTEM_TUTORIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TIMEZONE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIMEZONE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TIME_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIME_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TIME_TICK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIME_TICK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TRANSLATE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_TRANSLATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UID_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UID_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UMS_CONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UMS_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UMS_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UMS_DISCONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UNINSTALL_PACKAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UNINSTALL_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_BACKGROUND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_BACKGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_FOREGROUND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_FOREGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_INITIALIZE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_INITIALIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_PRESENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_PRESENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_UNLOCKED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_UNLOCKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VIEW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_VIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VIEW_LOCUS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_VIEW_LOCUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VIEW_PERMISSION_USAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_VIEW_PERMISSION_USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VOICE_COMMAND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_VOICE_COMMAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_WALLPAPER_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_WALLPAPER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_WEB_SEARCH()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_WEB_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_ALTERNATIVE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_ALTERNATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_BROWSER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_BROWSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_CALCULATOR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CALCULATOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_CALENDAR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_CONTACTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_EMAIL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_FILES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_FILES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_GALLERY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_GALLERY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MAPS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MAPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MARKET()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MARKET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MESSAGING()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MESSAGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MUSIC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MUSIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_BROWSABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_BROWSABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_CAR_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_CAR_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_CAR_MODE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_CAR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_DEFAULT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_DESK_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DESK_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_DEVELOPMENT_PREFERENCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DEVELOPMENT_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_EMBED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_EMBED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_HE_DESK_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_HE_DESK_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_HOME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_INFO()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_LAUNCHER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LAUNCHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_LEANBACK_LAUNCHER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LEANBACK_LAUNCHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_LE_DESK_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LE_DESK_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_MONKEY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_MONKEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_OPENABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_OPENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_PREFERENCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_SAMPLE_CODE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SAMPLE_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_SECONDARY_HOME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SECONDARY_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_SELECTED_ALTERNATIVE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SELECTED_ALTERNATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_TAB()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TAB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_TYPED_OPENABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TYPED_OPENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_UNIT_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_UNIT_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_VOICE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_VOICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_VR_HOME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_VR_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass Intent::CREATOR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Intent::EXTRA_ALARM_COUNT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALARM_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ALLOW_MULTIPLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALLOW_MULTIPLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ALLOW_REPLACE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALLOW_REPLACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ALTERNATE_INTENTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALTERNATE_INTENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_CONTEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_CONTEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_INPUT_DEVICE_ID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_INPUT_DEVICE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_INPUT_HINT_KEYBOARD()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_INPUT_HINT_KEYBOARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_PACKAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_UID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_UID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_AUTO_LAUNCH_SINGLE_CHOICE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_AUTO_LAUNCH_SINGLE_CHOICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_BCC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_BCC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_BUG_REPORT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_BUG_REPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_COMPONENT_NAME_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_COMPONENT_NAME_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_PACKAGE_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_PACKAGE_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_UID_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_UID_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOOSER_TARGETS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOOSER_TARGETS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOSEN_COMPONENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOSEN_COMPONENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOSEN_COMPONENT_INTENT_SENDER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOSEN_COMPONENT_INTENT_SENDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CONTENT_ANNOTATIONS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CONTENT_ANNOTATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CONTENT_QUERY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CONTENT_QUERY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_DATA_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DATA_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_DOCK_STATE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DOCK_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Intent::EXTRA_DOCK_STATE_CAR()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_CAR"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_DESK()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_DESK"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_HE_DESK()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_HE_DESK"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_LE_DESK()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_LE_DESK"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_UNDOCKED()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_UNDOCKED"
		);
	}
	jstring Intent::EXTRA_DONT_KILL_APP()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DONT_KILL_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_DURATION_MILLIS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DURATION_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_EMAIL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_EXCLUDE_COMPONENTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_EXCLUDE_COMPONENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_FROM_STORAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_FROM_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_HTML_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_HTML_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INDEX()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INITIAL_INTENTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INITIAL_INTENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INSTALLER_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INSTALLER_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_KEY_EVENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_KEY_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_LOCAL_ONLY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_LOCAL_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_LOCUS_ID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_LOCUS_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_MIME_TYPES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_MIME_TYPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_NOT_UNKNOWN_SOURCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_NOT_UNKNOWN_SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ORIGINATING_URI()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ORIGINATING_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PHONE_NUMBER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PHONE_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PROCESS_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PROCESS_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PROCESS_TEXT_READONLY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PROCESS_TEXT_READONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_QUICK_VIEW_FEATURES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_QUICK_VIEW_FEATURES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_QUIET_MODE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_QUIET_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REFERRER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REFERRER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REFERRER_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REFERRER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REMOTE_INTENT_TOKEN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REMOTE_INTENT_TOKEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REPLACEMENT_EXTRAS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REPLACEMENT_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REPLACING()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REPLACING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESTRICTIONS_BUNDLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESTRICTIONS_INTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESTRICTIONS_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESULT_RECEIVER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESULT_RECEIVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RETURN_RESULT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RETURN_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_ICON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_ICON_RESOURCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ICON_RESOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_ID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_INTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHUTDOWN_USERSPACE_ONLY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHUTDOWN_USERSPACE_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SPLIT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SPLIT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_STREAM()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_STREAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SUBJECT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SUBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SUSPENDED_PACKAGE_EXTRAS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SUSPENDED_PACKAGE_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_TEMPLATE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TEMPLATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_TITLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_UID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_UID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_USER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Intent::FILL_IN_ACTION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_ACTION"
		);
	}
	jint Intent::FILL_IN_CATEGORIES()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_CATEGORIES"
		);
	}
	jint Intent::FILL_IN_CLIP_DATA()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_CLIP_DATA"
		);
	}
	jint Intent::FILL_IN_COMPONENT()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_COMPONENT"
		);
	}
	jint Intent::FILL_IN_DATA()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_DATA"
		);
	}
	jint Intent::FILL_IN_IDENTIFIER()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_IDENTIFIER"
		);
	}
	jint Intent::FILL_IN_PACKAGE()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_PACKAGE"
		);
	}
	jint Intent::FILL_IN_SELECTOR()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_SELECTOR"
		);
	}
	jint Intent::FILL_IN_SOURCE_BOUNDS()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_SOURCE_BOUNDS"
		);
	}
	jint Intent::FLAG_ACTIVITY_BROUGHT_TO_FRONT()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_BROUGHT_TO_FRONT"
		);
	}
	jint Intent::FLAG_ACTIVITY_CLEAR_TASK()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_CLEAR_TASK"
		);
	}
	jint Intent::FLAG_ACTIVITY_CLEAR_TOP()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_CLEAR_TOP"
		);
	}
	jint Intent::FLAG_ACTIVITY_CLEAR_WHEN_TASK_RESET()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_CLEAR_WHEN_TASK_RESET"
		);
	}
	jint Intent::FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS"
		);
	}
	jint Intent::FLAG_ACTIVITY_FORWARD_RESULT()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_FORWARD_RESULT"
		);
	}
	jint Intent::FLAG_ACTIVITY_LAUNCHED_FROM_HISTORY()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_LAUNCHED_FROM_HISTORY"
		);
	}
	jint Intent::FLAG_ACTIVITY_LAUNCH_ADJACENT()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_LAUNCH_ADJACENT"
		);
	}
	jint Intent::FLAG_ACTIVITY_MATCH_EXTERNAL()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_MATCH_EXTERNAL"
		);
	}
	jint Intent::FLAG_ACTIVITY_MULTIPLE_TASK()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_MULTIPLE_TASK"
		);
	}
	jint Intent::FLAG_ACTIVITY_NEW_DOCUMENT()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NEW_DOCUMENT"
		);
	}
	jint Intent::FLAG_ACTIVITY_NEW_TASK()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NEW_TASK"
		);
	}
	jint Intent::FLAG_ACTIVITY_NO_ANIMATION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NO_ANIMATION"
		);
	}
	jint Intent::FLAG_ACTIVITY_NO_HISTORY()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NO_HISTORY"
		);
	}
	jint Intent::FLAG_ACTIVITY_NO_USER_ACTION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NO_USER_ACTION"
		);
	}
	jint Intent::FLAG_ACTIVITY_PREVIOUS_IS_TOP()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_PREVIOUS_IS_TOP"
		);
	}
	jint Intent::FLAG_ACTIVITY_REORDER_TO_FRONT()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_REORDER_TO_FRONT"
		);
	}
	jint Intent::FLAG_ACTIVITY_RESET_TASK_IF_NEEDED()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_RESET_TASK_IF_NEEDED"
		);
	}
	jint Intent::FLAG_ACTIVITY_RETAIN_IN_RECENTS()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_RETAIN_IN_RECENTS"
		);
	}
	jint Intent::FLAG_ACTIVITY_SINGLE_TOP()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_SINGLE_TOP"
		);
	}
	jint Intent::FLAG_ACTIVITY_TASK_ON_HOME()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_TASK_ON_HOME"
		);
	}
	jint Intent::FLAG_DEBUG_LOG_RESOLUTION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_DEBUG_LOG_RESOLUTION"
		);
	}
	jint Intent::FLAG_DIRECT_BOOT_AUTO()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_DIRECT_BOOT_AUTO"
		);
	}
	jint Intent::FLAG_EXCLUDE_STOPPED_PACKAGES()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_EXCLUDE_STOPPED_PACKAGES"
		);
	}
	jint Intent::FLAG_FROM_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_FROM_BACKGROUND"
		);
	}
	jint Intent::FLAG_GRANT_PERSISTABLE_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_PERSISTABLE_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_GRANT_PREFIX_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_PREFIX_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_GRANT_READ_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_READ_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_GRANT_WRITE_URI_PERMISSION()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_WRITE_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_INCLUDE_STOPPED_PACKAGES()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_INCLUDE_STOPPED_PACKAGES"
		);
	}
	jint Intent::FLAG_RECEIVER_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_FOREGROUND"
		);
	}
	jint Intent::FLAG_RECEIVER_NO_ABORT()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_NO_ABORT"
		);
	}
	jint Intent::FLAG_RECEIVER_REGISTERED_ONLY()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_REGISTERED_ONLY"
		);
	}
	jint Intent::FLAG_RECEIVER_REPLACE_PENDING()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_REPLACE_PENDING"
		);
	}
	jint Intent::FLAG_RECEIVER_VISIBLE_TO_INSTANT_APPS()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_VISIBLE_TO_INSTANT_APPS"
		);
	}
	jstring Intent::METADATA_DOCK_HOME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"METADATA_DOCK_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Intent::URI_ALLOW_UNSAFE()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"URI_ALLOW_UNSAFE"
		);
	}
	jint Intent::URI_ANDROID_APP_SCHEME()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"URI_ANDROID_APP_SCHEME"
		);
	}
	jint Intent::URI_INTENT_SCHEME()
	{
		return getStaticField<jint>(
			"android.content.Intent",
			"URI_INTENT_SCHEME"
		);
	}
	
	// QJniObject forward
	Intent::Intent(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Intent::Intent()
		: __JniBaseClass(
			"android.content.Intent",
			"()V"
		) {}
	Intent::Intent(android::content::Intent &arg0)
		: __JniBaseClass(
			"android.content.Intent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	Intent::Intent(jstring arg0)
		: __JniBaseClass(
			"android.content.Intent",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Intent::Intent(android::content::Context arg0, jclass arg1)
		: __JniBaseClass(
			"android.content.Intent",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.object(),
			arg1
		) {}
	Intent::Intent(jstring arg0, android::net::Uri arg1)
		: __JniBaseClass(
			"android.content.Intent",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.object()
		) {}
	Intent::Intent(jstring arg0, android::net::Uri arg1, android::content::Context arg2, jclass arg3)
		: __JniBaseClass(
			"android.content.Intent",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/content/Context;Ljava/lang/Class;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	android::content::Intent Intent::createChooser(android::content::Intent arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"createChooser",
			"(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0.object(),
			arg1
		);
	}
	android::content::Intent Intent::createChooser(android::content::Intent arg0, jstring arg1, android::content::IntentSender arg2)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"createChooser",
			"(Landroid/content/Intent;Ljava/lang/CharSequence;Landroid/content/IntentSender;)Landroid/content/Intent;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	android::content::Intent Intent::getIntent(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"getIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::getIntentOld(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"getIntentOld",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::makeMainActivity(android::content::ComponentName arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"makeMainActivity",
			"(Landroid/content/ComponentName;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::makeMainSelectorActivity(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"makeMainSelectorActivity",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::makeRestartActivityTask(android::content::ComponentName arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"makeRestartActivityTask",
			"(Landroid/content/ComponentName;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	jstring Intent::normalizeMimeType(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"normalizeMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::content::Intent Intent::parseIntent(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"parseIntent",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::content::Intent Intent::parseUri(jstring arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"parseUri",
			"(Ljava/lang/String;I)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::addCategory(jstring arg0)
	{
		return callObjectMethod(
			"addCategory",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::addFlags(jint arg0)
	{
		return callObjectMethod(
			"addFlags",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	jobject Intent::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::content::Intent Intent::cloneFilter()
	{
		return callObjectMethod(
			"cloneFilter",
			"()Landroid/content/Intent;"
		);
	}
	jint Intent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Intent::fillIn(android::content::Intent arg0, jint arg1)
	{
		return callMethod<jint>(
			"fillIn",
			"(Landroid/content/Intent;I)I",
			arg0.object(),
			arg1
		);
	}
	jboolean Intent::filterEquals(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"filterEquals",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	jint Intent::filterHashCode()
	{
		return callMethod<jint>(
			"filterHashCode",
			"()I"
		);
	}
	jstring Intent::getAction()
	{
		return callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbooleanArray Intent::getBooleanArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getBooleanArrayExtra",
			"(Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jboolean Intent::getBooleanExtra(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"getBooleanExtra",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	android::os::Bundle Intent::getBundleExtra(jstring arg0)
	{
		return callObjectMethod(
			"getBundleExtra",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
		);
	}
	jbyteArray Intent::getByteArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getByteArrayExtra",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyte Intent::getByteExtra(jstring arg0, jbyte arg1)
	{
		return callMethod<jbyte>(
			"getByteExtra",
			"(Ljava/lang/String;B)B",
			arg0,
			arg1
		);
	}
	__JniBaseClass Intent::getCategories()
	{
		return callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;"
		);
	}
	jcharArray Intent::getCharArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getCharArrayExtra",
			"(Ljava/lang/String;)[C",
			arg0
		).object<jcharArray>();
	}
	jchar Intent::getCharExtra(jstring arg0, jchar arg1)
	{
		return callMethod<jchar>(
			"getCharExtra",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jarray Intent::getCharSequenceArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getCharSequenceArrayExtra",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	java::util::ArrayList Intent::getCharSequenceArrayListExtra(jstring arg0)
	{
		return callObjectMethod(
			"getCharSequenceArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jstring Intent::getCharSequenceExtra(jstring arg0)
	{
		return callObjectMethod(
			"getCharSequenceExtra",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	android::content::ClipData Intent::getClipData()
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	android::content::ComponentName Intent::getComponent()
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	android::net::Uri Intent::getData()
	{
		return callObjectMethod(
			"getData",
			"()Landroid/net/Uri;"
		);
	}
	jstring Intent::getDataString()
	{
		return callObjectMethod(
			"getDataString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdoubleArray Intent::getDoubleArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getDoubleArrayExtra",
			"(Ljava/lang/String;)[D",
			arg0
		).object<jdoubleArray>();
	}
	jdouble Intent::getDoubleExtra(jstring arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"getDoubleExtra",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	android::os::Bundle Intent::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Intent::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jfloatArray Intent::getFloatArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getFloatArrayExtra",
			"(Ljava/lang/String;)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloat Intent::getFloatExtra(jstring arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloatExtra",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jstring Intent::getIdentifier()
	{
		return callObjectMethod(
			"getIdentifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jintArray Intent::getIntArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getIntArrayExtra",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jint Intent::getIntExtra(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getIntExtra",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	java::util::ArrayList Intent::getIntegerArrayListExtra(jstring arg0)
	{
		return callObjectMethod(
			"getIntegerArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jlongArray Intent::getLongArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getLongArrayExtra",
			"(Ljava/lang/String;)[J",
			arg0
		).object<jlongArray>();
	}
	jlong Intent::getLongExtra(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLongExtra",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jstring Intent::getPackage()
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray Intent::getParcelableArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getParcelableArrayExtra",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0
		).object<jarray>();
	}
	java::util::ArrayList Intent::getParcelableArrayListExtra(jstring arg0)
	{
		return callObjectMethod(
			"getParcelableArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	__JniBaseClass Intent::getParcelableExtra(jstring arg0)
	{
		return callObjectMethod(
			"getParcelableExtra",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0
		);
	}
	jstring Intent::getScheme()
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::Intent Intent::getSelector()
	{
		return callObjectMethod(
			"getSelector",
			"()Landroid/content/Intent;"
		);
	}
	__JniBaseClass Intent::getSerializableExtra(jstring arg0)
	{
		return callObjectMethod(
			"getSerializableExtra",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0
		);
	}
	jshortArray Intent::getShortArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getShortArrayExtra",
			"(Ljava/lang/String;)[S",
			arg0
		).object<jshortArray>();
	}
	jshort Intent::getShortExtra(jstring arg0, jshort arg1)
	{
		return callMethod<jshort>(
			"getShortExtra",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	android::graphics::Rect Intent::getSourceBounds()
	{
		return callObjectMethod(
			"getSourceBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	jarray Intent::getStringArrayExtra(jstring arg0)
	{
		return callObjectMethod(
			"getStringArrayExtra",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	java::util::ArrayList Intent::getStringArrayListExtra(jstring arg0)
	{
		return callObjectMethod(
			"getStringArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jstring Intent::getStringExtra(jstring arg0)
	{
		return callObjectMethod(
			"getStringExtra",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Intent::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Intent::hasCategory(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Intent::hasExtra(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasExtra",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Intent::hasFileDescriptors()
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	android::content::Intent Intent::putCharSequenceArrayListExtra(jstring arg0, java::util::ArrayList arg1)
	{
		return callObjectMethod(
			"putCharSequenceArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.object()
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jbyteArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[B)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jcharArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[C)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jdoubleArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[D)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jfloatArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[F)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jintArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[I)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jlongArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[J)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jshortArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[S)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jbooleanArray arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[Z)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0,
			arg1.object()
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;",
			arg0,
			arg1.object()
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Z)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jbyte arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;B)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jchar arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;C)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jdouble arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;D)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jfloat arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;F)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;I)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jlong arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;J)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtra(jstring arg0, jshort arg1)
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;S)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	android::content::Intent Intent::putExtras(android::content::Intent arg0)
	{
		return callObjectMethod(
			"putExtras",
			"(Landroid/content/Intent;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::putExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"putExtras",
			"(Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::putIntegerArrayListExtra(jstring arg0, java::util::ArrayList arg1)
	{
		return callObjectMethod(
			"putIntegerArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.object()
		);
	}
	android::content::Intent Intent::putParcelableArrayListExtra(jstring arg0, java::util::ArrayList arg1)
	{
		return callObjectMethod(
			"putParcelableArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.object()
		);
	}
	android::content::Intent Intent::putStringArrayListExtra(jstring arg0, java::util::ArrayList arg1)
	{
		return callObjectMethod(
			"putStringArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.object()
		);
	}
	void Intent::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Intent::removeCategory(jstring arg0)
	{
		callMethod<void>(
			"removeCategory",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Intent::removeExtra(jstring arg0)
	{
		callMethod<void>(
			"removeExtra",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Intent::removeFlags(jint arg0)
	{
		callMethod<void>(
			"removeFlags",
			"(I)V",
			arg0
		);
	}
	android::content::Intent Intent::replaceExtras(android::content::Intent arg0)
	{
		return callObjectMethod(
			"replaceExtras",
			"(Landroid/content/Intent;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::replaceExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"replaceExtras",
			"(Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::ComponentName Intent::resolveActivity(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"resolveActivity",
			"(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	android::content::pm::ActivityInfo Intent::resolveActivityInfo(android::content::pm::PackageManager arg0, jint arg1)
	{
		return callObjectMethod(
			"resolveActivityInfo",
			"(Landroid/content/pm/PackageManager;I)Landroid/content/pm/ActivityInfo;",
			arg0.object(),
			arg1
		);
	}
	jstring Intent::resolveType(android::content::ContentResolver arg0)
	{
		return callObjectMethod(
			"resolveType",
			"(Landroid/content/ContentResolver;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Intent::resolveType(android::content::Context arg0)
	{
		return callObjectMethod(
			"resolveType",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Intent::resolveTypeIfNeeded(android::content::ContentResolver arg0)
	{
		return callObjectMethod(
			"resolveTypeIfNeeded",
			"(Landroid/content/ContentResolver;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	android::content::Intent Intent::setAction(jstring arg0)
	{
		return callObjectMethod(
			"setAction",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::setClass(android::content::Context arg0, jclass arg1)
	{
		return callObjectMethod(
			"setClass",
			"(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;",
			arg0.object(),
			arg1
		);
	}
	android::content::Intent Intent::setClassName(android::content::Context arg0, jstring arg1)
	{
		return callObjectMethod(
			"setClassName",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object(),
			arg1
		);
	}
	android::content::Intent Intent::setClassName(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setClassName",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	void Intent::setClipData(android::content::ClipData arg0)
	{
		callMethod<void>(
			"setClipData",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		);
	}
	android::content::Intent Intent::setComponent(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"setComponent",
			"(Landroid/content/ComponentName;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::setData(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setData",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::setDataAndNormalize(android::net::Uri arg0)
	{
		return callObjectMethod(
			"setDataAndNormalize",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::setDataAndType(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"setDataAndType",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object(),
			arg1
		);
	}
	android::content::Intent Intent::setDataAndTypeAndNormalize(android::net::Uri arg0, jstring arg1)
	{
		return callObjectMethod(
			"setDataAndTypeAndNormalize",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object(),
			arg1
		);
	}
	void Intent::setExtrasClassLoader(java::lang::ClassLoader arg0)
	{
		callMethod<void>(
			"setExtrasClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		);
	}
	android::content::Intent Intent::setFlags(jint arg0)
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::setIdentifier(jstring arg0)
	{
		return callObjectMethod(
			"setIdentifier",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::setPackage(jstring arg0)
	{
		return callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	void Intent::setSelector(android::content::Intent arg0)
	{
		callMethod<void>(
			"setSelector",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Intent::setSourceBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setSourceBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	android::content::Intent Intent::setType(jstring arg0)
	{
		return callObjectMethod(
			"setType",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::setTypeAndNormalize(jstring arg0)
	{
		return callObjectMethod(
			"setTypeAndNormalize",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	jstring Intent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::toURI()
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::toUri(jint arg0)
	{
		return callObjectMethod(
			"toUri",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Intent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

