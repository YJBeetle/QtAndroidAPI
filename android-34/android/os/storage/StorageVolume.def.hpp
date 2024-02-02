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
namespace android::os
{
	class UserHandle;
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
		StorageVolume(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::content::Intent createAccessIntent(JString arg0) const;
		android::content::Intent createOpenDocumentTreeIntent() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDescription(android::content::Context arg0) const;
		java::io::File getDirectory() const;
		JString getMediaStoreVolumeName() const;
		android::os::UserHandle getOwner() const;
		JString getState() const;
		java::util::UUID getStorageUuid() const;
		JString getUuid() const;
		jint hashCode() const;
		jboolean isEmulated() const;
		jboolean isPrimary() const;
		jboolean isRemovable() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os::storage

