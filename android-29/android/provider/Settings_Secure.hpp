#pragma once

#ifndef ANDROID_PROVIDER_SETTINGS_SECURE
#define ANDROID_PROVIDER_SETTINGS_SECURE

#include "../../__JniBaseClass.hpp"
#include "Settings_NameValueTable.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}

namespace __jni_impl::android::provider
{
	class Settings_Secure : public __jni_impl::android::provider::Settings_NameValueTable
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
		static QAndroidJniObject CONTENT_URI();
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
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jint getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jboolean putInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jlong getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jlong getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jboolean putLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jfloat getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jfloat getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jboolean putFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jstring getString(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jboolean isLocationProviderEnabled(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static void setLocationProviderEnabled(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jboolean arg2);
		static jboolean putString(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject getUriFor(jstring arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/ContentResolver.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Settings_Secure::ACCESSIBILITY_DISPLAY_INVERSION_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ACCESSIBILITY_DISPLAY_INVERSION_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ACCESSIBILITY_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ACCESSIBILITY_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ACCESSIBILITY_SPEAK_PASSWORD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ACCESSIBILITY_SPEAK_PASSWORD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ADB_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ADB_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ALLOWED_GEOLOCATION_ORIGINS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ALLOWED_GEOLOCATION_ORIGINS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ALLOW_MOCK_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ALLOW_MOCK_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ANDROID_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ANDROID_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::BACKGROUND_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"BACKGROUND_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::BLUETOOTH_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"BLUETOOTH_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Settings_Secure::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Settings_Secure::DATA_ROAMING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"DATA_ROAMING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::DEFAULT_INPUT_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"DEFAULT_INPUT_METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::DEVELOPMENT_SETTINGS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"DEVELOPMENT_SETTINGS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::DEVICE_PROVISIONED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"DEVICE_PROVISIONED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ENABLED_ACCESSIBILITY_SERVICES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ENABLED_ACCESSIBILITY_SERVICES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::ENABLED_INPUT_METHODS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"ENABLED_INPUT_METHODS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::HTTP_PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"HTTP_PROXY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::INPUT_METHOD_SELECTOR_VISIBILITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"INPUT_METHOD_SELECTOR_VISIBILITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::INSTALL_NON_MARKET_APPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"INSTALL_NON_MARKET_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::LOCATION_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"LOCATION_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Settings_Secure::LOCATION_MODE_BATTERY_SAVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$Secure",
			"LOCATION_MODE_BATTERY_SAVING"
		);
	}
	jint Settings_Secure::LOCATION_MODE_HIGH_ACCURACY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$Secure",
			"LOCATION_MODE_HIGH_ACCURACY"
		);
	}
	jint Settings_Secure::LOCATION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$Secure",
			"LOCATION_MODE_OFF"
		);
	}
	jint Settings_Secure::LOCATION_MODE_SENSORS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$Secure",
			"LOCATION_MODE_SENSORS_ONLY"
		);
	}
	jstring Settings_Secure::LOCATION_PROVIDERS_ALLOWED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"LOCATION_PROVIDERS_ALLOWED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::LOCK_PATTERN_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"LOCK_PATTERN_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"LOCK_PATTERN_TACTILE_FEEDBACK_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::LOCK_PATTERN_VISIBLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"LOCK_PATTERN_VISIBLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::LOGGING_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"LOGGING_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::NETWORK_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"NETWORK_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::PARENTAL_CONTROL_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"PARENTAL_CONTROL_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::PARENTAL_CONTROL_LAST_UPDATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"PARENTAL_CONTROL_LAST_UPDATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::PARENTAL_CONTROL_REDIRECT_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"PARENTAL_CONTROL_REDIRECT_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::RTT_CALLING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"RTT_CALLING_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::SELECTED_INPUT_METHOD_SUBTYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"SELECTED_INPUT_METHOD_SUBTYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::SETTINGS_CLASSNAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"SETTINGS_CLASSNAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::SKIP_FIRST_USE_HINTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"SKIP_FIRST_USE_HINTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TOUCH_EXPLORATION_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TOUCH_EXPLORATION_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_DEFAULT_COUNTRY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_DEFAULT_COUNTRY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_DEFAULT_LANG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_DEFAULT_LANG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_DEFAULT_PITCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_DEFAULT_PITCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_DEFAULT_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_DEFAULT_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_DEFAULT_SYNTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_DEFAULT_SYNTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_DEFAULT_VARIANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_DEFAULT_VARIANT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_ENABLED_PLUGINS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_ENABLED_PLUGINS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::TTS_USE_DEFAULTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"TTS_USE_DEFAULTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::USB_MASS_STORAGE_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"USB_MASS_STORAGE_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::USE_GOOGLE_MAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"USE_GOOGLE_MAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_MAX_DHCP_RETRY_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_MAX_DHCP_RETRY_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_NUM_OPEN_NETWORKS_KEPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_NUM_OPEN_NETWORKS_KEPT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_ACCEPTABLE_PACKET_LOSS_PERCENTAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_AP_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_AP_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_DELAY_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_BACKGROUND_CHECK_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_INITIAL_IGNORED_PING_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_MAX_AP_CHECKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_MAX_AP_CHECKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_PING_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_PING_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_PING_DELAY_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_PING_DELAY_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_PING_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_PING_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Secure::WIFI_WATCHDOG_WATCH_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Secure",
			"WIFI_WATCHDOG_WATCH_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Settings_Secure::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$Secure",
			"()V");
	}
	
	// Methods
	jint Settings_Secure::getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$Secure",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint Settings_Secure::getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$Secure",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Settings_Secure::putInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Secure",
			"putInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong Settings_Secure::getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$Secure",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong Settings_Secure::getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$Secure",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Settings_Secure::putLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Secure",
			"putLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jfloat Settings_Secure::getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$Secure",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)F",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jfloat Settings_Secure::getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$Secure",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)F",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_Secure::putFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Secure",
			"putFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jstring Settings_Secure::getString(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$Secure",
			"getString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jboolean Settings_Secure::isLocationProviderEnabled(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Secure",
			"isLocationProviderEnabled",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Settings_Secure::setLocationProviderEnabled(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jboolean arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.Settings$Secure",
			"setLocationProviderEnabled",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Z)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_Secure::putString(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Secure",
			"putString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Settings_Secure::getUriFor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$Secure",
			"getUriFor",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Settings_Secure : public __jni_impl::android::provider::Settings_Secure
	{
	public:
		Settings_Secure(QAndroidJniObject obj) { __thiz = obj; }
		Settings_Secure()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SETTINGS_SECURE

