#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}

namespace android::os
{
	class Environment : public JObject
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
		static jstring DIRECTORY_RECORDINGS();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Environment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Environment(QAndroidJniObject obj);
		
		// Constructors
		Environment();
		
		// Methods
		static java::io::File getDataDirectory();
		static java::io::File getDownloadCacheDirectory();
		static java::io::File getExternalStorageDirectory();
		static java::io::File getExternalStoragePublicDirectory(jstring arg0);
		static jstring getExternalStorageState();
		static jstring getExternalStorageState(java::io::File arg0);
		static java::io::File getRootDirectory();
		static java::io::File getStorageDirectory();
		static jstring getStorageState(java::io::File arg0);
		static jboolean isExternalStorageEmulated();
		static jboolean isExternalStorageEmulated(java::io::File arg0);
		static jboolean isExternalStorageLegacy();
		static jboolean isExternalStorageLegacy(java::io::File arg0);
		static jboolean isExternalStorageManager();
		static jboolean isExternalStorageManager(java::io::File arg0);
		static jboolean isExternalStorageRemovable();
		static jboolean isExternalStorageRemovable(java::io::File arg0);
	};
} // namespace android::os

