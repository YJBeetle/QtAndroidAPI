#include "../../java/io/File.hpp"
#include "../../JString.hpp"
#include "./Environment.hpp"

namespace android::os
{
	// Fields
	JString Environment::DIRECTORY_ALARMS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_ALARMS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_AUDIOBOOKS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_AUDIOBOOKS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_DCIM()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DCIM",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_DOCUMENTS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DOCUMENTS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_DOWNLOADS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DOWNLOADS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_MOVIES()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_MOVIES",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_MUSIC()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_MUSIC",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_NOTIFICATIONS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_NOTIFICATIONS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_PICTURES()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_PICTURES",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_PODCASTS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_PODCASTS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_RINGTONES()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_RINGTONES",
			"Ljava/lang/String;"
		);
	}
	JString Environment::DIRECTORY_SCREENSHOTS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_SCREENSHOTS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_BAD_REMOVAL()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_BAD_REMOVAL",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_CHECKING()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_CHECKING",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_EJECTING()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_EJECTING",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_MOUNTED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_MOUNTED",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_MOUNTED_READ_ONLY()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_MOUNTED_READ_ONLY",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_NOFS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_NOFS",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_REMOVED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_REMOVED",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_SHARED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_SHARED",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_UNKNOWN()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_UNMOUNTABLE()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNMOUNTABLE",
			"Ljava/lang/String;"
		);
	}
	JString Environment::MEDIA_UNMOUNTED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNMOUNTED",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Environment::Environment(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Environment::Environment()
		: JObject(
			"android.os.Environment",
			"()V"
		) {}
	
	// Methods
	java::io::File Environment::getDataDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getDataDirectory",
			"()Ljava/io/File;"
		);
	}
	java::io::File Environment::getDownloadCacheDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getDownloadCacheDirectory",
			"()Ljava/io/File;"
		);
	}
	java::io::File Environment::getExternalStorageDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageDirectory",
			"()Ljava/io/File;"
		);
	}
	java::io::File Environment::getExternalStoragePublicDirectory(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStoragePublicDirectory",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	JString Environment::getExternalStorageState()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"()Ljava/lang/String;"
		);
	}
	JString Environment::getExternalStorageState(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.object()
		);
	}
	java::io::File Environment::getRootDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getRootDirectory",
			"()Ljava/io/File;"
		);
	}
	JString Environment::getStorageState(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jboolean Environment::isExternalStorageEmulated()
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
			"()Z"
		);
	}
	jboolean Environment::isExternalStorageEmulated(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	jboolean Environment::isExternalStorageLegacy()
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageLegacy",
			"()Z"
		);
	}
	jboolean Environment::isExternalStorageLegacy(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageLegacy",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	jboolean Environment::isExternalStorageRemovable()
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"()Z"
		);
	}
	jboolean Environment::isExternalStorageRemovable(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
} // namespace android::os

