#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Context.hpp"

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
namespace java::lang
{
	class ClassLoader;
}

namespace android::content
{
	class ContextWrapper : public android::content::Context
	{
	public:
		// Fields
		
		ContextWrapper(QAndroidJniObject obj);
		// Constructors
		ContextWrapper(android::content::Context &arg0);
		ContextWrapper() = default;
		
		// Methods
		jboolean bindIsolatedService(android::content::Intent arg0, jint arg1, jstring arg2, __JniBaseClass arg3, __JniBaseClass arg4);
		jboolean bindIsolatedService(android::content::Intent arg0, jint arg1, const QString &arg2, __JniBaseClass arg3, __JniBaseClass arg4);
		jboolean bindService(android::content::Intent arg0, __JniBaseClass arg1, jint arg2);
		jboolean bindService(android::content::Intent arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		jint checkCallingOrSelfPermission(jstring arg0);
		jint checkCallingOrSelfPermission(const QString &arg0);
		jint checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1);
		jint checkCallingPermission(jstring arg0);
		jint checkCallingPermission(const QString &arg0);
		jint checkCallingUriPermission(android::net::Uri arg0, jint arg1);
		jint checkPermission(jstring arg0, jint arg1, jint arg2);
		jint checkPermission(const QString &arg0, jint arg1, jint arg2);
		jint checkSelfPermission(jstring arg0);
		jint checkSelfPermission(const QString &arg0);
		jint checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3);
		jint checkUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5);
		jint checkUriPermission(android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5);
		void clearWallpaper();
		QAndroidJniObject createConfigurationContext(android::content::res::Configuration arg0);
		QAndroidJniObject createContextForSplit(jstring arg0);
		QAndroidJniObject createContextForSplit(const QString &arg0);
		QAndroidJniObject createDeviceProtectedStorageContext();
		QAndroidJniObject createDisplayContext(android::view::Display arg0);
		QAndroidJniObject createPackageContext(jstring arg0, jint arg1);
		QAndroidJniObject createPackageContext(const QString &arg0, jint arg1);
		jarray databaseList();
		jboolean deleteDatabase(jstring arg0);
		jboolean deleteDatabase(const QString &arg0);
		jboolean deleteFile(jstring arg0);
		jboolean deleteFile(const QString &arg0);
		jboolean deleteSharedPreferences(jstring arg0);
		jboolean deleteSharedPreferences(const QString &arg0);
		void enforceCallingOrSelfPermission(jstring arg0, jstring arg1);
		void enforceCallingOrSelfPermission(const QString &arg0, const QString &arg1);
		void enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, jstring arg2);
		void enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, const QString &arg2);
		void enforceCallingPermission(jstring arg0, jstring arg1);
		void enforceCallingPermission(const QString &arg0, const QString &arg1);
		void enforceCallingUriPermission(android::net::Uri arg0, jint arg1, jstring arg2);
		void enforceCallingUriPermission(android::net::Uri arg0, jint arg1, const QString &arg2);
		void enforcePermission(jstring arg0, jint arg1, jint arg2, jstring arg3);
		void enforcePermission(const QString &arg0, jint arg1, jint arg2, const QString &arg3);
		void enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, jstring arg4);
		void enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, const QString &arg4);
		void enforceUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5, jstring arg6);
		void enforceUriPermission(android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5, const QString &arg6);
		jarray fileList();
		QAndroidJniObject getApplicationContext();
		QAndroidJniObject getApplicationInfo();
		QAndroidJniObject getAssets();
		QAndroidJniObject getBaseContext();
		QAndroidJniObject getCacheDir();
		QAndroidJniObject getClassLoader();
		QAndroidJniObject getCodeCacheDir();
		QAndroidJniObject getContentResolver();
		QAndroidJniObject getDataDir();
		QAndroidJniObject getDatabasePath(jstring arg0);
		QAndroidJniObject getDatabasePath(const QString &arg0);
		QAndroidJniObject getDir(jstring arg0, jint arg1);
		QAndroidJniObject getDir(const QString &arg0, jint arg1);
		QAndroidJniObject getExternalCacheDir();
		jarray getExternalCacheDirs();
		QAndroidJniObject getExternalFilesDir(jstring arg0);
		QAndroidJniObject getExternalFilesDir(const QString &arg0);
		jarray getExternalFilesDirs(jstring arg0);
		jarray getExternalFilesDirs(const QString &arg0);
		jarray getExternalMediaDirs();
		QAndroidJniObject getFileStreamPath(jstring arg0);
		QAndroidJniObject getFileStreamPath(const QString &arg0);
		QAndroidJniObject getFilesDir();
		QAndroidJniObject getMainExecutor();
		QAndroidJniObject getMainLooper();
		QAndroidJniObject getNoBackupFilesDir();
		QAndroidJniObject getObbDir();
		jarray getObbDirs();
		jstring getOpPackageName();
		jstring getPackageCodePath();
		QAndroidJniObject getPackageManager();
		jstring getPackageName();
		jstring getPackageResourcePath();
		QAndroidJniObject getResources();
		QAndroidJniObject getSharedPreferences(jstring arg0, jint arg1);
		QAndroidJniObject getSharedPreferences(const QString &arg0, jint arg1);
		jobject getSystemService(jstring arg0);
		jobject getSystemService(const QString &arg0);
		jstring getSystemServiceName(jclass arg0);
		QAndroidJniObject getTheme();
		QAndroidJniObject getWallpaper();
		jint getWallpaperDesiredMinimumHeight();
		jint getWallpaperDesiredMinimumWidth();
		void grantUriPermission(jstring arg0, android::net::Uri arg1, jint arg2);
		void grantUriPermission(const QString &arg0, android::net::Uri arg1, jint arg2);
		jboolean isDeviceProtectedStorage();
		jboolean isRestricted();
		jboolean moveDatabaseFrom(android::content::Context arg0, jstring arg1);
		jboolean moveDatabaseFrom(android::content::Context arg0, const QString &arg1);
		jboolean moveSharedPreferencesFrom(android::content::Context arg0, jstring arg1);
		jboolean moveSharedPreferencesFrom(android::content::Context arg0, const QString &arg1);
		QAndroidJniObject openFileInput(jstring arg0);
		QAndroidJniObject openFileInput(const QString &arg0);
		QAndroidJniObject openFileOutput(jstring arg0, jint arg1);
		QAndroidJniObject openFileOutput(const QString &arg0, jint arg1);
		QAndroidJniObject openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2);
		QAndroidJniObject openOrCreateDatabase(const QString &arg0, jint arg1, __JniBaseClass arg2);
		QAndroidJniObject openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		QAndroidJniObject openOrCreateDatabase(const QString &arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		QAndroidJniObject peekWallpaper();
		QAndroidJniObject registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1);
		QAndroidJniObject registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2);
		QAndroidJniObject registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3);
		QAndroidJniObject registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, const QString &arg2, android::os::Handler arg3);
		QAndroidJniObject registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3, jint arg4);
		QAndroidJniObject registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, const QString &arg2, android::os::Handler arg3, jint arg4);
		void removeStickyBroadcast(android::content::Intent arg0);
		void removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void revokeUriPermission(android::net::Uri arg0, jint arg1);
		void revokeUriPermission(jstring arg0, android::net::Uri arg1, jint arg2);
		void revokeUriPermission(const QString &arg0, android::net::Uri arg1, jint arg2);
		void sendBroadcast(android::content::Intent arg0);
		void sendBroadcast(android::content::Intent arg0, jstring arg1);
		void sendBroadcast(android::content::Intent arg0, const QString &arg1);
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2);
		void sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, const QString &arg2);
		void sendOrderedBroadcast(android::content::Intent arg0, jstring arg1);
		void sendOrderedBroadcast(android::content::Intent arg0, const QString &arg1);
		void sendOrderedBroadcast(android::content::Intent arg0, jstring arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6);
		void sendOrderedBroadcast(android::content::Intent arg0, const QString &arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, const QString &arg5, android::os::Bundle arg6);
		void sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, jstring arg6, android::os::Bundle arg7);
		void sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, const QString &arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, const QString &arg6, android::os::Bundle arg7);
		void sendStickyBroadcast(android::content::Intent arg0);
		void sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1);
		void sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, jstring arg4, android::os::Bundle arg5);
		void sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, const QString &arg4, android::os::Bundle arg5);
		void sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6);
		void sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, const QString &arg5, android::os::Bundle arg6);
		void setTheme(jint arg0);
		void setWallpaper(android::graphics::Bitmap arg0);
		void setWallpaper(java::io::InputStream arg0);
		void startActivities(jarray arg0);
		void startActivities(jarray arg0, android::os::Bundle arg1);
		void startActivity(android::content::Intent arg0);
		void startActivity(android::content::Intent arg0, android::os::Bundle arg1);
		QAndroidJniObject startForegroundService(android::content::Intent arg0);
		jboolean startInstrumentation(android::content::ComponentName arg0, jstring arg1, android::os::Bundle arg2);
		jboolean startInstrumentation(android::content::ComponentName arg0, const QString &arg1, android::os::Bundle arg2);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4);
		void startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5);
		QAndroidJniObject startService(android::content::Intent arg0);
		jboolean stopService(android::content::Intent arg0);
		void unbindService(__JniBaseClass arg0);
		void unregisterReceiver(android::content::BroadcastReceiver arg0);
		void updateServiceGroup(__JniBaseClass arg0, jint arg1, jint arg2);
	};
} // namespace android::content

