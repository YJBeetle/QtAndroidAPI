#pragma once

#ifndef ANDROID_OS_ENVIRONMENT
#define ANDROID_OS_ENVIRONMENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::os
{
	class Environment : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DIRECTORY_ALARMS();
		static jstring DIRECTORY_AUDIOBOOKS();
		static jstring DIRECTORY_DCIM();
		static jstring DIRECTORY_DOCUMENTS();
		static jstring DIRECTORY_DOWNLOADS();
		static jstring DIRECTORY_MOVIES();
		static jstring DIRECTORY_MUSIC();
		static jstring DIRECTORY_NOTIFICATIONS();
		static jstring DIRECTORY_PICTURES();
		static jstring DIRECTORY_PODCASTS();
		static jstring DIRECTORY_RINGTONES();
		static jstring DIRECTORY_SCREENSHOTS();
		static jstring MEDIA_BAD_REMOVAL();
		static jstring MEDIA_CHECKING();
		static jstring MEDIA_EJECTING();
		static jstring MEDIA_MOUNTED();
		static jstring MEDIA_MOUNTED_READ_ONLY();
		static jstring MEDIA_NOFS();
		static jstring MEDIA_REMOVED();
		static jstring MEDIA_SHARED();
		static jstring MEDIA_UNKNOWN();
		static jstring MEDIA_UNMOUNTABLE();
		static jstring MEDIA_UNMOUNTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getRootDirectory();
		static QAndroidJniObject getDataDirectory();
		static QAndroidJniObject getExternalStorageDirectory();
		static QAndroidJniObject getExternalStoragePublicDirectory(jstring arg0);
		static QAndroidJniObject getDownloadCacheDirectory();
		static jstring getExternalStorageState(__jni_impl::java::io::File arg0);
		static jstring getExternalStorageState();
		static jstring getStorageState(__jni_impl::java::io::File arg0);
		static jboolean isExternalStorageRemovable();
		static jboolean isExternalStorageRemovable(__jni_impl::java::io::File arg0);
		static jboolean isExternalStorageEmulated(__jni_impl::java::io::File arg0);
		static jboolean isExternalStorageEmulated();
		static jboolean isExternalStorageLegacy(__jni_impl::java::io::File arg0);
		static jboolean isExternalStorageLegacy();
	};
} // namespace __jni_impl::android::os

#include "../../java/io/File.hpp"

namespace __jni_impl::android::os
{
	// Fields
	jstring Environment::DIRECTORY_ALARMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_ALARMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_AUDIOBOOKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_AUDIOBOOKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_DCIM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DCIM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_DOCUMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DOCUMENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_DOWNLOADS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DOWNLOADS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_MOVIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_MOVIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_MUSIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_MUSIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_NOTIFICATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_NOTIFICATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_PICTURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_PICTURES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_PODCASTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_PODCASTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_RINGTONES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_RINGTONES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::DIRECTORY_SCREENSHOTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_SCREENSHOTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_BAD_REMOVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_BAD_REMOVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_CHECKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_CHECKING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_EJECTING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_EJECTING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_MOUNTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_MOUNTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_MOUNTED_READ_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_MOUNTED_READ_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_NOFS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_NOFS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_SHARED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_SHARED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNKNOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_UNMOUNTABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNMOUNTABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::MEDIA_UNMOUNTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNMOUNTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Environment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Environment",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Environment::getRootDirectory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getRootDirectory",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Environment::getDataDirectory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getDataDirectory",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Environment::getExternalStorageDirectory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageDirectory",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Environment::getExternalStoragePublicDirectory(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStoragePublicDirectory",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	QAndroidJniObject Environment::getDownloadCacheDirectory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getDownloadCacheDirectory",
			"()Ljava/io/File;"
		);
	}
	jstring Environment::getExternalStorageState(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Environment::getExternalStorageState()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::getStorageState(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean Environment::isExternalStorageRemovable()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"()Z"
		);
	}
	jboolean Environment::isExternalStorageRemovable(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Environment::isExternalStorageEmulated(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Environment::isExternalStorageEmulated()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
			"()Z"
		);
	}
	jboolean Environment::isExternalStorageLegacy(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageLegacy",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Environment::isExternalStorageLegacy()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageLegacy",
			"()Z"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Environment : public __jni_impl::android::os::Environment
	{
	public:
		Environment(QAndroidJniObject obj) { __thiz = obj; }
		Environment()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_ENVIRONMENT

