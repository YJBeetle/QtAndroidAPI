#pragma once

#include "./Settings_NameValueTable.def.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Settings_System : public android::provider::Settings_NameValueTable
	{
	public:
		// Fields
		static JString ACCELEROMETER_ROTATION();
		static JString ADB_ENABLED();
		static JString AIRPLANE_MODE_ON();
		static JString AIRPLANE_MODE_RADIOS();
		static JString ALARM_ALERT();
		static JString ALWAYS_FINISH_ACTIVITIES();
		static JString ANDROID_ID();
		static JString ANIMATOR_DURATION_SCALE();
		static JString AUTO_TIME();
		static JString AUTO_TIME_ZONE();
		static JString BLUETOOTH_DISCOVERABILITY();
		static JString BLUETOOTH_DISCOVERABILITY_TIMEOUT();
		static JString BLUETOOTH_ON();
		static android::net::Uri CONTENT_URI();
		static JString DATA_ROAMING();
		static JString DATE_FORMAT();
		static JString DEBUG_APP();
		static android::net::Uri DEFAULT_ALARM_ALERT_URI();
		static android::net::Uri DEFAULT_NOTIFICATION_URI();
		static android::net::Uri DEFAULT_RINGTONE_URI();
		static JString DEVICE_PROVISIONED();
		static JString DIM_SCREEN();
		static JString DTMF_TONE_TYPE_WHEN_DIALING();
		static JString DTMF_TONE_WHEN_DIALING();
		static JString END_BUTTON_BEHAVIOR();
		static JString FONT_SCALE();
		static JString HAPTIC_FEEDBACK_ENABLED();
		static JString HTTP_PROXY();
		static JString INSTALL_NON_MARKET_APPS();
		static JString LOCATION_PROVIDERS_ALLOWED();
		static JString LOCK_PATTERN_ENABLED();
		static JString LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED();
		static JString LOCK_PATTERN_VISIBLE();
		static JString LOGGING_ID();
		static JString MODE_RINGER();
		static JString MODE_RINGER_STREAMS_AFFECTED();
		static JString MUTE_STREAMS_AFFECTED();
		static JString NETWORK_PREFERENCE();
		static JString NEXT_ALARM_FORMATTED();
		static JString NOTIFICATION_SOUND();
		static JString PARENTAL_CONTROL_ENABLED();
		static JString PARENTAL_CONTROL_LAST_UPDATE();
		static JString PARENTAL_CONTROL_REDIRECT_URL();
		static JString RADIO_BLUETOOTH();
		static JString RADIO_CELL();
		static JString RADIO_NFC();
		static JString RADIO_WIFI();
		static JString RINGTONE();
		static JString SCREEN_BRIGHTNESS();
		static JString SCREEN_BRIGHTNESS_MODE();
		static jint SCREEN_BRIGHTNESS_MODE_AUTOMATIC();
		static jint SCREEN_BRIGHTNESS_MODE_MANUAL();
		static JString SCREEN_OFF_TIMEOUT();
		static JString SETTINGS_CLASSNAME();
		static JString SETUP_WIZARD_HAS_RUN();
		static JString SHOW_GTALK_SERVICE_STATUS();
		static JString SHOW_PROCESSES();
		static JString SHOW_WEB_SUGGESTIONS();
		static JString SOUND_EFFECTS_ENABLED();
		static JString STAY_ON_WHILE_PLUGGED_IN();
		static JString TEXT_AUTO_CAPS();
		static JString TEXT_AUTO_PUNCTUATE();
		static JString TEXT_AUTO_REPLACE();
		static JString TEXT_SHOW_PASSWORD();
		static JString TIME_12_24();
		static JString TRANSITION_ANIMATION_SCALE();
		static JString USB_MASS_STORAGE_ENABLED();
		static JString USER_ROTATION();
		static JString USE_GOOGLE_MAIL();
		static JString VIBRATE_ON();
		static JString VIBRATE_WHEN_RINGING();
		static JString WAIT_FOR_DEBUGGER();
		static JString WALLPAPER_ACTIVITY();
		static JString WIFI_MAX_DHCP_RETRY_COUNT();
		static JString WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS();
		static JString WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON();
		static JString WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY();
		static JString WIFI_NUM_OPEN_NETWORKS_KEPT();
		static JString WIFI_ON();
		static JString WIFI_SLEEP_POLICY();
		static jint WIFI_SLEEP_POLICY_DEFAULT();
		static jint WIFI_SLEEP_POLICY_NEVER();
		static jint WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED();
		static JString WIFI_STATIC_DNS1();
		static JString WIFI_STATIC_DNS2();
		static JString WIFI_STATIC_GATEWAY();
		static JString WIFI_STATIC_IP();
		static JString WIFI_STATIC_NETMASK();
		static JString WIFI_USE_STATIC_IP();
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
		static JString WINDOW_ANIMATION_SCALE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Settings_System(const char *className, const char *sig, Ts...agv) : android::provider::Settings_NameValueTable(className, sig, std::forward<Ts>(agv)...) {}
		Settings_System(QAndroidJniObject obj) : android::provider::Settings_NameValueTable(obj) {}
		
		// Constructors
		Settings_System();
		
		// Methods
		static jboolean canWrite(android::content::Context arg0);
		static void getConfiguration(android::content::ContentResolver arg0, android::content::res::Configuration arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, JString arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2);
		static jint getInt(android::content::ContentResolver arg0, JString arg1);
		static jint getInt(android::content::ContentResolver arg0, JString arg1, jint arg2);
		static jlong getLong(android::content::ContentResolver arg0, JString arg1);
		static jlong getLong(android::content::ContentResolver arg0, JString arg1, jlong arg2);
		static jboolean getShowGTalkServiceStatus(android::content::ContentResolver arg0);
		static JString getString(android::content::ContentResolver arg0, JString arg1);
		static android::net::Uri getUriFor(JString arg0);
		static jboolean putConfiguration(android::content::ContentResolver arg0, android::content::res::Configuration arg1);
		static jboolean putFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2);
		static jboolean putInt(android::content::ContentResolver arg0, JString arg1, jint arg2);
		static jboolean putLong(android::content::ContentResolver arg0, JString arg1, jlong arg2);
		static jboolean putString(android::content::ContentResolver arg0, JString arg1, JString arg2);
		static void setShowGTalkServiceStatus(android::content::ContentResolver arg0, jboolean arg1);
	};
} // namespace android::provider

