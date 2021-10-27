#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Settings_NameValueTable.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Settings_System : public __jni_impl::android::provider::Settings_NameValueTable
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
		static QAndroidJniObject CONTENT_URI();
		static jstring DATA_ROAMING();
		static jstring DATE_FORMAT();
		static jstring DEBUG_APP();
		static QAndroidJniObject DEFAULT_ALARM_ALERT_URI();
		static QAndroidJniObject DEFAULT_NOTIFICATION_URI();
		static QAndroidJniObject DEFAULT_RINGTONE_URI();
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean canWrite(__jni_impl::android::content::Context arg0);
		static void getConfiguration(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::res::Configuration arg1);
		static jfloat getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jfloat getFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1);
		static jfloat getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jfloat getFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jfloat arg2);
		static jint getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jint getInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1);
		static jint getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jint getInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jint arg2);
		static jlong getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jlong getLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1);
		static jlong getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jlong getLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jlong arg2);
		static jboolean getShowGTalkServiceStatus(__jni_impl::android::content::ContentResolver arg0);
		static jstring getString(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jstring getString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1);
		static QAndroidJniObject getUriFor(jstring arg0);
		static QAndroidJniObject getUriFor(const QString &arg0);
		static jboolean putConfiguration(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::res::Configuration arg1);
		static jboolean putFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jboolean putFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jfloat arg2);
		static jboolean putInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jboolean putInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jint arg2);
		static jboolean putLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jboolean putLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jlong arg2);
		static jboolean putString(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static jboolean putString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, const QString &arg2);
		static void setShowGTalkServiceStatus(__jni_impl::android::content::ContentResolver arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"
#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Settings_System::ACCELEROMETER_ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"ACCELEROMETER_ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::ADB_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"ADB_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::AIRPLANE_MODE_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"AIRPLANE_MODE_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::AIRPLANE_MODE_RADIOS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"AIRPLANE_MODE_RADIOS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::ALARM_ALERT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"ALARM_ALERT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::ALWAYS_FINISH_ACTIVITIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"ALWAYS_FINISH_ACTIVITIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::ANDROID_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"ANDROID_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::ANIMATOR_DURATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"ANIMATOR_DURATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::AUTO_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"AUTO_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::AUTO_TIME_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"AUTO_TIME_ZONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::BLUETOOTH_DISCOVERABILITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"BLUETOOTH_DISCOVERABILITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::BLUETOOTH_DISCOVERABILITY_TIMEOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"BLUETOOTH_DISCOVERABILITY_TIMEOUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::BLUETOOTH_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"BLUETOOTH_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Settings_System::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Settings_System::DATA_ROAMING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DATA_ROAMING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::DATE_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DATE_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::DEBUG_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DEBUG_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Settings_System::DEFAULT_ALARM_ALERT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DEFAULT_ALARM_ALERT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Settings_System::DEFAULT_NOTIFICATION_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DEFAULT_NOTIFICATION_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Settings_System::DEFAULT_RINGTONE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DEFAULT_RINGTONE_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Settings_System::DEVICE_PROVISIONED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DEVICE_PROVISIONED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::DIM_SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DIM_SCREEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::DTMF_TONE_TYPE_WHEN_DIALING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DTMF_TONE_TYPE_WHEN_DIALING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::DTMF_TONE_WHEN_DIALING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"DTMF_TONE_WHEN_DIALING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::END_BUTTON_BEHAVIOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"END_BUTTON_BEHAVIOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::FONT_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"FONT_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::HAPTIC_FEEDBACK_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"HAPTIC_FEEDBACK_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::HTTP_PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"HTTP_PROXY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::INSTALL_NON_MARKET_APPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"INSTALL_NON_MARKET_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::LOCATION_PROVIDERS_ALLOWED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"LOCATION_PROVIDERS_ALLOWED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::LOCK_PATTERN_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"LOCK_PATTERN_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::LOCK_PATTERN_VISIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"LOCK_PATTERN_VISIBLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::LOGGING_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"LOGGING_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::MODE_RINGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"MODE_RINGER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::MODE_RINGER_STREAMS_AFFECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"MODE_RINGER_STREAMS_AFFECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::MUTE_STREAMS_AFFECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"MUTE_STREAMS_AFFECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::NETWORK_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"NETWORK_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::NEXT_ALARM_FORMATTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"NEXT_ALARM_FORMATTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::NOTIFICATION_SOUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"NOTIFICATION_SOUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::PARENTAL_CONTROL_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"PARENTAL_CONTROL_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::PARENTAL_CONTROL_LAST_UPDATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"PARENTAL_CONTROL_LAST_UPDATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::PARENTAL_CONTROL_REDIRECT_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"PARENTAL_CONTROL_REDIRECT_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::RADIO_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::RADIO_CELL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_CELL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::RADIO_NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::RADIO_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"RADIO_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::RINGTONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"RINGTONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SCREEN_BRIGHTNESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SCREEN_BRIGHTNESS_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Settings_System::SCREEN_BRIGHTNESS_MODE_AUTOMATIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS_MODE_AUTOMATIC"
		);
	}
	jint Settings_System::SCREEN_BRIGHTNESS_MODE_MANUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$System",
			"SCREEN_BRIGHTNESS_MODE_MANUAL"
		);
	}
	jstring Settings_System::SCREEN_OFF_TIMEOUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SCREEN_OFF_TIMEOUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SETTINGS_CLASSNAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SETTINGS_CLASSNAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SETUP_WIZARD_HAS_RUN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SETUP_WIZARD_HAS_RUN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SHOW_GTALK_SERVICE_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SHOW_GTALK_SERVICE_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SHOW_PROCESSES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SHOW_PROCESSES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SHOW_WEB_SUGGESTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SHOW_WEB_SUGGESTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::SOUND_EFFECTS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"SOUND_EFFECTS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::STAY_ON_WHILE_PLUGGED_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"STAY_ON_WHILE_PLUGGED_IN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::TEXT_AUTO_CAPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_AUTO_CAPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::TEXT_AUTO_PUNCTUATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_AUTO_PUNCTUATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::TEXT_AUTO_REPLACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_AUTO_REPLACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::TEXT_SHOW_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"TEXT_SHOW_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::TIME_12_24()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"TIME_12_24",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::TRANSITION_ANIMATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"TRANSITION_ANIMATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::USB_MASS_STORAGE_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"USB_MASS_STORAGE_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::USER_ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"USER_ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::USE_GOOGLE_MAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"USE_GOOGLE_MAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::VIBRATE_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"VIBRATE_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::VIBRATE_WHEN_RINGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"VIBRATE_WHEN_RINGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WAIT_FOR_DEBUGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WAIT_FOR_DEBUGGER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WALLPAPER_ACTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WALLPAPER_ACTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_MAX_DHCP_RETRY_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_MAX_DHCP_RETRY_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_NUM_OPEN_NETWORKS_KEPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_NUM_OPEN_NETWORKS_KEPT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_SLEEP_POLICY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Settings_System::WIFI_SLEEP_POLICY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY_DEFAULT"
		);
	}
	jint Settings_System::WIFI_SLEEP_POLICY_NEVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY_NEVER"
		);
	}
	jint Settings_System::WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$System",
			"WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED"
		);
	}
	jstring Settings_System::WIFI_STATIC_DNS1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_DNS1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_STATIC_DNS2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_DNS2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_STATIC_GATEWAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_GATEWAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_STATIC_IP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_IP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_STATIC_NETMASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_STATIC_NETMASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_USE_STATIC_IP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_USE_STATIC_IP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_AP_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_AP_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_MAX_AP_CHECKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_MAX_AP_CHECKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_PING_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_PING_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_PING_DELAY_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_PING_DELAY_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WIFI_WATCHDOG_PING_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WIFI_WATCHDOG_PING_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_System::WINDOW_ANIMATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$System",
			"WINDOW_ANIMATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Settings_System::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$System",
			"()V"
		);
	}
	
	// Methods
	jboolean Settings_System::canWrite(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"canWrite",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	void Settings_System::getConfiguration(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Settings$System",
			"getConfiguration",
			"(Landroid/content/ContentResolver;Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jfloat Settings_System::getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$System",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)F",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jfloat Settings_System::getFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$System",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)F",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jfloat Settings_System::getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$System",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)F",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jfloat Settings_System::getFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$System",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)F",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Settings_System::getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$System",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Settings_System::getInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$System",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Settings_System::getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$System",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint Settings_System::getInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$System",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jlong Settings_System::getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$System",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong Settings_System::getLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$System",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong Settings_System::getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$System",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong Settings_System::getLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$System",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::getShowGTalkServiceStatus(__jni_impl::android::content::ContentResolver arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"getShowGTalkServiceStatus",
			"(Landroid/content/ContentResolver;)Z",
			arg0.__jniObject().object()
		);
	}
	jstring Settings_System::getString(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$System",
			"getString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring Settings_System::getString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$System",
			"getString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Settings_System::getUriFor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$System",
			"getUriFor",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject Settings_System::getUriFor(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$System",
			"getUriFor",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Settings_System::putConfiguration(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::content::res::Configuration arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putConfiguration",
			"(Landroid/content/ContentResolver;Landroid/content/res/Configuration;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Settings_System::putFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_System::putFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::putInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_System::putInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::putLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_System::putLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean Settings_System::putString(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_System::putString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$System",
			"putString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void Settings_System::setShowGTalkServiceStatus(__jni_impl::android::content::ContentResolver arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Settings$System",
			"setShowGTalkServiceStatus",
			"(Landroid/content/ContentResolver;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Settings_System : public __jni_impl::android::provider::Settings_System
	{
	public:
		Settings_System(QAndroidJniObject obj) { __thiz = obj; }
		Settings_System()
		{
			__constructor();
		}
	};
} // namespace android::provider

