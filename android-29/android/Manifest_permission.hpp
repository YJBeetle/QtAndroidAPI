#pragma once

#ifndef ANDROID_MANIFEST_PERMISSION
#define ANDROID_MANIFEST_PERMISSION

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class Manifest_permission : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACCEPT_HANDOVER();
		static jstring ACCESS_BACKGROUND_LOCATION();
		static jstring ACCESS_CHECKIN_PROPERTIES();
		static jstring ACCESS_COARSE_LOCATION();
		static jstring ACCESS_FINE_LOCATION();
		static jstring ACCESS_LOCATION_EXTRA_COMMANDS();
		static jstring ACCESS_MEDIA_LOCATION();
		static jstring ACCESS_NETWORK_STATE();
		static jstring ACCESS_NOTIFICATION_POLICY();
		static jstring ACCESS_WIFI_STATE();
		static jstring ACCOUNT_MANAGER();
		static jstring ACTIVITY_RECOGNITION();
		static jstring ADD_VOICEMAIL();
		static jstring ANSWER_PHONE_CALLS();
		static jstring BATTERY_STATS();
		static jstring BIND_ACCESSIBILITY_SERVICE();
		static jstring BIND_APPWIDGET();
		static jstring BIND_AUTOFILL_SERVICE();
		static jstring BIND_CALL_REDIRECTION_SERVICE();
		static jstring BIND_CARRIER_MESSAGING_CLIENT_SERVICE();
		static jstring BIND_CARRIER_MESSAGING_SERVICE();
		static jstring BIND_CARRIER_SERVICES();
		static jstring BIND_CHOOSER_TARGET_SERVICE();
		static jstring BIND_CONDITION_PROVIDER_SERVICE();
		static jstring BIND_DEVICE_ADMIN();
		static jstring BIND_DREAM_SERVICE();
		static jstring BIND_INCALL_SERVICE();
		static jstring BIND_INPUT_METHOD();
		static jstring BIND_MIDI_DEVICE_SERVICE();
		static jstring BIND_NFC_SERVICE();
		static jstring BIND_NOTIFICATION_LISTENER_SERVICE();
		static jstring BIND_PRINT_SERVICE();
		static jstring BIND_QUICK_SETTINGS_TILE();
		static jstring BIND_REMOTEVIEWS();
		static jstring BIND_SCREENING_SERVICE();
		static jstring BIND_TELECOM_CONNECTION_SERVICE();
		static jstring BIND_TEXT_SERVICE();
		static jstring BIND_TV_INPUT();
		static jstring BIND_VISUAL_VOICEMAIL_SERVICE();
		static jstring BIND_VOICE_INTERACTION();
		static jstring BIND_VPN_SERVICE();
		static jstring BIND_VR_LISTENER_SERVICE();
		static jstring BIND_WALLPAPER();
		static jstring BLUETOOTH();
		static jstring BLUETOOTH_ADMIN();
		static jstring BLUETOOTH_PRIVILEGED();
		static jstring BODY_SENSORS();
		static jstring BROADCAST_PACKAGE_REMOVED();
		static jstring BROADCAST_SMS();
		static jstring BROADCAST_STICKY();
		static jstring BROADCAST_WAP_PUSH();
		static jstring CALL_COMPANION_APP();
		static jstring CALL_PHONE();
		static jstring CALL_PRIVILEGED();
		static jstring CAMERA();
		static jstring CAPTURE_AUDIO_OUTPUT();
		static jstring CHANGE_COMPONENT_ENABLED_STATE();
		static jstring CHANGE_CONFIGURATION();
		static jstring CHANGE_NETWORK_STATE();
		static jstring CHANGE_WIFI_MULTICAST_STATE();
		static jstring CHANGE_WIFI_STATE();
		static jstring CLEAR_APP_CACHE();
		static jstring CONTROL_LOCATION_UPDATES();
		static jstring DELETE_CACHE_FILES();
		static jstring DELETE_PACKAGES();
		static jstring DIAGNOSTIC();
		static jstring DISABLE_KEYGUARD();
		static jstring DUMP();
		static jstring EXPAND_STATUS_BAR();
		static jstring FACTORY_TEST();
		static jstring FOREGROUND_SERVICE();
		static jstring GET_ACCOUNTS();
		static jstring GET_ACCOUNTS_PRIVILEGED();
		static jstring GET_PACKAGE_SIZE();
		static jstring GET_TASKS();
		static jstring GLOBAL_SEARCH();
		static jstring INSTALL_LOCATION_PROVIDER();
		static jstring INSTALL_PACKAGES();
		static jstring INSTALL_SHORTCUT();
		static jstring INSTANT_APP_FOREGROUND_SERVICE();
		static jstring INTERNET();
		static jstring KILL_BACKGROUND_PROCESSES();
		static jstring LOCATION_HARDWARE();
		static jstring MANAGE_DOCUMENTS();
		static jstring MANAGE_OWN_CALLS();
		static jstring MASTER_CLEAR();
		static jstring MEDIA_CONTENT_CONTROL();
		static jstring MODIFY_AUDIO_SETTINGS();
		static jstring MODIFY_PHONE_STATE();
		static jstring MOUNT_FORMAT_FILESYSTEMS();
		static jstring MOUNT_UNMOUNT_FILESYSTEMS();
		static jstring NFC();
		static jstring NFC_TRANSACTION_EVENT();
		static jstring PACKAGE_USAGE_STATS();
		static jstring PERSISTENT_ACTIVITY();
		static jstring PROCESS_OUTGOING_CALLS();
		static jstring READ_CALENDAR();
		static jstring READ_CALL_LOG();
		static jstring READ_CONTACTS();
		static jstring READ_EXTERNAL_STORAGE();
		static jstring READ_INPUT_STATE();
		static jstring READ_LOGS();
		static jstring READ_PHONE_NUMBERS();
		static jstring READ_PHONE_STATE();
		static jstring READ_SMS();
		static jstring READ_SYNC_SETTINGS();
		static jstring READ_SYNC_STATS();
		static jstring READ_VOICEMAIL();
		static jstring REBOOT();
		static jstring RECEIVE_BOOT_COMPLETED();
		static jstring RECEIVE_MMS();
		static jstring RECEIVE_SMS();
		static jstring RECEIVE_WAP_PUSH();
		static jstring RECORD_AUDIO();
		static jstring REORDER_TASKS();
		static jstring REQUEST_COMPANION_RUN_IN_BACKGROUND();
		static jstring REQUEST_COMPANION_USE_DATA_IN_BACKGROUND();
		static jstring REQUEST_DELETE_PACKAGES();
		static jstring REQUEST_IGNORE_BATTERY_OPTIMIZATIONS();
		static jstring REQUEST_INSTALL_PACKAGES();
		static jstring REQUEST_PASSWORD_COMPLEXITY();
		static jstring RESTART_PACKAGES();
		static jstring SEND_RESPOND_VIA_MESSAGE();
		static jstring SEND_SMS();
		static jstring SET_ALARM();
		static jstring SET_ALWAYS_FINISH();
		static jstring SET_ANIMATION_SCALE();
		static jstring SET_DEBUG_APP();
		static jstring SET_PREFERRED_APPLICATIONS();
		static jstring SET_PROCESS_LIMIT();
		static jstring SET_TIME();
		static jstring SET_TIME_ZONE();
		static jstring SET_WALLPAPER();
		static jstring SET_WALLPAPER_HINTS();
		static jstring SIGNAL_PERSISTENT_PROCESSES();
		static jstring SMS_FINANCIAL_TRANSACTIONS();
		static jstring START_VIEW_PERMISSION_USAGE();
		static jstring STATUS_BAR();
		static jstring SYSTEM_ALERT_WINDOW();
		static jstring TRANSMIT_IR();
		static jstring UNINSTALL_SHORTCUT();
		static jstring UPDATE_DEVICE_STATS();
		static jstring USE_BIOMETRIC();
		static jstring USE_FINGERPRINT();
		static jstring USE_FULL_SCREEN_INTENT();
		static jstring USE_SIP();
		static jstring VIBRATE();
		static jstring WAKE_LOCK();
		static jstring WRITE_APN_SETTINGS();
		static jstring WRITE_CALENDAR();
		static jstring WRITE_CALL_LOG();
		static jstring WRITE_CONTACTS();
		static jstring WRITE_EXTERNAL_STORAGE();
		static jstring WRITE_GSERVICES();
		static jstring WRITE_SECURE_SETTINGS();
		static jstring WRITE_SETTINGS();
		static jstring WRITE_SYNC_SETTINGS();
		static jstring WRITE_VOICEMAIL();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jstring Manifest_permission::ACCEPT_HANDOVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCEPT_HANDOVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_BACKGROUND_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_BACKGROUND_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_CHECKIN_PROPERTIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_CHECKIN_PROPERTIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_COARSE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_COARSE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_FINE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_FINE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_LOCATION_EXTRA_COMMANDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_LOCATION_EXTRA_COMMANDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_MEDIA_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_MEDIA_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_NETWORK_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_NETWORK_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_NOTIFICATION_POLICY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_NOTIFICATION_POLICY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCESS_WIFI_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACCOUNT_MANAGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCOUNT_MANAGER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ACTIVITY_RECOGNITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACTIVITY_RECOGNITION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ADD_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ADD_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::ANSWER_PHONE_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ANSWER_PHONE_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BATTERY_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BATTERY_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_ACCESSIBILITY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_ACCESSIBILITY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_APPWIDGET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_APPWIDGET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_AUTOFILL_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_AUTOFILL_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CALL_REDIRECTION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CALL_REDIRECTION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CARRIER_MESSAGING_CLIENT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_MESSAGING_CLIENT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CARRIER_MESSAGING_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_MESSAGING_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CARRIER_SERVICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_SERVICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CHOOSER_TARGET_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CHOOSER_TARGET_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_CONDITION_PROVIDER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CONDITION_PROVIDER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_DEVICE_ADMIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_DEVICE_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_DREAM_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_DREAM_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_INCALL_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_INCALL_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_INPUT_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_INPUT_METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_MIDI_DEVICE_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_MIDI_DEVICE_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_NFC_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_NFC_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_NOTIFICATION_LISTENER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_NOTIFICATION_LISTENER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_PRINT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_PRINT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_QUICK_SETTINGS_TILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_QUICK_SETTINGS_TILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_REMOTEVIEWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_REMOTEVIEWS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_SCREENING_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_SCREENING_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_TELECOM_CONNECTION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TELECOM_CONNECTION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_TEXT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TEXT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_TV_INPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TV_INPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VISUAL_VOICEMAIL_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VISUAL_VOICEMAIL_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VOICE_INTERACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VOICE_INTERACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VPN_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VPN_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_VR_LISTENER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VR_LISTENER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BIND_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BLUETOOTH_ADMIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH_ADMIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BLUETOOTH_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH_PRIVILEGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BODY_SENSORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BODY_SENSORS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_PACKAGE_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_PACKAGE_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_STICKY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_STICKY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::BROADCAST_WAP_PUSH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_WAP_PUSH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CALL_COMPANION_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CALL_COMPANION_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CALL_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CALL_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CALL_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CALL_PRIVILEGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CAMERA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CAPTURE_AUDIO_OUTPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CAPTURE_AUDIO_OUTPUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_COMPONENT_ENABLED_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_COMPONENT_ENABLED_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_CONFIGURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_CONFIGURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_NETWORK_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_NETWORK_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_WIFI_MULTICAST_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_WIFI_MULTICAST_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CHANGE_WIFI_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_WIFI_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CLEAR_APP_CACHE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CLEAR_APP_CACHE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::CONTROL_LOCATION_UPDATES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CONTROL_LOCATION_UPDATES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DELETE_CACHE_FILES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DELETE_CACHE_FILES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DELETE_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DELETE_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DIAGNOSTIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DIAGNOSTIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DISABLE_KEYGUARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DISABLE_KEYGUARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::DUMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DUMP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::EXPAND_STATUS_BAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"EXPAND_STATUS_BAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::FACTORY_TEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"FACTORY_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"FOREGROUND_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_ACCOUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_ACCOUNTS_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_ACCOUNTS_PRIVILEGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_PACKAGE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_PACKAGE_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GET_TASKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_TASKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::GLOBAL_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GLOBAL_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTALL_LOCATION_PROVIDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_LOCATION_PROVIDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTALL_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTALL_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INSTANT_APP_FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTANT_APP_FOREGROUND_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::INTERNET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INTERNET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::KILL_BACKGROUND_PROCESSES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"KILL_BACKGROUND_PROCESSES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::LOCATION_HARDWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"LOCATION_HARDWARE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MANAGE_DOCUMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MANAGE_DOCUMENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MANAGE_OWN_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MANAGE_OWN_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MASTER_CLEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MASTER_CLEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MEDIA_CONTENT_CONTROL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MEDIA_CONTENT_CONTROL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MODIFY_AUDIO_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MODIFY_AUDIO_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MODIFY_PHONE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MODIFY_PHONE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MOUNT_FORMAT_FILESYSTEMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MOUNT_FORMAT_FILESYSTEMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::MOUNT_UNMOUNT_FILESYSTEMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MOUNT_UNMOUNT_FILESYSTEMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::NFC_TRANSACTION_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"NFC_TRANSACTION_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::PACKAGE_USAGE_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"PACKAGE_USAGE_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::PERSISTENT_ACTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"PERSISTENT_ACTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::PROCESS_OUTGOING_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"PROCESS_OUTGOING_CALLS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_INPUT_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_INPUT_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_LOGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_LOGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_PHONE_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_PHONE_NUMBERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_PHONE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_PHONE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_SYNC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_SYNC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_SYNC_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_SYNC_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::READ_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REBOOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REBOOT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_BOOT_COMPLETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_BOOT_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_MMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_MMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECEIVE_WAP_PUSH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_WAP_PUSH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RECORD_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECORD_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REORDER_TASKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REORDER_TASKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_COMPANION_RUN_IN_BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_COMPANION_RUN_IN_BACKGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_COMPANION_USE_DATA_IN_BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_COMPANION_USE_DATA_IN_BACKGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_DELETE_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_DELETE_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_IGNORE_BATTERY_OPTIMIZATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_IGNORE_BATTERY_OPTIMIZATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_INSTALL_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_INSTALL_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::REQUEST_PASSWORD_COMPLEXITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_PASSWORD_COMPLEXITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::RESTART_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RESTART_PACKAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SEND_RESPOND_VIA_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SEND_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SEND_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SEND_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_ALARM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_ALWAYS_FINISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_ALWAYS_FINISH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_ANIMATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_ANIMATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_DEBUG_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_DEBUG_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_PREFERRED_APPLICATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_PREFERRED_APPLICATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_PROCESS_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_PROCESS_LIMIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_TIME_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_TIME_ZONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SET_WALLPAPER_HINTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_WALLPAPER_HINTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SIGNAL_PERSISTENT_PROCESSES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SIGNAL_PERSISTENT_PROCESSES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SMS_FINANCIAL_TRANSACTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SMS_FINANCIAL_TRANSACTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::START_VIEW_PERMISSION_USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"START_VIEW_PERMISSION_USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::STATUS_BAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"STATUS_BAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::SYSTEM_ALERT_WINDOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SYSTEM_ALERT_WINDOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::TRANSMIT_IR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"TRANSMIT_IR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::UNINSTALL_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"UNINSTALL_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::UPDATE_DEVICE_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"UPDATE_DEVICE_STATS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::USE_BIOMETRIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_BIOMETRIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::USE_FINGERPRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_FINGERPRINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::USE_FULL_SCREEN_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_FULL_SCREEN_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::USE_SIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_SIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::VIBRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"VIBRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WAKE_LOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_APN_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_APN_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CALL_LOG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_EXTERNAL_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_GSERVICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_GSERVICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_SECURE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SECURE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_SYNC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SYNC_SETTINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Manifest_permission::WRITE_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_VOICEMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Manifest_permission::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.Manifest$permission",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class Manifest_permission : public __jni_impl::android::Manifest_permission
	{
	public:
		Manifest_permission(QAndroidJniObject obj) { __thiz = obj; }
		Manifest_permission()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_MANIFEST_PERMISSION

