#include "../../java/io/File.hpp"
#include "./Environment.hpp"

namespace android::os
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
	
	Environment::Environment(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Environment::Environment()
	{
		__thiz = QAndroidJniObject(
			"android.os.Environment",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Environment::getDataDirectory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getDataDirectory",
			"()Ljava/io/File;"
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
	QAndroidJniObject Environment::getExternalStoragePublicDirectory(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStoragePublicDirectory",
			"(Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Environment::getExternalStorageState()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Environment::getExternalStorageState(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Environment::getRootDirectory()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getRootDirectory",
			"()Ljava/io/File;"
		);
	}
	jstring Environment::getStorageState(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Environment",
			"getStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jboolean Environment::isExternalStorageEmulated()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
			"()Z"
		);
	}
	jboolean Environment::isExternalStorageEmulated(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
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
	jboolean Environment::isExternalStorageLegacy(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageLegacy",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Environment::isExternalStorageRemovable()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"()Z"
		);
	}
	jboolean Environment::isExternalStorageRemovable(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::os

