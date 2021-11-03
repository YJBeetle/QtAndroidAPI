#pragma once

#include "../JObject.hpp"

class JString;

namespace android
{
	class Manifest_permission : public JObject
	{
	public:
		// Fields
		static JString ACCEPT_HANDOVER();
		static JString ACCESS_BACKGROUND_LOCATION();
		static JString ACCESS_BLOBS_ACROSS_USERS();
		static JString ACCESS_CHECKIN_PROPERTIES();
		static JString ACCESS_COARSE_LOCATION();
		static JString ACCESS_FINE_LOCATION();
		static JString ACCESS_LOCATION_EXTRA_COMMANDS();
		static JString ACCESS_MEDIA_LOCATION();
		static JString ACCESS_NETWORK_STATE();
		static JString ACCESS_NOTIFICATION_POLICY();
		static JString ACCESS_WIFI_STATE();
		static JString ACCOUNT_MANAGER();
		static JString ACTIVITY_RECOGNITION();
		static JString ADD_VOICEMAIL();
		static JString ANSWER_PHONE_CALLS();
		static JString BATTERY_STATS();
		static JString BIND_ACCESSIBILITY_SERVICE();
		static JString BIND_APPWIDGET();
		static JString BIND_AUTOFILL_SERVICE();
		static JString BIND_CALL_REDIRECTION_SERVICE();
		static JString BIND_CARRIER_MESSAGING_CLIENT_SERVICE();
		static JString BIND_CARRIER_MESSAGING_SERVICE();
		static JString BIND_CARRIER_SERVICES();
		static JString BIND_CHOOSER_TARGET_SERVICE();
		static JString BIND_COMPANION_DEVICE_SERVICE();
		static JString BIND_CONDITION_PROVIDER_SERVICE();
		static JString BIND_CONTROLS();
		static JString BIND_DEVICE_ADMIN();
		static JString BIND_DREAM_SERVICE();
		static JString BIND_INCALL_SERVICE();
		static JString BIND_INPUT_METHOD();
		static JString BIND_MIDI_DEVICE_SERVICE();
		static JString BIND_NFC_SERVICE();
		static JString BIND_NOTIFICATION_LISTENER_SERVICE();
		static JString BIND_PRINT_SERVICE();
		static JString BIND_QUICK_ACCESS_WALLET_SERVICE();
		static JString BIND_QUICK_SETTINGS_TILE();
		static JString BIND_REMOTEVIEWS();
		static JString BIND_SCREENING_SERVICE();
		static JString BIND_TELECOM_CONNECTION_SERVICE();
		static JString BIND_TEXT_SERVICE();
		static JString BIND_TV_INPUT();
		static JString BIND_VISUAL_VOICEMAIL_SERVICE();
		static JString BIND_VOICE_INTERACTION();
		static JString BIND_VPN_SERVICE();
		static JString BIND_VR_LISTENER_SERVICE();
		static JString BIND_WALLPAPER();
		static JString BLUETOOTH();
		static JString BLUETOOTH_ADMIN();
		static JString BLUETOOTH_ADVERTISE();
		static JString BLUETOOTH_CONNECT();
		static JString BLUETOOTH_PRIVILEGED();
		static JString BLUETOOTH_SCAN();
		static JString BODY_SENSORS();
		static JString BROADCAST_PACKAGE_REMOVED();
		static JString BROADCAST_SMS();
		static JString BROADCAST_STICKY();
		static JString BROADCAST_WAP_PUSH();
		static JString CALL_COMPANION_APP();
		static JString CALL_PHONE();
		static JString CALL_PRIVILEGED();
		static JString CAMERA();
		static JString CAPTURE_AUDIO_OUTPUT();
		static JString CHANGE_COMPONENT_ENABLED_STATE();
		static JString CHANGE_CONFIGURATION();
		static JString CHANGE_NETWORK_STATE();
		static JString CHANGE_WIFI_MULTICAST_STATE();
		static JString CHANGE_WIFI_STATE();
		static JString CLEAR_APP_CACHE();
		static JString CONTROL_LOCATION_UPDATES();
		static JString DELETE_CACHE_FILES();
		static JString DELETE_PACKAGES();
		static JString DIAGNOSTIC();
		static JString DISABLE_KEYGUARD();
		static JString DUMP();
		static JString EXPAND_STATUS_BAR();
		static JString FACTORY_TEST();
		static JString FOREGROUND_SERVICE();
		static JString GET_ACCOUNTS();
		static JString GET_ACCOUNTS_PRIVILEGED();
		static JString GET_PACKAGE_SIZE();
		static JString GET_TASKS();
		static JString GLOBAL_SEARCH();
		static JString HIDE_OVERLAY_WINDOWS();
		static JString HIGH_SAMPLING_RATE_SENSORS();
		static JString INSTALL_LOCATION_PROVIDER();
		static JString INSTALL_PACKAGES();
		static JString INSTALL_SHORTCUT();
		static JString INSTANT_APP_FOREGROUND_SERVICE();
		static JString INTERACT_ACROSS_PROFILES();
		static JString INTERNET();
		static JString KILL_BACKGROUND_PROCESSES();
		static JString LOADER_USAGE_STATS();
		static JString LOCATION_HARDWARE();
		static JString MANAGE_DOCUMENTS();
		static JString MANAGE_EXTERNAL_STORAGE();
		static JString MANAGE_MEDIA();
		static JString MANAGE_ONGOING_CALLS();
		static JString MANAGE_OWN_CALLS();
		static JString MASTER_CLEAR();
		static JString MEDIA_CONTENT_CONTROL();
		static JString MODIFY_AUDIO_SETTINGS();
		static JString MODIFY_PHONE_STATE();
		static JString MOUNT_FORMAT_FILESYSTEMS();
		static JString MOUNT_UNMOUNT_FILESYSTEMS();
		static JString NFC();
		static JString NFC_PREFERRED_PAYMENT_INFO();
		static JString NFC_TRANSACTION_EVENT();
		static JString PACKAGE_USAGE_STATS();
		static JString PERSISTENT_ACTIVITY();
		static JString PROCESS_OUTGOING_CALLS();
		static JString QUERY_ALL_PACKAGES();
		static JString READ_CALENDAR();
		static JString READ_CALL_LOG();
		static JString READ_CONTACTS();
		static JString READ_EXTERNAL_STORAGE();
		static JString READ_INPUT_STATE();
		static JString READ_LOGS();
		static JString READ_PHONE_NUMBERS();
		static JString READ_PHONE_STATE();
		static JString READ_PRECISE_PHONE_STATE();
		static JString READ_SMS();
		static JString READ_SYNC_SETTINGS();
		static JString READ_SYNC_STATS();
		static JString READ_VOICEMAIL();
		static JString REBOOT();
		static JString RECEIVE_BOOT_COMPLETED();
		static JString RECEIVE_MMS();
		static JString RECEIVE_SMS();
		static JString RECEIVE_WAP_PUSH();
		static JString RECORD_AUDIO();
		static JString REORDER_TASKS();
		static JString REQUEST_COMPANION_PROFILE_WATCH();
		static JString REQUEST_COMPANION_RUN_IN_BACKGROUND();
		static JString REQUEST_COMPANION_START_FOREGROUND_SERVICES_FROM_BACKGROUND();
		static JString REQUEST_COMPANION_USE_DATA_IN_BACKGROUND();
		static JString REQUEST_DELETE_PACKAGES();
		static JString REQUEST_IGNORE_BATTERY_OPTIMIZATIONS();
		static JString REQUEST_INSTALL_PACKAGES();
		static JString REQUEST_OBSERVE_COMPANION_DEVICE_PRESENCE();
		static JString REQUEST_PASSWORD_COMPLEXITY();
		static JString RESTART_PACKAGES();
		static JString SCHEDULE_EXACT_ALARM();
		static JString SEND_RESPOND_VIA_MESSAGE();
		static JString SEND_SMS();
		static JString SET_ALARM();
		static JString SET_ALWAYS_FINISH();
		static JString SET_ANIMATION_SCALE();
		static JString SET_DEBUG_APP();
		static JString SET_PREFERRED_APPLICATIONS();
		static JString SET_PROCESS_LIMIT();
		static JString SET_TIME();
		static JString SET_TIME_ZONE();
		static JString SET_WALLPAPER();
		static JString SET_WALLPAPER_HINTS();
		static JString SIGNAL_PERSISTENT_PROCESSES();
		static JString SMS_FINANCIAL_TRANSACTIONS();
		static JString START_FOREGROUND_SERVICES_FROM_BACKGROUND();
		static JString START_VIEW_PERMISSION_USAGE();
		static JString STATUS_BAR();
		static JString SYSTEM_ALERT_WINDOW();
		static JString TRANSMIT_IR();
		static JString UNINSTALL_SHORTCUT();
		static JString UPDATE_DEVICE_STATS();
		static JString UPDATE_PACKAGES_WITHOUT_USER_ACTION();
		static JString USE_BIOMETRIC();
		static JString USE_FINGERPRINT();
		static JString USE_FULL_SCREEN_INTENT();
		static JString USE_ICC_AUTH_WITH_DEVICE_IDENTIFIER();
		static JString USE_SIP();
		static JString UWB_RANGING();
		static JString VIBRATE();
		static JString WAKE_LOCK();
		static JString WRITE_APN_SETTINGS();
		static JString WRITE_CALENDAR();
		static JString WRITE_CALL_LOG();
		static JString WRITE_CONTACTS();
		static JString WRITE_EXTERNAL_STORAGE();
		static JString WRITE_GSERVICES();
		static JString WRITE_SECURE_SETTINGS();
		static JString WRITE_SETTINGS();
		static JString WRITE_SYNC_SETTINGS();
		static JString WRITE_VOICEMAIL();
		
		// QJniObject forward
		template<typename ...Ts> explicit Manifest_permission(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest_permission(QJniObject obj);
		
		// Constructors
		Manifest_permission();
		
		// Methods
	};
} // namespace android

