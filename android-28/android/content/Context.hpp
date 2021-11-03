#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
class JObjectArray;
class JArray;
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
		static JString AUDIO_SERVICE();
		static JString BATTERY_SERVICE();
		static jint BIND_ABOVE_CLIENT();
		static jint BIND_ADJUST_WITH_ACTIVITY();
		static jint BIND_ALLOW_OOM_MANAGEMENT();
		static jint BIND_AUTO_CREATE();
		static jint BIND_DEBUG_UNBIND();
		static jint BIND_EXTERNAL_SERVICE();
		static jint BIND_IMPORTANT();
		static jint BIND_NOT_FOREGROUND();
		static jint BIND_WAIVE_PRIORITY();
		static JString BLUETOOTH_SERVICE();
		static JString CAMERA_SERVICE();
		static JString CAPTIONING_SERVICE();
		static JString CARRIER_CONFIG_SERVICE();
		static JString CLIPBOARD_SERVICE();
		static JString COMPANION_DEVICE_SERVICE();
		static JString CONNECTIVITY_SERVICE();
		static JString CONSUMER_IR_SERVICE();
		static jint CONTEXT_IGNORE_SECURITY();
		static jint CONTEXT_INCLUDE_CODE();
		static jint CONTEXT_RESTRICTED();
		static JString CROSS_PROFILE_APPS_SERVICE();
		static JString DEVICE_POLICY_SERVICE();
		static JString DISPLAY_SERVICE();
		static JString DOWNLOAD_SERVICE();
		static JString DROPBOX_SERVICE();
		static JString EUICC_SERVICE();
		static JString FINGERPRINT_SERVICE();
		static JString HARDWARE_PROPERTIES_SERVICE();
		static JString INPUT_METHOD_SERVICE();
		static JString INPUT_SERVICE();
		static JString IPSEC_SERVICE();
		static JString JOB_SCHEDULER_SERVICE();
		static JString KEYGUARD_SERVICE();
		static JString LAUNCHER_APPS_SERVICE();
		static JString LAYOUT_INFLATER_SERVICE();
		static JString LOCATION_SERVICE();
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
		static JString POWER_SERVICE();
		static JString PRINT_SERVICE();
		static jint RECEIVER_VISIBLE_TO_INSTANT_APPS();
		static JString RESTRICTIONS_SERVICE();
		static JString SEARCH_SERVICE();
		static JString SENSOR_SERVICE();
		static JString SHORTCUT_SERVICE();
		static JString STORAGE_SERVICE();
		static JString STORAGE_STATS_SERVICE();
		static JString SYSTEM_HEALTH_SERVICE();
		static JString TELECOM_SERVICE();
		static JString TELEPHONY_SERVICE();
		static JString TELEPHONY_SUBSCRIPTION_SERVICE();
		static JString TEXT_CLASSIFICATION_SERVICE();
		static JString TEXT_SERVICES_MANAGER_SERVICE();
		static JString TV_INPUT_SERVICE();
		static JString UI_MODE_SERVICE();
		static JString USAGE_STATS_SERVICE();
		static JString USB_SERVICE();
		static JString USER_SERVICE();
		static JString VIBRATOR_SERVICE();
		static JString WALLPAPER_SERVICE();
		static JString WIFI_AWARE_SERVICE();
		static JString WIFI_P2P_SERVICE();
		static JString WIFI_RTT_RANGING_SERVICE();
		static JString WIFI_SERVICE();
		static JString WINDOW_SERVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Context(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Context(QJniObject obj);
		
		// Constructors
		Context();
		
		// Methods
		jboolean bindService(android::content::Intent arg0, JObject arg1, jint arg2);
		jint checkCallingOrSelfPermission(JString arg0);
		jint checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1);
		jint checkCallingPermission(JString arg0);
		jint checkCallingUriPermission(android::net::Uri arg0, jint arg1);
		jint checkPermission(JString arg0, jint arg1, jint arg2);
		jint checkSelfPermission(JString arg0);
		jint checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3);
		jint checkUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5);
		void clearWallpaper();
		android::content::Context createConfigurationContext(android::content::res::Configuration arg0);
		android::content::Context createContextForSplit(JString arg0);
		android::content::Context createDeviceProtectedStorageContext();
		android::content::Context createDisplayContext(android::view::Display arg0);
		android::content::Context createPackageContext(JString arg0, jint arg1);
		JArray databaseList();
		jboolean deleteDatabase(JString arg0);
		jboolean deleteFile(JString arg0);
		jboolean deleteSharedPreferences(JString arg0);
		void enforceCallingOrSelfPermission(JString arg0, JString arg1);
		void enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, JString arg2);
		void enforceCallingPermission(JString arg0, JString arg1);
		void enforceCallingUriPermission(android::net::Uri arg0, jint arg1, JString arg2);
		void enforcePermission(JString arg0, jint arg1, jint arg2, JString arg3);
		void enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, JString arg4);
		void enforceUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5, JString arg6);
		JArray fileList();
		android::content::Context getApplicationContext();
		android::content::pm::ApplicationInfo getApplicationInfo();
		android::content::res::AssetManager getAssets();
		java::io::File getCacheDir();
		java::lang::ClassLoader getClassLoader();
		java::io::File getCodeCacheDir();
		jint getColor(jint arg0);
		android::content::res::ColorStateList getColorStateList(jint arg0);
		android::content::ContentResolver getContentResolver();
		java::io::File getDataDir();
		java::io::File getDatabasePath(JString arg0);
		java::io::File getDir(JString arg0, jint arg1);
		android::graphics::drawable::Drawable getDrawable(jint arg0);
		java::io::File getExternalCacheDir();
		JArray getExternalCacheDirs();
		java::io::File getExternalFilesDir(JString arg0);
		JArray getExternalFilesDirs(JString arg0);
		JArray getExternalMediaDirs();
		java::io::File getFileStreamPath(JString arg0);
		java::io::File getFilesDir();
		JObject getMainExecutor();
		android::os::Looper getMainLooper();
		java::io::File getNoBackupFilesDir();
		java::io::File getObbDir();
		JArray getObbDirs();
		JString getPackageCodePath();
		android::content::pm::PackageManager getPackageManager();
		JString getPackageName();
		JString getPackageResourcePath();
		android::content::res::Resources getResources();
		JObject getSharedPreferences(JString arg0, jint arg1);
		JString getString(jint arg0);
		JString getString(jint arg0, JObjectArray arg1);
		JObject getSystemService(JClass arg0);
		JObject getSystemService(JString arg0);
		JString getSystemServiceName(JClass arg0);
		JString getText(jint arg0);
		android::content::res::Resources_Theme getTheme();
		android::graphics::drawable::Drawable getWallpaper();
		jint getWallpaperDesiredMinimumHeight();
		jint getWallpaperDesiredMinimumWidth();
		void grantUriPermission(JString arg0, android::net::Uri arg1, jint arg2);
		jboolean isDeviceProtectedStorage();
		jboolean isRestricted();
		jboolean moveDatabaseFrom(android::content::Context arg0, JString arg1);
		jboolean moveSharedPreferencesFrom(android::content::Context arg0, JString arg1);
		android::content::res::TypedArray obtainStyledAttributes(JIntArray arg0);
		android::content::res::TypedArray obtainStyledAttributes(JObject arg0, JIntArray arg1);
		android::content::res::TypedArray obtainStyledAttributes(jint arg0, JIntArray arg1);
		android::content::res::TypedArray obtainStyledAttributes(JObject arg0, JIntArray arg1, jint arg2, jint arg3);
		java::io::FileInputStream openFileInput(JString arg0);
		java::io::FileOutputStream openFileOutput(JString arg0, jint arg1);
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2);
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2, JObject arg3);
		android::graphics::drawable::Drawable peekWallpaper();
		void registerComponentCallbacks(JObject arg0);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3, jint arg4);
		void removeStickyBroadcast(android::content::Intent arg0);
		void removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void revokeUriPermission(android::net::Uri arg0, jint arg1);
		void revokeUriPermission(JString arg0, android::net::Uri arg1, jint arg2);
		void sendBroadcast(android::content::Intent arg0);
		void sendBroadcast(android::content::Intent arg0, JString arg1);
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2);
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1);
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6);
		void sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7);
		void sendStickyBroadcast(android::content::Intent arg0);
		void sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, JString arg4, android::os::Bundle arg5);
		void sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6);
		void setTheme(jint arg0);
		void setWallpaper(android::graphics::Bitmap arg0);
		void setWallpaper(java::io::InputStream arg0);
		void startActivities(JArray arg0);
		void startActivities(JArray arg0, android::os::Bundle arg1);
		void startActivity(android::content::Intent arg0);
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1);
		android::content::ComponentName startForegroundService(android::content::Intent arg0);
		jboolean startInstrumentation(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5);
		android::content::ComponentName startService(android::content::Intent arg0);
		jboolean stopService(android::content::Intent arg0);
		void unbindService(JObject arg0);
		void unregisterComponentCallbacks(JObject arg0);
		void unregisterReceiver(android::content::BroadcastReceiver arg0);
	};
} // namespace android::content

