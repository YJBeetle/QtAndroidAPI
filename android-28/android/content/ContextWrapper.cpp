#include "./BroadcastReceiver.hpp"
#include "./ComponentName.hpp"
#include "./ContentResolver.hpp"
#include "./Context.hpp"
#include "./Intent.hpp"
#include "./IntentFilter.hpp"
#include "./IntentSender.hpp"
#include "./pm/ApplicationInfo.hpp"
#include "./pm/PackageManager.hpp"
#include "./res/AssetManager.hpp"
#include "./res/Configuration.hpp"
#include "./res/Resources.hpp"
#include "./res/Resources_Theme.hpp"
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
#include "../../java/lang/ClassLoader.hpp"
#include "./ContextWrapper.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	ContextWrapper::ContextWrapper(QJniObject obj) : android::content::Context(obj) {}
	
	// Constructors
	ContextWrapper::ContextWrapper(android::content::Context arg0)
		: android::content::Context(
			"android.content.ContextWrapper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ContextWrapper::bindService(android::content::Intent arg0, __JniBaseClass arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint ContextWrapper::checkCallingOrSelfPermission(jstring arg0)
	{
		return callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ContextWrapper::checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1)
	{
		return callMethod<jint>(
			"checkCallingOrSelfUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint ContextWrapper::checkCallingPermission(jstring arg0)
	{
		return callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ContextWrapper::checkCallingUriPermission(android::net::Uri arg0, jint arg1)
	{
		return callMethod<jint>(
			"checkCallingUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint ContextWrapper::checkPermission(jstring arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint ContextWrapper::checkSelfPermission(jstring arg0)
	{
		return callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ContextWrapper::checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3)
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
	jint ContextWrapper::checkUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5)
	{
		return callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void ContextWrapper::clearWallpaper()
	{
		callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	android::content::Context ContextWrapper::createConfigurationContext(android::content::res::Configuration arg0)
	{
		return callObjectMethod(
			"createConfigurationContext",
			"(Landroid/content/res/Configuration;)Landroid/content/Context;",
			arg0.object()
		);
	}
	android::content::Context ContextWrapper::createContextForSplit(jstring arg0)
	{
		return callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0
		);
	}
	android::content::Context ContextWrapper::createDeviceProtectedStorageContext()
	{
		return callObjectMethod(
			"createDeviceProtectedStorageContext",
			"()Landroid/content/Context;"
		);
	}
	android::content::Context ContextWrapper::createDisplayContext(android::view::Display arg0)
	{
		return callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.object()
		);
	}
	android::content::Context ContextWrapper::createPackageContext(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			arg0,
			arg1
		);
	}
	jarray ContextWrapper::databaseList()
	{
		return callObjectMethod(
			"databaseList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean ContextWrapper::deleteDatabase(jstring arg0)
	{
		return callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ContextWrapper::deleteFile(jstring arg0)
	{
		return callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ContextWrapper::deleteSharedPreferences(jstring arg0)
	{
		return callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void ContextWrapper::enforceCallingOrSelfPermission(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContextWrapper::enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, jstring arg2)
	{
		callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ContextWrapper::enforceCallingPermission(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContextWrapper::enforceCallingUriPermission(android::net::Uri arg0, jint arg1, jstring arg2)
	{
		callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ContextWrapper::enforcePermission(jstring arg0, jint arg1, jint arg2, jstring arg3)
	{
		callMethod<void>(
			"enforcePermission",
			"(Ljava/lang/String;IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ContextWrapper::enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, jstring arg4)
	{
		callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;IIILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void ContextWrapper::enforceUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5, jstring arg6)
	{
		callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jarray ContextWrapper::fileList()
	{
		return callObjectMethod(
			"fileList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	android::content::Context ContextWrapper::getApplicationContext()
	{
		return callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	android::content::pm::ApplicationInfo ContextWrapper::getApplicationInfo()
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	android::content::res::AssetManager ContextWrapper::getAssets()
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	android::content::Context ContextWrapper::getBaseContext()
	{
		return callObjectMethod(
			"getBaseContext",
			"()Landroid/content/Context;"
		);
	}
	java::io::File ContextWrapper::getCacheDir()
	{
		return callObjectMethod(
			"getCacheDir",
			"()Ljava/io/File;"
		);
	}
	java::lang::ClassLoader ContextWrapper::getClassLoader()
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::io::File ContextWrapper::getCodeCacheDir()
	{
		return callObjectMethod(
			"getCodeCacheDir",
			"()Ljava/io/File;"
		);
	}
	android::content::ContentResolver ContextWrapper::getContentResolver()
	{
		return callObjectMethod(
			"getContentResolver",
			"()Landroid/content/ContentResolver;"
		);
	}
	java::io::File ContextWrapper::getDataDir()
	{
		return callObjectMethod(
			"getDataDir",
			"()Ljava/io/File;"
		);
	}
	java::io::File ContextWrapper::getDatabasePath(jstring arg0)
	{
		return callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	java::io::File ContextWrapper::getDir(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			arg0,
			arg1
		);
	}
	java::io::File ContextWrapper::getExternalCacheDir()
	{
		return callObjectMethod(
			"getExternalCacheDir",
			"()Ljava/io/File;"
		);
	}
	jarray ContextWrapper::getExternalCacheDirs()
	{
		return callObjectMethod(
			"getExternalCacheDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	java::io::File ContextWrapper::getExternalFilesDir(jstring arg0)
	{
		return callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	jarray ContextWrapper::getExternalFilesDirs(jstring arg0)
	{
		return callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			arg0
		).object<jarray>();
	}
	jarray ContextWrapper::getExternalMediaDirs()
	{
		return callObjectMethod(
			"getExternalMediaDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	java::io::File ContextWrapper::getFileStreamPath(jstring arg0)
	{
		return callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	java::io::File ContextWrapper::getFilesDir()
	{
		return callObjectMethod(
			"getFilesDir",
			"()Ljava/io/File;"
		);
	}
	__JniBaseClass ContextWrapper::getMainExecutor()
	{
		return callObjectMethod(
			"getMainExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	android::os::Looper ContextWrapper::getMainLooper()
	{
		return callObjectMethod(
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	java::io::File ContextWrapper::getNoBackupFilesDir()
	{
		return callObjectMethod(
			"getNoBackupFilesDir",
			"()Ljava/io/File;"
		);
	}
	java::io::File ContextWrapper::getObbDir()
	{
		return callObjectMethod(
			"getObbDir",
			"()Ljava/io/File;"
		);
	}
	jarray ContextWrapper::getObbDirs()
	{
		return callObjectMethod(
			"getObbDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	jstring ContextWrapper::getPackageCodePath()
	{
		return callObjectMethod(
			"getPackageCodePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::pm::PackageManager ContextWrapper::getPackageManager()
	{
		return callObjectMethod(
			"getPackageManager",
			"()Landroid/content/pm/PackageManager;"
		);
	}
	jstring ContextWrapper::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContextWrapper::getPackageResourcePath()
	{
		return callObjectMethod(
			"getPackageResourcePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::res::Resources ContextWrapper::getResources()
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	__JniBaseClass ContextWrapper::getSharedPreferences(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			arg0,
			arg1
		);
	}
	jobject ContextWrapper::getSystemService(jstring arg0)
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring ContextWrapper::getSystemServiceName(jclass arg0)
	{
		return callObjectMethod(
			"getSystemServiceName",
			"(Ljava/lang/Class;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::content::res::Resources_Theme ContextWrapper::getTheme()
	{
		return callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	android::graphics::drawable::Drawable ContextWrapper::getWallpaper()
	{
		return callObjectMethod(
			"getWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumHeight()
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumHeight",
			"()I"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumWidth()
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumWidth",
			"()I"
		);
	}
	void ContextWrapper::grantUriPermission(jstring arg0, android::net::Uri arg1, jint arg2)
	{
		callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	jboolean ContextWrapper::isDeviceProtectedStorage()
	{
		return callMethod<jboolean>(
			"isDeviceProtectedStorage",
			"()Z"
		);
	}
	jboolean ContextWrapper::isRestricted()
	{
		return callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	jboolean ContextWrapper::moveDatabaseFrom(android::content::Context arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean ContextWrapper::moveSharedPreferencesFrom(android::content::Context arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1
		);
	}
	java::io::FileInputStream ContextWrapper::openFileInput(jstring arg0)
	{
		return callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			arg0
		);
	}
	java::io::FileOutputStream ContextWrapper::openFileOutput(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			arg0,
			arg1
		);
	}
	android::database::sqlite::SQLiteDatabase ContextWrapper::openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::database::sqlite::SQLiteDatabase ContextWrapper::openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	android::graphics::drawable::Drawable ContextWrapper::peekWallpaper()
	{
		return callObjectMethod(
			"peekWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1)
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2)
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;I)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3)
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3, jint arg4)
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;I)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		);
	}
	void ContextWrapper::removeStickyBroadcast(android::content::Intent arg0)
	{
		callMethod<void>(
			"removeStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"removeStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContextWrapper::revokeUriPermission(android::net::Uri arg0, jint arg1)
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	void ContextWrapper::revokeUriPermission(jstring arg0, android::net::Uri arg1, jint arg2)
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	void ContextWrapper::sendBroadcast(android::content::Intent arg0)
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::sendBroadcast(android::content::Intent arg0, jstring arg1)
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void ContextWrapper::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContextWrapper::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2)
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void ContextWrapper::sendOrderedBroadcast(android::content::Intent arg0, jstring arg1)
	{
		callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void ContextWrapper::sendOrderedBroadcast(android::content::Intent arg0, jstring arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6)
	{
		callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	void ContextWrapper::sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, jstring arg6, android::os::Bundle arg7)
	{
		callMethod<void>(
			"sendOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object(),
			arg5,
			arg6,
			arg7.object()
		);
	}
	void ContextWrapper::sendStickyBroadcast(android::content::Intent arg0)
	{
		callMethod<void>(
			"sendStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		callMethod<void>(
			"sendStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContextWrapper::sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, jstring arg4, android::os::Bundle arg5)
	{
		callMethod<void>(
			"sendStickyOrderedBroadcast",
			"(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3,
			arg4,
			arg5.object()
		);
	}
	void ContextWrapper::sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6)
	{
		callMethod<void>(
			"sendStickyOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4,
			arg5,
			arg6.object()
		);
	}
	void ContextWrapper::setTheme(jint arg0)
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void ContextWrapper::setWallpaper(android::graphics::Bitmap arg0)
	{
		callMethod<void>(
			"setWallpaper",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void ContextWrapper::setWallpaper(java::io::InputStream arg0)
	{
		callMethod<void>(
			"setWallpaper",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void ContextWrapper::startActivities(jarray arg0)
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0
		);
	}
	void ContextWrapper::startActivities(jarray arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void ContextWrapper::startActivity(android::content::Intent arg0)
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::startActivity(android::content::Intent arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ComponentName ContextWrapper::startForegroundService(android::content::Intent arg0)
	{
		return callObjectMethod(
			"startForegroundService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	jboolean ContextWrapper::startInstrumentation(android::content::ComponentName arg0, jstring arg1, android::os::Bundle arg2)
	{
		return callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void ContextWrapper::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4)
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
	void ContextWrapper::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
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
	android::content::ComponentName ContextWrapper::startService(android::content::Intent arg0)
	{
		return callObjectMethod(
			"startService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	jboolean ContextWrapper::stopService(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"stopService",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void ContextWrapper::unbindService(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unbindService",
			"(Landroid/content/ServiceConnection;)V",
			arg0.object()
		);
	}
	void ContextWrapper::unregisterReceiver(android::content::BroadcastReceiver arg0)
	{
		callMethod<void>(
			"unregisterReceiver",
			"(Landroid/content/BroadcastReceiver;)V",
			arg0.object()
		);
	}
} // namespace android::content

