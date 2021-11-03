#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::provider
{
	class Settings : public JObject
	{
	public:
		// Fields
		static JString ACTION_ACCESSIBILITY_SETTINGS();
		static JString ACTION_ADD_ACCOUNT();
		static JString ACTION_AIRPLANE_MODE_SETTINGS();
		static JString ACTION_APN_SETTINGS();
		static JString ACTION_APPLICATION_DETAILS_SETTINGS();
		static JString ACTION_APPLICATION_DEVELOPMENT_SETTINGS();
		static JString ACTION_APPLICATION_SETTINGS();
		static JString ACTION_APP_NOTIFICATION_SETTINGS();
		static JString ACTION_BATTERY_SAVER_SETTINGS();
		static JString ACTION_BLUETOOTH_SETTINGS();
		static JString ACTION_CAPTIONING_SETTINGS();
		static JString ACTION_CAST_SETTINGS();
		static JString ACTION_CHANNEL_NOTIFICATION_SETTINGS();
		static JString ACTION_DATA_ROAMING_SETTINGS();
		static JString ACTION_DATA_USAGE_SETTINGS();
		static JString ACTION_DATE_SETTINGS();
		static JString ACTION_DEVICE_INFO_SETTINGS();
		static JString ACTION_DISPLAY_SETTINGS();
		static JString ACTION_DREAM_SETTINGS();
		static JString ACTION_FINGERPRINT_ENROLL();
		static JString ACTION_HARD_KEYBOARD_SETTINGS();
		static JString ACTION_HOME_SETTINGS();
		static JString ACTION_IGNORE_BACKGROUND_DATA_RESTRICTIONS_SETTINGS();
		static JString ACTION_IGNORE_BATTERY_OPTIMIZATION_SETTINGS();
		static JString ACTION_INPUT_METHOD_SETTINGS();
		static JString ACTION_INPUT_METHOD_SUBTYPE_SETTINGS();
		static JString ACTION_INTERNAL_STORAGE_SETTINGS();
		static JString ACTION_LOCALE_SETTINGS();
		static JString ACTION_LOCATION_SOURCE_SETTINGS();
		static JString ACTION_MANAGE_ALL_APPLICATIONS_SETTINGS();
		static JString ACTION_MANAGE_APPLICATIONS_SETTINGS();
		static JString ACTION_MANAGE_DEFAULT_APPS_SETTINGS();
		static JString ACTION_MANAGE_OVERLAY_PERMISSION();
		static JString ACTION_MANAGE_UNKNOWN_APP_SOURCES();
		static JString ACTION_MANAGE_WRITE_SETTINGS();
		static JString ACTION_MEMORY_CARD_SETTINGS();
		static JString ACTION_NETWORK_OPERATOR_SETTINGS();
		static JString ACTION_NFCSHARING_SETTINGS();
		static JString ACTION_NFC_PAYMENT_SETTINGS();
		static JString ACTION_NFC_SETTINGS();
		static JString ACTION_NIGHT_DISPLAY_SETTINGS();
		static JString ACTION_NOTIFICATION_LISTENER_SETTINGS();
		static JString ACTION_NOTIFICATION_POLICY_ACCESS_SETTINGS();
		static JString ACTION_PRINT_SETTINGS();
		static JString ACTION_PRIVACY_SETTINGS();
		static JString ACTION_QUICK_LAUNCH_SETTINGS();
		static JString ACTION_REQUEST_IGNORE_BATTERY_OPTIMIZATIONS();
		static JString ACTION_REQUEST_SET_AUTOFILL_SERVICE();
		static JString ACTION_SEARCH_SETTINGS();
		static JString ACTION_SECURITY_SETTINGS();
		static JString ACTION_SETTINGS();
		static JString ACTION_SHOW_REGULATORY_INFO();
		static JString ACTION_SOUND_SETTINGS();
		static JString ACTION_STORAGE_VOLUME_ACCESS_SETTINGS();
		static JString ACTION_SYNC_SETTINGS();
		static JString ACTION_USAGE_ACCESS_SETTINGS();
		static JString ACTION_USER_DICTIONARY_SETTINGS();
		static JString ACTION_VOICE_CONTROL_AIRPLANE_MODE();
		static JString ACTION_VOICE_CONTROL_BATTERY_SAVER_MODE();
		static JString ACTION_VOICE_CONTROL_DO_NOT_DISTURB_MODE();
		static JString ACTION_VOICE_INPUT_SETTINGS();
		static JString ACTION_VPN_SETTINGS();
		static JString ACTION_VR_LISTENER_SETTINGS();
		static JString ACTION_WEBVIEW_SETTINGS();
		static JString ACTION_WIFI_IP_SETTINGS();
		static JString ACTION_WIFI_SETTINGS();
		static JString ACTION_WIRELESS_SETTINGS();
		static JString ACTION_ZEN_MODE_PRIORITY_SETTINGS();
		static JString AUTHORITY();
		static JString EXTRA_ACCOUNT_TYPES();
		static JString EXTRA_AIRPLANE_MODE_ENABLED();
		static JString EXTRA_APP_PACKAGE();
		static JString EXTRA_AUTHORITIES();
		static JString EXTRA_BATTERY_SAVER_MODE_ENABLED();
		static JString EXTRA_CHANNEL_ID();
		static JString EXTRA_DO_NOT_DISTURB_MODE_ENABLED();
		static JString EXTRA_DO_NOT_DISTURB_MODE_MINUTES();
		static JString EXTRA_INPUT_METHOD_ID();
		static JString EXTRA_SUB_ID();
		static JString INTENT_CATEGORY_USAGE_ACCESS_CONFIG();
		static JString METADATA_USAGE_ACCESS_REASON();
		
		// QJniObject forward
		template<typename ...Ts> explicit Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Settings(QJniObject obj);
		
		// Constructors
		Settings();
		
		// Methods
		static jboolean canDrawOverlays(android::content::Context arg0);
	};
} // namespace android::provider

