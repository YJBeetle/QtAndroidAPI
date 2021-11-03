#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
class JString;

namespace android::os
{
	class Environment : public JObject
	{
	public:
		// Fields
		static JString DIRECTORY_ALARMS();
		static JString DIRECTORY_AUDIOBOOKS();
		static JString DIRECTORY_DCIM();
		static JString DIRECTORY_DOCUMENTS();
		static JString DIRECTORY_DOWNLOADS();
		static JString DIRECTORY_MOVIES();
		static JString DIRECTORY_MUSIC();
		static JString DIRECTORY_NOTIFICATIONS();
		static JString DIRECTORY_PICTURES();
		static JString DIRECTORY_PODCASTS();
		static JString DIRECTORY_RINGTONES();
		static JString DIRECTORY_SCREENSHOTS();
		static JString MEDIA_BAD_REMOVAL();
		static JString MEDIA_CHECKING();
		static JString MEDIA_EJECTING();
		static JString MEDIA_MOUNTED();
		static JString MEDIA_MOUNTED_READ_ONLY();
		static JString MEDIA_NOFS();
		static JString MEDIA_REMOVED();
		static JString MEDIA_SHARED();
		static JString MEDIA_UNKNOWN();
		static JString MEDIA_UNMOUNTABLE();
		static JString MEDIA_UNMOUNTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Environment(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Environment(QAndroidJniObject obj);
		
		// Constructors
		Environment();
		
		// Methods
		static java::io::File getDataDirectory();
		static java::io::File getDownloadCacheDirectory();
		static java::io::File getExternalStorageDirectory();
		static java::io::File getExternalStoragePublicDirectory(JString arg0);
		static JString getExternalStorageState();
		static JString getExternalStorageState(java::io::File arg0);
		static java::io::File getRootDirectory();
		static java::io::File getStorageDirectory();
		static JString getStorageState(java::io::File arg0);
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

