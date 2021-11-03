#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
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
	class StorageManager_StorageVolumeCallback;
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
	class StorageManager : public JObject
	{
	public:
		// Fields
		static jstring ACTION_CLEAR_APP_CACHE();
		static jstring ACTION_MANAGE_STORAGE();
		static jstring EXTRA_REQUESTED_BYTES();
		static jstring EXTRA_UUID();
		static java::util::UUID UUID_DEFAULT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StorageManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void allocateBytes(java::io::FileDescriptor arg0, jlong arg1);
		void allocateBytes(java::util::UUID arg0, jlong arg1);
		jlong getAllocatableBytes(java::util::UUID arg0);
		jlong getCacheQuotaBytes(java::util::UUID arg0);
		jlong getCacheSizeBytes(java::util::UUID arg0);
		android::app::PendingIntent getManageSpaceActivityIntent(jstring arg0, jint arg1);
		jstring getMountedObbPath(jstring arg0);
		android::os::storage::StorageVolume getPrimaryStorageVolume();
		JObject getRecentStorageVolumes();
		android::os::storage::StorageVolume getStorageVolume(android::net::Uri arg0);
		android::os::storage::StorageVolume getStorageVolume(java::io::File arg0);
		JObject getStorageVolumes();
		java::util::UUID getUuidForPath(java::io::File arg0);
		jboolean isAllocationSupported(java::io::FileDescriptor arg0);
		jboolean isCacheBehaviorGroup(java::io::File arg0);
		jboolean isCacheBehaviorTombstone(java::io::File arg0);
		jboolean isCheckpointSupported();
		jboolean isEncrypted(java::io::File arg0);
		jboolean isObbMounted(jstring arg0);
		jboolean mountObb(jstring arg0, jstring arg1, android::os::storage::OnObbStateChangeListener arg2);
		android::os::ParcelFileDescriptor openProxyFileDescriptor(jint arg0, android::os::ProxyFileDescriptorCallback arg1, android::os::Handler arg2);
		void registerStorageVolumeCallback(JObject arg0, android::os::storage::StorageManager_StorageVolumeCallback arg1);
		void setCacheBehaviorGroup(java::io::File arg0, jboolean arg1);
		void setCacheBehaviorTombstone(java::io::File arg0, jboolean arg1);
		jboolean unmountObb(jstring arg0, jboolean arg1, android::os::storage::OnObbStateChangeListener arg2);
		void unregisterStorageVolumeCallback(android::os::storage::StorageManager_StorageVolumeCallback arg0);
	};
} // namespace android::os::storage

