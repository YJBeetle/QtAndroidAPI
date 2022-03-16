#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "./BroadcastReceiver.def.hpp"
#include "./ComponentName.def.hpp"
#include "./ContentResolver.def.hpp"
#include "./Intent.def.hpp"
#include "./IntentFilter.def.hpp"
#include "./IntentSender.def.hpp"
#include "./pm/ApplicationInfo.def.hpp"
#include "./pm/PackageManager.def.hpp"
#include "./res/AssetManager.def.hpp"
#include "./res/ColorStateList.def.hpp"
#include "./res/Configuration.def.hpp"
#include "./res/Resources.def.hpp"
#include "./res/Resources_Theme.def.hpp"
#include "./res/TypedArray.def.hpp"
#include "../database/sqlite/SQLiteDatabase.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/Looper.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../view/Display.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../java/io/FileInputStream.def.hpp"
#include "../../java/io/FileOutputStream.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Context.def.hpp"

namespace android::content
{
	// Fields
	inline JString Context::ACCESSIBILITY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ACCESSIBILITY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::ACCOUNT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ACCOUNT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::ACTIVITY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ACTIVITY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::ALARM_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ALARM_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::APPWIDGET_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"APPWIDGET_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::APP_OPS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"APP_OPS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::AUDIO_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"AUDIO_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::BATTERY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"BATTERY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline jint Context::BIND_ABOVE_CLIENT()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_ABOVE_CLIENT"
		);
	}
	inline jint Context::BIND_ADJUST_WITH_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_ADJUST_WITH_ACTIVITY"
		);
	}
	inline jint Context::BIND_ALLOW_OOM_MANAGEMENT()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_ALLOW_OOM_MANAGEMENT"
		);
	}
	inline jint Context::BIND_AUTO_CREATE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_AUTO_CREATE"
		);
	}
	inline jint Context::BIND_DEBUG_UNBIND()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_DEBUG_UNBIND"
		);
	}
	inline jint Context::BIND_EXTERNAL_SERVICE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_EXTERNAL_SERVICE"
		);
	}
	inline jint Context::BIND_IMPORTANT()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_IMPORTANT"
		);
	}
	inline jint Context::BIND_INCLUDE_CAPABILITIES()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_INCLUDE_CAPABILITIES"
		);
	}
	inline jint Context::BIND_NOT_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_NOT_FOREGROUND"
		);
	}
	inline jint Context::BIND_NOT_PERCEPTIBLE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_NOT_PERCEPTIBLE"
		);
	}
	inline jint Context::BIND_WAIVE_PRIORITY()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_WAIVE_PRIORITY"
		);
	}
	inline JString Context::BIOMETRIC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"BIOMETRIC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::BLUETOOTH_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"BLUETOOTH_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::CAMERA_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CAMERA_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::CAPTIONING_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CAPTIONING_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::CARRIER_CONFIG_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CARRIER_CONFIG_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::CLIPBOARD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CLIPBOARD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::COMPANION_DEVICE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"COMPANION_DEVICE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::CONNECTIVITY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CONNECTIVITY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::CONSUMER_IR_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CONSUMER_IR_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline jint Context::CONTEXT_IGNORE_SECURITY()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_IGNORE_SECURITY"
		);
	}
	inline jint Context::CONTEXT_INCLUDE_CODE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_INCLUDE_CODE"
		);
	}
	inline jint Context::CONTEXT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_RESTRICTED"
		);
	}
	inline JString Context::CROSS_PROFILE_APPS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CROSS_PROFILE_APPS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::DEVICE_POLICY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DEVICE_POLICY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::DISPLAY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DISPLAY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::DOWNLOAD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DOWNLOAD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::DROPBOX_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DROPBOX_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::EUICC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"EUICC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::FINGERPRINT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"FINGERPRINT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::HARDWARE_PROPERTIES_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"HARDWARE_PROPERTIES_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::INPUT_METHOD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"INPUT_METHOD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::INPUT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"INPUT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::IPSEC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"IPSEC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::JOB_SCHEDULER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"JOB_SCHEDULER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::KEYGUARD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"KEYGUARD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::LAUNCHER_APPS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"LAUNCHER_APPS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::LAYOUT_INFLATER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"LAYOUT_INFLATER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::LOCATION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"LOCATION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::MEDIA_PROJECTION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MEDIA_PROJECTION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::MEDIA_ROUTER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MEDIA_ROUTER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::MEDIA_SESSION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MEDIA_SESSION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::MIDI_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MIDI_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline jint Context::MODE_APPEND()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_APPEND"
		);
	}
	inline jint Context::MODE_ENABLE_WRITE_AHEAD_LOGGING()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_ENABLE_WRITE_AHEAD_LOGGING"
		);
	}
	inline jint Context::MODE_MULTI_PROCESS()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_MULTI_PROCESS"
		);
	}
	inline jint Context::MODE_NO_LOCALIZED_COLLATORS()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_NO_LOCALIZED_COLLATORS"
		);
	}
	inline jint Context::MODE_PRIVATE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_PRIVATE"
		);
	}
	inline jint Context::MODE_WORLD_READABLE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_WORLD_READABLE"
		);
	}
	inline jint Context::MODE_WORLD_WRITEABLE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_WORLD_WRITEABLE"
		);
	}
	inline JString Context::NETWORK_STATS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NETWORK_STATS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::NFC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NFC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::NOTIFICATION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NOTIFICATION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::NSD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NSD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::POWER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"POWER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::PRINT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"PRINT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline jint Context::RECEIVER_VISIBLE_TO_INSTANT_APPS()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"RECEIVER_VISIBLE_TO_INSTANT_APPS"
		);
	}
	inline JString Context::RESTRICTIONS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"RESTRICTIONS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::ROLE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ROLE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::SEARCH_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SEARCH_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::SENSOR_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SENSOR_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::SHORTCUT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SHORTCUT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::STORAGE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"STORAGE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::STORAGE_STATS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"STORAGE_STATS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::SYSTEM_HEALTH_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SYSTEM_HEALTH_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::TELECOM_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TELECOM_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::TELEPHONY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TELEPHONY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::TELEPHONY_SUBSCRIPTION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TELEPHONY_SUBSCRIPTION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::TEXT_CLASSIFICATION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TEXT_CLASSIFICATION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::TEXT_SERVICES_MANAGER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TEXT_SERVICES_MANAGER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::TV_INPUT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TV_INPUT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::UI_MODE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"UI_MODE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::USAGE_STATS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"USAGE_STATS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::USB_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"USB_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::USER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"USER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::VIBRATOR_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"VIBRATOR_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::WALLPAPER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WALLPAPER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::WIFI_AWARE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_AWARE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::WIFI_P2P_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_P2P_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::WIFI_RTT_RANGING_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_RTT_RANGING_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::WIFI_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Context::WINDOW_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WINDOW_SERVICE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Context::Context()
		: JObject(
			"android.content.Context",
			"()V"
		) {}
	
	// Methods
	inline jboolean Context::bindIsolatedService(android::content::Intent arg0, jint arg1, JString arg2, JObject arg3, JObject arg4) const
	{
		return callMethod<jboolean>(
			"bindIsolatedService",
			"(Landroid/content/Intent;ILjava/lang/String;Ljava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	inline jboolean Context::bindService(android::content::Intent arg0, JObject arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean Context::bindService(android::content::Intent arg0, jint arg1, JObject arg2, JObject arg3) const
	{
		return callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;ILjava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline jint Context::checkCallingOrSelfPermission(JString arg0) const
	{
		return callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Context::checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkCallingOrSelfUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint Context::checkCallingPermission(JString arg0) const
	{
		return callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Context::checkCallingUriPermission(android::net::Uri arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkCallingUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jint Context::checkPermission(JString arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jint Context::checkSelfPermission(JString arg0) const
	{
		return callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Context::checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;III)I",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline jint Context::checkUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5) const
	{
		return callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4,
			arg5
		);
	}
	inline void Context::clearWallpaper() const
	{
		callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	inline android::content::Context Context::createConfigurationContext(android::content::res::Configuration arg0) const
	{
		return callObjectMethod(
			"createConfigurationContext",
			"(Landroid/content/res/Configuration;)Landroid/content/Context;",
			arg0.object()
		);
	}
	inline android::content::Context Context::createContextForSplit(JString arg0) const
	{
		return callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0.object<jstring>()
		);
	}
	inline android::content::Context Context::createDeviceProtectedStorageContext() const
	{
		return callObjectMethod(
			"createDeviceProtectedStorageContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::content::Context Context::createDisplayContext(android::view::Display arg0) const
	{
		return callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.object()
		);
	}
	inline android::content::Context Context::createPackageContext(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JArray Context::databaseList() const
	{
		return callObjectMethod(
			"databaseList",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean Context::deleteDatabase(JString arg0) const
	{
		return callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Context::deleteFile(JString arg0) const
	{
		return callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean Context::deleteSharedPreferences(JString arg0) const
	{
		return callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void Context::enforceCallingOrSelfPermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Context::enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline void Context::enforceCallingPermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Context::enforceCallingUriPermission(android::net::Uri arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline void Context::enforcePermission(JString arg0, jint arg1, jint arg2, JString arg3) const
	{
		callMethod<void>(
			"enforcePermission",
			"(Ljava/lang/String;IILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	inline void Context::enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, JString arg4) const
	{
		callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;IIILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object<jstring>()
		);
	}
	inline void Context::enforceUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5, JString arg6) const
	{
		callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3,
			arg4,
			arg5,
			arg6.object<jstring>()
		);
	}
	inline JArray Context::fileList() const
	{
		return callObjectMethod(
			"fileList",
			"()[Ljava/lang/String;"
		);
	}
	inline android::content::Context Context::getApplicationContext() const
	{
		return callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	inline android::content::pm::ApplicationInfo Context::getApplicationInfo() const
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	inline android::content::res::AssetManager Context::getAssets() const
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	inline java::io::File Context::getCacheDir() const
	{
		return callObjectMethod(
			"getCacheDir",
			"()Ljava/io/File;"
		);
	}
	inline java::lang::ClassLoader Context::getClassLoader() const
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline java::io::File Context::getCodeCacheDir() const
	{
		return callObjectMethod(
			"getCodeCacheDir",
			"()Ljava/io/File;"
		);
	}
	inline jint Context::getColor(jint arg0) const
	{
		return callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	inline android::content::res::ColorStateList Context::getColorStateList(jint arg0) const
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	inline android::content::ContentResolver Context::getContentResolver() const
	{
		return callObjectMethod(
			"getContentResolver",
			"()Landroid/content/ContentResolver;"
		);
	}
	inline java::io::File Context::getDataDir() const
	{
		return callObjectMethod(
			"getDataDir",
			"()Ljava/io/File;"
		);
	}
	inline java::io::File Context::getDatabasePath(JString arg0) const
	{
		return callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	inline java::io::File Context::getDir(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::graphics::drawable::Drawable Context::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline java::io::File Context::getExternalCacheDir() const
	{
		return callObjectMethod(
			"getExternalCacheDir",
			"()Ljava/io/File;"
		);
	}
	inline JArray Context::getExternalCacheDirs() const
	{
		return callObjectMethod(
			"getExternalCacheDirs",
			"()[Ljava/io/File;"
		);
	}
	inline java::io::File Context::getExternalFilesDir(JString arg0) const
	{
		return callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	inline JArray Context::getExternalFilesDirs(JString arg0) const
	{
		return callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	inline JArray Context::getExternalMediaDirs() const
	{
		return callObjectMethod(
			"getExternalMediaDirs",
			"()[Ljava/io/File;"
		);
	}
	inline java::io::File Context::getFileStreamPath(JString arg0) const
	{
		return callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	inline java::io::File Context::getFilesDir() const
	{
		return callObjectMethod(
			"getFilesDir",
			"()Ljava/io/File;"
		);
	}
	inline JObject Context::getMainExecutor() const
	{
		return callObjectMethod(
			"getMainExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	inline android::os::Looper Context::getMainLooper() const
	{
		return callObjectMethod(
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	inline java::io::File Context::getNoBackupFilesDir() const
	{
		return callObjectMethod(
			"getNoBackupFilesDir",
			"()Ljava/io/File;"
		);
	}
	inline java::io::File Context::getObbDir() const
	{
		return callObjectMethod(
			"getObbDir",
			"()Ljava/io/File;"
		);
	}
	inline JArray Context::getObbDirs() const
	{
		return callObjectMethod(
			"getObbDirs",
			"()[Ljava/io/File;"
		);
	}
	inline JString Context::getOpPackageName() const
	{
		return callObjectMethod(
			"getOpPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Context::getPackageCodePath() const
	{
		return callObjectMethod(
			"getPackageCodePath",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::PackageManager Context::getPackageManager() const
	{
		return callObjectMethod(
			"getPackageManager",
			"()Landroid/content/pm/PackageManager;"
		);
	}
	inline JString Context::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString Context::getPackageResourcePath() const
	{
		return callObjectMethod(
			"getPackageResourcePath",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::res::Resources Context::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	inline JObject Context::getSharedPreferences(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString Context::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Context::getString(jint arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1.object<jobjectArray>()
		);
	}
	inline JObject Context::getSystemService(JClass arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object<jclass>()
		);
	}
	inline JObject Context::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JString Context::getSystemServiceName(JClass arg0) const
	{
		return callObjectMethod(
			"getSystemServiceName",
			"(Ljava/lang/Class;)Ljava/lang/String;",
			arg0.object<jclass>()
		);
	}
	inline JString Context::getText(jint arg0) const
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline android::content::res::Resources_Theme Context::getTheme() const
	{
		return callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	inline android::graphics::drawable::Drawable Context::getWallpaper() const
	{
		return callObjectMethod(
			"getWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint Context::getWallpaperDesiredMinimumHeight() const
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumHeight",
			"()I"
		);
	}
	inline jint Context::getWallpaperDesiredMinimumWidth() const
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumWidth",
			"()I"
		);
	}
	inline void Context::grantUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const
	{
		callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean Context::isDeviceProtectedStorage() const
	{
		return callMethod<jboolean>(
			"isDeviceProtectedStorage",
			"()Z"
		);
	}
	inline jboolean Context::isRestricted() const
	{
		return callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	inline jboolean Context::moveDatabaseFrom(android::content::Context arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jboolean Context::moveSharedPreferencesFrom(android::content::Context arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::content::res::TypedArray Context::obtainStyledAttributes(JIntArray arg0) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"([I)Landroid/content/res/TypedArray;",
			arg0.object<jintArray>()
		);
	}
	inline android::content::res::TypedArray Context::obtainStyledAttributes(JObject arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	inline android::content::res::TypedArray Context::obtainStyledAttributes(jint arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(I[I)Landroid/content/res/TypedArray;",
			arg0,
			arg1.object<jintArray>()
		);
	}
	inline android::content::res::TypedArray Context::obtainStyledAttributes(JObject arg0, JIntArray arg1, jint arg2, jint arg3) const
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1.object<jintArray>(),
			arg2,
			arg3
		);
	}
	inline java::io::FileInputStream Context::openFileInput(JString arg0) const
	{
		return callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			arg0.object<jstring>()
		);
	}
	inline java::io::FileOutputStream Context::openFileOutput(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::database::sqlite::SQLiteDatabase Context::openOrCreateDatabase(JString arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline android::database::sqlite::SQLiteDatabase Context::openOrCreateDatabase(JString arg0, jint arg1, JObject arg2, JObject arg3) const
	{
		return callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline android::graphics::drawable::Drawable Context::peekWallpaper() const
	{
		return callObjectMethod(
			"peekWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline void Context::registerComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	inline android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1) const
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2) const
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;I)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3) const
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3, jint arg4) const
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;I)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4
		);
	}
	inline void Context::removeStickyBroadcast(android::content::Intent arg0) const
	{
		callMethod<void>(
			"removeStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Context::removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"removeStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Context::revokeUriPermission(android::net::Uri arg0, jint arg1) const
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Context::revokeUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline void Context::sendBroadcast(android::content::Intent arg0) const
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Context::sendBroadcast(android::content::Intent arg0, JString arg1) const
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void Context::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Context::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2) const
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline void Context::sendOrderedBroadcast(android::content::Intent arg0, JString arg1) const
	{
		callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void Context::sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6) const
	{
		callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4,
			arg5.object<jstring>(),
			arg6.object()
		);
	}
	inline void Context::sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7) const
	{
		callMethod<void>(
			"sendOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6.object<jstring>(),
			arg7.object()
		);
	}
	inline void Context::sendStickyBroadcast(android::content::Intent arg0) const
	{
		callMethod<void>(
			"sendStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Context::sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"sendStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Context::sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, JString arg4, android::os::Bundle arg5) const
	{
		callMethod<void>(
			"sendStickyOrderedBroadcast",
			"(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4.object<jstring>(),
			arg5.object()
		);
	}
	inline void Context::sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6) const
	{
		callMethod<void>(
			"sendStickyOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4,
			arg5.object<jstring>(),
			arg6.object()
		);
	}
	inline void Context::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	inline void Context::setWallpaper(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setWallpaper",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	inline void Context::setWallpaper(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setWallpaper",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void Context::startActivities(JArray arg0) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0.object<jarray>()
		);
	}
	inline void Context::startActivities(JArray arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void Context::startActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void Context::startActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::content::ComponentName Context::startForegroundService(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"startForegroundService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	inline jboolean Context::startInstrumentation(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void Context::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	inline void Context::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const
	{
		callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline android::content::ComponentName Context::startService(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"startService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	inline jboolean Context::stopService(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"stopService",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline void Context::unbindService(JObject arg0) const
	{
		callMethod<void>(
			"unbindService",
			"(Landroid/content/ServiceConnection;)V",
			arg0.object()
		);
	}
	inline void Context::unregisterComponentCallbacks(JObject arg0) const
	{
		callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	inline void Context::unregisterReceiver(android::content::BroadcastReceiver arg0) const
	{
		callMethod<void>(
			"unregisterReceiver",
			"(Landroid/content/BroadcastReceiver;)V",
			arg0.object()
		);
	}
	inline void Context::updateServiceGroup(JObject arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"updateServiceGroup",
			"(Landroid/content/ServiceConnection;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::content

// Base class headers

