#pragma once

#include "./Context.hpp"

class JArray;
class JArray;
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
	class Context;
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
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;

namespace android::content
{
	class ContextWrapper : public android::content::Context
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContextWrapper(const char *className, const char *sig, Ts...agv) : android::content::Context(className, sig, std::forward<Ts>(agv)...) {}
		ContextWrapper(QAndroidJniObject obj);
		
		// Constructors
		ContextWrapper(android::content::Context arg0);
		
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
		android::content::Context getBaseContext();
		java::io::File getCacheDir();
		java::lang::ClassLoader getClassLoader();
		java::io::File getCodeCacheDir();
		android::content::ContentResolver getContentResolver();
		java::io::File getDataDir();
		java::io::File getDatabasePath(JString arg0);
		java::io::File getDir(JString arg0, jint arg1);
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
		JObject getSystemService(JString arg0);
		JString getSystemServiceName(JClass arg0);
		android::content::res::Resources_Theme getTheme();
		android::graphics::drawable::Drawable getWallpaper();
		jint getWallpaperDesiredMinimumHeight();
		jint getWallpaperDesiredMinimumWidth();
		void grantUriPermission(JString arg0, android::net::Uri arg1, jint arg2);
		jboolean isDeviceProtectedStorage();
		jboolean isRestricted();
		jboolean moveDatabaseFrom(android::content::Context arg0, JString arg1);
		jboolean moveSharedPreferencesFrom(android::content::Context arg0, JString arg1);
		java::io::FileInputStream openFileInput(JString arg0);
		java::io::FileOutputStream openFileOutput(JString arg0, jint arg1);
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2);
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2, JObject arg3);
		android::graphics::drawable::Drawable peekWallpaper();
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
		void unregisterReceiver(android::content::BroadcastReceiver arg0);
	};
} // namespace android::content

