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
class JObject;
class JString;
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
		static JString EXTRA_STORAGE_VOLUME();
		
		// QJniObject forward
		template<typename ...Ts> explicit StorageVolume(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageVolume(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createAccessIntent(JString arg0);
		android::content::Intent createOpenDocumentTreeIntent();
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getDescription(android::content::Context arg0);
		java::io::File getDirectory();
		JString getMediaStoreVolumeName();
		JString getState();
		java::util::UUID getStorageUuid();
		JString getUuid();
		jint hashCode();
		jboolean isEmulated();
		jboolean isPrimary();
		jboolean isRemovable();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os::storage

