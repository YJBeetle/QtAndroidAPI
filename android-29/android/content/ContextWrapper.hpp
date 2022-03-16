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
		ContextWrapper(QAndroidJniObject obj) : android::content::Context(obj) {}
		
		// Constructors
		ContextWrapper(android::content::Context arg0);
		
		// Methods
		jboolean bindIsolatedService(android::content::Intent arg0, jint arg1, JString arg2, JObject arg3, JObject arg4) const;
		jboolean bindService(android::content::Intent arg0, JObject arg1, jint arg2) const;
		jboolean bindService(android::content::Intent arg0, jint arg1, JObject arg2, JObject arg3) const;
		jint checkCallingOrSelfPermission(JString arg0) const;
		jint checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1) const;
		jint checkCallingPermission(JString arg0) const;
		jint checkCallingUriPermission(android::net::Uri arg0, jint arg1) const;
		jint checkPermission(JString arg0, jint arg1, jint arg2) const;
		jint checkSelfPermission(JString arg0) const;
		jint checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3) const;
		jint checkUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5) const;
		void clearWallpaper() const;
		android::content::Context createConfigurationContext(android::content::res::Configuration arg0) const;
		android::content::Context createContextForSplit(JString arg0) const;
		android::content::Context createDeviceProtectedStorageContext() const;
		android::content::Context createDisplayContext(android::view::Display arg0) const;
		android::content::Context createPackageContext(JString arg0, jint arg1) const;
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
		android::content::Context getBaseContext() const;
		java::io::File getCacheDir() const;
		java::lang::ClassLoader getClassLoader() const;
		java::io::File getCodeCacheDir() const;
		android::content::ContentResolver getContentResolver() const;
		java::io::File getDataDir() const;
		java::io::File getDatabasePath(JString arg0) const;
		java::io::File getDir(JString arg0, jint arg1) const;
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
		android::content::res::Resources getResources() const;
		JObject getSharedPreferences(JString arg0, jint arg1) const;
		JObject getSystemService(JString arg0) const;
		JString getSystemServiceName(JClass arg0) const;
		android::content::res::Resources_Theme getTheme() const;
		android::graphics::drawable::Drawable getWallpaper() const;
		jint getWallpaperDesiredMinimumHeight() const;
		jint getWallpaperDesiredMinimumWidth() const;
		void grantUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const;
		jboolean isDeviceProtectedStorage() const;
		jboolean isRestricted() const;
		jboolean moveDatabaseFrom(android::content::Context arg0, JString arg1) const;
		jboolean moveSharedPreferencesFrom(android::content::Context arg0, JString arg1) const;
		java::io::FileInputStream openFileInput(JString arg0) const;
		java::io::FileOutputStream openFileOutput(JString arg0, jint arg1) const;
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2) const;
		android::database::sqlite::SQLiteDatabase openOrCreateDatabase(JString arg0, jint arg1, JObject arg2, JObject arg3) const;
		android::graphics::drawable::Drawable peekWallpaper() const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1) const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2) const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3) const;
		android::content::Intent registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3, jint arg4) const;
		void removeStickyBroadcast(android::content::Intent arg0) const;
		void removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const;
		void revokeUriPermission(android::net::Uri arg0, jint arg1) const;
		void revokeUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const;
		void sendBroadcast(android::content::Intent arg0) const;
		void sendBroadcast(android::content::Intent arg0, JString arg1) const;
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const;
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2) const;
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1) const;
		void sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6) const;
		void sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7) const;
		void sendStickyBroadcast(android::content::Intent arg0) const;
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
		void unregisterReceiver(android::content::BroadcastReceiver arg0) const;
		void updateServiceGroup(JObject arg0, jint arg1, jint arg2) const;
	};
} // namespace android::content

