#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class File;
}
namespace java::util
{
	class UUID;
}

namespace android::os::storage
{
	class StorageVolume : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring EXTRA_STORAGE_VOLUME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StorageVolume(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageVolume(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createAccessIntent(jstring arg0);
		android::content::Intent createOpenDocumentTreeIntent();
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDescription(android::content::Context arg0);
		java::io::File getDirectory();
		jstring getMediaStoreVolumeName();
		jstring getState();
		java::util::UUID getStorageUuid();
		jstring getUuid();
		jint hashCode();
		jboolean isEmulated();
		jboolean isPrimary();
		jboolean isRemovable();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os::storage

