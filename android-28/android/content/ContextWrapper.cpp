#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
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
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	jboolean ContextWrapper::bindService(android::content::Intent arg0, JObject arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jint ContextWrapper::checkCallingOrSelfPermission(JString arg0) const
	{
		return callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint ContextWrapper::checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkCallingOrSelfUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint ContextWrapper::checkCallingPermission(JString arg0) const
	{
		return callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint ContextWrapper::checkCallingUriPermission(android::net::Uri arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkCallingUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	jint ContextWrapper::checkPermission(JString arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	jint ContextWrapper::checkSelfPermission(JString arg0) const
	{
		return callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint ContextWrapper::checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3) const
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
	jint ContextWrapper::checkUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5) const
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
	void ContextWrapper::clearWallpaper() const
	{
		callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	android::content::Context ContextWrapper::createConfigurationContext(android::content::res::Configuration arg0) const
	{
		return callObjectMethod(
			"createConfigurationContext",
			"(Landroid/content/res/Configuration;)Landroid/content/Context;",
			arg0.object()
		);
	}
	android::content::Context ContextWrapper::createContextForSplit(JString arg0) const
	{
		return callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0.object<jstring>()
		);
	}
	android::content::Context ContextWrapper::createDeviceProtectedStorageContext() const
	{
		return callObjectMethod(
			"createDeviceProtectedStorageContext",
			"()Landroid/content/Context;"
		);
	}
	android::content::Context ContextWrapper::createDisplayContext(android::view::Display arg0) const
	{
		return callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.object()
		);
	}
	android::content::Context ContextWrapper::createPackageContext(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JArray ContextWrapper::databaseList() const
	{
		return callObjectMethod(
			"databaseList",
			"()[Ljava/lang/String;"
		);
	}
	jboolean ContextWrapper::deleteDatabase(JString arg0) const
	{
		return callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean ContextWrapper::deleteFile(JString arg0) const
	{
		return callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean ContextWrapper::deleteSharedPreferences(JString arg0) const
	{
		return callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void ContextWrapper::enforceCallingOrSelfPermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void ContextWrapper::enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void ContextWrapper::enforceCallingPermission(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void ContextWrapper::enforceCallingUriPermission(android::net::Uri arg0, jint arg1, JString arg2) const
	{
		callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	void ContextWrapper::enforcePermission(JString arg0, jint arg1, jint arg2, JString arg3) const
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
	void ContextWrapper::enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, JString arg4) const
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
	void ContextWrapper::enforceUriPermission(android::net::Uri arg0, JString arg1, JString arg2, jint arg3, jint arg4, jint arg5, JString arg6) const
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
	JArray ContextWrapper::fileList() const
	{
		return callObjectMethod(
			"fileList",
			"()[Ljava/lang/String;"
		);
	}
	android::content::Context ContextWrapper::getApplicationContext() const
	{
		return callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	android::content::pm::ApplicationInfo ContextWrapper::getApplicationInfo() const
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	android::content::res::AssetManager ContextWrapper::getAssets() const
	{
		return callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	android::content::Context ContextWrapper::getBaseContext() const
	{
		return callObjectMethod(
			"getBaseContext",
			"()Landroid/content/Context;"
		);
	}
	java::io::File ContextWrapper::getCacheDir() const
	{
		return callObjectMethod(
			"getCacheDir",
			"()Ljava/io/File;"
		);
	}
	java::lang::ClassLoader ContextWrapper::getClassLoader() const
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	java::io::File ContextWrapper::getCodeCacheDir() const
	{
		return callObjectMethod(
			"getCodeCacheDir",
			"()Ljava/io/File;"
		);
	}
	android::content::ContentResolver ContextWrapper::getContentResolver() const
	{
		return callObjectMethod(
			"getContentResolver",
			"()Landroid/content/ContentResolver;"
		);
	}
	java::io::File ContextWrapper::getDataDir() const
	{
		return callObjectMethod(
			"getDataDir",
			"()Ljava/io/File;"
		);
	}
	java::io::File ContextWrapper::getDatabasePath(JString arg0) const
	{
		return callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	java::io::File ContextWrapper::getDir(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			arg0.object<jstring>(),
			arg1
		);
	}
	java::io::File ContextWrapper::getExternalCacheDir() const
	{
		return callObjectMethod(
			"getExternalCacheDir",
			"()Ljava/io/File;"
		);
	}
	JArray ContextWrapper::getExternalCacheDirs() const
	{
		return callObjectMethod(
			"getExternalCacheDirs",
			"()[Ljava/io/File;"
		);
	}
	java::io::File ContextWrapper::getExternalFilesDir(JString arg0) const
	{
		return callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	JArray ContextWrapper::getExternalFilesDirs(JString arg0) const
	{
		return callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	JArray ContextWrapper::getExternalMediaDirs() const
	{
		return callObjectMethod(
			"getExternalMediaDirs",
			"()[Ljava/io/File;"
		);
	}
	java::io::File ContextWrapper::getFileStreamPath(JString arg0) const
	{
		return callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	java::io::File ContextWrapper::getFilesDir() const
	{
		return callObjectMethod(
			"getFilesDir",
			"()Ljava/io/File;"
		);
	}
	JObject ContextWrapper::getMainExecutor() const
	{
		return callObjectMethod(
			"getMainExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	android::os::Looper ContextWrapper::getMainLooper() const
	{
		return callObjectMethod(
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	java::io::File ContextWrapper::getNoBackupFilesDir() const
	{
		return callObjectMethod(
			"getNoBackupFilesDir",
			"()Ljava/io/File;"
		);
	}
	java::io::File ContextWrapper::getObbDir() const
	{
		return callObjectMethod(
			"getObbDir",
			"()Ljava/io/File;"
		);
	}
	JArray ContextWrapper::getObbDirs() const
	{
		return callObjectMethod(
			"getObbDirs",
			"()[Ljava/io/File;"
		);
	}
	JString ContextWrapper::getPackageCodePath() const
	{
		return callObjectMethod(
			"getPackageCodePath",
			"()Ljava/lang/String;"
		);
	}
	android::content::pm::PackageManager ContextWrapper::getPackageManager() const
	{
		return callObjectMethod(
			"getPackageManager",
			"()Landroid/content/pm/PackageManager;"
		);
	}
	JString ContextWrapper::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	JString ContextWrapper::getPackageResourcePath() const
	{
		return callObjectMethod(
			"getPackageResourcePath",
			"()Ljava/lang/String;"
		);
	}
	android::content::res::Resources ContextWrapper::getResources() const
	{
		return callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	JObject ContextWrapper::getSharedPreferences(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JObject ContextWrapper::getSystemService(JString arg0) const
	{
		return callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	JString ContextWrapper::getSystemServiceName(JClass arg0) const
	{
		return callObjectMethod(
			"getSystemServiceName",
			"(Ljava/lang/Class;)Ljava/lang/String;",
			arg0.object<jclass>()
		);
	}
	android::content::res::Resources_Theme ContextWrapper::getTheme() const
	{
		return callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	android::graphics::drawable::Drawable ContextWrapper::getWallpaper() const
	{
		return callObjectMethod(
			"getWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumHeight() const
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumHeight",
			"()I"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumWidth() const
	{
		return callMethod<jint>(
			"getWallpaperDesiredMinimumWidth",
			"()I"
		);
	}
	void ContextWrapper::grantUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const
	{
		callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	jboolean ContextWrapper::isDeviceProtectedStorage() const
	{
		return callMethod<jboolean>(
			"isDeviceProtectedStorage",
			"()Z"
		);
	}
	jboolean ContextWrapper::isRestricted() const
	{
		return callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	jboolean ContextWrapper::moveDatabaseFrom(android::content::Context arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean ContextWrapper::moveSharedPreferencesFrom(android::content::Context arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	java::io::FileInputStream ContextWrapper::openFileInput(JString arg0) const
	{
		return callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			arg0.object<jstring>()
		);
	}
	java::io::FileOutputStream ContextWrapper::openFileOutput(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::database::sqlite::SQLiteDatabase ContextWrapper::openOrCreateDatabase(JString arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	android::database::sqlite::SQLiteDatabase ContextWrapper::openOrCreateDatabase(JString arg0, jint arg1, JObject arg2, JObject arg3) const
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
	android::graphics::drawable::Drawable ContextWrapper::peekWallpaper() const
	{
		return callObjectMethod(
			"peekWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1) const
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2) const
	{
		return callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;I)Landroid/content/Intent;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3) const
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
	android::content::Intent ContextWrapper::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, JString arg2, android::os::Handler arg3, jint arg4) const
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
	void ContextWrapper::removeStickyBroadcast(android::content::Intent arg0) const
	{
		callMethod<void>(
			"removeStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"removeStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContextWrapper::revokeUriPermission(android::net::Uri arg0, jint arg1) const
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.object(),
			arg1
		);
	}
	void ContextWrapper::revokeUriPermission(JString arg0, android::net::Uri arg1, jint arg2) const
	{
		callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	void ContextWrapper::sendBroadcast(android::content::Intent arg0) const
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::sendBroadcast(android::content::Intent arg0, JString arg1) const
	{
		callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ContextWrapper::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContextWrapper::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2) const
	{
		callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void ContextWrapper::sendOrderedBroadcast(android::content::Intent arg0, JString arg1) const
	{
		callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ContextWrapper::sendOrderedBroadcast(android::content::Intent arg0, JString arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6) const
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
	void ContextWrapper::sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, JString arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, JString arg6, android::os::Bundle arg7) const
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
	void ContextWrapper::sendStickyBroadcast(android::content::Intent arg0) const
	{
		callMethod<void>(
			"sendStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1) const
	{
		callMethod<void>(
			"sendStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ContextWrapper::sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, JString arg4, android::os::Bundle arg5) const
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
	void ContextWrapper::sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, JString arg5, android::os::Bundle arg6) const
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
	void ContextWrapper::setTheme(jint arg0) const
	{
		callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void ContextWrapper::setWallpaper(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setWallpaper",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void ContextWrapper::setWallpaper(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setWallpaper",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void ContextWrapper::startActivities(JArray arg0) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0.object<jarray>()
		);
	}
	void ContextWrapper::startActivities(JArray arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void ContextWrapper::startActivity(android::content::Intent arg0) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void ContextWrapper::startActivity(android::content::Intent arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::ComponentName ContextWrapper::startForegroundService(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"startForegroundService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	jboolean ContextWrapper::startInstrumentation(android::content::ComponentName arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void ContextWrapper::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4) const
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
	void ContextWrapper::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const
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
	android::content::ComponentName ContextWrapper::startService(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"startService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.object()
		);
	}
	jboolean ContextWrapper::stopService(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"stopService",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void ContextWrapper::unbindService(JObject arg0) const
	{
		callMethod<void>(
			"unbindService",
			"(Landroid/content/ServiceConnection;)V",
			arg0.object()
		);
	}
	void ContextWrapper::unregisterReceiver(android::content::BroadcastReceiver arg0) const
	{
		callMethod<void>(
			"unregisterReceiver",
			"(Landroid/content/BroadcastReceiver;)V",
			arg0.object()
		);
	}
} // namespace android::content

