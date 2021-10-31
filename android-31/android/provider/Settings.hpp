#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::provider
{
	class Settings : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_ACCESSIBILITY_SETTINGS();
		static jstring ACTION_ADD_ACCOUNT();
		static jstring ACTION_AIRPLANE_MODE_SETTINGS();
		static jstring ACTION_APN_SETTINGS();
		static jstring ACTION_APPLICATION_DETAILS_SETTINGS();
		static jstring ACTION_APPLICATION_DEVELOPMENT_SETTINGS();
		static jstring ACTION_APPLICATION_SETTINGS();
		static jstring ACTION_APP_NOTIFICATION_BUBBLE_SETTINGS();
		static jstring ACTION_APP_NOTIFICATION_SETTINGS();
		static jstring ACTION_APP_OPEN_BY_DEFAULT_SETTINGS();
		static jstring ACTION_APP_SEARCH_SETTINGS();
		static jstring ACTION_APP_USAGE_SETTINGS();
		static jstring ACTION_AUTO_ROTATE_SETTINGS();
		static jstring ACTION_BATTERY_SAVER_SETTINGS();
		static jstring ACTION_BIOMETRIC_ENROLL();
		static jstring ACTION_BLUETOOTH_SETTINGS();
		static jstring ACTION_CAPTIONING_SETTINGS();
		static jstring ACTION_CAST_SETTINGS();
		static jstring ACTION_CHANNEL_NOTIFICATION_SETTINGS();
		static jstring ACTION_CONDITION_PROVIDER_SETTINGS();
		static jstring ACTION_DATA_ROAMING_SETTINGS();
		static jstring ACTION_DATA_USAGE_SETTINGS();
		static jstring ACTION_DATE_SETTINGS();
		static jstring ACTION_DEVICE_INFO_SETTINGS();
		static jstring ACTION_DISPLAY_SETTINGS();
		static jstring ACTION_DREAM_SETTINGS();
		static jstring ACTION_FINGERPRINT_ENROLL();
		static jstring ACTION_HARD_KEYBOARD_SETTINGS();
		static jstring ACTION_HOME_SETTINGS();
		static jstring ACTION_IGNORE_BACKGROUND_DATA_RESTRICTIONS_SETTINGS();
		static jstring ACTION_IGNORE_BATTERY_OPTIMIZATION_SETTINGS();
		static jstring ACTION_INPUT_METHOD_SETTINGS();
		static jstring ACTION_INPUT_METHOD_SUBTYPE_SETTINGS();
		static jstring ACTION_INTERNAL_STORAGE_SETTINGS();
		static jstring ACTION_LOCALE_SETTINGS();
		static jstring ACTION_LOCATION_SOURCE_SETTINGS();
		static jstring ACTION_MANAGE_ALL_APPLICATIONS_SETTINGS();
		static jstring ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION();
		static jstring ACTION_MANAGE_ALL_SIM_PROFILES_SETTINGS();
		static jstring ACTION_MANAGE_APPLICATIONS_SETTINGS();
		static jstring ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION();
		static jstring ACTION_MANAGE_DEFAULT_APPS_SETTINGS();
		static jstring ACTION_MANAGE_OVERLAY_PERMISSION();
		static jstring ACTION_MANAGE_UNKNOWN_APP_SOURCES();
		static jstring ACTION_MANAGE_WRITE_SETTINGS();
		static jstring ACTION_MEMORY_CARD_SETTINGS();
		static jstring ACTION_NETWORK_OPERATOR_SETTINGS();
		static jstring ACTION_NFCSHARING_SETTINGS();
		static jstring ACTION_NFC_PAYMENT_SETTINGS();
		static jstring ACTION_NFC_SETTINGS();
		static jstring ACTION_NIGHT_DISPLAY_SETTINGS();
		static jstring ACTION_NOTIFICATION_ASSISTANT_SETTINGS();
		static jstring ACTION_NOTIFICATION_LISTENER_DETAIL_SETTINGS();
		static jstring ACTION_NOTIFICATION_LISTENER_SETTINGS();
		static jstring ACTION_NOTIFICATION_POLICY_ACCESS_SETTINGS();
		static jstring ACTION_PRINT_SETTINGS();
		static jstring ACTION_PRIVACY_SETTINGS();
		static jstring ACTION_PROCESS_WIFI_EASY_CONNECT_URI();
		static jstring ACTION_QUICK_ACCESS_WALLET_SETTINGS();
		static jstring ACTION_QUICK_LAUNCH_SETTINGS();
		static jstring ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS();
		static jstring ACTION_REQUEST_MANAGE_MEDIA();
		static jstring ACTION_REQUEST_SCHEDULE_EXACT_ALARM();
		static jstring ACTION_REQUEST_SET_AUTOFILL_SERVICE();
		static jstring ACTION_SEARCH_SETTINGS();
		static jstring ACTION_SECURITY_SETTINGS();
		static jstring ACTION_SETTINGS();
		static jstring ACTION_SHOW_REGULATORY_INFO();
		static jstring ACTION_SHOW_WORK_POLICY_INFO();
		static jstring ACTION_SOUND_SETTINGS();
		static jstring ACTION_STORAGE_VOLUME_ACCESS_SETTINGS();
		static jstring ACTION_SYNC_SETTINGS();
		static jstring ACTION_USAGE_ACCESS_SETTINGS();
		static jstring ACTION_USER_DICTIONARY_SETTINGS();
		static jstring ACTION_VOICE_CONTROL_AIRPLANE_MODE();
		static jstring ACTION_VOICE_CONTROL_BATTERY_SAVER_MODE();
		static jstring ACTION_VOICE_CONTROL_DO_NOT_DISTURB_MODE();
		static jstring ACTION_VOICE_INPUT_SETTINGS();
		static jstring ACTION_VPN_SETTINGS();
		static jstring ACTION_VR_LISTENER_SETTINGS();
		static jstring ACTION_WEBVIEW_SETTINGS();
		static jstring ACTION_WIFI_ADD_NETWORKS();
		static jstring ACTION_WIFI_IP_SETTINGS();
		static jstring ACTION_WIFI_SETTINGS();
		static jstring ACTION_WIRELESS_SETTINGS();
		static jstring ACTION_ZEN_MODE_PRIORITY_SETTINGS();
		static jint ADD_WIFI_RESULT_ADD_OR_UPDATE_FAILED();
		static jint ADD_WIFI_RESULT_ALREADY_EXISTS();
		static jint ADD_WIFI_RESULT_SUCCESS();
		static jstring AUTHORITY();
		static jstring EXTRA_ACCOUNT_TYPES();
		static jstring EXTRA_AIRPLANE_MODE_ENABLED();
		static jstring EXTRA_APP_PACKAGE();
		static jstring EXTRA_AUTHORITIES();
		static jstring EXTRA_BATTERY_SAVER_MODE_ENABLED();
		static jstring EXTRA_BIOMETRIC_AUTHENTICATORS_ALLOWED();
		static jstring EXTRA_CHANNEL_FILTER_LIST();
		static jstring EXTRA_CHANNEL_ID();
		static jstring EXTRA_CONVERSATION_ID();
		static jstring EXTRA_DO_NOT_DISTURB_MODE_ENABLED();
		static jstring EXTRA_DO_NOT_DISTURB_MODE_MINUTES();
		static jstring EXTRA_EASY_CONNECT_ATTEMPTED_SSID();
		static jstring EXTRA_EASY_CONNECT_BAND_LIST();
		static jstring EXTRA_EASY_CONNECT_CHANNEL_LIST();
		static jstring EXTRA_EASY_CONNECT_ERROR_CODE();
		static jstring EXTRA_INPUT_METHOD_ID();
		static jstring EXTRA_NOTIFICATION_LISTENER_COMPONENT_NAME();
		static jstring EXTRA_SUB_ID();
		static jstring EXTRA_WIFI_NETWORK_LIST();
		static jstring EXTRA_WIFI_NETWORK_RESULT_LIST();
		static jstring INTENT_CATEGORY_USAGE_ACCESS_CONFIG();
		static jstring METADATA_USAGE_ACCESS_REASON();
		
		// QJniObject forward
		template<typename ...Ts> explicit Settings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Settings(QJniObject obj);
		
		// Constructors
		Settings();
		
		// Methods
		static jboolean canDrawOverlays(android::content::Context arg0);
	};
} // namespace android::provider

