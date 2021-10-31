#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::lang
{
	class ClassLoader;
}

namespace android::content
{
	class Context : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACCESSIBILITY_SERVICE();
		static jstring ACCOUNT_SERVICE();
		static jstring ACTIVITY_SERVICE();
		static jstring ALARM_SERVICE();
		static jstring APPWIDGET_SERVICE();
		static jstring APP_OPS_SERVICE();
		static jstring AUDIO_SERVICE();
		static jstring BATTERY_SERVICE();
		static jint BIND_ABOVE_CLIENT();
		static jint BIND_ADJUST_WITH_ACTIVITY();
		static jint BIND_ALLOW_OOM_MANAGEMENT();
		static jint BIND_AUTO_CREATE();
		static jint BIND_DEBUG_UNBIND();
		static jint BIND_EXTERNAL_SERVICE();
		static jint BIND_IMPORTANT();
		static jint BIND_NOT_FOREGROUND();
		static jint BIND_WAIVE_PRIORITY();
		static jstring BLUETOOTH_SERVICE();
		static jstring CAMERA_SERVICE();
		static jstring CAPTIONING_SERVICE();
		static jstring CARRIER_CONFIG_SERVICE();
		static jstring CLIPBOARD_SERVICE();
		static jstring COMPANION_DEVICE_SERVICE();
		static jstring CONNECTIVITY_SERVICE();
		static jstring CONSUMER_IR_SERVICE();
		static jint CONTEXT_IGNORE_SECURITY();
		static jint CONTEXT_INCLUDE_CODE();
		static jint CONTEXT_RESTRICTED();
		static jstring CROSS_PROFILE_APPS_SERVICE();
		static jstring DEVICE_POLICY_SERVICE();
		static jstring DISPLAY_SERVICE();
		static jstring DOWNLOAD_SERVICE();
		static jstring DROPBOX_SERVICE();
		static jstring EUICC_SERVICE();
		static jstring FINGERPRINT_SERVICE();
		static jstring HARDWARE_PROPERTIES_SERVICE();
		static jstring INPUT_METHOD_SERVICE();
		static jstring INPUT_SERVICE();
		static jstring IPSEC_SERVICE();
		static jstring JOB_SCHEDULER_SERVICE();
		static jstring KEYGUARD_SERVICE();
		static jstring LAUNCHER_APPS_SERVICE();
		static jstring LAYOUT_INFLATER_SERVICE();
		static jstring LOCATION_SERVICE();
		static jstring MEDIA_PROJECTION_SERVICE();
		static jstring MEDIA_ROUTER_SERVICE();
		static jstring MEDIA_SESSION_SERVICE();
		static jstring MIDI_SERVICE();
		static jint MODE_APPEND();
		static jint MODE_ENABLE_WRITE_AHEAD_LOGGING();
		static jint MODE_MULTI_PROCESS();
		static jint MODE_NO_LOCALIZED_COLLATORS();
		static jint MODE_PRIVATE();
		static jint MODE_WORLD_READABLE();
		static jint MODE_WORLD_WRITEABLE();
		static jstring NETWORK_STATS_SERVICE();
		static jstring NFC_SERVICE();
		static jstring NOTIFICATION_SERVICE();
		static jstring NSD_SERVICE();
		static jstring POWER_SERVICE();
		static jstring PRINT_SERVICE();
		static jint RECEIVER_VISIBLE_TO_INSTANT_APPS();
		static jstring RESTRICTIONS_SERVICE();
		static jstring SEARCH_SERVICE();
		static jstring SENSOR_SERVICE();
		static jstring SHORTCUT_SERVICE();
		static jstring STORAGE_SERVICE();
		static jstring STORAGE_STATS_SERVICE();
		static jstring SYSTEM_HEALTH_SERVICE();
		static jstring TELECOM_SERVICE();
		static jstring TELEPHONY_SERVICE();
		static jstring TELEPHONY_SUBSCRIPTION_SERVICE();
		static jstring TEXT_CLASSIFICATION_SERVICE();
		static jstring TEXT_SERVICES_MANAGER_SERVICE();
		static jstring TV_INPUT_SERVICE();
		static jstring UI_MODE_SERVICE();
		static jstring USAGE_STATS_SERVICE();
		static jstring USB_SERVICE();
		static jstring USER_SERVICE();
		static jstring VIBRATOR_SERVICE();
		static jstring WALLPAPER_SERVICE();
		static jstring WIFI_AWARE_SERVICE();
		static jstring WIFI_P2P_SERVICE();
		static jstring WIFI_RTT_RANGING_SERVICE();
		static jstring WIFI_SERVICE();
		static jstring WINDOW_SERVICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Context(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Context(QJniObject obj);
		
		// Constructors
		Context();
		
		// Methods
		jboolean bindService(android::content::Intent arg0, __JniBaseClass arg1, jint arg2);
		jint checkCallingOrSelfPermission(jstring arg0);
		jint checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1);
		jint checkCallingPermission(jstring arg0);
		jint checkCallingUriPermission(android::net::Uri arg0, jint arg1);
		jint checkPermission(jstring arg0, jint arg1, jint arg2);
		jint checkSelfPermission(jstring arg0);
		jint checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3);
		jint checkUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5);
		void clearWallpaper();
		android::content::Context createConfigurationContext(android::content::res::Configuration arg0);
		android::content::Context createContextForSplit(jstring arg0);
		android::content::Context createDeviceProtectedStorageContext();
		android::content::Context createDisplayContext(android::view::Display arg0);
		android::content::Context createPackageContext(jstring arg0, jint arg1);
		jarray databaseList();
		jboolean deleteDatabase(jstring arg0);
		jboolean deleteFile(jstring arg0);
		jboolean deleteSharedPreferences(jstring arg0);
		void enforceCallingOrSelfPermission(jstring arg0, jstring arg1);
		void enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, jstring arg2);
		void enforceCallingPermission(jstring arg0, jstring arg1);
		void enforceCallingUriPermission(android::net::Uri arg0, jint arg1, jstring arg2);
		void enforcePermission(jstring arg0, jint arg1, jint arg2, jstring arg3);
		void enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, jstring arg4);
		void enforceUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5, jstring arg6);
		jarray fileList();
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
		java::io::File getDatabasePath(jstring arg0);
		java::io::File getDir(jstring arg0, jint arg1);
		android::graphics::drawable::Drawable getDrawable(jint arg0);
		java::io::File getExternalCacheDir();
		jarray getExternalCacheDirs();
		java::io::File getExternalFilesDir(jstring arg0);
		jarray getExternalFilesDirs(jstring arg0);
		jarray getExternalMediaDirs();
		java::io::File getFileStreamPath(jstring arg0);
		java::io::File getFilesDir();
		__JniBaseClass getMainExecutor();
		android::os::Looper getMainLooper();
		java::io::File getNoBackupFilesDir();
		java::io::File getObbDir();
		jarray getObbDirs();
		jstring getPackageCodePath();
		android::content::pm::PackageManager getPackageManager();
		jstring getPackageName();
		jstring getPackageResourcePath();
		android::content::res::Resources getResources();
		__JniBaseClass getSharedPreferences(jstring arg0, jint arg1);
		jstring getString(jint arg0);
		jstring getString(jint arg0, jobjectArray arg1);
		jobject getSystemService(jclass arg0);
		jobject getSystemService(jstring arg0);
		jstring getSystemServiceName(jclass arg0);
		jstring getText(jint arg0);
		android::content::res::Resources_Theme getTheme();
		android::graphics::drawable::Drawable getWallpaper();
		jint getWallpaperDesiredMinimumHeight();
		jint getWallpaperDesiredMinimumWidth();
		void grantUriPermission(jstring arg0, android::net::Uri arg1, jint arg2);
		jboolean isDeviceProtectedStorage();
		jboolean isRestricted();
		jboolean moveDatabaseFrom(android::content::Context arg0, jstring arg1);
		jboolean moveSharedPreferencesFrom(android::content::Context arg0, jstring arg1);
		android::content::res::TypedArray obtainStyledAttributes(jintArray arg0);
		android::content::res::TypedArray obtainStyledAttributes(__JniBaseClass arg0, jintArray arg1);
		android::content::res::TypedArray obtainStyledAttributes(jint arg0, jintArray arg1);
		android::content::res::TypedArray obtainStyledAttributes(__JniBaseClass arg0, jintArray arg1, jint arg2, jint arg3);
		java::io::FileInputStream openFileInput(jstring arg0);
		java::io::FileOutputStream openFileOutput(jstring arg0, jint arg1);
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2);
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		android::graphics::drawable::Drawable peekWallpaper();
		void registerComponentCallbacks(__JniBaseClass arg0);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3);
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3, jint arg4);
		void removeStickyBroadcast(android::content::Intent arg0);
		void removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void revokeUriPermission(android::net::Uri arg0, jint arg1);
		void revokeUriPermission(jstring arg0, android::net::Uri arg1, jint arg2);
		void sendBroadcast(android::content::Intent arg0);
		void sendBroadcast(android::content::Intent arg0, jstring arg1);
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2);
		void sendOrderedBroadcast(android::content::Intent arg0, jstring arg1);
		void sendOrderedBroadcast(android::content::Intent arg0, jstring arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6);
		void sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, jstring arg6, android::os::Bundle arg7);
		void sendStickyBroadcast(android::content::Intent arg0);
		void sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, jstring arg4, android::os::Bundle arg5);
		void sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6);
		void setTheme(jint arg0);
		void setWallpaper(android::graphics::Bitmap arg0);
		void setWallpaper(java::io::InputStream arg0);
		void startActivities(jarray arg0);
		void startActivities(jarray arg0, android::os::Bundle arg1);
		void startActivity(android::content::Intent arg0);
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1);
		android::content::ComponentName startForegroundService(android::content::Intent arg0);
		jboolean startInstrumentation(android::content::ComponentName arg0, jstring arg1, android::os::Bundle arg2);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5);
		android::content::ComponentName startService(android::content::Intent arg0);
		jboolean stopService(android::content::Intent arg0);
		void unbindService(__JniBaseClass arg0);
		void unregisterComponentCallbacks(__JniBaseClass arg0);
		void unregisterReceiver(android::content::BroadcastReceiver arg0);
	};
} // namespace android::content

