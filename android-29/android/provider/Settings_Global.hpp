#pragma once

#ifndef ANDROID_PROVIDER_SETTINGS_GLOBAL
#define ANDROID_PROVIDER_SETTINGS_GLOBAL

#include "../../__JniBaseClass.hpp"
#include "Settings_NameValueTable.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class Settings_Global : public __jni_impl::android::provider::Settings_NameValueTable
	{
	public:
		// Fields
		static jstring ADB_ENABLED();
		static jstring AIRPLANE_MODE_ON();
		static jstring AIRPLANE_MODE_RADIOS();
		static jstring ALWAYS_FINISH_ACTIVITIES();
		static jstring ANIMATOR_DURATION_SCALE();
		static jstring APPLY_RAMPING_RINGER();
		static jstring AUTO_TIME();
		static jstring AUTO_TIME_ZONE();
		static jstring BLUETOOTH_ON();
		static jstring BOOT_COUNT();
		static jstring CONTACT_METADATA_SYNC_ENABLED();
		static QAndroidJniObject CONTENT_URI();
		static jstring DATA_ROAMING();
		static jstring DEBUG_APP();
		static jstring DEVELOPMENT_SETTINGS_ENABLED();
		static jstring DEVICE_NAME();
		static jstring DEVICE_PROVISIONED();
		static jstring HTTP_PROXY();
		static jstring INSTALL_NON_MARKET_APPS();
		static jstring MODE_RINGER();
		static jstring NETWORK_PREFERENCE();
		static jstring RADIO_BLUETOOTH();
		static jstring RADIO_CELL();
		static jstring RADIO_NFC();
		static jstring RADIO_WIFI();
		static jstring SHOW_PROCESSES();
		static jstring STAY_ON_WHILE_PLUGGED_IN();
		static jstring TRANSITION_ANIMATION_SCALE();
		static jstring USB_MASS_STORAGE_ENABLED();
		static jstring USE_GOOGLE_MAIL();
		static jstring WAIT_FOR_DEBUGGER();
		static jstring WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN();
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
		static jstring WIFI_WATCHDOG_ON();
		static jstring WINDOW_ANIMATION_SCALE();
		
		// Constructors
		void __constructor();
		
		// Methods
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
		static jstring getString(__jni_impl::android::content::ContentResolver arg0, jstring arg1);
		static jstring getString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1);
		static QAndroidJniObject getUriFor(jstring arg0);
		static QAndroidJniObject getUriFor(const QString &arg0);
		static jboolean putFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2);
		static jboolean putFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jfloat arg2);
		static jboolean putInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2);
		static jboolean putInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jint arg2);
		static jboolean putLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2);
		static jboolean putLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jlong arg2);
		static jboolean putString(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static jboolean putString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, const QString &arg2);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Settings_Global::ADB_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"ADB_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::AIRPLANE_MODE_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"AIRPLANE_MODE_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::AIRPLANE_MODE_RADIOS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"AIRPLANE_MODE_RADIOS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::ALWAYS_FINISH_ACTIVITIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"ALWAYS_FINISH_ACTIVITIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::ANIMATOR_DURATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"ANIMATOR_DURATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::APPLY_RAMPING_RINGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"APPLY_RAMPING_RINGER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::AUTO_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"AUTO_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::AUTO_TIME_ZONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"AUTO_TIME_ZONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::BLUETOOTH_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"BLUETOOTH_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::BOOT_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"BOOT_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::CONTACT_METADATA_SYNC_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"CONTACT_METADATA_SYNC_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Settings_Global::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Settings_Global::DATA_ROAMING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"DATA_ROAMING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::DEBUG_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"DEBUG_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::DEVELOPMENT_SETTINGS_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"DEVELOPMENT_SETTINGS_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::DEVICE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"DEVICE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::DEVICE_PROVISIONED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"DEVICE_PROVISIONED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::HTTP_PROXY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"HTTP_PROXY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::INSTALL_NON_MARKET_APPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"INSTALL_NON_MARKET_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::MODE_RINGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"MODE_RINGER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::NETWORK_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"NETWORK_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::RADIO_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_BLUETOOTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::RADIO_CELL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_CELL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::RADIO_NFC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_NFC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::RADIO_WIFI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_WIFI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::SHOW_PROCESSES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"SHOW_PROCESSES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::STAY_ON_WHILE_PLUGGED_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"STAY_ON_WHILE_PLUGGED_IN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::TRANSITION_ANIMATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"TRANSITION_ANIMATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::USB_MASS_STORAGE_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"USB_MASS_STORAGE_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::USE_GOOGLE_MAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"USE_GOOGLE_MAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WAIT_FOR_DEBUGGER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WAIT_FOR_DEBUGGER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_MAX_DHCP_RETRY_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_MAX_DHCP_RETRY_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_NUM_OPEN_NETWORKS_KEPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_NUM_OPEN_NETWORKS_KEPT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WIFI_SLEEP_POLICY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Settings_Global::WIFI_SLEEP_POLICY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY_DEFAULT"
		);
	}
	jint Settings_Global::WIFI_SLEEP_POLICY_NEVER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY_NEVER"
		);
	}
	jint Settings_Global::WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED"
		);
	}
	jstring Settings_Global::WIFI_WATCHDOG_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_WATCHDOG_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Settings_Global::WINDOW_ANIMATION_SCALE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Settings$Global",
			"WINDOW_ANIMATION_SCALE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Settings_Global::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Settings$Global",
			"()V"
		);
	}
	
	// Methods
	jfloat Settings_Global::getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$Global",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)F",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jfloat Settings_Global::getFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$Global",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)F",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jfloat Settings_Global::getFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$Global",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)F",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jfloat Settings_Global::getFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.provider.Settings$Global",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)F",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Settings_Global::getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$Global",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Settings_Global::getInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$Global",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Settings_Global::getInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$Global",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint Settings_Global::getInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.Settings$Global",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jlong Settings_Global::getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$Global",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong Settings_Global::getLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$Global",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong Settings_Global::getLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$Global",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)J",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jlong Settings_Global::getLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Settings$Global",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring Settings_Global::getString(__jni_impl::android::content::ContentResolver arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$Global",
			"getString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring Settings_Global::getString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$Global",
			"getString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject Settings_Global::getUriFor(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$Global",
			"getUriFor",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject Settings_Global::getUriFor(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Settings$Global",
			"getUriFor",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Settings_Global::putFloat(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_Global::putFloat(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean Settings_Global::putInt(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_Global::putInt(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean Settings_Global::putLong(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_Global::putLong(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jboolean Settings_Global::putString(__jni_impl::android::content::ContentResolver arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jboolean Settings_Global::putString(__jni_impl::android::content::ContentResolver arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Settings_Global : public __jni_impl::android::provider::Settings_Global
	{
	public:
		Settings_Global(QAndroidJniObject obj) { __thiz = obj; }
		Settings_Global()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_SETTINGS_GLOBAL

