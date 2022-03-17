#pragma once

#include "../Handler.def.hpp"
#include "../ParcelFileDescriptor.def.hpp"
#include "../ProxyFileDescriptorCallback.def.hpp"
#include "./OnObbStateChangeListener.def.hpp"
#include "./StorageVolume.def.hpp"
#include "../../../java/io/File.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/UUID.def.hpp"
#include "./StorageManager.def.hpp"

namespace android::os::storage
{
	// Fields
	inline JString StorageManager::ACTION_MANAGE_STORAGE()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"ACTION_MANAGE_STORAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString StorageManager::EXTRA_REQUESTED_BYTES()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"EXTRA_REQUESTED_BYTES",
			"Ljava/lang/String;"
		);
	}
	inline JString StorageManager::EXTRA_UUID()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"EXTRA_UUID",
			"Ljava/lang/String;"
		);
	}
	inline java::util::UUID StorageManager::UUID_DEFAULT()
	{
		return getStaticObjectField(
			"android.os.storage.StorageManager",
			"UUID_DEFAULT",
			"Ljava/util/UUID;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void StorageManager::allocateBytes(java::io::FileDescriptor arg0, jlong arg1) const
	{
		callMethod<void>(
			"allocateBytes",
			"(Ljava/io/FileDescriptor;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void StorageManager::allocateBytes(java::util::UUID arg0, jlong arg1) const
	{
		callMethod<void>(
			"allocateBytes",
			"(Ljava/util/UUID;J)V",
			arg0.object(),
			arg1
		);
	}
	inline jlong StorageManager::getAllocatableBytes(java::util::UUID arg0) const
	{
		return callMethod<jlong>(
			"getAllocatableBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	inline jlong StorageManager::getCacheQuotaBytes(java::util::UUID arg0) const
	{
		return callMethod<jlong>(
			"getCacheQuotaBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	inline jlong StorageManager::getCacheSizeBytes(java::util::UUID arg0) const
	{
		return callMethod<jlong>(
			"getCacheSizeBytes",
			"(Ljava/util/UUID;)J",
			arg0.object()
		);
	}
	inline JString StorageManager::getMountedObbPath(JString arg0) const
	{
		return callObjectMethod(
			"getMountedObbPath",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::os::storage::StorageVolume StorageManager::getPrimaryStorageVolume() const
	{
		return callObjectMethod(
			"getPrimaryStorageVolume",
			"()Landroid/os/storage/StorageVolume;"
		);
	}
	inline android::os::storage::StorageVolume StorageManager::getStorageVolume(java::io::File arg0) const
	{
		return callObjectMethod(
			"getStorageVolume",
			"(Ljava/io/File;)Landroid/os/storage/StorageVolume;",
			arg0.object()
		);
	}
	inline JObject StorageManager::getStorageVolumes() const
	{
		return callObjectMethod(
			"getStorageVolumes",
			"()Ljava/util/List;"
		);
	}
	inline java::util::UUID StorageManager::getUuidForPath(java::io::File arg0) const
	{
		return callObjectMethod(
			"getUuidForPath",
			"(Ljava/io/File;)Ljava/util/UUID;",
			arg0.object()
		);
	}
	inline jboolean StorageManager::isAllocationSupported(java::io::FileDescriptor arg0) const
	{
		return callMethod<jboolean>(
			"isAllocationSupported",
			"(Ljava/io/FileDescriptor;)Z",
			arg0.object()
		);
	}
	inline jboolean StorageManager::isCacheBehaviorGroup(java::io::File arg0) const
	{
		return callMethod<jboolean>(
			"isCacheBehaviorGroup",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline jboolean StorageManager::isCacheBehaviorTombstone(java::io::File arg0) const
	{
		return callMethod<jboolean>(
			"isCacheBehaviorTombstone",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline jboolean StorageManager::isEncrypted(java::io::File arg0) const
	{
		return callMethod<jboolean>(
			"isEncrypted",
			"(Ljava/io/File;)Z",
			arg0.object()
		);
	}
	inline jboolean StorageManager::isObbMounted(JString arg0) const
	{
		return callMethod<jboolean>(
			"isObbMounted",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean StorageManager::mountObb(JString arg0, JString arg1, android::os::storage::OnObbStateChangeListener arg2) const
	{
		return callMethod<jboolean>(
			"mountObb",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/storage/OnObbStateChangeListener;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::os::ParcelFileDescriptor StorageManager::openProxyFileDescriptor(jint arg0, android::os::ProxyFileDescriptorCallback arg1, android::os::Handler arg2) const
	{
		return callObjectMethod(
			"openProxyFileDescriptor",
			"(ILandroid/os/ProxyFileDescriptorCallback;Landroid/os/Handler;)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void StorageManager::setCacheBehaviorGroup(java::io::File arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCacheBehaviorGroup",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void StorageManager::setCacheBehaviorTombstone(java::io::File arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setCacheBehaviorTombstone",
			"(Ljava/io/File;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean StorageManager::unmountObb(JString arg0, jboolean arg1, android::os::storage::OnObbStateChangeListener arg2) const
	{
		return callMethod<jboolean>(
			"unmountObb",
			"(Ljava/lang/String;ZLandroid/os/storage/OnObbStateChangeListener;)Z",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
} // namespace android::os::storage

// Base class headers

