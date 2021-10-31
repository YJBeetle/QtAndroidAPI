#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::os
{
	class ProxyFileDescriptorCallback;
}
namespace android::os::storage
{
	class OnObbStateChangeListener;
}
namespace android::os::storage
{
	class StorageVolume;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::util
{
	class UUID;
}

namespace android::os::storage
{
	class StorageManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_MANAGE_STORAGE();
		static jstring EXTRA_REQUESTED_BYTES();
		static jstring EXTRA_UUID();
		static QAndroidJniObject UUID_DEFAULT();
		
		StorageManager(QAndroidJniObject obj);
		// Constructors
		StorageManager() = default;
		
		// Methods
		void allocateBytes(java::io::FileDescriptor arg0, jlong arg1);
		void allocateBytes(java::util::UUID arg0, jlong arg1);
		jlong getAllocatableBytes(java::util::UUID arg0);
		jlong getCacheQuotaBytes(java::util::UUID arg0);
		jlong getCacheSizeBytes(java::util::UUID arg0);
		jstring getMountedObbPath(jstring arg0);
		QAndroidJniObject getPrimaryStorageVolume();
		QAndroidJniObject getStorageVolume(android::net::Uri arg0);
		QAndroidJniObject getStorageVolume(java::io::File arg0);
		QAndroidJniObject getStorageVolumes();
		QAndroidJniObject getUuidForPath(java::io::File arg0);
		jboolean isAllocationSupported(java::io::FileDescriptor arg0);
		jboolean isCacheBehaviorGroup(java::io::File arg0);
		jboolean isCacheBehaviorTombstone(java::io::File arg0);
		jboolean isEncrypted(java::io::File arg0);
		jboolean isObbMounted(jstring arg0);
		jboolean mountObb(jstring arg0, jstring arg1, android::os::storage::OnObbStateChangeListener arg2);
		QAndroidJniObject openProxyFileDescriptor(jint arg0, android::os::ProxyFileDescriptorCallback arg1, android::os::Handler arg2);
		void setCacheBehaviorGroup(java::io::File arg0, jboolean arg1);
		void setCacheBehaviorTombstone(java::io::File arg0, jboolean arg1);
		jboolean unmountObb(jstring arg0, jboolean arg1, android::os::storage::OnObbStateChangeListener arg2);
	};
} // namespace android::os::storage

