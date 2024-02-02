#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
class JObjectArray;
class JArray;
namespace android::content
{
	class AttributionSource;
}
namespace android::content
{
	class BroadcastReceiver;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Context_BindServiceFlags;
}
namespace android::content
{
	class ContextParams;
}
namespace android::content
{
	class Intent;
}
namespace android::content
{
	class IntentFilter;
}
namespace android::content
{
	class IntentSender;
}
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::res
{
	class AssetManager;
}
namespace android::content::res
{
	class ColorStateList;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}
namespace android::os
{
	class UserHandle;
}
namespace android::view
{
	class Display;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileInputStream;
}
namespace java::io
{
	class FileOutputStream;
}
namespace java::io
{
	class InputStream;
}
class JString;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;

namespace android::content
{
	class Context : public JObject
	{
	public:
		// Fields
		static JString ACCESSIBILITY_SERVICE();
		static JString ACCOUNT_SERVICE();
		static JString ACTIVITY_SERVICE();
		static JString ALARM_SERVICE();
		static JString APPWIDGET_SERVICE();
		static JString APP_OPS_SERVICE();
		static JString APP_SEARCH_SERVICE();
		static JString AUDIO_SERVICE();
		static JString BATTERY_SERVICE();
		static jint BIND_ABOVE_CLIENT();
		static jint BIND_ADJUST_WITH_ACTIVITY();
		static jint BIND_ALLOW_ACTIVITY_STARTS();
		static jint BIND_ALLOW_OOM_MANAGEMENT();
		static jint BIND_AUTO_CREATE();
		static jint BIND_DEBUG_UNBIND();
		static jint BIND_EXTERNAL_SERVICE();
		static jlong BIND_EXTERNAL_SERVICE_LONG();
		static jint BIND_IMPORTANT();
		static jint BIND_INCLUDE_CAPABILITIES();
		static jint BIND_NOT_FOREGROUND();
		static jint BIND_NOT_PERCEPTIBLE();
		static jint BIND_SHARED_ISOLATED_PROCESS();
		static jint BIND_WAIVE_PRIORITY();
		static JString BIOMETRIC_SERVICE();
		static JString BLOB_STORE_SERVICE();
		static JString BLUETOOTH_SERVICE();
		static JString BUGREPORT_SERVICE();
		static JString CAMERA_SERVICE();
		static JString CAPTIONING_SERVICE();
		static JString CARRIER_CONFIG_SERVICE();
		static JString CLIPBOARD_SERVICE();
		static JString COMPANION_DEVICE_SERVICE();
		static JString CONNECTIVITY_DIAGNOSTICS_SERVICE();
		static JString CONNECTIVITY_SERVICE();
		static JString CONSUMER_IR_SERVICE();
		static jint CONTEXT_IGNORE_SECURITY();
		static jint CONTEXT_INCLUDE_CODE();
		static jint CONTEXT_RESTRICTED();
		static JString CREDENTIAL_SERVICE();
		static JString CROSS_PROFILE_APPS_SERVICE();
		static jint DEVICE_ID_DEFAULT();
		static jint DEVICE_ID_INVALID();
		static JString DEVICE_LOCK_SERVICE();
		static JString DEVICE_POLICY_SERVICE();
		static JString DISPLAY_HASH_SERVICE();
		static JString DISPLAY_SERVICE();
		static JString DOMAIN_VERIFICATION_SERVICE();
		static JString DOWNLOAD_SERVICE();
		static JString DROPBOX_SERVICE();
		static JString EUICC_SERVICE();
		static JString FILE_INTEGRITY_SERVICE();
		static JString FINGERPRINT_SERVICE();
		static JString GAME_SERVICE();
		static JString GRAMMATICAL_INFLECTION_SERVICE();
		static JString HARDWARE_PROPERTIES_SERVICE();
		static JString HEALTHCONNECT_SERVICE();
		static JString INPUT_METHOD_SERVICE();
		static JString INPUT_SERVICE();
		static JString IPSEC_SERVICE();
		static JString JOB_SCHEDULER_SERVICE();
		static JString KEYGUARD_SERVICE();
		static JString LAUNCHER_APPS_SERVICE();
		static JString LAYOUT_INFLATER_SERVICE();
		static JString LOCALE_SERVICE();
		static JString LOCATION_SERVICE();
		static JString MEDIA_COMMUNICATION_SERVICE();
		static JString MEDIA_METRICS_SERVICE();
		static JString MEDIA_PROJECTION_SERVICE();
		static JString MEDIA_ROUTER_SERVICE();
		static JString MEDIA_SESSION_SERVICE();
		static JString MIDI_SERVICE();
		static jint MODE_APPEND();
		static jint MODE_ENABLE_WRITE_AHEAD_LOGGING();
		static jint MODE_MULTI_PROCESS();
		static jint MODE_NO_LOCALIZED_COLLATORS();
		static jint MODE_PRIVATE();
		static jint MODE_WORLD_READABLE();
		static jint MODE_WORLD_WRITEABLE();
		static JString NETWORK_STATS_SERVICE();
		static JString NFC_SERVICE();
		static JString NOTIFICATION_SERVICE();
		static JString NSD_SERVICE();
		static JString OVERLAY_SERVICE();
		static JString PEOPLE_SERVICE();
		static JString PERFORMANCE_HINT_SERVICE();
		static JString POWER_SERVICE();
		static JString PRINT_SERVICE();
		static jint RECEIVER_EXPORTED();
		static jint RECEIVER_NOT_EXPORTED();
		static jint RECEIVER_VISIBLE_TO_INSTANT_APPS();
		static JString RESTRICTIONS_SERVICE();
		static JString ROLE_SERVICE();
		static JString SEARCH_SERVICE();
		static JString SENSOR_SERVICE();
		static JString SHORTCUT_SERVICE();
		static JString STATUS_BAR_SERVICE();
		static JString STORAGE_SERVICE();
		static JString STORAGE_STATS_SERVICE();
		static JString SYSTEM_HEALTH_SERVICE();
		static JString TELECOM_SERVICE();
		static JString TELEPHONY_IMS_SERVICE();
		static JString TELEPHONY_SERVICE();
		static JString TELEPHONY_SUBSCRIPTION_SERVICE();
		static JString TEXT_CLASSIFICATION_SERVICE();
		static JString TEXT_SERVICES_MANAGER_SERVICE();
		static JString TV_INPUT_SERVICE();
		static JString TV_INTERACTIVE_APP_SERVICE();
		static JString UI_MODE_SERVICE();
		static JString USAGE_STATS_SERVICE();
		static JString USB_SERVICE();
		static JString USER_SERVICE();
		static JString VIBRATOR_MANAGER_SERVICE();
		static JString VIBRATOR_SERVICE();
		static JString VIRTUAL_DEVICE_SERVICE();
		static JString VPN_MANAGEMENT_SERVICE();
		static JString WALLPAPER_SERVICE();
		static JString WIFI_AWARE_SERVICE();
		static JString WIFI_P2P_SERVICE();
		static JString WIFI_RTT_RANGING_SERVICE();
		static JString WIFI_SERVICE();
		static JString WINDOW_SERVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Context(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Context(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Context();
		
		// Methods
		jboolean bindIsolatedService(android::content::Intent arg0, android::content::Context_BindServiceFlags arg1, JString arg2, JObject arg3, JObject arg4) const;
		jboolean bindIsolatedService(android::content::Intent arg0, jint arg1, JString arg2, JObject arg3, JObject arg4) const;
		jboolean bindService(android::content::Intent arg0, JObject arg1, android::content::Context_BindServiceFlags arg2) const;
		jboolean bindService(android::content::Intent arg0, JObject arg1, jint arg2) const;
		jboolean bindService(android::content::Intent arg0, android::content::Context_BindServiceFlags arg1, JObject arg2, JObject arg3) const;
		jboolean bindService(android::content::Intent arg0, jint arg1, JObject arg2, JObject arg3) const;
		jboolean bindServiceAsUser(android::content::Intent arg0, JObject arg1, android::content::Context_BindServiceFlags arg2, android::os::UserHandle arg3) const;
		jboolean bindServiceAsUser(android::content::Intent arg0, JObject arg1, jint arg2, android::os::UserHandle arg3) const;
		jint checkCallingOrSelfPermission(JString arg0) const;
		jint checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1) const;
		JIntArray checkCallingOrSelfUriPermissions(JObject arg0, jint arg1) const;
		jint checkCallingPermission(JString arg0) const;
		jint checkCallingUriPermission(android::net::Uri arg0, jint arg1) const;
		JIntArray checkCallingUriPermissions(JObject arg0, jint arg1) const;
		jint checkPermission(JString arg0, jint arg1, jint arg2) const;
		jint checkSelfPermission(JString arg0) const;
		jint checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3) const;
		jint checkUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5) const;
		JIntArray checkUriPermissions(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		void clearWallpaper() const;
		android::content::Context createAttributionContext(JString arg0) const;
		android::content::Context createConfigurationContext(android::content::res::Configuration arg0) const;
		android::content::Context createContext(android::content::ContextParams arg0) const;
		android::content::Context createContextForSplit(JString arg0) const;
		android::content::Context createDeviceContext(jint arg0) const;
		android::content::Context createDeviceProtectedStorageContext() const;
		android::content::Context createDisplayContext(android::view::Display arg0) const;
		android::content::Context createPackageContext(JString arg0, jint arg1) const;
		android::content::Context createWindowContext(jint arg0, android::os::Bundle arg1) const;
		android::content::Context createWindowContext(android::view::Display arg0, jint arg1, android::os::Bundle arg2) const;
		JArray databaseList() const;
		jboolean deleteDatabase(JString arg0) const;
		jboolean deleteFile(JString arg0) const;
		jboolean deleteSharedPreferences(JString arg0) const;
		void enforceCallingOrSelfPermission(JString arg0, JString arg1) const;
		void enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, JString arg2) const;
		void enforceCallingPermission(JString arg0, JString arg1) const;
		void enforceCallingUriPermission(android::net::Uri arg0, jint arg1, JString arg2) const;
		void enforcePermission(JString arg0, jint arg1, jint arg2, JString arg3) const;
		void enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, JString arg4) const;
		void enforceUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5, JString arg6) const;
		JArray fileList() const;
		android::content::Context getApplicationContext() const;
		android::content::pm::ApplicationInfo getApplicationInfo() const;
		android::content::res::AssetManager getAssets() const;
		android::content::AttributionSource getAttributionSource() const;
		JString getAttributionTag() const;
		java::io::File getCacheDir() const;
		java::lang::ClassLoader getClassLoader() const;
		java::io::File getCodeCacheDir() const;
		jint getColor(jint arg0) const;
		android::content::res::ColorStateList getColorStateList(jint arg0) const;
		android::content::ContentResolver getContentResolver() const;
		java::io::File getDataDir() const;
		java::io::File getDatabasePath(JString arg0) const;
		jint getDeviceId() const;
		java::io::File getDir(JString arg0, jint arg1) const;
		android::view::Display getDisplay() const;
		android::graphics::drawable::Drawable getDrawable(jint arg0) const;
		java::io::File getExternalCacheDir() const;
		JArray getExternalCacheDirs() const;
		java::io::File getExternalFilesDir(JString arg0) const;
		JArray getExternalFilesDirs(JString arg0) const;
		JArray getExternalMediaDirs() const;
		java::io::File getFileStreamPath(JString arg0) const;
		java::io::File getFilesDir() const;
		JObject getMainExecutor() const;
		android::os::Looper getMainLooper() const;
		java::io::File getNoBackupFilesDir() const;
		java::io::File getObbDir() const;
		JArray getObbDirs() const;
		JString getOpPackageName() const;
		JString getPackageCodePath() const;
		android::content::pm::PackageManager getPackageManager() const;
		JString getPackageName() const;
		JString getPackageResourcePath() const;
		android::content::ContextParams getParams() const;
		android::content::res::Resources getResources() const;
		JObject getSharedPreferences(JString arg0, jint arg1) const;
		JString getString(jint arg0) const;
		JString getString(jint arg0, JObjectArray arg1) const;
		JObject getSystemService(JClass arg0) const;
		JObject getSystemService(JString arg0) const;
		JString getSystemServiceName(JClass arg0) const;
		JString getText(jint arg0) const;
		android::content::res::Resources_Theme getTheme() const;
		android::graphics::drawable::Drawable getWallpaper() const;
		jint getWallpaperDesiredMinimumHeight() const;
		jint getWallpaperDesiredMinimumWidth() const;
		void grantUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const;
		jboolean isDeviceProtectedStorage() const;
		jboolean isRestricted() const;
		jboolean isUiContext() const;
		jboolean moveDatabaseFrom(android::content::Context arg0, JString arg1) const;
		jboolean moveSharedPreferencesFrom(android::content::Context arg0, JString arg1) const;
		android::content::res::TypedArray obtainStyledAttributes(JIntArray arg0) const;
		android::content::res::TypedArray obtainStyledAttributes(JObject arg0, JIntArray arg1) const;
		android::content::res::TypedArray obtainStyledAttributes(jint arg0, JIntArray arg1) const;
		android::content::res::TypedArray obtainStyledAttributes(JObject arg0, JIntArray arg1, jint arg2, jint arg3) const;
		java::io::FileInputStream openFileInput(JString arg0) const;
		java::io::FileOutputStream openFileOutput(JString arg0, jint arg1) const;
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2) const;
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2, JObject arg3) const;
		android::graphics::drawable::Drawable peekWallpaper() const;
		void registerComponentCallbacks(JObject arg0) const;
		void registerDeviceIdChangeListener(JObject arg0, JObject arg1) const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1) const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2) const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3) const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3, jint arg4) const;
		void removeStickyBroadcast(android::content::Intent arg0) const;
		void removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const;
		void revokeSelfPermissionOnKill(JString arg0) const;
		void revokeSelfPermissionsOnKill(JObject arg0) const;
		void revokeUriPermission(android::net::Uri arg0, jint arg1) const;
		void revokeUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const;
		void sendBroadcast(android::content::Intent arg0) const;
		void sendBroadcast(android::content::Intent arg0, JString arg1) const;
		void sendBroadcast(android::content::Intent arg0, JString arg1, android::os::Bundle arg2) const;
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const;
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2) const;
		void sendBroadcastWithMultiplePermissions(android::content::Intent arg0, JArray arg1) const;
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1) const;
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::os::Bundle arg2) const;
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6) const;
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::os::Bundle arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7) const;
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7) const;
		void sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7) const;
		void sendStickyBroadcast(android::content::Intent arg0) const;
		void sendStickyBroadcast(android::content::Intent arg0, android::os::Bundle arg1) const;
		void sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const;
		void sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, JString arg4, android::os::Bundle arg5) const;
		void sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6) const;
		void setTheme(jint arg0) const;
		void setWallpaper(android::graphics::Bitmap arg0) const;
		void setWallpaper(java::io::InputStream arg0) const;
		void startActivities(JArray arg0) const;
		void startActivities(JArray arg0, android::os::Bundle arg1) const;
		void startActivity(android::content::Intent arg0) const;
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1) const;
		android::content::ComponentName startForegroundService(android::content::Intent arg0) const;
		jboolean startInstrumentation(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2) const;
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4) const;
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const;
		android::content::ComponentName startService(android::content::Intent arg0) const;
		jboolean stopService(android::content::Intent arg0) const;
		void unbindService(JObject arg0) const;
		void unregisterComponentCallbacks(JObject arg0) const;
		void unregisterDeviceIdChangeListener(JObject arg0) const;
		void unregisterReceiver(android::content::BroadcastReceiver arg0) const;
		void updateServiceGroup(JObject arg0, jint arg1, jint arg2) const;
	};
} // namespace android::content

