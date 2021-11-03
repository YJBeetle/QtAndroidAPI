#pragma once

#include "../../JObject.hpp"
#include "./Settings_NameValueTable.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Settings_Secure : public android::provider::Settings_NameValueTable
	{
	public:
		// Fields
		static jstring ACCESSIBILITY_DISPLAY_INVERSION_ENABLED();
		static jstring ACCESSIBILITY_ENABLED();
		static jstring ACCESSIBILITY_SPEAK_PASSWORD();
		static jstring ADB_ENABLED();
		static jstring ALLOWED_GEOLOCATION_ORIGINS();
		static jstring ALLOW_MOCK_LOCATION();
		static jstring ANDROID_ID();
		static jstring BACKGROUND_DATA();
		static jstring BLUETOOTH_ON();
		static android::net::Uri CONTENT_URI();
		static jstring DATA_ROAMING();
		static jstring DEFAULT_INPUT_METHOD();
		static jstring DEVELOPMENT_SETTINGS_ENABLED();
		static jstring DEVICE_PROVISIONED();
		static jstring ENABLED_ACCESSIBILITY_SERVICES();
		static jstring ENABLED_INPUT_METHODS();
		static jstring HTTP_PROXY();
		static jstring INPUT_METHOD_SELECTOR_VISIBILITY();
		static jstring INSTALL_NON_MARKET_APPS();
		static jstring LOCATION_MODE();
		static jint LOCATION_MODE_BATTERY_SAVING();
		static jint LOCATION_MODE_HIGH_ACCURACY();
		static jint LOCATION_MODE_OFF();
		static jint LOCATION_MODE_SENSORS_ONLY();
		static jstring LOCATION_PROVIDERS_ALLOWED();
		static jstring LOCK_PATTERN_ENABLED();
		static jstring LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED();
		static jstring LOCK_PATTERN_VISIBLE();
		static jstring LOGGING_ID();
		static jstring NETWORK_PREFERENCE();
		static jstring PARENTAL_CONTROL_ENABLED();
		static jstring PARENTAL_CONTROL_LAST_UPDATE();
		static jstring PARENTAL_CONTROL_REDIRECT_URL();
		static jstring RTT_CALLING_MODE();
		static jstring SELECTED_INPUT_METHOD_SUBTYPE();
		static jstring SETTINGS_CLASSNAME();
		static jstring SKIP_FIRST_USE_HINTS();
		static jstring TOUCH_EXPLORATION_ENABLED();
		static jstring TTS_DEFAULT_COUNTRY();
		static jstring TTS_DEFAULT_LANG();
		static jstring TTS_DEFAULT_PITCH();
		static jstring TTS_DEFAULT_RATE();
		static jstring TTS_DEFAULT_SYNTH();
		static jstring TTS_DEFAULT_VARIANT();
		static jstring TTS_ENABLED_PLUGINS();
		static jstring TTS_USE_DEFAULTS();
		static jstring USB_MASS_STORAGE_ENABLED();
		static jstring USE_GOOGLE_MAIL();
		static jstring WIFI_MAX_DHCP_RETRY_COUNT();
		static jstring WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS();
		static jstring WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON();
		static jstring WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY();
		static jstring WIFI_NUM_OPEN_NETWORKS_KEPT();
		static jstring WIFI_ON();
		static jstring WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE();
		static jstring WIFI_WATCHDOG_AP_COUNT();
		static jstring WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS();
		static jstring WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED();
		static jstring WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS();
		static jstring WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT();
		static jstring WIFI_WATCHDOG_MAX_AP_CHECKS();
		static jstring WIFI_WATCHDOG_ON();
		static jstring WIFI_WATCHDOG_PING_COUNT();
		static jstring WIFI_WATCHDOG_PING_DELAY_MS();
		static jstring WIFI_WATCHDOG_PING_TIMEOUT_MS();
		static jstring WIFI_WATCHDOG_WATCH_LIST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Settings_Secure(const char *className, const char *sig, Ts...agv) : android::provider::Settings_NameValueTable(className, sig, std::forward<Ts>(agv)...) {}
		Settings_Secure(QAndroidJniObject obj);
		
		// Constructors
		Settings_Secure();
		
		// Methods
		static jfloat getFloat(android::content::ContentResolver arg0, jstring arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jint getInt(android::content::ContentResolver arg0, jstring arg1);
		static jint getInt(android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jlong getLong(android::content::ContentResolver arg0, jstring arg1);
		static jlong getLong(android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jstring getString(android::content::ContentResolver arg0, jstring arg1);
		static android::net::Uri getUriFor(jstring arg0);
		static jboolean isLocationProviderEnabled(android::content::ContentResolver arg0, jstring arg1);
		static jboolean putFloat(android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jboolean putInt(android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jboolean putLong(android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jboolean putString(android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static void setLocationProviderEnabled(android::content::ContentResolver arg0, jstring arg1, jboolean arg2);
	};
} // namespace android::provider

