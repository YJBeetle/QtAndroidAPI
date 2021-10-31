#include "../../net/Uri.hpp"
#include "../Handler.hpp"
#include "../ParcelFileDescriptor.hpp"
#include "../ProxyFileDescriptorCallback.hpp"
#include "./OnObbStateChangeListener.hpp"
#include "./StorageManager_StorageVolumeCallback.hpp"
#include "./StorageVolume.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/util/UUID.hpp"
#include "./StorageManager.hpp"

namespace android::os::storage
{
	// Fields
	jstring StorageManager::ACTION_CLEAR_APP_CACHE()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"ACTION_CLEAR_APP_CACHE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StorageManager::ACTION_MANAGE_STORAGE()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"ACTION_MANAGE_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StorageManager::EXTRA_REQUESTED_BYTES()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"EXTRA_REQUESTED_BYTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StorageManager::EXTRA_UUID()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"EXTRA_UUID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::UUID StorageManager::UUID_DEFAULT()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"UUID_DEFAULT",
			"Ljava/util/UUID;"
		);
	}
	
	// QJniObject forward
	StorageManager::StorageManager(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void StorageManager::allocateBytes(java::io::FileDescriptor arg0, jlong arg1)
	{
		callMethod<void>(
			"allocateBytes",
			"(Ljava/io/FileDescriptor;J)V",
			arg0.object(),
			arg1
		);
	}
	void StorageManager::allocateBytes(java::util::UUID arg0, jlong arg1)
	{
		callMethod<void>(
			"allocateBytes",
			"(Ljava/util/UUID;J)V",
			arg0.object(),
			arg1
		);
	}
	jlong StorageManager::getAllocatableBytes(java::util::UUID arg0)
	{
		return callMethod<jlong>(
			"getAllocatableBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	jlong StorageManager::getCacheQuotaBytes(java::util::UUID arg0)
	{
		return callMethod<jlong>(
			"getCacheQuotaBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	jlong StorageManager::getCacheSizeBytes(java::util::UUID arg0)
	{
		return callMethod<jlong>(
			"getCacheSizeBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	jstring StorageManager::getMountedObbPath(jstring arg0)
	{
		return callObjectMethod(
			"getMountedObbPath",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::os::storage::StorageVolume StorageManager::getPrimaryStorageVolume()
	{
		return callObjectMethod(
			"getPrimaryStorageVolume",
			"()Landroid/os/storage/StorageVolume;"
		);
	}
	__JniBaseClass StorageManager::getRecentStorageVolumes()
	{
		return callObjectMethod(
			"getRecentStorageVolumes",
			"()Ljava/util/List;"
		);
	}
	android::os::storage::StorageVolume StorageManager::getStorageVolume(android::net::Uri arg0)
	{
		return callObjectMethod(
			"getStorageVolume",
			"(Landroid/net/Uri;)Landroid/os/storage/StorageVolume;",
			arg0.object()
		);
	}
	android::os::storage::StorageVolume StorageManager::getStorageVolume(java::io::File arg0)
	{
		return callObjectMethod(
			"getStorageVolume",
			"(Ljava/io/File;)Landroid/os/storage/StorageVolume;",
			arg0.object()
		);
	}
	__JniBaseClass StorageManager::getStorageVolumes()
	{
		return callObjectMethod(
			"getStorageVolumes",
			"()Ljava/util/List;"
		);
	}
	java::util::UUID StorageManager::getUuidForPath(java::io::File arg0)
	{
		return callObjectMethod(
			"getUuidForPath",
			"(Ljava/io/File;)Ljava/util/UUID;",
			arg0.object()
		);
	}
	jboolean StorageManager::isAllocationSupported(java::io::FileDescriptor arg0)
	{
		return callMethod<jboolean>(
			"isAllocationSupported",
			"(Ljava/io/FileDescriptor;)Z",
			arg0.object()
		);
	}
	jboolean StorageManager::isCacheBehaviorGroup(java::io::File arg0)
	{
		return callMethod<jboolean>(
			"isCacheBehaviorGroup",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	jboolean StorageManager::isCacheBehaviorTombstone(java::io::File arg0)
	{
		return callMethod<jboolean>(
			"isCacheBehaviorTombstone",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	jboolean StorageManager::isCheckpointSupported()
	{
		return callMethod<jboolean>(
			"isCheckpointSupported",
			"()Z"
		);
	}
	jboolean StorageManager::isEncrypted(java::io::File arg0)
	{
		return callMethod<jboolean>(
			"isEncrypted",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	jboolean StorageManager::isObbMounted(jstring arg0)
	{
		return callMethod<jboolean>(
			"isObbMounted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean StorageManager::mountObb(jstring arg0, jstring arg1, android::os::storage::OnObbStateChangeListener arg2)
	{
		return callMethod<jboolean>(
			"mountObb",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/storage/OnObbStateChangeListener;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::os::ParcelFileDescriptor StorageManager::openProxyFileDescriptor(jint arg0, android::os::ProxyFileDescriptorCallback arg1, android::os::Handler arg2)
	{
		return callObjectMethod(
			"openProxyFileDescriptor",
			"(ILandroid/os/ProxyFileDescriptorCallback;Landroid/os/Handler;)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void StorageManager::registerStorageVolumeCallback(__JniBaseClass arg0, android::os::storage::StorageManager_StorageVolumeCallback arg1)
	{
		callMethod<void>(
			"registerStorageVolumeCallback",
			"(Ljava/util/concurrent/Executor;Landroid/os/storage/StorageManager$StorageVolumeCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void StorageManager::setCacheBehaviorGroup(java::io::File arg0, jboolean arg1)
	{
		callMethod<void>(
			"setCacheBehaviorGroup",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		);
	}
	void StorageManager::setCacheBehaviorTombstone(java::io::File arg0, jboolean arg1)
	{
		callMethod<void>(
			"setCacheBehaviorTombstone",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		);
	}
	jboolean StorageManager::unmountObb(jstring arg0, jboolean arg1, android::os::storage::OnObbStateChangeListener arg2)
	{
		return callMethod<jboolean>(
			"unmountObb",
			"(Ljava/lang/String;ZLandroid/os/storage/OnObbStateChangeListener;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void StorageManager::unregisterStorageVolumeCallback(android::os::storage::StorageManager_StorageVolumeCallback arg0)
	{
		callMethod<void>(
			"unregisterStorageVolumeCallback",
			"(Landroid/os/storage/StorageManager$StorageVolumeCallback;)V",
			arg0.object()
		);
	}
} // namespace android::os::storage

