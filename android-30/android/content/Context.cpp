#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "./BroadcastReceiver.hpp"
#include "./ComponentName.hpp"
#include "./ContentResolver.hpp"
#include "./Intent.hpp"
#include "./IntentFilter.hpp"
#include "./IntentSender.hpp"
#include "./pm/ApplicationInfo.hpp"
#include "./pm/PackageManager.hpp"
#include "./res/AssetManager.hpp"
#include "./res/ColorStateList.hpp"
#include "./res/Configuration.hpp"
#include "./res/Resources.hpp"
#include "./res/Resources_Theme.hpp"
#include "./res/TypedArray.hpp"
#include "../database/sqlite/SQLiteDatabase.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "../os/UserHandle.hpp"
#include "../view/Display.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileInputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Context.hpp"

namespace android::content
{
	// Fields
	JString Context::ACCESSIBILITY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ACCESSIBILITY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::ACCOUNT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ACCOUNT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::ACTIVITY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ACTIVITY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::ALARM_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ALARM_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::APPWIDGET_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"APPWIDGET_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::APP_OPS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"APP_OPS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::AUDIO_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"AUDIO_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::BATTERY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"BATTERY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	jint Context::BIND_ABOVE_CLIENT()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_ABOVE_CLIENT"
		);
	}
	jint Context::BIND_ADJUST_WITH_ACTIVITY()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_ADJUST_WITH_ACTIVITY"
		);
	}
	jint Context::BIND_ALLOW_OOM_MANAGEMENT()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_ALLOW_OOM_MANAGEMENT"
		);
	}
	jint Context::BIND_AUTO_CREATE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_AUTO_CREATE"
		);
	}
	jint Context::BIND_DEBUG_UNBIND()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_DEBUG_UNBIND"
		);
	}
	jint Context::BIND_EXTERNAL_SERVICE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_EXTERNAL_SERVICE"
		);
	}
	jint Context::BIND_IMPORTANT()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_IMPORTANT"
		);
	}
	jint Context::BIND_INCLUDE_CAPABILITIES()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_INCLUDE_CAPABILITIES"
		);
	}
	jint Context::BIND_NOT_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_NOT_FOREGROUND"
		);
	}
	jint Context::BIND_NOT_PERCEPTIBLE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_NOT_PERCEPTIBLE"
		);
	}
	jint Context::BIND_WAIVE_PRIORITY()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"BIND_WAIVE_PRIORITY"
		);
	}
	JString Context::BIOMETRIC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"BIOMETRIC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::BLOB_STORE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"BLOB_STORE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::BLUETOOTH_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"BLUETOOTH_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::CAMERA_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CAMERA_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::CAPTIONING_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CAPTIONING_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::CARRIER_CONFIG_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CARRIER_CONFIG_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::CLIPBOARD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CLIPBOARD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::COMPANION_DEVICE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"COMPANION_DEVICE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::CONNECTIVITY_DIAGNOSTICS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CONNECTIVITY_DIAGNOSTICS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::CONNECTIVITY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CONNECTIVITY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::CONSUMER_IR_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CONSUMER_IR_SERVICE",
			"Ljava/lang/String;"
		);
	}
	jint Context::CONTEXT_IGNORE_SECURITY()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_IGNORE_SECURITY"
		);
	}
	jint Context::CONTEXT_INCLUDE_CODE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_INCLUDE_CODE"
		);
	}
	jint Context::CONTEXT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_RESTRICTED"
		);
	}
	JString Context::CROSS_PROFILE_APPS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"CROSS_PROFILE_APPS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::DEVICE_POLICY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DEVICE_POLICY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::DISPLAY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DISPLAY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::DOWNLOAD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DOWNLOAD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::DROPBOX_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"DROPBOX_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::EUICC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"EUICC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::FILE_INTEGRITY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"FILE_INTEGRITY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::FINGERPRINT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"FINGERPRINT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::HARDWARE_PROPERTIES_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"HARDWARE_PROPERTIES_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::INPUT_METHOD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"INPUT_METHOD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::INPUT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"INPUT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::IPSEC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"IPSEC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::JOB_SCHEDULER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"JOB_SCHEDULER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::KEYGUARD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"KEYGUARD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::LAUNCHER_APPS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"LAUNCHER_APPS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::LAYOUT_INFLATER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"LAYOUT_INFLATER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::LOCATION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"LOCATION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::MEDIA_PROJECTION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MEDIA_PROJECTION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::MEDIA_ROUTER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MEDIA_ROUTER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::MEDIA_SESSION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MEDIA_SESSION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::MIDI_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"MIDI_SERVICE",
			"Ljava/lang/String;"
		);
	}
	jint Context::MODE_APPEND()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_APPEND"
		);
	}
	jint Context::MODE_ENABLE_WRITE_AHEAD_LOGGING()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_ENABLE_WRITE_AHEAD_LOGGING"
		);
	}
	jint Context::MODE_MULTI_PROCESS()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_MULTI_PROCESS"
		);
	}
	jint Context::MODE_NO_LOCALIZED_COLLATORS()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_NO_LOCALIZED_COLLATORS"
		);
	}
	jint Context::MODE_PRIVATE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_PRIVATE"
		);
	}
	jint Context::MODE_WORLD_READABLE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_WORLD_READABLE"
		);
	}
	jint Context::MODE_WORLD_WRITEABLE()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"MODE_WORLD_WRITEABLE"
		);
	}
	JString Context::NETWORK_STATS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NETWORK_STATS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::NFC_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NFC_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::NOTIFICATION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NOTIFICATION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::NSD_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"NSD_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::POWER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"POWER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::PRINT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"PRINT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	jint Context::RECEIVER_VISIBLE_TO_INSTANT_APPS()
	{
		return getStaticField<jint>(
			"android.content.Context",
			"RECEIVER_VISIBLE_TO_INSTANT_APPS"
		);
	}
	JString Context::RESTRICTIONS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"RESTRICTIONS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::ROLE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"ROLE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::SEARCH_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SEARCH_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::SENSOR_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SENSOR_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::SHORTCUT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SHORTCUT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::STORAGE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"STORAGE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::STORAGE_STATS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"STORAGE_STATS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::SYSTEM_HEALTH_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"SYSTEM_HEALTH_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::TELECOM_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TELECOM_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::TELEPHONY_IMS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TELEPHONY_IMS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::TELEPHONY_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TELEPHONY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::TELEPHONY_SUBSCRIPTION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TELEPHONY_SUBSCRIPTION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::TEXT_CLASSIFICATION_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TEXT_CLASSIFICATION_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::TEXT_SERVICES_MANAGER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TEXT_SERVICES_MANAGER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::TV_INPUT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"TV_INPUT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::UI_MODE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"UI_MODE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::USAGE_STATS_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"USAGE_STATS_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::USB_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"USB_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::USER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"USER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::VIBRATOR_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"VIBRATOR_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::VPN_MANAGEMENT_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"VPN_MANAGEMENT_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::WALLPAPER_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WALLPAPER_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::WIFI_AWARE_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_AWARE_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::WIFI_P2P_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_P2P_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::WIFI_RTT_RANGING_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_RTT_RANGING_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::WIFI_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WIFI_SERVICE",
			"Ljava/lang/String;"
		);
	}
	JString Context::WINDOW_SERVICE()
	{
		return getStaticObjectField(
			"android.content.Context",
			"WINDOW_SERVICE",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Context::Context(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Context::Context()
		: JObject(
			"android.content.Context",
			"()V"
		) {}
	
	// Methods
	jboolean Context::bindIsolatedService(android::content::Intent arg0, jint arg1, JString arg2, JObject arg3, JObject arg4)
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
	jboolean Context::bindService(android::content::Intent arg0, JObject arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean Context::bindService(android::content::Intent arg0, jint arg1, JObject arg2, JObject arg3)
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
	jboolean Context::bindServiceAsUser(android::content::Intent arg0, JObject arg1, jint arg2, android::os::UserHandle arg3)
	{
		return callMethod<jboolean>(
			"bindServiceAsUser",
			"(Landroid/content/Intent;Landroid/content/ServiceConnection;ILandroid/os/UserHandle;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jint Context::checkCallingOrSelfPermission(JString arg0)
	{
		return callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint Context::checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1)
	{
		return callMethod<jint>(
			"checkCallingOrSelfUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint Context::checkCallingPermission(JString arg0)
	{
		return callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint Context::checkCallingUriPermission(android::net::Uri arg0, jint arg1)
	{
		return callMethod<jint>(
			"checkCallingUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint Context::checkPermission(JString arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	jint Context::checkSelfPermission(JString arg0)
	{
		return callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint Context::checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3)
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
	jint Context::checkUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5)
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
	void Context::clearWallpaper()
	{
		callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	android::content::Context Context::createAttributionContext(JString arg0)
	{
		return callObjectMethod(
			"createAttributionContext",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0.object<jstring>()
		);
	}
	android::content::Context Context::createConfigurationContext(android::content::res::Configuration arg0)
	{
		return callObjectMethod(
			"createConfigurationContext",
			"(Landroid/content/res/Configuration;)Landroid/content/Context;",
			arg0.object()
		);
	}
	android::content::Context Context::createContextForSplit(JString arg0)
	{
		return callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0.object<jstring>()
		);
	}
	android::content::Context Context::createDeviceProtectedStorageContext()
	{
		return callObjectMethod(
			"createDeviceProtectedStorageContext",
			"()Landroid/content/Context;"
		);
	}
	android::content::Context Context::createDisplayContext(android::view::Display arg0)
	{
		return callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.object()
		);
	}
	android::content::Context Context::createPackageContext(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::Context Context::createWindowContext(jint arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"createWindowContext",
			"(ILandroid/os/Bundle;)Landroid/content/Context;",
			arg0,
			arg1.object()
		);
	}
	JArray Context::databaseList()
	{
		return callObjectMethod(
			"databaseList",
			"()[Ljava/lang/String;"
		);
	}
	jboolean Context::deleteDatabase(JString arg0)
	{
		return callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Context::deleteFile(JString arg0)
	{
		return callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Context::deleteSharedPreferences(JString arg0)
	{
		return callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void Context::enforceCallingOrSelfPermission(JString arg0, JString arg1)
	{
		callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Context::enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, JString arg2)
	{
		callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void Context::enforceCallingPermission(JString arg0, JString arg1)
	{
		callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Context::enforceCallingUriPermission(android::net::Uri arg0, jint arg1, JString arg2)
	{
		callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void Context::enforcePermission(JString arg0, jint arg1, jint arg2, JString arg3)
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
	void Context::enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, JString arg4)
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
	void Context::enforceUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5, JString arg6)
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
	JArray Context::fileList()
	{
		return callObjectMethod(
			"fileList",
			"()[Ljava/lang/String;"
		);
	}
	android::content::Context Context::getApplicationContext()
	{
		return callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	android::content::pm::ApplicationInfo Context::getApplicationInfo()
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	android::content::res::AssetManager Context::getAssets()
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	JString Context::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	java::io::File Context::getCacheDir()
	{
		return callObjectMethod(
			"getCacheDir",
			"()Ljava/io/File;"
		);
	}
	java::lang::ClassLoader Context::getClassLoader()
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::io::File Context::getCodeCacheDir()
	{
		return callObjectMethod(
			"getCodeCacheDir",
			"()Ljava/io/File;"
		);
	}
	jint Context::getColor(jint arg0)
	{
		return callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	android::content::res::ColorStateList Context::getColorStateList(jint arg0)
	{
		return callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	android::content::ContentResolver Context::getContentResolver()
	{
		return callObjectMethod(
			"getContentResolver",
			"()Landroid/content/ContentResolver;"
		);
	}
	java::io::File Context::getDataDir()
	{
		return callObjectMethod(
			"getDataDir",
			"()Ljava/io/File;"
		);
	}
	java::io::File Context::getDatabasePath(JString arg0)
	{
		return callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	java::io::File Context::getDir(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::view::Display Context::getDisplay()
	{
		return callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	android::graphics::drawable::Drawable Context::getDrawable(jint arg0)
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	java::io::File Context::getExternalCacheDir()
	{
		return callObjectMethod(
			"getExternalCacheDir",
			"()Ljava/io/File;"
		);
	}
	JArray Context::getExternalCacheDirs()
	{
		return callObjectMethod(
			"getExternalCacheDirs",
			"()[Ljava/io/File;"
		);
	}
	java::io::File Context::getExternalFilesDir(JString arg0)
	{
		return callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	JArray Context::getExternalFilesDirs(JString arg0)
	{
		return callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	JArray Context::getExternalMediaDirs()
	{
		return callObjectMethod(
			"getExternalMediaDirs",
			"()[Ljava/io/File;"
		);
	}
	java::io::File Context::getFileStreamPath(JString arg0)
	{
		return callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	java::io::File Context::getFilesDir()
	{
		return callObjectMethod(
			"getFilesDir",
			"()Ljava/io/File;"
		);
	}
	JObject Context::getMainExecutor()
	{
		return callObjectMethod(
			"getMainExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	android::os::Looper Context::getMainLooper()
	{
		return callObjectMethod(
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	java::io::File Context::getNoBackupFilesDir()
	{
		return callObjectMethod(
			"getNoBackupFilesDir",
			"()Ljava/io/File;"
		);
	}
	java::io::File Context::getObbDir()
	{
		return callObjectMethod(
			"getObbDir",
			"()Ljava/io/File;"
		);
	}
	JArray Context::getObbDirs()
	{
		return callObjectMethod(
			"getObbDirs",
			"()[Ljava/io/File;"
		);
	}
	JString Context::getOpPackageName()
	{
		return callObjectMethod(
			"getOpPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString Context::getPackageCodePath()
	{
		return callObjectMethod(
			"getPackageCodePath",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::PackageManager Context::getPackageManager()
	{
		return callObjectMethod(
			"getPackageManager",
			"()Landroid/content/pm/PackageManager;"
		);
	}
	JString Context::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString Context::getPackageResourcePath()
	{
		return callObjectMethod(
			"getPackageResourcePath",
			"()Ljava/lang/String;"
		);
	}
	android::content::res::Resources Context::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	JObject Context::getSharedPreferences(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString Context::getString(jint arg0)
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString Context::getString(jint arg0, JObjectArray arg1)
	{
		return callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1.object<jobjectArray>()
		);
	}
	JObject Context::getSystemService(JClass arg0)
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object<jclass>()
		);
	}
	JObject Context::getSystemService(JString arg0)
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JString Context::getSystemServiceName(JClass arg0)
	{
		return callObjectMethod(
			"getSystemServiceName",
			"(Ljava/lang/Class;)Ljava/lang/String;",
			arg0.object<jclass>()
		);
	}
	JString Context::getText(jint arg0)
	{
		return callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	android::content::res::Resources_Theme Context::getTheme()
	{
		return callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	android::graphics::drawable::Drawable Context::getWallpaper()
	{
		return callObjectMethod(
			"getWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Context::getWallpaperDesiredMinimumHeight()
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumHeight",
			"()I"
		);
	}
	jint Context::getWallpaperDesiredMinimumWidth()
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumWidth",
			"()I"
		);
	}
	void Context::grantUriPermission(JString arg0, android::net::Uri arg1, jint arg2)
	{
		callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	jboolean Context::isDeviceProtectedStorage()
	{
		return callMethod<jboolean>(
			"isDeviceProtectedStorage",
			"()Z"
		);
	}
	jboolean Context::isRestricted()
	{
		return callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	jboolean Context::moveDatabaseFrom(android::content::Context arg0, JString arg1)
	{
		return callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean Context::moveSharedPreferencesFrom(android::content::Context arg0, JString arg1)
	{
		return callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::content::res::TypedArray Context::obtainStyledAttributes(JIntArray arg0)
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"([I)Landroid/content/res/TypedArray;",
			arg0.object<jintArray>()
		);
	}
	android::content::res::TypedArray Context::obtainStyledAttributes(JObject arg0, JIntArray arg1)
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	android::content::res::TypedArray Context::obtainStyledAttributes(jint arg0, JIntArray arg1)
	{
		return callObjectMethod(
			"obtainStyledAttributes",
			"(I[I)Landroid/content/res/TypedArray;",
			arg0,
			arg1.object<jintArray>()
		);
	}
	android::content::res::TypedArray Context::obtainStyledAttributes(JObject arg0, JIntArray arg1, jint arg2, jint arg3)
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
	java::io::FileInputStream Context::openFileInput(JString arg0)
	{
		return callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			arg0.object<jstring>()
		);
	}
	java::io::FileOutputStream Context::openFileOutput(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::database::sqlite::SQLiteDatabase Context::openOrCreateDatabase(JString arg0, jint arg1, JObject arg2)
	{
		return callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	android::database::sqlite::SQLiteDatabase Context::openOrCreateDatabase(JString arg0, jint arg1, JObject arg2, JObject arg3)
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
	android::graphics::drawable::Drawable Context::peekWallpaper()
	{
		return callObjectMethod(
			"peekWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void Context::registerComponentCallbacks(JObject arg0)
	{
		callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1)
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2)
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;I)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3)
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
	android::content::Intent Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3, jint arg4)
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
	void Context::removeStickyBroadcast(android::content::Intent arg0)
	{
		callMethod<void>(
			"removeStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Context::removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"removeStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Context::revokeUriPermission(android::net::Uri arg0, jint arg1)
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	void Context::revokeUriPermission(JString arg0, android::net::Uri arg1, jint arg2)
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	void Context::sendBroadcast(android::content::Intent arg0)
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Context::sendBroadcast(android::content::Intent arg0, JString arg1)
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Context::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Context::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2)
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void Context::sendBroadcastWithMultiplePermissions(android::content::Intent arg0, JArray arg1)
	{
		callMethod<void>(
			"sendBroadcastWithMultiplePermissions",
			"(Landroid/content/Intent;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	void Context::sendOrderedBroadcast(android::content::Intent arg0, JString arg1)
	{
		callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Context::sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6)
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
	void Context::sendOrderedBroadcast(android::content::Intent arg0, JString arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7)
	{
		callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6.object<jstring>(),
			arg7.object()
		);
	}
	void Context::sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7)
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
	void Context::sendStickyBroadcast(android::content::Intent arg0)
	{
		callMethod<void>(
			"sendStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Context::sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"sendStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Context::sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, JString arg4, android::os::Bundle arg5)
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
	void Context::sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6)
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
	void Context::setTheme(jint arg0)
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void Context::setWallpaper(android::graphics::Bitmap arg0)
	{
		callMethod<void>(
			"setWallpaper",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void Context::setWallpaper(java::io::InputStream arg0)
	{
		callMethod<void>(
			"setWallpaper",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void Context::startActivities(JArray arg0)
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0.object<jarray>()
		);
	}
	void Context::startActivities(JArray arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void Context::startActivity(android::content::Intent arg0)
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void Context::startActivity(android::content::Intent arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ComponentName Context::startForegroundService(android::content::Intent arg0)
	{
		return callObjectMethod(
			"startForegroundService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	jboolean Context::startInstrumentation(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2)
	{
		return callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void Context::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4)
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
	void Context::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
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
	android::content::ComponentName Context::startService(android::content::Intent arg0)
	{
		return callObjectMethod(
			"startService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	jboolean Context::stopService(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"stopService",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void Context::unbindService(JObject arg0)
	{
		callMethod<void>(
			"unbindService",
			"(Landroid/content/ServiceConnection;)V",
			arg0.object()
		);
	}
	void Context::unregisterComponentCallbacks(JObject arg0)
	{
		callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.object()
		);
	}
	void Context::unregisterReceiver(android::content::BroadcastReceiver arg0)
	{
		callMethod<void>(
			"unregisterReceiver",
			"(Landroid/content/BroadcastReceiver;)V",
			arg0.object()
		);
	}
	void Context::updateServiceGroup(JObject arg0, jint arg1, jint arg2)
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

