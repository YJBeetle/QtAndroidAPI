#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Settings_NameValueTable.hpp"

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

namespace android::provider
{
	class Settings_System : public android::provider::Settings_NameValueTable
	{
	public:
		// Fields
		static jstring ACCELEROMETER_ROTATION();
		static jstring ADB_ENABLED();
		static jstring AIRPLANE_MODE_ON();
		static jstring AIRPLANE_MODE_RADIOS();
		static jstring ALARM_ALERT();
		static jstring ALWAYS_FINISH_ACTIVITIES();
		static jstring ANDROID_ID();
		static jstring ANIMATOR_DURATION_SCALE();
		static jstring AUTO_TIME();
		static jstring AUTO_TIME_ZONE();
		static jstring BLUETOOTH_DISCOVERABILITY();
		static jstring BLUETOOTH_DISCOVERABILITY_TIMEOUT();
		static jstring BLUETOOTH_ON();
		static android::net::Uri CONTENT_URI();
		static jstring DATA_ROAMING();
		static jstring DATE_FORMAT();
		static jstring DEBUG_APP();
		static android::net::Uri DEFAULT_ALARM_ALERT_URI();
		static android::net::Uri DEFAULT_NOTIFICATION_URI();
		static android::net::Uri DEFAULT_RINGTONE_URI();
		static jstring DEVICE_PROVISIONED();
		static jstring DIM_SCREEN();
		static jstring DTMF_TONE_TYPE_WHEN_DIALING();
		static jstring DTMF_TONE_WHEN_DIALING();
		static jstring END_BUTTON_BEHAVIOR();
		static jstring FONT_SCALE();
		static jstring HAPTIC_FEEDBACK_ENABLED();
		static jstring HTTP_PROXY();
		static jstring INSTALL_NON_MARKET_APPS();
		static jstring LOCATION_PROVIDERS_ALLOWED();
		static jstring LOCK_PATTERN_ENABLED();
		static jstring LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED();
		static jstring LOCK_PATTERN_VISIBLE();
		static jstring LOGGING_ID();
		static jstring MODE_RINGER();
		static jstring MODE_RINGER_STREAMS_AFFECTED();
		static jstring MUTE_STREAMS_AFFECTED();
		static jstring NETWORK_PREFERENCE();
		static jstring NEXT_ALARM_FORMATTED();
		static jstring NOTIFICATION_SOUND();
		static jstring PARENTAL_CONTROL_ENABLED();
		static jstring PARENTAL_CONTROL_LAST_UPDATE();
		static jstring PARENTAL_CONTROL_REDIRECT_URL();
		static jstring RADIO_BLUETOOTH();
		static jstring RADIO_CELL();
		static jstring RADIO_NFC();
		static jstring RADIO_WIFI();
		static jstring RINGTONE();
		static jstring SCREEN_BRIGHTNESS();
		static jstring SCREEN_BRIGHTNESS_MODE();
		static jint SCREEN_BRIGHTNESS_MODE_AUTOMATIC();
		static jint SCREEN_BRIGHTNESS_MODE_MANUAL();
		static jstring SCREEN_OFF_TIMEOUT();
		static jstring SETTINGS_CLASSNAME();
		static jstring SETUP_WIZARD_HAS_RUN();
		static jstring SHOW_GTALK_SERVICE_STATUS();
		static jstring SHOW_PROCESSES();
		static jstring SHOW_WEB_SUGGESTIONS();
		static jstring SOUND_EFFECTS_ENABLED();
		static jstring STAY_ON_WHILE_PLUGGED_IN();
		static jstring TEXT_AUTO_CAPS();
		static jstring TEXT_AUTO_PUNCTUATE();
		static jstring TEXT_AUTO_REPLACE();
		static jstring TEXT_SHOW_PASSWORD();
		static jstring TIME_12_24();
		static jstring TRANSITION_ANIMATION_SCALE();
		static jstring USB_MASS_STORAGE_ENABLED();
		static jstring USER_ROTATION();
		static jstring USE_GOOGLE_MAIL();
		static jstring VIBRATE_ON();
		static jstring VIBRATE_WHEN_RINGING();
		static jstring WAIT_FOR_DEBUGGER();
		static jstring WALLPAPER_ACTIVITY();
		static jstring WIFI_MAX_DHCP_RETRY_COUNT();
		static jstring WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS();
		static jstring WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON();
		static jstring WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY();
		static jstring WIFI_NUM_OPEN_NETWORKS_KEPT();
		static jstring WIFI_ON();
		static jstring WIFI_SLEEP_POLICY();
		static jint WIFI_SLEEP_POLICY_DEFAULT();
		static jint WIFI_SLEEP_POLICY_NEVER();
		static jint WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED();
		static jstring WIFI_STATIC_DNS1();
		static jstring WIFI_STATIC_DNS2();
		static jstring WIFI_STATIC_GATEWAY();
		static jstring WIFI_STATIC_IP();
		static jstring WIFI_STATIC_NETMASK();
		static jstring WIFI_USE_STATIC_IP();
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
		static jstring WINDOW_ANIMATION_SCALE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Settings_System(const char *className, const char *sig, Ts...agv) : android::provider::Settings_NameValueTable(className, sig, std::forward<Ts>(agv)...) {}
		Settings_System(QAndroidJniObject obj);
		
		// Constructors
		Settings_System();
		
		// Methods
		static jboolean canWrite(android::content::Context arg0);
		static void getConfiguration(android::content::ContentResolver arg0, android::content::res::Configuration arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, jstring arg1);
		static jfloat getFloat(android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jint getInt(android::content::ContentResolver arg0, jstring arg1);
		static jint getInt(android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jlong getLong(android::content::ContentResolver arg0, jstring arg1);
		static jlong getLong(android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jboolean getShowGTalkServiceStatus(android::content::ContentResolver arg0);
		static jstring getString(android::content::ContentResolver arg0, jstring arg1);
		static android::net::Uri getUriFor(jstring arg0);
		static jboolean putConfiguration(android::content::ContentResolver arg0, android::content::res::Configuration arg1);
		static jboolean putFloat(android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jboolean putInt(android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jboolean putLong(android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jboolean putString(android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static void setShowGTalkServiceStatus(android::content::ContentResolver arg0, jboolean arg1);
	};
} // namespace android::provider

