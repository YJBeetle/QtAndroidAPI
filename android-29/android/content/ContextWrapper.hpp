#pragma once

#include "../../__JniBaseClass.hpp"
#include "Context.hpp"

namespace __jni_impl::android::content
{
	class BroadcastReceiver;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class IntentFilter;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::database::sqlite
{
	class SQLiteDatabase;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::view
{
	class Display;
}
namespace __jni_impl::java::io
{
	class File;
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
	class InputStream;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
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
		jboolean bindIsolatedService(__jni_impl::android::content::Intent arg0, jint arg1, jstring arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		jboolean bindIsolatedService(__jni_impl::android::content::Intent arg0, jint arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4);
		jboolean bindService(__jni_impl::android::content::Intent arg0, __jni_impl::__JniBaseClass arg1, jint arg2);
		jboolean bindService(__jni_impl::android::content::Intent arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		jint checkCallingOrSelfPermission(jstring arg0);
		jint checkCallingOrSelfPermission(const QString &arg0);
		jint checkCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		jint checkCallingPermission(jstring arg0);
		jint checkCallingPermission(const QString &arg0);
		jint checkCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		jint checkPermission(jstring arg0, jint arg1, jint arg2);
		jint checkPermission(const QString &arg0, jint arg1, jint arg2);
		jint checkSelfPermission(jstring arg0);
		jint checkSelfPermission(const QString &arg0);
		jint checkUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3);
		jint checkUriPermission(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5);
		jint checkUriPermission(__jni_impl::android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5);
		void clearWallpaper();
		QAndroidJniObject createConfigurationContext(__jni_impl::android::content::res::Configuration arg0);
		QAndroidJniObject createContextForSplit(jstring arg0);
		QAndroidJniObject createContextForSplit(const QString &arg0);
		QAndroidJniObject createDeviceProtectedStorageContext();
		QAndroidJniObject createDisplayContext(__jni_impl::android::view::Display arg0);
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
		void enforceCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jstring arg2);
		void enforceCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, const QString &arg2);
		void enforceCallingPermission(jstring arg0, jstring arg1);
		void enforceCallingPermission(const QString &arg0, const QString &arg1);
		void enforceCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jstring arg2);
		void enforceCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, const QString &arg2);
		void enforcePermission(jstring arg0, jint arg1, jint arg2, jstring arg3);
		void enforcePermission(const QString &arg0, jint arg1, jint arg2, const QString &arg3);
		void enforceUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3, jstring arg4);
		void enforceUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3, const QString &arg4);
		void enforceUriPermission(__jni_impl::android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5, jstring arg6);
		void enforceUriPermission(__jni_impl::android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5, const QString &arg6);
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
		void grantUriPermission(jstring arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		void grantUriPermission(const QString &arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		jboolean isDeviceProtectedStorage();
		jboolean isRestricted();
		jboolean moveDatabaseFrom(__jni_impl::android::content::Context arg0, jstring arg1);
		jboolean moveDatabaseFrom(__jni_impl::android::content::Context arg0, const QString &arg1);
		jboolean moveSharedPreferencesFrom(__jni_impl::android::content::Context arg0, jstring arg1);
		jboolean moveSharedPreferencesFrom(__jni_impl::android::content::Context arg0, const QString &arg1);
		QAndroidJniObject openFileInput(jstring arg0);
		QAndroidJniObject openFileInput(const QString &arg0);
		QAndroidJniObject openFileOutput(jstring arg0, jint arg1);
		QAndroidJniObject openFileOutput(const QString &arg0, jint arg1);
		QAndroidJniObject openOrCreateDatabase(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject openOrCreateDatabase(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject openOrCreateDatabase(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject openOrCreateDatabase(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject peekWallpaper();
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jint arg2);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jstring arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, const QString &arg2, __jni_impl::android::os::Handler arg3);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, jstring arg2, __jni_impl::android::os::Handler arg3, jint arg4);
		QAndroidJniObject registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, const QString &arg2, __jni_impl::android::os::Handler arg3, jint arg4);
		void removeStickyBroadcast(__jni_impl::android::content::Intent arg0);
		void removeStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1);
		void revokeUriPermission(__jni_impl::android::net::Uri arg0, jint arg1);
		void revokeUriPermission(jstring arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		void revokeUriPermission(const QString &arg0, __jni_impl::android::net::Uri arg1, jint arg2);
		void sendBroadcast(__jni_impl::android::content::Intent arg0);
		void sendBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1);
		void sendBroadcast(__jni_impl::android::content::Intent arg0, const QString &arg1);
		void sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1);
		void sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, jstring arg2);
		void sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, const QString &arg2);
		void sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1);
		void sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, const QString &arg1);
		void sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, jstring arg5, __jni_impl::android::os::Bundle arg6);
		void sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, const QString &arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, const QString &arg5, __jni_impl::android::os::Bundle arg6);
		void sendOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, jstring arg2, __jni_impl::android::content::BroadcastReceiver arg3, __jni_impl::android::os::Handler arg4, jint arg5, jstring arg6, __jni_impl::android::os::Bundle arg7);
		void sendOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, const QString &arg2, __jni_impl::android::content::BroadcastReceiver arg3, __jni_impl::android::os::Handler arg4, jint arg5, const QString &arg6, __jni_impl::android::os::Bundle arg7);
		void sendStickyBroadcast(__jni_impl::android::content::Intent arg0);
		void sendStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1);
		void sendStickyOrderedBroadcast(__jni_impl::android::content::Intent arg0, __jni_impl::android::content::BroadcastReceiver arg1, __jni_impl::android::os::Handler arg2, jint arg3, jstring arg4, __jni_impl::android::os::Bundle arg5);
		void sendStickyOrderedBroadcast(__jni_impl::android::content::Intent arg0, __jni_impl::android::content::BroadcastReceiver arg1, __jni_impl::android::os::Handler arg2, jint arg3, const QString &arg4, __jni_impl::android::os::Bundle arg5);
		void sendStickyOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, jstring arg5, __jni_impl::android::os::Bundle arg6);
		void sendStickyOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, const QString &arg5, __jni_impl::android::os::Bundle arg6);
		void setTheme(jint arg0);
		void setWallpaper(__jni_impl::android::graphics::Bitmap arg0);
		void setWallpaper(__jni_impl::java::io::InputStream arg0);
		void startActivities(jarray arg0);
		void startActivities(jarray arg0, __jni_impl::android::os::Bundle arg1);
		void startActivity(__jni_impl::android::content::Intent arg0);
		void startActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject startForegroundService(__jni_impl::android::content::Intent arg0);
		jboolean startInstrumentation(__jni_impl::android::content::ComponentName arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		jboolean startInstrumentation(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		void startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4);
		void startIntentSender(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::content::Intent arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5);
		QAndroidJniObject startService(__jni_impl::android::content::Intent arg0);
		jboolean stopService(__jni_impl::android::content::Intent arg0);
		void unbindService(__jni_impl::__JniBaseClass arg0);
		void unregisterReceiver(__jni_impl::android::content::BroadcastReceiver arg0);
		void updateServiceGroup(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::content

#include "BroadcastReceiver.hpp"
#include "ComponentName.hpp"
#include "ContentResolver.hpp"
#include "Context.hpp"
#include "Intent.hpp"
#include "IntentFilter.hpp"
#include "IntentSender.hpp"
#include "pm/ApplicationInfo.hpp"
#include "pm/PackageManager.hpp"
#include "res/AssetManager.hpp"
#include "res/Configuration.hpp"
#include "res/Resources.hpp"
#include "res/Resources_Theme.hpp"
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

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContextWrapper::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContextWrapper",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
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
	jboolean ContextWrapper::bindIsolatedService(__jni_impl::android::content::Intent arg0, jint arg1, const QString &arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4)
	{
		return __thiz.callMethod<jboolean>(
			"bindIsolatedService",
			"(Landroid/content/Intent;ILjava/lang/String;Ljava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
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
	jint ContextWrapper::checkCallingOrSelfPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ContextWrapper::checkCallingOrSelfPermission(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint ContextWrapper::checkCallingPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint ContextWrapper::checkCallingPermission(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint ContextWrapper::checkPermission(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
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
	jint ContextWrapper::checkSelfPermission(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint ContextWrapper::checkUriPermission(__jni_impl::android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4,
			arg5
		);
	}
	void ContextWrapper::clearWallpaper()
	{
		__thiz.callMethod<void>(
			"clearWallpaper",
			"()V"
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
	QAndroidJniObject ContextWrapper::createContextForSplit(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::createContextForSplit(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContextWrapper::createDeviceProtectedStorageContext()
	{
		return __thiz.callObjectMethod(
			"createDeviceProtectedStorageContext",
			"()Landroid/content/Context;"
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
	QAndroidJniObject ContextWrapper::createPackageContext(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContextWrapper::createPackageContext(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jarray ContextWrapper::databaseList()
	{
		return __thiz.callObjectMethod(
			"databaseList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean ContextWrapper::deleteDatabase(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ContextWrapper::deleteDatabase(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean ContextWrapper::deleteFile(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jboolean ContextWrapper::deleteSharedPreferences(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void ContextWrapper::enforceCallingOrSelfPermission(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void ContextWrapper::enforceCallingOrSelfUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	void ContextWrapper::enforceCallingPermission(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void ContextWrapper::enforceCallingUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	void ContextWrapper::enforcePermission(const QString &arg0, jint arg1, jint arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"enforcePermission",
			"(Ljava/lang/String;IILjava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
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
	void ContextWrapper::enforceUriPermission(__jni_impl::android::net::Uri arg0, jint arg1, jint arg2, jint arg3, const QString &arg4)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
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
	void ContextWrapper::enforceUriPermission(__jni_impl::android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5, const QString &arg6)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4,
			arg5,
			QAndroidJniObject::fromString(arg6).object<jstring>()
		);
	}
	jarray ContextWrapper::fileList()
	{
		return __thiz.callObjectMethod(
			"fileList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject ContextWrapper::getApplicationContext()
	{
		return __thiz.callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject ContextWrapper::getApplicationInfo()
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	QAndroidJniObject ContextWrapper::getAssets()
	{
		return __thiz.callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	QAndroidJniObject ContextWrapper::getBaseContext()
	{
		return __thiz.callObjectMethod(
			"getBaseContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject ContextWrapper::getCacheDir()
	{
		return __thiz.callObjectMethod(
			"getCacheDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getClassLoader()
	{
		return __thiz.callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject ContextWrapper::getCodeCacheDir()
	{
		return __thiz.callObjectMethod(
			"getCodeCacheDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getContentResolver()
	{
		return __thiz.callObjectMethod(
			"getContentResolver",
			"()Landroid/content/ContentResolver;"
		);
	}
	QAndroidJniObject ContextWrapper::getDataDir()
	{
		return __thiz.callObjectMethod(
			"getDataDir",
			"()Ljava/io/File;"
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
	QAndroidJniObject ContextWrapper::getDatabasePath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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
	QAndroidJniObject ContextWrapper::getDir(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
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
	QAndroidJniObject ContextWrapper::getExternalFilesDir(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::getExternalFilesDir(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jarray ContextWrapper::getExternalFilesDirs(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jarray ContextWrapper::getExternalMediaDirs()
	{
		return __thiz.callObjectMethod(
			"getExternalMediaDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	QAndroidJniObject ContextWrapper::getFileStreamPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	QAndroidJniObject ContextWrapper::getFileStreamPath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContextWrapper::getFilesDir()
	{
		return __thiz.callObjectMethod(
			"getFilesDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ContextWrapper::getMainExecutor()
	{
		return __thiz.callObjectMethod(
			"getMainExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject ContextWrapper::getMainLooper()
	{
		return __thiz.callObjectMethod(
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	QAndroidJniObject ContextWrapper::getNoBackupFilesDir()
	{
		return __thiz.callObjectMethod(
			"getNoBackupFilesDir",
			"()Ljava/io/File;"
		);
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
	jstring ContextWrapper::getOpPackageName()
	{
		return __thiz.callObjectMethod(
			"getOpPackageName",
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
	QAndroidJniObject ContextWrapper::getPackageManager()
	{
		return __thiz.callObjectMethod(
			"getPackageManager",
			"()Landroid/content/pm/PackageManager;"
		);
	}
	jstring ContextWrapper::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContextWrapper::getPackageResourcePath()
	{
		return __thiz.callObjectMethod(
			"getPackageResourcePath",
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
	QAndroidJniObject ContextWrapper::getSharedPreferences(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContextWrapper::getSharedPreferences(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
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
	jobject ContextWrapper::getSystemService(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject ContextWrapper::getTheme()
	{
		return __thiz.callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject ContextWrapper::getWallpaper()
	{
		return __thiz.callObjectMethod(
			"getWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getWallpaperDesiredMinimumHeight",
			"()I"
		);
	}
	jint ContextWrapper::getWallpaperDesiredMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getWallpaperDesiredMinimumWidth",
			"()I"
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
	void ContextWrapper::grantUriPermission(const QString &arg0, __jni_impl::android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean ContextWrapper::isDeviceProtectedStorage()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceProtectedStorage",
			"()Z"
		);
	}
	jboolean ContextWrapper::isRestricted()
	{
		return __thiz.callMethod<jboolean>(
			"isRestricted",
			"()Z"
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
	jboolean ContextWrapper::moveDatabaseFrom(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	jboolean ContextWrapper::moveSharedPreferencesFrom(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	QAndroidJniObject ContextWrapper::openFileInput(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject ContextWrapper::openFileOutput(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
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
	QAndroidJniObject ContextWrapper::openOrCreateDatabase(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
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
	QAndroidJniObject ContextWrapper::openOrCreateDatabase(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContextWrapper::peekWallpaper()
	{
		return __thiz.callObjectMethod(
			"peekWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
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
	QAndroidJniObject ContextWrapper::registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, const QString &arg2, __jni_impl::android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
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
	QAndroidJniObject ContextWrapper::registerReceiver(__jni_impl::android::content::BroadcastReceiver arg0, __jni_impl::android::content::IntentFilter arg1, const QString &arg2, __jni_impl::android::os::Handler arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;I)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4
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
	void ContextWrapper::removeStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"removeStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	void ContextWrapper::revokeUriPermission(const QString &arg0, __jni_impl::android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
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
	void ContextWrapper::sendBroadcast(__jni_impl::android::content::Intent arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ContextWrapper::sendBroadcast(__jni_impl::android::content::Intent arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void ContextWrapper::sendBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	void ContextWrapper::sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
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
	void ContextWrapper::sendOrderedBroadcast(__jni_impl::android::content::Intent arg0, const QString &arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, const QString &arg5, __jni_impl::android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6.__jniObject().object()
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
	void ContextWrapper::sendOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, const QString &arg2, __jni_impl::android::content::BroadcastReceiver arg3, __jni_impl::android::os::Handler arg4, jint arg5, const QString &arg6, __jni_impl::android::os::Bundle arg7)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			QAndroidJniObject::fromString(arg6).object<jstring>(),
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
	void ContextWrapper::sendStickyBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"sendStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	void ContextWrapper::sendStickyOrderedBroadcast(__jni_impl::android::content::Intent arg0, __jni_impl::android::content::BroadcastReceiver arg1, __jni_impl::android::os::Handler arg2, jint arg3, const QString &arg4, __jni_impl::android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcast",
			"(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5.__jniObject().object()
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
	void ContextWrapper::sendStickyOrderedBroadcastAsUser(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::content::BroadcastReceiver arg2, __jni_impl::android::os::Handler arg3, jint arg4, const QString &arg5, __jni_impl::android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6.__jniObject().object()
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
	void ContextWrapper::setWallpaper(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setWallpaper",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
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
	void ContextWrapper::startActivities(jarray arg0)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0
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
	void ContextWrapper::startActivity(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject ContextWrapper::startForegroundService(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"startForegroundService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
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
	jboolean ContextWrapper::startInstrumentation(__jni_impl::android::content::ComponentName arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
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
	QAndroidJniObject ContextWrapper::startService(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"startService",
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
	void ContextWrapper::unbindService(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unbindService",
			"(Landroid/content/ServiceConnection;)V",
			arg0.__jniObject().object()
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

