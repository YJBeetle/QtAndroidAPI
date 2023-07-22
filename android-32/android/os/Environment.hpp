#pragma once

#include "../../java/io/File.def.hpp"
#include "../../JString.hpp"
#include "./Environment.def.hpp"

namespace android::os
{
	// Fields
	inline JString Environment::DIRECTORY_ALARMS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_ALARMS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_AUDIOBOOKS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_AUDIOBOOKS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_DCIM()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DCIM",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_DOCUMENTS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DOCUMENTS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_DOWNLOADS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_DOWNLOADS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_MOVIES()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_MOVIES",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_MUSIC()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_MUSIC",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_NOTIFICATIONS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_NOTIFICATIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_PICTURES()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_PICTURES",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_PODCASTS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_PODCASTS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_RECORDINGS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_RECORDINGS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_RINGTONES()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_RINGTONES",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::DIRECTORY_SCREENSHOTS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"DIRECTORY_SCREENSHOTS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_BAD_REMOVAL()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_BAD_REMOVAL",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_CHECKING()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_CHECKING",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_EJECTING()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_EJECTING",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_MOUNTED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_MOUNTED",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_MOUNTED_READ_ONLY()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_MOUNTED_READ_ONLY",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_NOFS()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_NOFS",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_REMOVED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_REMOVED",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_SHARED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_SHARED",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_UNKNOWN()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNKNOWN",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_UNMOUNTABLE()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNMOUNTABLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Environment::MEDIA_UNMOUNTED()
	{
		return getStaticObjectField(
			"android.os.Environment",
			"MEDIA_UNMOUNTED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Environment::Environment()
		: JObject(
			"android.os.Environment",
			"()V"
		) {}
	
	// Methods
	inline java::io::File Environment::getDataDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getDataDirectory",
			"()Ljava/io/File;"
		);
	}
	inline java::io::File Environment::getDownloadCacheDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getDownloadCacheDirectory",
			"()Ljava/io/File;"
		);
	}
	inline java::io::File Environment::getExternalStorageDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageDirectory",
			"()Ljava/io/File;"
		);
	}
	inline java::io::File Environment::getExternalStoragePublicDirectory(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStoragePublicDirectory",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0.object<jstring>()
		);
	}
	inline JString Environment::getExternalStorageState()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"()Ljava/lang/String;"
		);
	}
	inline JString Environment::getExternalStorageState(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getExternalStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline java::io::File Environment::getRootDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getRootDirectory",
			"()Ljava/io/File;"
		);
	}
	inline java::io::File Environment::getStorageDirectory()
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getStorageDirectory",
			"()Ljava/io/File;"
		);
	}
	inline JString Environment::getStorageState(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.os.Environment",
			"getStorageState",
			"(Ljava/io/File;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean Environment::isExternalStorageEmulated()
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
			"()Z"
		);
	}
	inline jboolean Environment::isExternalStorageEmulated(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageEmulated",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline jboolean Environment::isExternalStorageLegacy()
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageLegacy",
			"()Z"
		);
	}
	inline jboolean Environment::isExternalStorageLegacy(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageLegacy",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline jboolean Environment::isExternalStorageManager()
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageManager",
			"()Z"
		);
	}
	inline jboolean Environment::isExternalStorageManager(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageManager",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline jboolean Environment::isExternalStorageRemovable()
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"()Z"
		);
	}
	inline jboolean Environment::isExternalStorageRemovable(java::io::File arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Environment",
			"isExternalStorageRemovable",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
