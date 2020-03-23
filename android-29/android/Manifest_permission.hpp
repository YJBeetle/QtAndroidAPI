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
		static QAndroidJniObject ACCEPT_HANDOVER();
		static QAndroidJniObject ACCESS_BACKGROUND_LOCATION();
		static QAndroidJniObject ACCESS_CHECKIN_PROPERTIES();
		static QAndroidJniObject ACCESS_COARSE_LOCATION();
		static QAndroidJniObject ACCESS_FINE_LOCATION();
		static QAndroidJniObject ACCESS_LOCATION_EXTRA_COMMANDS();
		static QAndroidJniObject ACCESS_MEDIA_LOCATION();
		static QAndroidJniObject ACCESS_NETWORK_STATE();
		static QAndroidJniObject ACCESS_NOTIFICATION_POLICY();
		static QAndroidJniObject ACCESS_WIFI_STATE();
		static QAndroidJniObject ACCOUNT_MANAGER();
		static QAndroidJniObject ACTIVITY_RECOGNITION();
		static QAndroidJniObject ADD_VOICEMAIL();
		static QAndroidJniObject ANSWER_PHONE_CALLS();
		static QAndroidJniObject BATTERY_STATS();
		static QAndroidJniObject BIND_ACCESSIBILITY_SERVICE();
		static QAndroidJniObject BIND_APPWIDGET();
		static QAndroidJniObject BIND_AUTOFILL_SERVICE();
		static QAndroidJniObject BIND_CALL_REDIRECTION_SERVICE();
		static QAndroidJniObject BIND_CARRIER_MESSAGING_CLIENT_SERVICE();
		static QAndroidJniObject BIND_CARRIER_MESSAGING_SERVICE();
		static QAndroidJniObject BIND_CARRIER_SERVICES();
		static QAndroidJniObject BIND_CHOOSER_TARGET_SERVICE();
		static QAndroidJniObject BIND_CONDITION_PROVIDER_SERVICE();
		static QAndroidJniObject BIND_DEVICE_ADMIN();
		static QAndroidJniObject BIND_DREAM_SERVICE();
		static QAndroidJniObject BIND_INCALL_SERVICE();
		static QAndroidJniObject BIND_INPUT_METHOD();
		static QAndroidJniObject BIND_MIDI_DEVICE_SERVICE();
		static QAndroidJniObject BIND_NFC_SERVICE();
		static QAndroidJniObject BIND_NOTIFICATION_LISTENER_SERVICE();
		static QAndroidJniObject BIND_PRINT_SERVICE();
		static QAndroidJniObject BIND_QUICK_SETTINGS_TILE();
		static QAndroidJniObject BIND_REMOTEVIEWS();
		static QAndroidJniObject BIND_SCREENING_SERVICE();
		static QAndroidJniObject BIND_TELECOM_CONNECTION_SERVICE();
		static QAndroidJniObject BIND_TEXT_SERVICE();
		static QAndroidJniObject BIND_TV_INPUT();
		static QAndroidJniObject BIND_VISUAL_VOICEMAIL_SERVICE();
		static QAndroidJniObject BIND_VOICE_INTERACTION();
		static QAndroidJniObject BIND_VPN_SERVICE();
		static QAndroidJniObject BIND_VR_LISTENER_SERVICE();
		static QAndroidJniObject BIND_WALLPAPER();
		static QAndroidJniObject BLUETOOTH();
		static QAndroidJniObject BLUETOOTH_ADMIN();
		static QAndroidJniObject BLUETOOTH_PRIVILEGED();
		static QAndroidJniObject BODY_SENSORS();
		static QAndroidJniObject BROADCAST_PACKAGE_REMOVED();
		static QAndroidJniObject BROADCAST_SMS();
		static QAndroidJniObject BROADCAST_STICKY();
		static QAndroidJniObject BROADCAST_WAP_PUSH();
		static QAndroidJniObject CALL_COMPANION_APP();
		static QAndroidJniObject CALL_PHONE();
		static QAndroidJniObject CALL_PRIVILEGED();
		static QAndroidJniObject CAMERA();
		static QAndroidJniObject CAPTURE_AUDIO_OUTPUT();
		static QAndroidJniObject CHANGE_COMPONENT_ENABLED_STATE();
		static QAndroidJniObject CHANGE_CONFIGURATION();
		static QAndroidJniObject CHANGE_NETWORK_STATE();
		static QAndroidJniObject CHANGE_WIFI_MULTICAST_STATE();
		static QAndroidJniObject CHANGE_WIFI_STATE();
		static QAndroidJniObject CLEAR_APP_CACHE();
		static QAndroidJniObject CONTROL_LOCATION_UPDATES();
		static QAndroidJniObject DELETE_CACHE_FILES();
		static QAndroidJniObject DELETE_PACKAGES();
		static QAndroidJniObject DIAGNOSTIC();
		static QAndroidJniObject DISABLE_KEYGUARD();
		static QAndroidJniObject DUMP();
		static QAndroidJniObject EXPAND_STATUS_BAR();
		static QAndroidJniObject FACTORY_TEST();
		static QAndroidJniObject FOREGROUND_SERVICE();
		static QAndroidJniObject GET_ACCOUNTS();
		static QAndroidJniObject GET_ACCOUNTS_PRIVILEGED();
		static QAndroidJniObject GET_PACKAGE_SIZE();
		static QAndroidJniObject GET_TASKS();
		static QAndroidJniObject GLOBAL_SEARCH();
		static QAndroidJniObject INSTALL_LOCATION_PROVIDER();
		static QAndroidJniObject INSTALL_PACKAGES();
		static QAndroidJniObject INSTALL_SHORTCUT();
		static QAndroidJniObject INSTANT_APP_FOREGROUND_SERVICE();
		static QAndroidJniObject INTERNET();
		static QAndroidJniObject KILL_BACKGROUND_PROCESSES();
		static QAndroidJniObject LOCATION_HARDWARE();
		static QAndroidJniObject MANAGE_DOCUMENTS();
		static QAndroidJniObject MANAGE_OWN_CALLS();
		static QAndroidJniObject MASTER_CLEAR();
		static QAndroidJniObject MEDIA_CONTENT_CONTROL();
		static QAndroidJniObject MODIFY_AUDIO_SETTINGS();
		static QAndroidJniObject MODIFY_PHONE_STATE();
		static QAndroidJniObject MOUNT_FORMAT_FILESYSTEMS();
		static QAndroidJniObject MOUNT_UNMOUNT_FILESYSTEMS();
		static QAndroidJniObject NFC();
		static QAndroidJniObject NFC_TRANSACTION_EVENT();
		static QAndroidJniObject PACKAGE_USAGE_STATS();
		static QAndroidJniObject PERSISTENT_ACTIVITY();
		static QAndroidJniObject PROCESS_OUTGOING_CALLS();
		static QAndroidJniObject READ_CALENDAR();
		static QAndroidJniObject READ_CALL_LOG();
		static QAndroidJniObject READ_CONTACTS();
		static QAndroidJniObject READ_EXTERNAL_STORAGE();
		static QAndroidJniObject READ_INPUT_STATE();
		static QAndroidJniObject READ_LOGS();
		static QAndroidJniObject READ_PHONE_NUMBERS();
		static QAndroidJniObject READ_PHONE_STATE();
		static QAndroidJniObject READ_SMS();
		static QAndroidJniObject READ_SYNC_SETTINGS();
		static QAndroidJniObject READ_SYNC_STATS();
		static QAndroidJniObject READ_VOICEMAIL();
		static QAndroidJniObject REBOOT();
		static QAndroidJniObject RECEIVE_BOOT_COMPLETED();
		static QAndroidJniObject RECEIVE_MMS();
		static QAndroidJniObject RECEIVE_SMS();
		static QAndroidJniObject RECEIVE_WAP_PUSH();
		static QAndroidJniObject RECORD_AUDIO();
		static QAndroidJniObject REORDER_TASKS();
		static QAndroidJniObject REQUEST_COMPANION_RUN_IN_BACKGROUND();
		static QAndroidJniObject REQUEST_COMPANION_USE_DATA_IN_BACKGROUND();
		static QAndroidJniObject REQUEST_DELETE_PACKAGES();
		static QAndroidJniObject REQUEST_IGNORE_BATTERY_OPTIMIZATIONS();
		static QAndroidJniObject REQUEST_INSTALL_PACKAGES();
		static QAndroidJniObject REQUEST_PASSWORD_COMPLEXITY();
		static QAndroidJniObject RESTART_PACKAGES();
		static QAndroidJniObject SEND_RESPOND_VIA_MESSAGE();
		static QAndroidJniObject SEND_SMS();
		static QAndroidJniObject SET_ALARM();
		static QAndroidJniObject SET_ALWAYS_FINISH();
		static QAndroidJniObject SET_ANIMATION_SCALE();
		static QAndroidJniObject SET_DEBUG_APP();
		static QAndroidJniObject SET_PREFERRED_APPLICATIONS();
		static QAndroidJniObject SET_PROCESS_LIMIT();
		static QAndroidJniObject SET_TIME();
		static QAndroidJniObject SET_TIME_ZONE();
		static QAndroidJniObject SET_WALLPAPER();
		static QAndroidJniObject SET_WALLPAPER_HINTS();
		static QAndroidJniObject SIGNAL_PERSISTENT_PROCESSES();
		static QAndroidJniObject SMS_FINANCIAL_TRANSACTIONS();
		static QAndroidJniObject START_VIEW_PERMISSION_USAGE();
		static QAndroidJniObject STATUS_BAR();
		static QAndroidJniObject SYSTEM_ALERT_WINDOW();
		static QAndroidJniObject TRANSMIT_IR();
		static QAndroidJniObject UNINSTALL_SHORTCUT();
		static QAndroidJniObject UPDATE_DEVICE_STATS();
		static QAndroidJniObject USE_BIOMETRIC();
		static QAndroidJniObject USE_FINGERPRINT();
		static QAndroidJniObject USE_FULL_SCREEN_INTENT();
		static QAndroidJniObject USE_SIP();
		static QAndroidJniObject VIBRATE();
		static QAndroidJniObject WAKE_LOCK();
		static QAndroidJniObject WRITE_APN_SETTINGS();
		static QAndroidJniObject WRITE_CALENDAR();
		static QAndroidJniObject WRITE_CALL_LOG();
		static QAndroidJniObject WRITE_CONTACTS();
		static QAndroidJniObject WRITE_EXTERNAL_STORAGE();
		static QAndroidJniObject WRITE_GSERVICES();
		static QAndroidJniObject WRITE_SECURE_SETTINGS();
		static QAndroidJniObject WRITE_SETTINGS();
		static QAndroidJniObject WRITE_SYNC_SETTINGS();
		static QAndroidJniObject WRITE_VOICEMAIL();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	QAndroidJniObject Manifest_permission::ACCEPT_HANDOVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCEPT_HANDOVER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_BACKGROUND_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_BACKGROUND_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_CHECKIN_PROPERTIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_CHECKIN_PROPERTIES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_COARSE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_COARSE_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_FINE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_FINE_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_LOCATION_EXTRA_COMMANDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_LOCATION_EXTRA_COMMANDS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_MEDIA_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_MEDIA_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_NETWORK_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_NETWORK_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_NOTIFICATION_POLICY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_NOTIFICATION_POLICY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCESS_WIFI_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCESS_WIFI_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACCOUNT_MANAGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACCOUNT_MANAGER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ACTIVITY_RECOGNITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ACTIVITY_RECOGNITION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ADD_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ADD_VOICEMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::ANSWER_PHONE_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"ANSWER_PHONE_CALLS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BATTERY_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BATTERY_STATS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_ACCESSIBILITY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_ACCESSIBILITY_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_APPWIDGET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_APPWIDGET",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_AUTOFILL_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_AUTOFILL_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_CALL_REDIRECTION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CALL_REDIRECTION_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_CARRIER_MESSAGING_CLIENT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_MESSAGING_CLIENT_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_CARRIER_MESSAGING_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_MESSAGING_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_CARRIER_SERVICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CARRIER_SERVICES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_CHOOSER_TARGET_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CHOOSER_TARGET_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_CONDITION_PROVIDER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_CONDITION_PROVIDER_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_DEVICE_ADMIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_DEVICE_ADMIN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_DREAM_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_DREAM_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_INCALL_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_INCALL_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_INPUT_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_INPUT_METHOD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_MIDI_DEVICE_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_MIDI_DEVICE_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_NFC_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_NFC_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_NOTIFICATION_LISTENER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_NOTIFICATION_LISTENER_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_PRINT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_PRINT_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_QUICK_SETTINGS_TILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_QUICK_SETTINGS_TILE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_REMOTEVIEWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_REMOTEVIEWS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_SCREENING_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_SCREENING_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_TELECOM_CONNECTION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TELECOM_CONNECTION_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_TEXT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TEXT_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_TV_INPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_TV_INPUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_VISUAL_VOICEMAIL_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VISUAL_VOICEMAIL_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_VOICE_INTERACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VOICE_INTERACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_VPN_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VPN_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_VR_LISTENER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_VR_LISTENER_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BIND_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BIND_WALLPAPER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BLUETOOTH_ADMIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH_ADMIN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BLUETOOTH_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BLUETOOTH_PRIVILEGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BODY_SENSORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BODY_SENSORS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BROADCAST_PACKAGE_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_PACKAGE_REMOVED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BROADCAST_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BROADCAST_STICKY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_STICKY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::BROADCAST_WAP_PUSH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"BROADCAST_WAP_PUSH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CALL_COMPANION_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CALL_COMPANION_APP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CALL_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CALL_PHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CALL_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CALL_PRIVILEGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CAMERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CAMERA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CAPTURE_AUDIO_OUTPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CAPTURE_AUDIO_OUTPUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CHANGE_COMPONENT_ENABLED_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_COMPONENT_ENABLED_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CHANGE_CONFIGURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_CONFIGURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CHANGE_NETWORK_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_NETWORK_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CHANGE_WIFI_MULTICAST_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_WIFI_MULTICAST_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CHANGE_WIFI_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CHANGE_WIFI_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CLEAR_APP_CACHE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CLEAR_APP_CACHE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::CONTROL_LOCATION_UPDATES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"CONTROL_LOCATION_UPDATES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::DELETE_CACHE_FILES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DELETE_CACHE_FILES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::DELETE_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DELETE_PACKAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::DIAGNOSTIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DIAGNOSTIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::DISABLE_KEYGUARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DISABLE_KEYGUARD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::DUMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"DUMP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::EXPAND_STATUS_BAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"EXPAND_STATUS_BAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::FACTORY_TEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"FACTORY_TEST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"FOREGROUND_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::GET_ACCOUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_ACCOUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::GET_ACCOUNTS_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_ACCOUNTS_PRIVILEGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::GET_PACKAGE_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_PACKAGE_SIZE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::GET_TASKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GET_TASKS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::GLOBAL_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"GLOBAL_SEARCH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::INSTALL_LOCATION_PROVIDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_LOCATION_PROVIDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::INSTALL_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_PACKAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::INSTALL_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTALL_SHORTCUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::INSTANT_APP_FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INSTANT_APP_FOREGROUND_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::INTERNET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"INTERNET",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::KILL_BACKGROUND_PROCESSES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"KILL_BACKGROUND_PROCESSES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::LOCATION_HARDWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"LOCATION_HARDWARE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MANAGE_DOCUMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MANAGE_DOCUMENTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MANAGE_OWN_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MANAGE_OWN_CALLS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MASTER_CLEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MASTER_CLEAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MEDIA_CONTENT_CONTROL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MEDIA_CONTENT_CONTROL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MODIFY_AUDIO_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MODIFY_AUDIO_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MODIFY_PHONE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MODIFY_PHONE_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MOUNT_FORMAT_FILESYSTEMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MOUNT_FORMAT_FILESYSTEMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::MOUNT_UNMOUNT_FILESYSTEMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"MOUNT_UNMOUNT_FILESYSTEMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"NFC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::NFC_TRANSACTION_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"NFC_TRANSACTION_EVENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::PACKAGE_USAGE_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"PACKAGE_USAGE_STATS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::PERSISTENT_ACTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"PERSISTENT_ACTIVITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::PROCESS_OUTGOING_CALLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"PROCESS_OUTGOING_CALLS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_CALENDAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_CALL_LOG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_CONTACTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_EXTERNAL_STORAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_INPUT_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_INPUT_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_LOGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_LOGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_PHONE_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_PHONE_NUMBERS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_PHONE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_PHONE_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_SYNC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_SYNC_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_SYNC_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_SYNC_STATS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::READ_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"READ_VOICEMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REBOOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REBOOT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::RECEIVE_BOOT_COMPLETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_BOOT_COMPLETED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::RECEIVE_MMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_MMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::RECEIVE_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::RECEIVE_WAP_PUSH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECEIVE_WAP_PUSH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::RECORD_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RECORD_AUDIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REORDER_TASKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REORDER_TASKS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REQUEST_COMPANION_RUN_IN_BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_COMPANION_RUN_IN_BACKGROUND",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REQUEST_COMPANION_USE_DATA_IN_BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_COMPANION_USE_DATA_IN_BACKGROUND",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REQUEST_DELETE_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_DELETE_PACKAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REQUEST_IGNORE_BATTERY_OPTIMIZATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_IGNORE_BATTERY_OPTIMIZATIONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REQUEST_INSTALL_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_INSTALL_PACKAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::REQUEST_PASSWORD_COMPLEXITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"REQUEST_PASSWORD_COMPLEXITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::RESTART_PACKAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"RESTART_PACKAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SEND_RESPOND_VIA_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SEND_RESPOND_VIA_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SEND_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SEND_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_ALARM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_ALWAYS_FINISH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_ALWAYS_FINISH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_ANIMATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_ANIMATION_SCALE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_DEBUG_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_DEBUG_APP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_PREFERRED_APPLICATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_PREFERRED_APPLICATIONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_PROCESS_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_PROCESS_LIMIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_TIME_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_TIME_ZONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_WALLPAPER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SET_WALLPAPER_HINTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SET_WALLPAPER_HINTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SIGNAL_PERSISTENT_PROCESSES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SIGNAL_PERSISTENT_PROCESSES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SMS_FINANCIAL_TRANSACTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SMS_FINANCIAL_TRANSACTIONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::START_VIEW_PERMISSION_USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"START_VIEW_PERMISSION_USAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::STATUS_BAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"STATUS_BAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::SYSTEM_ALERT_WINDOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"SYSTEM_ALERT_WINDOW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::TRANSMIT_IR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"TRANSMIT_IR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::UNINSTALL_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"UNINSTALL_SHORTCUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::UPDATE_DEVICE_STATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"UPDATE_DEVICE_STATS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::USE_BIOMETRIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_BIOMETRIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::USE_FINGERPRINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_FINGERPRINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::USE_FULL_SCREEN_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_FULL_SCREEN_INTENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::USE_SIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"USE_SIP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::VIBRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"VIBRATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WAKE_LOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WAKE_LOCK",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_APN_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_APN_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CALENDAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_CALL_LOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CALL_LOG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_CONTACTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_EXTERNAL_STORAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_GSERVICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_GSERVICES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_SECURE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SECURE_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_SYNC_SETTINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_SYNC_SETTINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Manifest_permission::WRITE_VOICEMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.Manifest$permission",
			"WRITE_VOICEMAIL",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Manifest_permission::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.Manifest$permission",
			"()V");
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

