#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JDoubleArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JShortArray.hpp"
#include "../../JBooleanArray.hpp"
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
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Intent.hpp"

namespace android::content
{
	// Fields
	JString Intent::ACTION_AIRPLANE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_AIRPLANE_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_ALL_APPS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ALL_APPS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_ANSWER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ANSWER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_APPLICATION_PREFERENCES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_APPLICATION_PREFERENCES",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_APPLICATION_RESTRICTIONS_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_APPLICATION_RESTRICTIONS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_APP_ERROR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_APP_ERROR",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_ASSIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ASSIST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_ATTACH_DATA()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_ATTACH_DATA",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_BATTERY_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_BATTERY_LOW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_LOW",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_BATTERY_OKAY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_OKAY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_BOOT_COMPLETED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BOOT_COMPLETED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_BUG_REPORT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_BUG_REPORT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CALL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CALL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CALL_BUTTON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CALL_BUTTON",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CAMERA_BUTTON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CAMERA_BUTTON",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CARRIER_SETUP()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CARRIER_SETUP",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CHOOSER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CHOOSER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CLOSE_SYSTEM_DIALOGS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CLOSE_SYSTEM_DIALOGS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CONFIGURATION_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CONFIGURATION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CREATE_DOCUMENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CREATE_DOCUMENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_CREATE_SHORTCUT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_CREATE_SHORTCUT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DATE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DEFAULT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DELETE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DELETE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DEVICE_STORAGE_LOW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEVICE_STORAGE_LOW",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DEVICE_STORAGE_OK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEVICE_STORAGE_OK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DIAL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DIAL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DOCK_EVENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DOCK_EVENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DREAMING_STARTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DREAMING_STARTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_DREAMING_STOPPED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_DREAMING_STOPPED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_EDIT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_EDIT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_EXTERNAL_APPLICATIONS_AVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_EXTERNAL_APPLICATIONS_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_FACTORY_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_FACTORY_TEST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_GET_CONTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GET_CONTENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_GET_RESTRICTION_ENTRIES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GET_RESTRICTION_ENTRIES",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_GTALK_SERVICE_CONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GTALK_SERVICE_CONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_GTALK_SERVICE_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_GTALK_SERVICE_DISCONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_HEADSET_PLUG()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_HEADSET_PLUG",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_INPUT_METHOD_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INPUT_METHOD_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_INSERT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSERT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_INSERT_OR_EDIT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSERT_OR_EDIT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_INSTALL_FAILURE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSTALL_FAILURE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_INSTALL_PACKAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSTALL_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_LOCALE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_LOCALE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_LOCKED_BOOT_COMPLETED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_LOCKED_BOOT_COMPLETED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MAIN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MAIN",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MANAGED_PROFILE_ADDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_ADDED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MANAGED_PROFILE_AVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_AVAILABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MANAGED_PROFILE_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_REMOVED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MANAGED_PROFILE_UNAVAILABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_UNAVAILABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MANAGED_PROFILE_UNLOCKED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_UNLOCKED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MANAGE_NETWORK_USAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGE_NETWORK_USAGE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MANAGE_PACKAGE_STORAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGE_PACKAGE_STORAGE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_BAD_REMOVAL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_BAD_REMOVAL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_BUTTON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_BUTTON",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_CHECKING()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_CHECKING",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_EJECT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_EJECT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_MOUNTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_MOUNTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_NOFS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_NOFS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_REMOVED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_SCANNER_FINISHED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_FINISHED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_SCANNER_SCAN_FILE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_SCAN_FILE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_SCANNER_STARTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_STARTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_SHARED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SHARED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_UNMOUNTABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_UNMOUNTABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MEDIA_UNMOUNTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_UNMOUNTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MY_PACKAGE_REPLACED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_REPLACED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MY_PACKAGE_SUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_SUSPENDED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_MY_PACKAGE_UNSUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_UNSUSPENDED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_NEW_OUTGOING_CALL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_NEW_OUTGOING_CALL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_OPEN_DOCUMENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_OPEN_DOCUMENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_OPEN_DOCUMENT_TREE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_OPEN_DOCUMENT_TREE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGES_SUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGES_SUSPENDED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGES_UNSUSPENDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGES_UNSUSPENDED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_ADDED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_ADDED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_DATA_CLEARED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_DATA_CLEARED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_FIRST_LAUNCH()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_FIRST_LAUNCH",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_FULLY_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_FULLY_REMOVED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_INSTALL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_INSTALL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_NEEDS_VERIFICATION()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_NEEDS_VERIFICATION",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_REMOVED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_REPLACED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_REPLACED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_RESTARTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_RESTARTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PACKAGE_VERIFIED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_VERIFIED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PASTE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PASTE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PICK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PICK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PICK_ACTIVITY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PICK_ACTIVITY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_POWER_CONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_CONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_POWER_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_DISCONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_POWER_USAGE_SUMMARY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_USAGE_SUMMARY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PROCESS_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PROCESS_TEXT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_PROVIDER_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_PROVIDER_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_QUICK_CLOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_QUICK_CLOCK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_QUICK_VIEW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_QUICK_VIEW",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_REBOOT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_REBOOT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_RUN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_RUN",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SCREEN_OFF()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SCREEN_OFF",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SCREEN_ON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SCREEN_ON",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SEARCH()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SEARCH_LONG_PRESS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEARCH_LONG_PRESS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SEND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEND",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SENDTO()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SENDTO",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SEND_MULTIPLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEND_MULTIPLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SET_WALLPAPER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SET_WALLPAPER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SHOW_APP_INFO()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SHOW_APP_INFO",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SHUTDOWN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SHUTDOWN",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SYNC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SYNC",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_SYSTEM_TUTORIAL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_SYSTEM_TUTORIAL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_TIMEZONE_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIMEZONE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_TIME_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIME_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_TIME_TICK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIME_TICK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_UID_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UID_REMOVED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_UMS_CONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UMS_CONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_UMS_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UMS_DISCONNECTED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_UNINSTALL_PACKAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_UNINSTALL_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_USER_BACKGROUND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_BACKGROUND",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_USER_FOREGROUND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_FOREGROUND",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_USER_INITIALIZE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_INITIALIZE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_USER_PRESENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_PRESENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_USER_UNLOCKED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_UNLOCKED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_VIEW()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_VIEW",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_VOICE_COMMAND()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_VOICE_COMMAND",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_WALLPAPER_CHANGED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_WALLPAPER_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::ACTION_WEB_SEARCH()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"ACTION_WEB_SEARCH",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_ALTERNATIVE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_ALTERNATIVE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_BROWSER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_BROWSER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_CALCULATOR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CALCULATOR",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_CALENDAR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CALENDAR",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_CONTACTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CONTACTS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_EMAIL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_EMAIL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_GALLERY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_GALLERY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_MAPS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MAPS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_MARKET()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MARKET",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_MESSAGING()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MESSAGING",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_APP_MUSIC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MUSIC",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_BROWSABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_BROWSABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_CAR_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_CAR_DOCK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_CAR_MODE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_CAR_MODE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_DEFAULT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_DESK_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DESK_DOCK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_DEVELOPMENT_PREFERENCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DEVELOPMENT_PREFERENCE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_EMBED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_EMBED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_HE_DESK_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_HE_DESK_DOCK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_HOME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_HOME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_INFO()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_INFO",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_LAUNCHER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LAUNCHER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_LEANBACK_LAUNCHER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LEANBACK_LAUNCHER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_LE_DESK_DOCK()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LE_DESK_DOCK",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_MONKEY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_MONKEY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_OPENABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_OPENABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_PREFERENCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_PREFERENCE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_SAMPLE_CODE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SAMPLE_CODE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_SELECTED_ALTERNATIVE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SELECTED_ALTERNATIVE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_TAB()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TAB",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TEST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_TYPED_OPENABLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TYPED_OPENABLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_UNIT_TEST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_UNIT_TEST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_VOICE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_VOICE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::CATEGORY_VR_HOME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_VR_HOME",
			"Ljava/lang/String;"
		);
	}
	JObject Intent::CREATOR()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString Intent::EXTRA_ALARM_COUNT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALARM_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ALLOW_MULTIPLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALLOW_MULTIPLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ALLOW_REPLACE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALLOW_REPLACE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ALTERNATE_INTENTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALTERNATE_INTENTS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ASSIST_CONTEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_CONTEXT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ASSIST_INPUT_DEVICE_ID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_INPUT_DEVICE_ID",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ASSIST_INPUT_HINT_KEYBOARD()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_INPUT_HINT_KEYBOARD",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ASSIST_PACKAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ASSIST_UID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_UID",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_BCC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_BCC",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_BUG_REPORT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_BUG_REPORT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CC()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CC",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHANGED_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHANGED_COMPONENT_NAME_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_COMPONENT_NAME_LIST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHANGED_PACKAGE_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_PACKAGE_LIST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHANGED_UID_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_UID_LIST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHOOSER_TARGETS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOOSER_TARGETS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHOSEN_COMPONENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOSEN_COMPONENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CHOSEN_COMPONENT_INTENT_SENDER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOSEN_COMPONENT_INTENT_SENDER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_COMPONENT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_COMPONENT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_CONTENT_ANNOTATIONS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CONTENT_ANNOTATIONS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_DATA_REMOVED()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DATA_REMOVED",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_DOCK_STATE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DOCK_STATE",
			"Ljava/lang/String;"
		);
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
	JString Intent::EXTRA_DONT_KILL_APP()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DONT_KILL_APP",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_EMAIL()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_EMAIL",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_EXCLUDE_COMPONENTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_EXCLUDE_COMPONENTS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_FROM_STORAGE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_FROM_STORAGE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_HTML_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_HTML_TEXT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_INDEX()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INDEX",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_INITIAL_INTENTS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INITIAL_INTENTS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_INSTALLER_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INSTALLER_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_INTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INTENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_KEY_EVENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_KEY_EVENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_LOCAL_ONLY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_LOCAL_ONLY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_MIME_TYPES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_MIME_TYPES",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_NOT_UNKNOWN_SOURCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_NOT_UNKNOWN_SOURCE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_ORIGINATING_URI()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ORIGINATING_URI",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_PHONE_NUMBER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PHONE_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_PROCESS_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PROCESS_TEXT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_PROCESS_TEXT_READONLY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PROCESS_TEXT_READONLY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_QUICK_VIEW_FEATURES()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_QUICK_VIEW_FEATURES",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_QUIET_MODE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_QUIET_MODE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_REFERRER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REFERRER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_REFERRER_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REFERRER_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_REMOTE_INTENT_TOKEN()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REMOTE_INTENT_TOKEN",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_REPLACEMENT_EXTRAS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REPLACEMENT_EXTRAS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_REPLACING()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REPLACING",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_RESTRICTIONS_BUNDLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_BUNDLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_RESTRICTIONS_INTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_INTENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_RESTRICTIONS_LIST()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_LIST",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_RESULT_RECEIVER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESULT_RECEIVER",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_RETURN_RESULT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RETURN_RESULT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SHORTCUT_ICON()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ICON",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SHORTCUT_ICON_RESOURCE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ICON_RESOURCE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SHORTCUT_INTENT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_INTENT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SHORTCUT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SHUTDOWN_USERSPACE_ONLY()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHUTDOWN_USERSPACE_ONLY",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SPLIT_NAME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SPLIT_NAME",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_STREAM()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_STREAM",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SUBJECT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SUBJECT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_SUSPENDED_PACKAGE_EXTRAS()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SUSPENDED_PACKAGE_EXTRAS",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_TEMPLATE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TEMPLATE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_TEXT()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TEXT",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_TITLE()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TITLE",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_UID()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_UID",
			"Ljava/lang/String;"
		);
	}
	JString Intent::EXTRA_USER()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"EXTRA_USER",
			"Ljava/lang/String;"
		);
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
	JString Intent::METADATA_DOCK_HOME()
	{
		return getStaticObjectField(
			"android.content.Intent",
			"METADATA_DOCK_HOME",
			"Ljava/lang/String;"
		);
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
	
	// QAndroidJniObject forward
	Intent::Intent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Intent::Intent()
		: JObject(
			"android.content.Intent",
			"()V"
		) {}
	Intent::Intent(android::content::Intent &arg0)
		: JObject(
			"android.content.Intent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		) {}
	Intent::Intent(JString arg0)
		: JObject(
			"android.content.Intent",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Intent::Intent(android::content::Context arg0, JClass arg1)
		: JObject(
			"android.content.Intent",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.object(),
			arg1.object<jclass>()
		) {}
	Intent::Intent(JString arg0, android::net::Uri arg1)
		: JObject(
			"android.content.Intent",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	Intent::Intent(JString arg0, android::net::Uri arg1, android::content::Context arg2, JClass arg3)
		: JObject(
			"android.content.Intent",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jclass>()
		) {}
	
	// Methods
	android::content::Intent Intent::createChooser(android::content::Intent arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"createChooser",
			"(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::Intent Intent::createChooser(android::content::Intent arg0, JString arg1, android::content::IntentSender arg2)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"createChooser",
			"(Landroid/content/Intent;Ljava/lang/CharSequence;Landroid/content/IntentSender;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::content::Intent Intent::getIntent(JString arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"getIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	android::content::Intent Intent::getIntentOld(JString arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"getIntentOld",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
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
	android::content::Intent Intent::makeMainSelectorActivity(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"makeMainSelectorActivity",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
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
	JString Intent::normalizeMimeType(JString arg0)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"normalizeMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::content::Intent Intent::parseIntent(android::content::res::Resources arg0, JObject arg1, JObject arg2)
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
	android::content::Intent Intent::parseUri(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.content.Intent",
			"parseUri",
			"(Ljava/lang/String;I)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::addCategory(JString arg0) const
	{
		return callObjectMethod(
			"addCategory",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	android::content::Intent Intent::addFlags(jint arg0) const
	{
		return callObjectMethod(
			"addFlags",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	JObject Intent::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::content::Intent Intent::cloneFilter() const
	{
		return callObjectMethod(
			"cloneFilter",
			"()Landroid/content/Intent;"
		);
	}
	jint Intent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Intent::fillIn(android::content::Intent arg0, jint arg1) const
	{
		return callMethod<jint>(
			"fillIn",
			"(Landroid/content/Intent;I)I",
			arg0.object(),
			arg1
		);
	}
	jboolean Intent::filterEquals(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"filterEquals",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	jint Intent::filterHashCode() const
	{
		return callMethod<jint>(
			"filterHashCode",
			"()I"
		);
	}
	JString Intent::getAction() const
	{
		return callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		);
	}
	JBooleanArray Intent::getBooleanArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getBooleanArrayExtra",
			"(Ljava/lang/String;)[Z",
			arg0.object<jstring>()
		);
	}
	jboolean Intent::getBooleanExtra(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"getBooleanExtra",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::os::Bundle Intent::getBundleExtra(JString arg0) const
	{
		return callObjectMethod(
			"getBundleExtra",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object<jstring>()
		);
	}
	JByteArray Intent::getByteArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getByteArrayExtra",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	jbyte Intent::getByteExtra(JString arg0, jbyte arg1) const
	{
		return callMethod<jbyte>(
			"getByteExtra",
			"(Ljava/lang/String;B)B",
			arg0.object<jstring>(),
			arg1
		);
	}
	JObject Intent::getCategories() const
	{
		return callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;"
		);
	}
	JCharArray Intent::getCharArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getCharArrayExtra",
			"(Ljava/lang/String;)[C",
			arg0.object<jstring>()
		);
	}
	jchar Intent::getCharExtra(JString arg0, jchar arg1) const
	{
		return callMethod<jchar>(
			"getCharExtra",
			"(Ljava/lang/String;C)C",
			arg0.object<jstring>(),
			arg1
		);
	}
	JArray Intent::getCharSequenceArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getCharSequenceArrayExtra",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	java::util::ArrayList Intent::getCharSequenceArrayListExtra(JString arg0) const
	{
		return callObjectMethod(
			"getCharSequenceArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	JString Intent::getCharSequenceExtra(JString arg0) const
	{
		return callObjectMethod(
			"getCharSequenceExtra",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	android::content::ClipData Intent::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	android::content::ComponentName Intent::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	android::net::Uri Intent::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/net/Uri;"
		);
	}
	JString Intent::getDataString() const
	{
		return callObjectMethod(
			"getDataString",
			"()Ljava/lang/String;"
		);
	}
	JDoubleArray Intent::getDoubleArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getDoubleArrayExtra",
			"(Ljava/lang/String;)[D",
			arg0.object<jstring>()
		);
	}
	jdouble Intent::getDoubleExtra(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"getDoubleExtra",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::os::Bundle Intent::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint Intent::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	JFloatArray Intent::getFloatArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getFloatArrayExtra",
			"(Ljava/lang/String;)[F",
			arg0.object<jstring>()
		);
	}
	jfloat Intent::getFloatExtra(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloatExtra",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	JIntArray Intent::getIntArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getIntArrayExtra",
			"(Ljava/lang/String;)[I",
			arg0.object<jstring>()
		);
	}
	jint Intent::getIntExtra(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getIntExtra",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	java::util::ArrayList Intent::getIntegerArrayListExtra(JString arg0) const
	{
		return callObjectMethod(
			"getIntegerArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	JLongArray Intent::getLongArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getLongArrayExtra",
			"(Ljava/lang/String;)[J",
			arg0.object<jstring>()
		);
	}
	jlong Intent::getLongExtra(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getLongExtra",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString Intent::getPackage() const
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		);
	}
	JArray Intent::getParcelableArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getParcelableArrayExtra",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0.object<jstring>()
		);
	}
	java::util::ArrayList Intent::getParcelableArrayListExtra(JString arg0) const
	{
		return callObjectMethod(
			"getParcelableArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	JObject Intent::getParcelableExtra(JString arg0) const
	{
		return callObjectMethod(
			"getParcelableExtra",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0.object<jstring>()
		);
	}
	JString Intent::getScheme() const
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	android::content::Intent Intent::getSelector() const
	{
		return callObjectMethod(
			"getSelector",
			"()Landroid/content/Intent;"
		);
	}
	JObject Intent::getSerializableExtra(JString arg0) const
	{
		return callObjectMethod(
			"getSerializableExtra",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0.object<jstring>()
		);
	}
	JShortArray Intent::getShortArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getShortArrayExtra",
			"(Ljava/lang/String;)[S",
			arg0.object<jstring>()
		);
	}
	jshort Intent::getShortExtra(JString arg0, jshort arg1) const
	{
		return callMethod<jshort>(
			"getShortExtra",
			"(Ljava/lang/String;S)S",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::graphics::Rect Intent::getSourceBounds() const
	{
		return callObjectMethod(
			"getSourceBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	JArray Intent::getStringArrayExtra(JString arg0) const
	{
		return callObjectMethod(
			"getStringArrayExtra",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::util::ArrayList Intent::getStringArrayListExtra(JString arg0) const
	{
		return callObjectMethod(
			"getStringArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	JString Intent::getStringExtra(JString arg0) const
	{
		return callObjectMethod(
			"getStringExtra",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Intent::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jboolean Intent::hasCategory(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Intent::hasExtra(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasExtra",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Intent::hasFileDescriptors() const
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	android::content::Intent Intent::putCharSequenceArrayListExtra(JString arg0, java::util::ArrayList arg1) const
	{
		return callObjectMethod(
			"putCharSequenceArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JByteArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[B)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JCharArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[C)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JDoubleArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[D)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jdoubleArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[F)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[I)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JLongArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[J)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jlongArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JShortArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[S)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jshortArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JBooleanArray arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[Z)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jbooleanArray>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, android::os::Bundle arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Z)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;B)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jchar arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;C)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jdouble arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;D)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;F)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;I)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jlong arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;J)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtra(JString arg0, jshort arg1) const
	{
		return callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;S)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Intent Intent::putExtras(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"putExtras",
			"(Landroid/content/Intent;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::putExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"putExtras",
			"(Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::putIntegerArrayListExtra(JString arg0, java::util::ArrayList arg1) const
	{
		return callObjectMethod(
			"putIntegerArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::content::Intent Intent::putParcelableArrayListExtra(JString arg0, java::util::ArrayList arg1) const
	{
		return callObjectMethod(
			"putParcelableArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::content::Intent Intent::putStringArrayListExtra(JString arg0, java::util::ArrayList arg1) const
	{
		return callObjectMethod(
			"putStringArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Intent::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Intent::removeCategory(JString arg0) const
	{
		callMethod<void>(
			"removeCategory",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Intent::removeExtra(JString arg0) const
	{
		callMethod<void>(
			"removeExtra",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Intent::removeFlags(jint arg0) const
	{
		callMethod<void>(
			"removeFlags",
			"(I)V",
			arg0
		);
	}
	android::content::Intent Intent::replaceExtras(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"replaceExtras",
			"(Landroid/content/Intent;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::replaceExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"replaceExtras",
			"(Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::ComponentName Intent::resolveActivity(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"resolveActivity",
			"(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	android::content::pm::ActivityInfo Intent::resolveActivityInfo(android::content::pm::PackageManager arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveActivityInfo",
			"(Landroid/content/pm/PackageManager;I)Landroid/content/pm/ActivityInfo;",
			arg0.object(),
			arg1
		);
	}
	JString Intent::resolveType(android::content::ContentResolver arg0) const
	{
		return callObjectMethod(
			"resolveType",
			"(Landroid/content/ContentResolver;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Intent::resolveType(android::content::Context arg0) const
	{
		return callObjectMethod(
			"resolveType",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Intent::resolveTypeIfNeeded(android::content::ContentResolver arg0) const
	{
		return callObjectMethod(
			"resolveTypeIfNeeded",
			"(Landroid/content/ContentResolver;)Ljava/lang/String;",
			arg0.object()
		);
	}
	android::content::Intent Intent::setAction(JString arg0) const
	{
		return callObjectMethod(
			"setAction",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	android::content::Intent Intent::setClass(android::content::Context arg0, JClass arg1) const
	{
		return callObjectMethod(
			"setClass",
			"(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	android::content::Intent Intent::setClassName(android::content::Context arg0, JString arg1) const
	{
		return callObjectMethod(
			"setClassName",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::Intent Intent::setClassName(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setClassName",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Intent::setClipData(android::content::ClipData arg0) const
	{
		callMethod<void>(
			"setClipData",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		);
	}
	android::content::Intent Intent::setComponent(android::content::ComponentName arg0) const
	{
		return callObjectMethod(
			"setComponent",
			"(Landroid/content/ComponentName;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::setData(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setData",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::setDataAndNormalize(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setDataAndNormalize",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	android::content::Intent Intent::setDataAndType(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"setDataAndType",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::Intent Intent::setDataAndTypeAndNormalize(android::net::Uri arg0, JString arg1) const
	{
		return callObjectMethod(
			"setDataAndTypeAndNormalize",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Intent::setExtrasClassLoader(java::lang::ClassLoader arg0) const
	{
		callMethod<void>(
			"setExtrasClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		);
	}
	android::content::Intent Intent::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	android::content::Intent Intent::setPackage(JString arg0) const
	{
		return callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	void Intent::setSelector(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setSelector",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Intent::setSourceBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setSourceBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	android::content::Intent Intent::setType(JString arg0) const
	{
		return callObjectMethod(
			"setType",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	android::content::Intent Intent::setTypeAndNormalize(JString arg0) const
	{
		return callObjectMethod(
			"setTypeAndNormalize",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0.object<jstring>()
		);
	}
	JString Intent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JString Intent::toURI() const
	{
		return callObjectMethod(
			"toURI",
			"()Ljava/lang/String;"
		);
	}
	JString Intent::toUri(jint arg0) const
	{
		return callObjectMethod(
			"toUri",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	void Intent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

