#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}

namespace android::os
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
		
		Environment(QAndroidJniObject obj);
		// Constructors
		Environment();
		
		// Methods
		static QAndroidJniObject getDataDirectory();
		static QAndroidJniObject getDownloadCacheDirectory();
		static QAndroidJniObject getExternalStorageDirectory();
		static QAndroidJniObject getExternalStoragePublicDirectory(jstring arg0);
		static QAndroidJniObject getExternalStoragePublicDirectory(const QString &arg0);
		static jstring getExternalStorageState();
		static jstring getExternalStorageState(java::io::File arg0);
		static QAndroidJniObject getRootDirectory();
		static jstring getStorageState(java::io::File arg0);
		static jboolean isExternalStorageEmulated();
		static jboolean isExternalStorageEmulated(java::io::File arg0);
		static jboolean isExternalStorageLegacy();
		static jboolean isExternalStorageLegacy(java::io::File arg0);
		static jboolean isExternalStorageRemovable();
		static jboolean isExternalStorageRemovable(java::io::File arg0);
	};
} // namespace android::os

