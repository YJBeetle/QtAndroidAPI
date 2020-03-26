#pragma once

#ifndef ANDROID_CONTENT_CONTEXTWRAPPER
#define ANDROID_CONTENT_CONTEXTWRAPPER

#include "../../__JniBaseClass.hpp"
#include "Context.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::java::io
{
	class FileInputStream;
}
namespace __jni_impl::java::io
{
	class FileOutputStream;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::content
{
	class BroadcastReceiver;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::content
{
	class IntentFilter;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::view
{
	class Display;
}

namespace __jni_impl::android::content
{
	class ContextWrapper : public __jni_impl::android::content::Context
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject getClassLoader();
		jint checkPermission(jstring arg0, jint arg1, jint arg2);
		jstring getPackageName();
		QAndroidJniObject getResources();
		QAndroidJniObject getBaseContext();
		QAndroidJniObject getAssets();
		QAndroidJniObject getPackageManager();
		QAndroidJniObject getContentResolver();
		QAndroidJniObject getMainLooper();
		QAndroidJniObject getMainExecutor();
		QAndroidJniObject getApplicationContext();
		void setTheme(jint arg0);
		QAndroidJniObject getTheme();
		jstring getOpPackageName();
		QAndroidJniObject getApplicationInfo();
		jstring getPackageResourcePath();
		jstring getPackageCodePath();
		QAndroidJniObject getSharedPreferences(jstring arg0, jint arg1);
		jboolean moveSharedPreferencesFrom(__jni_impl::android::content::Context arg0, jstring arg1);
		jboolean deleteSharedPreferences(jstring arg0);
		QAndroidJniObject openFileInput(jstring arg0);
		QAndroidJniObject openFileOutput(jstring arg0, jint arg1);
		jboolean deleteFile(jstring arg0);
		QAndroidJniObject getFileStreamPath(jstring arg0);
		QAndroidJniObject getDataDir();
		QAndroidJniObject getFilesDir();
		QAndroidJniObject getNoBackupFilesDir();
		QAndroidJniObject getExternalFilesDir(jstring arg0);
		jarray getExternalFilesDirs(jstring arg0);
		QAndroidJniObject getObbDir();
		jarray getObbDirs();
		QAndroidJniObject getCacheDir();
		QAndroidJniObject getCodeCacheDir();
		QAndroidJniObject getExternalCacheDir();
		jarray getExternalCacheDirs();
		jarray getExternalMediaDirs();
		QAndroidJniObject getDir(jstring arg0, jint arg1);
		QAndroidJniObject openOrCreateDatabase(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject openOrCreateDatabase(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		jboolean moveDatabaseFrom(__jni_impl::android::content::Context arg0, jstring arg1);
		jboolean deleteDatabase(jstring arg0);
		QAndroidJniObject getDatabasePath(jstring arg0);
		jarray databaseList();
		QAndroidJniObject getWallpaper();
		QAndroidJniObject peekWallpaper();
		jint getWallpaperDesiredMinimumWidth();
		jint getWallpaperDesiredMinimumHeight();
		void setWallpaper(__jni_impl::java::io::InputStream arg0);
		void setWallpaper(__jni_impl::android::graphics::Bitmap arg0);
		void clearWallpaper();
		void startActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1);
		void startActivity(__jni_impl::android::content::Intent arg0);
		void startActivities(jarray arg0, __jni_impl::android::os::Bundle arg1);
		void startActivities(jarray arg0);
		void startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5);
		void startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4);
		void sendBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1);
		void sendBroadcast(__jni_impl::android::content::Intent arg0);
		void sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, jstring arg5, __jni_impl::android::os::Bundle arg6);
		void sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1);
		void sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, jstring arg2);
		void sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1);
		void sendOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, jstring arg2, __jni_impl::android::content::BroadcastReceiver arg3, __jni_impl::android::os::Handler arg4, jint arg5, jstring arg6, __jni_impl::android::os::Bundle arg7);
		void sendStickyBroadcast(__jni_impl::android::content::Intent arg0);
		void sendStickyOrderedBroadcast(__jni_impl::android::content::Intent arg0, __jni_impl::android::content::BroadcastReceiver arg1, __jni_impl::android::os::Handler arg2, jint arg3, jstring arg4, __jni_impl::android::os::Bundle arg5);
		void removeStickyBroadcast(__jni_impl::android::content::Intent arg0);
		void sendStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1);
		void sendStickyOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, jstring arg5, __jni_impl::android::os::Bundle arg6);
		void removeStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jstring arg2, __jni_impl::android::os::Handler arg3, jint arg4);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jstring arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jint arg2);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1);
		void unregisterReceiver(__jni_impl::android::content::BroadcastReceiver arg0);
		QAndroidJniObject startService(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject startForegroundService(__jni_impl::android::content::Intent arg0);
		jboolean stopService(__jni_impl::android::content::Intent arg0);
		jboolean bindService(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		jboolean bindService(__jni_impl::android::content::Intent arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		jboolean bindIsolatedService(__jni_impl::android::content::Intent arg0, jint arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		void updateServiceGroup(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
		void unbindService(__jni_impl::__JniBaseClass arg0);
		jboolean startInstrumentation(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		jobject getSystemService(jstring arg0);
		jstring getSystemServiceName(jclass arg0);
		jint checkCallingPermission(jstring arg0);
		jint checkCallingOrSelfPermission(jstring arg0);
		jint checkSelfPermission(jstring arg0);
		void enforcePermission(jstring arg0, jint arg1, jint arg2, jstring arg3);
		void enforceCallingPermission(jstring arg0, jstring arg1);
		void enforceCallingOrSelfPermission(jstring arg0, jstring arg1);
		void grantUriPermission(jstring arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		void revokeUriPermission(jstring arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		void revokeUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		jint checkUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3);
		jint checkUriPermission(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5);
		jint checkCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		jint checkCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		void enforceUriPermission(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5, jstring arg6);
		void enforceUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3, jstring arg4);
		void enforceCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jstring arg2);
		void enforceCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jstring arg2);
		QAndroidJniObject createPackageContext(jstring arg0, jint arg1);
		QAndroidJniObject createContextForSplit(jstring arg0);
		QAndroidJniObject createConfigurationContext(__jni_impl::android::content::res::Configuration arg0);
		QAndroidJniObject createDisplayContext(__jni_impl::android::view::Display arg0);
		QAndroidJniObject createDeviceProtectedStorageContext();
		jboolean isRestricted();
		jboolean isDeviceProtectedStorage();
		jarray fileList();
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "res/Resources.hpp"
#include "res/AssetManager.hpp"
#include "pm/PackageManager.hpp"
#include "ContentResolver.hpp"
#include "../os/Looper.hpp"
#include "res/Resources_Theme.hpp"
#include "pm/ApplicationInfo.hpp"
#include "../../java/io/FileInputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"
#include "../../java/io/File.hpp"
#include "../database/sqlite/SQLiteDatabase.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../../java/io/InputStream.hpp"
#include "../graphics/Bitmap.hpp"
#include "Intent.hpp"
#include "../os/Bundle.hpp"
#include "IntentSender.hpp"
#include "BroadcastReceiver.hpp"
#include "../os/Handler.hpp"
#include "../os/UserHandle.hpp"
#include "IntentFilter.hpp"
#include "ComponentName.hpp"
#include "../net/Uri.hpp"
#include "res/Configuration.hpp"
#include "../view/Display.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContextWrapper::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContextWrapper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ContextWrapper::getClassLoader()
	{
		return __thiz.callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	jint ContextWrapper::checkPermission(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring ContextWrapper::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContextWrapper::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	QAndroidJniObject ContextWrapper::getBaseContext()
	{
		return __thiz.callObjectMethod(
			"getBaseContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject ContextWrapper::getAssets()
	{
		return __thiz.callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	QAndroidJniObject ContextWrapper::getPackageManager()
	{
		return __thiz.callObjectMethod(
			"getPackageManager",
			"()Landroid/content/pm/PackageManager;"
		);
	}
	QAndroidJniObject ContextWrapper::getContentResolver()
	{
		return __thiz.callObjectMethod(
			"getContentResolver",
			"()Landroid/content/ContentResolver;"
		);
	}
	QAndroidJniObject ContextWrapper::getMainLooper()
	{
		return __thiz.callObjectMethod(
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	QAndroidJniObject ContextWrapper::getMainExecutor()
	{
		return __thiz.callObjectMethod(
			"getMainExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject ContextWrapper::getApplicationContext()
	{
		return __thiz.callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	void ContextWrapper::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::getTheme()
	{
		return __thiz.callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	jstring ContextWrapper::getOpPackageName()
	{
		return __thiz.callObjectMethod(
			"getOpPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContextWrapper::getApplicationInfo()
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	jstring ContextWrapper::getPackageResourcePath()
	{
		return __thiz.callObjectMethod(
			"getPackageResourcePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContextWrapper::getPackageCodePath()
	{
		return __thiz.callObjectMethod(
			"getPackageCodePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContextWrapper::getSharedPreferences(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			arg0,
			arg1
		);
	}
	jboolean ContextWrapper::moveSharedPreferencesFrom(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ContextWrapper::deleteSharedPreferences(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::openFileInput(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::openFileOutput(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			arg0,
			arg1
		);
	}
	jboolean ContextWrapper::deleteFile(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::getFileStreamPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::getDataDir()
	{
		return __thiz.callObjectMethod(
			"getDataDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getFilesDir()
	{
		return __thiz.callObjectMethod(
			"getFilesDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getNoBackupFilesDir()
	{
		return __thiz.callObjectMethod(
			"getNoBackupFilesDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getExternalFilesDir(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	jarray ContextWrapper::getExternalFilesDirs(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject ContextWrapper::getObbDir()
	{
		return __thiz.callObjectMethod(
			"getObbDir",
			"()Ljava/io/File;"
		);
	}
	jarray ContextWrapper::getObbDirs()
	{
		return __thiz.callObjectMethod(
			"getObbDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	QAndroidJniObject ContextWrapper::getCacheDir()
	{
		return __thiz.callObjectMethod(
			"getCacheDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getCodeCacheDir()
	{
		return __thiz.callObjectMethod(
			"getCodeCacheDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getExternalCacheDir()
	{
		return __thiz.callObjectMethod(
			"getExternalCacheDir",
			"()Ljava/io/File;"
		);
	}
	jarray ContextWrapper::getExternalCacheDirs()
	{
		return __thiz.callObjectMethod(
			"getExternalCacheDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	jarray ContextWrapper::getExternalMediaDirs()
	{
		return __thiz.callObjectMethod(
			"getExternalMediaDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	QAndroidJniObject ContextWrapper::getDir(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContextWrapper::openOrCreateDatabase(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::openOrCreateDatabase(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean ContextWrapper::moveDatabaseFrom(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean ContextWrapper::deleteDatabase(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::getDatabasePath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	jarray ContextWrapper::databaseList()
	{
		return __thiz.callObjectMethod(
			"databaseList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject ContextWrapper::getWallpaper()
	{
		return __thiz.callObjectMethod(
			"getWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject ContextWrapper::peekWallpaper()
	{
		return __thiz.callObjectMethod(
			"peekWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getWallpaperDesiredMinimumWidth",
			"()I"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getWallpaperDesiredMinimumHeight",
			"()I"
		);
	}
	void ContextWrapper::setWallpaper(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setWallpaper",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextWrapper::setWallpaper(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setWallpaper",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextWrapper::clearWallpaper()
	{
		__thiz.callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	void ContextWrapper::startActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContextWrapper::startActivity(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextWrapper::startActivities(jarray arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContextWrapper::startActivities(jarray arg0)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0
		);
	}
	void ContextWrapper::startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void ContextWrapper::startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	void ContextWrapper::sendBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContextWrapper::sendBroadcast(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextWrapper::sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, jstring arg5, __jni_impl::android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void ContextWrapper::sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContextWrapper::sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ContextWrapper::sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContextWrapper::sendOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, jstring arg2, __jni_impl::android::content::BroadcastReceiver arg3, __jni_impl::android::os::Handler arg4, jint arg5, jstring arg6, __jni_impl::android::os::Bundle arg7)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void ContextWrapper::sendStickyBroadcast(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"sendStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextWrapper::sendStickyOrderedBroadcast(__jni_impl::android::content::Intent arg0, __jni_impl::android::content::BroadcastReceiver arg1, __jni_impl::android::os::Handler arg2, jint arg3, jstring arg4, __jni_impl::android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcast",
			"(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void ContextWrapper::removeStickyBroadcast(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"removeStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void ContextWrapper::sendStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"sendStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContextWrapper::sendStickyOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, jstring arg5, __jni_impl::android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void ContextWrapper::removeStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"removeStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jstring arg2, __jni_impl::android::os::Handler arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;I)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject ContextWrapper::registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jstring arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;I)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject ContextWrapper::registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContextWrapper::unregisterReceiver(__jni_impl::android::content::BroadcastReceiver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterReceiver",
			"(Landroid/content/BroadcastReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::startService(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"startService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::startForegroundService(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"startForegroundService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	jboolean ContextWrapper::stopService(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"stopService",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean ContextWrapper::bindService(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;ILjava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean ContextWrapper::bindService(__jni_impl::android::content::Intent arg0, __jni_impl::__JniBaseClass arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean ContextWrapper::bindIsolatedService(__jni_impl::android::content::Intent arg0, jint arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		return __thiz.callMethod<jboolean>(
			"bindIsolatedService",
			"(Landroid/content/Intent;ILjava/lang/String;Ljava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void ContextWrapper::updateServiceGroup(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"updateServiceGroup",
			"(Landroid/content/ServiceConnection;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ContextWrapper::unbindService(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unbindService",
			"(Landroid/content/ServiceConnection;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ContextWrapper::startInstrumentation(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jobject ContextWrapper::getSystemService(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring ContextWrapper::getSystemServiceName(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemServiceName",
			"(Ljava/lang/Class;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint ContextWrapper::checkCallingPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ContextWrapper::checkCallingOrSelfPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ContextWrapper::checkSelfPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	void ContextWrapper::enforcePermission(jstring arg0, jint arg1, jint arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"enforcePermission",
			"(Ljava/lang/String;IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ContextWrapper::enforceCallingPermission(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContextWrapper::enforceCallingOrSelfPermission(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContextWrapper::grantUriPermission(jstring arg0, __jni_impl::android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ContextWrapper::revokeUriPermission(jstring arg0, __jni_impl::android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ContextWrapper::revokeUriPermission(__jni_impl::android::net::Uri arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"revokeUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint ContextWrapper::checkUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;III)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint ContextWrapper::checkUriPermission(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint ContextWrapper::checkCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkCallingUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint ContextWrapper::checkCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkCallingOrSelfUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContextWrapper::enforceUriPermission(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5, jstring arg6)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void ContextWrapper::enforceUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3, jstring arg4)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void ContextWrapper::enforceCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ContextWrapper::enforceCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ContextWrapper::createPackageContext(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContextWrapper::createContextForSplit(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::createConfigurationContext(__jni_impl::android::content::res::Configuration arg0)
	{
		return __thiz.callObjectMethod(
			"createConfigurationContext",
			"(Landroid/content/res/Configuration;)Landroid/content/Context;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::createDisplayContext(__jni_impl::android::view::Display arg0)
	{
		return __thiz.callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::createDeviceProtectedStorageContext()
	{
		return __thiz.callObjectMethod(
			"createDeviceProtectedStorageContext",
			"()Landroid/content/Context;"
		);
	}
	jboolean ContextWrapper::isRestricted()
	{
		return __thiz.callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	jboolean ContextWrapper::isDeviceProtectedStorage()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceProtectedStorage",
			"()Z"
		);
	}
	jarray ContextWrapper::fileList()
	{
		return __thiz.callObjectMethod(
			"fileList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContextWrapper : public __jni_impl::android::content::ContextWrapper
	{
	public:
		ContextWrapper(QAndroidJniObject obj) { __thiz = obj; }
		ContextWrapper(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTEXTWRAPPER

