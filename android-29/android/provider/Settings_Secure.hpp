#pragma once

#include "./Settings_NameValueTable.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Settings_Secure : public android::provider::Settings_NameValueTable
	{
	public:
		// Fields
		static JString ACCESSIBILITY_DISPLAY_INVERSION_ENABLED();
		static JString ACCESSIBILITY_ENABLED();
		static JString ACCESSIBILITY_SPEAK_PASSWORD();
		static JString ADB_ENABLED();
		static JString ALLOWED_GEOLOCATION_ORIGINS();
		static JString ALLOW_MOCK_LOCATION();
		static JString ANDROID_ID();
		static JString BACKGROUND_DATA();
		static JString BLUETOOTH_ON();
		static android::net::Uri CONTENT_URI();
		static JString DATA_ROAMING();
		static JString DEFAULT_INPUT_METHOD();
		static JString DEVELOPMENT_SETTINGS_ENABLED();
		static JString DEVICE_PROVISIONED();
		static JString ENABLED_ACCESSIBILITY_SERVICES();
		static JString ENABLED_INPUT_METHODS();
		static JString HTTP_PROXY();
		static JString INPUT_METHOD_SELECTOR_VISIBILITY();
		static JString INSTALL_NON_MARKET_APPS();
		static JString LOCATION_MODE();
		static jint LOCATION_MODE_BATTERY_SAVING();
		static jint LOCATION_MODE_HIGH_ACCURACY();
		static jint LOCATION_MODE_OFF();
		static jint LOCATION_MODE_SENSORS_ONLY();
		static JString LOCATION_PROVIDERS_ALLOWED();
		static JString LOCK_PATTERN_ENABLED();
		static JString LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED();
		static JString LOCK_PATTERN_VISIBLE();
		static JString LOGGING_ID();
		static JString NETWORK_PREFERENCE();
		static JString PARENTAL_CONTROL_ENABLED();
		static JString PARENTAL_CONTROL_LAST_UPDATE();
		static JString PARENTAL_CONTROL_REDIRECT_URL();
		static JString RTT_CALLING_MODE();
		static JString SELECTED_INPUT_METHOD_SUBTYPE();
		static JString SETTINGS_CLASSNAME();
		static JString SKIP_FIRST_USE_HINTS();
		static JString TOUCH_EXPLORATION_ENABLED();
		static JString TTS_DEFAULT_COUNTRY();
		static JString TTS_DEFAULT_LANG();
		static JString TTS_DEFAULT_PITCH();
		static JString TTS_DEFAULT_RATE();
		static JString TTS_DEFAULT_SYNTH();
		static JString TTS_DEFAULT_VARIANT();
		static JString TTS_ENABLED_PLUGINS();
		static JString TTS_USE_DEFAULTS();
		static JString USB_MASS_STORAGE_ENABLED();
		static JString USE_GOOGLE_MAIL();
		static JString WIFI_MAX_DHCP_RETRY_COUNT();
		static JString WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS();
		static JString WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON();
		static JString WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY();
		static JString WIFI_NUM_OPEN_NETWORKS_KEPT();
		static JString WIFI_ON();
		static JString WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE();
		static JString WIFI_WATCHDOG_AP_COUNT();
		static JString WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS();
		static JString WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED();
		static JString WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS();
		static JString WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT();
		static JString WIFI_WATCHDOG_MAX_AP_CHECKS();
		static JString WIFI_WATCHDOG_ON();
		static JString WIFI_WATCHDOG_PING_COUNT();
		static JString WIFI_WATCHDOG_PING_DELAY_MS();
		static JString WIFI_WATCHDOG_PING_TIMEOUT_MS();
		static JString WIFI_WATCHDOG_WATCH_LIST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Settings_Secure(const char *className, const char *sig, Ts...agv) : android::provider::Settings_NameValueTable(className, sig, std::forward<Ts>(agv)...) {}
		Settings_Secure(QAndroidJniObject obj);
		
		// Constructors
		Settings_Secure();
		
		// Methods
		static jfloat getFloat(android::content::ContentResolver arg0, JString arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2);
		static jint getInt(android::content::ContentResolver arg0, JString arg1);
		static jint getInt(android::content::ContentResolver arg0, JString arg1, jint arg2);
		static jlong getLong(android::content::ContentResolver arg0, JString arg1);
		static jlong getLong(android::content::ContentResolver arg0, JString arg1, jlong arg2);
		static JString getString(android::content::ContentResolver arg0, JString arg1);
		static android::net::Uri getUriFor(JString arg0);
		static jboolean isLocationProviderEnabled(android::content::ContentResolver arg0, JString arg1);
		static jboolean putFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2);
		static jboolean putInt(android::content::ContentResolver arg0, JString arg1, jint arg2);
		static jboolean putLong(android::content::ContentResolver arg0, JString arg1, jlong arg2);
		static jboolean putString(android::content::ContentResolver arg0, JString arg1, JString arg2);
		static void setLocationProviderEnabled(android::content::ContentResolver arg0, JString arg1, jboolean arg2);
	};
} // namespace android::provider

