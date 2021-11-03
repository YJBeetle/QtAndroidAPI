#include "../content/ContentResolver.hpp"
#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Settings_System.hpp"

namespace android::provider
{
	// Fields
	JString Settings_System::ACCELEROMETER_ROTATION()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"ACCELEROMETER_ROTATION",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::ADB_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"ADB_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::AIRPLANE_MODE_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"AIRPLANE_MODE_ON",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::AIRPLANE_MODE_RADIOS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"AIRPLANE_MODE_RADIOS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::ALARM_ALERT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"ALARM_ALERT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::ALWAYS_FINISH_ACTIVITIES()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"ALWAYS_FINISH_ACTIVITIES",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::ANDROID_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"ANDROID_ID",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::ANIMATOR_DURATION_SCALE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"ANIMATOR_DURATION_SCALE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::AUTO_TIME()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"AUTO_TIME",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::AUTO_TIME_ZONE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"AUTO_TIME_ZONE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::BLUETOOTH_DISCOVERABILITY()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"BLUETOOTH_DISCOVERABILITY",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::BLUETOOTH_DISCOVERABILITY_TIMEOUT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"BLUETOOTH_DISCOVERABILITY_TIMEOUT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::BLUETOOTH_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"BLUETOOTH_ON",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Settings_System::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Settings_System::DATA_ROAMING()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DATA_ROAMING",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::DATE_FORMAT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DATE_FORMAT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::DEBUG_APP()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DEBUG_APP",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Settings_System::DEFAULT_ALARM_ALERT_URI()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DEFAULT_ALARM_ALERT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Settings_System::DEFAULT_NOTIFICATION_URI()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DEFAULT_NOTIFICATION_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Settings_System::DEFAULT_RINGTONE_URI()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DEFAULT_RINGTONE_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Settings_System::DEVICE_PROVISIONED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DEVICE_PROVISIONED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::DIM_SCREEN()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DIM_SCREEN",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::DTMF_TONE_TYPE_WHEN_DIALING()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DTMF_TONE_TYPE_WHEN_DIALING",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::DTMF_TONE_WHEN_DIALING()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"DTMF_TONE_WHEN_DIALING",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::END_BUTTON_BEHAVIOR()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"END_BUTTON_BEHAVIOR",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::FONT_SCALE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"FONT_SCALE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::HAPTIC_FEEDBACK_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"HAPTIC_FEEDBACK_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::HTTP_PROXY()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"HTTP_PROXY",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::INSTALL_NON_MARKET_APPS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"INSTALL_NON_MARKET_APPS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::LOCATION_PROVIDERS_ALLOWED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"LOCATION_PROVIDERS_ALLOWED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::LOCK_PATTERN_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"LOCK_PATTERN_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::LOCK_PATTERN_VISIBLE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"LOCK_PATTERN_VISIBLE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::LOGGING_ID()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"LOGGING_ID",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::MODE_RINGER()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"MODE_RINGER",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::MODE_RINGER_STREAMS_AFFECTED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"MODE_RINGER_STREAMS_AFFECTED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::MUTE_STREAMS_AFFECTED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"MUTE_STREAMS_AFFECTED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::NETWORK_PREFERENCE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"NETWORK_PREFERENCE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::NEXT_ALARM_FORMATTED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"NEXT_ALARM_FORMATTED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::NOTIFICATION_SOUND()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"NOTIFICATION_SOUND",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::PARENTAL_CONTROL_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"PARENTAL_CONTROL_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::PARENTAL_CONTROL_LAST_UPDATE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"PARENTAL_CONTROL_LAST_UPDATE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::PARENTAL_CONTROL_REDIRECT_URL()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"PARENTAL_CONTROL_REDIRECT_URL",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::RADIO_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_BLUETOOTH",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::RADIO_CELL()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_CELL",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::RADIO_NFC()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_NFC",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::RADIO_WIFI()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_WIFI",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::RINGTONE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"RINGTONE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SCREEN_BRIGHTNESS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SCREEN_BRIGHTNESS_MODE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS_MODE",
			"Ljava/lang/String;"
		);
	}
	jint Settings_System::SCREEN_BRIGHTNESS_MODE_AUTOMATIC()
	{
		return getStaticField<jint>(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS_MODE_AUTOMATIC"
		);
	}
	jint Settings_System::SCREEN_BRIGHTNESS_MODE_MANUAL()
	{
		return getStaticField<jint>(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS_MODE_MANUAL"
		);
	}
	JString Settings_System::SCREEN_OFF_TIMEOUT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SCREEN_OFF_TIMEOUT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SETTINGS_CLASSNAME()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SETTINGS_CLASSNAME",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SETUP_WIZARD_HAS_RUN()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SETUP_WIZARD_HAS_RUN",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SHOW_GTALK_SERVICE_STATUS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SHOW_GTALK_SERVICE_STATUS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SHOW_PROCESSES()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SHOW_PROCESSES",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SHOW_WEB_SUGGESTIONS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SHOW_WEB_SUGGESTIONS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::SOUND_EFFECTS_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"SOUND_EFFECTS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::STAY_ON_WHILE_PLUGGED_IN()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"STAY_ON_WHILE_PLUGGED_IN",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::TEXT_AUTO_CAPS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_AUTO_CAPS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::TEXT_AUTO_PUNCTUATE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_AUTO_PUNCTUATE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::TEXT_AUTO_REPLACE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_AUTO_REPLACE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::TEXT_SHOW_PASSWORD()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_SHOW_PASSWORD",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::TIME_12_24()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"TIME_12_24",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::TRANSITION_ANIMATION_SCALE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"TRANSITION_ANIMATION_SCALE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::USB_MASS_STORAGE_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"USB_MASS_STORAGE_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::USER_ROTATION()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"USER_ROTATION",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::USE_GOOGLE_MAIL()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"USE_GOOGLE_MAIL",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::VIBRATE_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"VIBRATE_ON",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::VIBRATE_WHEN_RINGING()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"VIBRATE_WHEN_RINGING",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WAIT_FOR_DEBUGGER()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WAIT_FOR_DEBUGGER",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WALLPAPER_ACTIVITY()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WALLPAPER_ACTIVITY",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_MAX_DHCP_RETRY_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_MAX_DHCP_RETRY_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_NUM_OPEN_NETWORKS_KEPT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_NUM_OPEN_NETWORKS_KEPT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_ON",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_SLEEP_POLICY()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY",
			"Ljava/lang/String;"
		);
	}
	jint Settings_System::WIFI_SLEEP_POLICY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY_DEFAULT"
		);
	}
	jint Settings_System::WIFI_SLEEP_POLICY_NEVER()
	{
		return getStaticField<jint>(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY_NEVER"
		);
	}
	jint Settings_System::WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED()
	{
		return getStaticField<jint>(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED"
		);
	}
	JString Settings_System::WIFI_STATIC_DNS1()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_DNS1",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_STATIC_DNS2()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_DNS2",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_STATIC_GATEWAY()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_GATEWAY",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_STATIC_IP()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_IP",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_STATIC_NETMASK()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_NETMASK",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_USE_STATIC_IP()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_USE_STATIC_IP",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_AP_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_AP_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_MAX_AP_CHECKS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_MAX_AP_CHECKS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_ON",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_PING_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_PING_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_PING_DELAY_MS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_PING_DELAY_MS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WIFI_WATCHDOG_PING_TIMEOUT_MS()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_PING_TIMEOUT_MS",
			"Ljava/lang/String;"
		);
	}
	JString Settings_System::WINDOW_ANIMATION_SCALE()
	{
		return getStaticObjectField(
			"android.provider.Settings$System",
			"WINDOW_ANIMATION_SCALE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Settings_System::Settings_System(QAndroidJniObject obj) : android::provider::Settings_NameValueTable(obj) {}
	
	// Constructors
	Settings_System::Settings_System()
		: android::provider::Settings_NameValueTable(
			"android.provider.Settings$System",
			"()V"
		) {}
	
	// Methods
	jboolean Settings_System::canWrite(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"canWrite",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	void Settings_System::getConfiguration(android::content::ContentResolver arg0, android::content::res::Configuration arg1)
	{
		callStaticMethod<void>(
			"android.provider.Settings$System",
			"getConfiguration",
			"(Landroid/content/ContentResolver;Landroid/content/res/Configuration;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jfloat Settings_System::getFloat(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticMethod<jfloat>(
			"android.provider.Settings$System",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)F",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jfloat Settings_System::getFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2)
	{
		return callStaticMethod<jfloat>(
			"android.provider.Settings$System",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)F",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jint Settings_System::getInt(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.provider.Settings$System",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint Settings_System::getInt(android::content::ContentResolver arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.provider.Settings$System",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jlong Settings_System::getLong(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticMethod<jlong>(
			"android.provider.Settings$System",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jlong Settings_System::getLong(android::content::ContentResolver arg0, JString arg1, jlong arg2)
	{
		return callStaticMethod<jlong>(
			"android.provider.Settings$System",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)J",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::getShowGTalkServiceStatus(android::content::ContentResolver arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"getShowGTalkServiceStatus",
			"(Landroid/content/ContentResolver;)Z",
			arg0.object()
		);
	}
	JString Settings_System::getString(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Settings$System",
			"getString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::net::Uri Settings_System::getUriFor(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Settings$System",
			"getUriFor",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	jboolean Settings_System::putConfiguration(android::content::ContentResolver arg0, android::content::res::Configuration arg1)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putConfiguration",
			"(Landroid/content/ContentResolver;Landroid/content/res/Configuration;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Settings_System::putFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::putInt(android::content::ContentResolver arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::putLong(android::content::ContentResolver arg0, JString arg1, jlong arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::putString(android::content::ContentResolver arg0, JString arg1, JString arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void Settings_System::setShowGTalkServiceStatus(android::content::ContentResolver arg0, jboolean arg1)
	{
		callStaticMethod<void>(
			"android.provider.Settings$System",
			"setShowGTalkServiceStatus",
			"(Landroid/content/ContentResolver;Z)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

