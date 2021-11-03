#include "./Manifest_permission.hpp"

namespace android
{
	// Fields
	jstring Manifest_permission::ACCEPT_HANDOVER()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCEPT_HANDOVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_CHECKIN_PROPERTIES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_CHECKIN_PROPERTIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_COARSE_LOCATION()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_COARSE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_FINE_LOCATION()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_FINE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_LOCATION_EXTRA_COMMANDS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_LOCATION_EXTRA_COMMANDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_NETWORK_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_NETWORK_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_NOTIFICATION_POLICY()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_NOTIFICATION_POLICY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCOUNT_MANAGER()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ACCOUNT_MANAGER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ADD_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ADD_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ANSWER_PHONE_CALLS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"ANSWER_PHONE_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BATTERY_STATS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BATTERY_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_ACCESSIBILITY_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_ACCESSIBILITY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_APPWIDGET()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_APPWIDGET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_AUTOFILL_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_AUTOFILL_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CARRIER_MESSAGING_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_MESSAGING_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CARRIER_SERVICES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_SERVICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CHOOSER_TARGET_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CHOOSER_TARGET_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CONDITION_PROVIDER_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CONDITION_PROVIDER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_DEVICE_ADMIN()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_DEVICE_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_DREAM_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_DREAM_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_INCALL_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_INCALL_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_INPUT_METHOD()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_INPUT_METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_MIDI_DEVICE_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_MIDI_DEVICE_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_NFC_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_NFC_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_NOTIFICATION_LISTENER_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_NOTIFICATION_LISTENER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_PRINT_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_PRINT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_QUICK_SETTINGS_TILE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_QUICK_SETTINGS_TILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_REMOTEVIEWS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_REMOTEVIEWS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_SCREENING_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_SCREENING_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_TELECOM_CONNECTION_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TELECOM_CONNECTION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_TEXT_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TEXT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_TV_INPUT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TV_INPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VISUAL_VOICEMAIL_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VISUAL_VOICEMAIL_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VOICE_INTERACTION()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VOICE_INTERACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VPN_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VPN_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VR_LISTENER_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VR_LISTENER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_WALLPAPER()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BIND_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BLUETOOTH()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BLUETOOTH_ADMIN()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BLUETOOTH_PRIVILEGED()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH_PRIVILEGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BODY_SENSORS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BODY_SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_PACKAGE_REMOVED()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_PACKAGE_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_SMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_STICKY()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_STICKY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_WAP_PUSH()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_WAP_PUSH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CALL_PHONE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CALL_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CALL_PRIVILEGED()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CALL_PRIVILEGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CAMERA()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CAPTURE_AUDIO_OUTPUT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CAPTURE_AUDIO_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CAPTURE_SECURE_VIDEO_OUTPUT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CAPTURE_SECURE_VIDEO_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CAPTURE_VIDEO_OUTPUT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CAPTURE_VIDEO_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_COMPONENT_ENABLED_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_COMPONENT_ENABLED_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_CONFIGURATION()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_CONFIGURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_NETWORK_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_NETWORK_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_WIFI_MULTICAST_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_WIFI_MULTICAST_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_WIFI_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CLEAR_APP_CACHE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CLEAR_APP_CACHE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CONTROL_LOCATION_UPDATES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"CONTROL_LOCATION_UPDATES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DELETE_CACHE_FILES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"DELETE_CACHE_FILES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DELETE_PACKAGES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"DELETE_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DIAGNOSTIC()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"DIAGNOSTIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DISABLE_KEYGUARD()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"DISABLE_KEYGUARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DUMP()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"DUMP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::EXPAND_STATUS_BAR()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"EXPAND_STATUS_BAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::FACTORY_TEST()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"FACTORY_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::FOREGROUND_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"FOREGROUND_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_ACCOUNTS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"GET_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_ACCOUNTS_PRIVILEGED()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"GET_ACCOUNTS_PRIVILEGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_PACKAGE_SIZE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"GET_PACKAGE_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_TASKS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"GET_TASKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GLOBAL_SEARCH()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"GLOBAL_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTALL_LOCATION_PROVIDER()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_LOCATION_PROVIDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTALL_PACKAGES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTALL_SHORTCUT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTANT_APP_FOREGROUND_SERVICE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"INSTANT_APP_FOREGROUND_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INTERNET()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"INTERNET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::KILL_BACKGROUND_PROCESSES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"KILL_BACKGROUND_PROCESSES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::LOCATION_HARDWARE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"LOCATION_HARDWARE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MANAGE_DOCUMENTS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MANAGE_DOCUMENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MANAGE_OWN_CALLS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MANAGE_OWN_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MASTER_CLEAR()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MASTER_CLEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MEDIA_CONTENT_CONTROL()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MEDIA_CONTENT_CONTROL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MODIFY_AUDIO_SETTINGS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MODIFY_AUDIO_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MODIFY_PHONE_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MODIFY_PHONE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MOUNT_FORMAT_FILESYSTEMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MOUNT_FORMAT_FILESYSTEMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MOUNT_UNMOUNT_FILESYSTEMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"MOUNT_UNMOUNT_FILESYSTEMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::NFC()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::NFC_TRANSACTION_EVENT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"NFC_TRANSACTION_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::PACKAGE_USAGE_STATS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"PACKAGE_USAGE_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::PERSISTENT_ACTIVITY()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"PERSISTENT_ACTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::PROCESS_OUTGOING_CALLS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"PROCESS_OUTGOING_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_CALENDAR()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_CALL_LOG()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_CONTACTS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_EXTERNAL_STORAGE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_FRAME_BUFFER()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_FRAME_BUFFER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_INPUT_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_INPUT_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_LOGS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_LOGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_PHONE_NUMBERS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_PHONE_NUMBERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_PHONE_STATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_PHONE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_SMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_SYNC_SETTINGS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_SYNC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_SYNC_STATS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_SYNC_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"READ_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REBOOT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"REBOOT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_BOOT_COMPLETED()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_BOOT_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_MMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_MMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_SMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_WAP_PUSH()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_WAP_PUSH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECORD_AUDIO()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"RECORD_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REORDER_TASKS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"REORDER_TASKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_COMPANION_RUN_IN_BACKGROUND()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_COMPANION_RUN_IN_BACKGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_COMPANION_USE_DATA_IN_BACKGROUND()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_COMPANION_USE_DATA_IN_BACKGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_DELETE_PACKAGES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_DELETE_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_IGNORE_BATTERY_OPTIMIZATIONS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_IGNORE_BATTERY_OPTIMIZATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_INSTALL_PACKAGES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_INSTALL_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RESTART_PACKAGES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"RESTART_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SEND_RESPOND_VIA_MESSAGE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SEND_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SEND_SMS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SEND_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_ALARM()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_ALARM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_ALWAYS_FINISH()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_ALWAYS_FINISH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_ANIMATION_SCALE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_ANIMATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_DEBUG_APP()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_DEBUG_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_PREFERRED_APPLICATIONS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_PREFERRED_APPLICATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_PROCESS_LIMIT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_PROCESS_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_TIME()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_TIME_ZONE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_TIME_ZONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_WALLPAPER()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_WALLPAPER_HINTS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SET_WALLPAPER_HINTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SIGNAL_PERSISTENT_PROCESSES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SIGNAL_PERSISTENT_PROCESSES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::STATUS_BAR()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"STATUS_BAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SYSTEM_ALERT_WINDOW()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"SYSTEM_ALERT_WINDOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::TRANSMIT_IR()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"TRANSMIT_IR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::UNINSTALL_SHORTCUT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"UNINSTALL_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::UPDATE_DEVICE_STATS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"UPDATE_DEVICE_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::USE_BIOMETRIC()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"USE_BIOMETRIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::USE_FINGERPRINT()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"USE_FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::USE_SIP()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"USE_SIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::VIBRATE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"VIBRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WAKE_LOCK()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WAKE_LOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_APN_SETTINGS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_APN_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_CALENDAR()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_CALL_LOG()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_CONTACTS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_EXTERNAL_STORAGE()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_GSERVICES()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_GSERVICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_SECURE_SETTINGS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SECURE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_SETTINGS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_SYNC_SETTINGS()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SYNC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_VOICEMAIL()
	{
		return getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Manifest_permission::Manifest_permission(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Manifest_permission::Manifest_permission()
		: JObject(
			"android.Manifest$permission",
			"()V"
		) {}
	
	// Methods
} // namespace android

