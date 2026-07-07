#pragma once

#include "../content/ContentResolver.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Settings_Global.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Settings_Global::ADB_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"ADB_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::AIRPLANE_MODE_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"AIRPLANE_MODE_ON",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::AIRPLANE_MODE_RADIOS()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"AIRPLANE_MODE_RADIOS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::ALWAYS_FINISH_ACTIVITIES()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"ALWAYS_FINISH_ACTIVITIES",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::ANIMATOR_DURATION_SCALE()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"ANIMATOR_DURATION_SCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::APPLY_RAMPING_RINGER()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"APPLY_RAMPING_RINGER",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::AUTO_TIME()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"AUTO_TIME",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::AUTO_TIME_ZONE()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"AUTO_TIME_ZONE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::BLUETOOTH_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"BLUETOOTH_ON",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::BOOT_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"BOOT_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::CONTACT_METADATA_SYNC_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"CONTACT_METADATA_SYNC_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Settings_Global::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Settings_Global::DATA_ROAMING()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"DATA_ROAMING",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::DEBUG_APP()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"DEBUG_APP",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::DEVELOPMENT_SETTINGS_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"DEVELOPMENT_SETTINGS_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::DEVICE_NAME()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"DEVICE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::DEVICE_PROVISIONED()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"DEVICE_PROVISIONED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::HTTP_PROXY()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"HTTP_PROXY",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::INSTALL_NON_MARKET_APPS()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"INSTALL_NON_MARKET_APPS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::MODE_RINGER()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"MODE_RINGER",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::NETWORK_PREFERENCE()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"NETWORK_PREFERENCE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::RADIO_BLUETOOTH()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_BLUETOOTH",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::RADIO_CELL()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_CELL",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::RADIO_NFC()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_NFC",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::RADIO_WIFI()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"RADIO_WIFI",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::SECURE_FRP_MODE()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"SECURE_FRP_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::SHOW_PROCESSES()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"SHOW_PROCESSES",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::STAY_ON_WHILE_PLUGGED_IN()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"STAY_ON_WHILE_PLUGGED_IN",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::TRANSITION_ANIMATION_SCALE()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"TRANSITION_ANIMATION_SCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::USB_MASS_STORAGE_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"USB_MASS_STORAGE_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::USE_GOOGLE_MAIL()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"USE_GOOGLE_MAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WAIT_FOR_DEBUGGER()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WAIT_FOR_DEBUGGER",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_DEVICE_OWNER_CONFIGS_LOCKDOWN",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_MAX_DHCP_RETRY_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_MAX_DHCP_RETRY_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_MOBILE_DATA_TRANSITION_WAKELOCK_TIMEOUT_MS",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_NETWORKS_AVAILABLE_NOTIFICATION_ON",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_NETWORKS_AVAILABLE_REPEAT_DELAY",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_NUM_OPEN_NETWORKS_KEPT()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_NUM_OPEN_NETWORKS_KEPT",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_ON",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WIFI_SLEEP_POLICY()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY",
			"Ljava/lang/String;"
		);
	}
	inline jint Settings_Global::WIFI_SLEEP_POLICY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY_DEFAULT"
		);
	}
	inline jint Settings_Global::WIFI_SLEEP_POLICY_NEVER()
	{
		return getStaticField<jint>(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY_NEVER"
		);
	}
	inline jint Settings_Global::WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED()
	{
		return getStaticField<jint>(
			"android.provider.Settings$Global",
			"WIFI_SLEEP_POLICY_NEVER_WHILE_PLUGGED"
		);
	}
	inline JString Settings_Global::WIFI_WATCHDOG_ON()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WIFI_WATCHDOG_ON",
			"Ljava/lang/String;"
		);
	}
	inline JString Settings_Global::WINDOW_ANIMATION_SCALE()
	{
		return getStaticObjectField(
			"android.provider.Settings$Global",
			"WINDOW_ANIMATION_SCALE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Settings_Global::Settings_Global()
		: android::provider::Settings_NameValueTable(
			"android.provider.Settings$Global",
			"()V"
		) {}
	
	// Methods
	inline jfloat Settings_Global::getFloat(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticMethod<jfloat>(
			"android.provider.Settings$Global",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)F",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jfloat Settings_Global::getFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2)
	{
		return callStaticMethod<jfloat>(
			"android.provider.Settings$Global",
			"getFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)F",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jint Settings_Global::getInt(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.provider.Settings$Global",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint Settings_Global::getInt(android::content::ContentResolver arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jint>(
			"android.provider.Settings$Global",
			"getInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jlong Settings_Global::getLong(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticMethod<jlong>(
			"android.provider.Settings$Global",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)J",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jlong Settings_Global::getLong(android::content::ContentResolver arg0, JString arg1, jlong arg2)
	{
		return callStaticMethod<jlong>(
			"android.provider.Settings$Global",
			"getLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)J",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline JString Settings_Global::getString(android::content::ContentResolver arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.provider.Settings$Global",
			"getString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::net::Uri Settings_Global::getUriFor(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Settings$Global",
			"getUriFor",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Settings_Global::putFloat(android::content::ContentResolver arg0, JString arg1, jfloat arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putFloat",
			"(Landroid/content/ContentResolver;Ljava/lang/String;F)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jboolean Settings_Global::putInt(android::content::ContentResolver arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putInt",
			"(Landroid/content/ContentResolver;Ljava/lang/String;I)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jboolean Settings_Global::putLong(android::content::ContentResolver arg0, JString arg1, jlong arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putLong",
			"(Landroid/content/ContentResolver;Ljava/lang/String;J)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline jboolean Settings_Global::putString(android::content::ContentResolver arg0, JString arg1, JString arg2)
	{
		return callStaticMethod<jboolean>(
			"android.provider.Settings$Global",
			"putString",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers
#include "./Settings_NameValueTable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
