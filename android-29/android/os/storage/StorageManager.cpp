#include "../../net/Uri.hpp"
#include "../Handler.hpp"
#include "../ParcelFileDescriptor.hpp"
#include "../ProxyFileDescriptorCallback.hpp"
#include "./OnObbStateChangeListener.hpp"
#include "./StorageVolume.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/util/UUID.hpp"
#include "./StorageManager.hpp"

namespace android::os::storage
{
	// Fields
	jstring StorageManager::ACTION_MANAGE_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageManager",
			"ACTION_MANAGE_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StorageManager::EXTRA_REQUESTED_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageManager",
			"EXTRA_REQUESTED_BYTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StorageManager::EXTRA_UUID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageManager",
			"EXTRA_UUID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject StorageManager::UUID_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageManager",
			"UUID_DEFAULT",
			"Ljava/util/UUID;"
		);
	}
	
	StorageManager::StorageManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void StorageManager::allocateBytes(java::io::FileDescriptor arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"allocateBytes",
			"(Ljava/io/FileDescriptor;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void StorageManager::allocateBytes(java::util::UUID arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"allocateBytes",
			"(Ljava/util/UUID;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong StorageManager::getAllocatableBytes(java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAllocatableBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	jlong StorageManager::getCacheQuotaBytes(java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getCacheQuotaBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	jlong StorageManager::getCacheSizeBytes(java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getCacheSizeBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	jstring StorageManager::getMountedObbPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getMountedObbPath",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring StorageManager::getMountedObbPath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getMountedObbPath",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject StorageManager::getPrimaryStorageVolume()
	{
		return __thiz.callObjectMethod(
			"getPrimaryStorageVolume",
			"()Landroid/os/storage/StorageVolume;"
		);
	}
	QAndroidJniObject StorageManager::getStorageVolume(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getStorageVolume",
			"(Landroid/net/Uri;)Landroid/os/storage/StorageVolume;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StorageManager::getStorageVolume(java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"getStorageVolume",
			"(Ljava/io/File;)Landroid/os/storage/StorageVolume;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StorageManager::getStorageVolumes()
	{
		return __thiz.callObjectMethod(
			"getStorageVolumes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject StorageManager::getUuidForPath(java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"getUuidForPath",
			"(Ljava/io/File;)Ljava/util/UUID;",
			arg0.__jniObject().object()
		);
	}
	jboolean StorageManager::isAllocationSupported(java::io::FileDescriptor arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllocationSupported",
			"(Ljava/io/FileDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean StorageManager::isCacheBehaviorGroup(java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCacheBehaviorGroup",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean StorageManager::isCacheBehaviorTombstone(java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCacheBehaviorTombstone",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean StorageManager::isEncrypted(java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEncrypted",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean StorageManager::isObbMounted(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isObbMounted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean StorageManager::isObbMounted(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isObbMounted",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean StorageManager::mountObb(jstring arg0, jstring arg1, android::os::storage::OnObbStateChangeListener arg2)
	{
		return __thiz.callMethod<jboolean>(
			"mountObb",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/storage/OnObbStateChangeListener;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean StorageManager::mountObb(const QString &arg0, const QString &arg1, android::os::storage::OnObbStateChangeListener arg2)
	{
		return __thiz.callMethod<jboolean>(
			"mountObb",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/storage/OnObbStateChangeListener;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject StorageManager::openProxyFileDescriptor(jint arg0, android::os::ProxyFileDescriptorCallback arg1, android::os::Handler arg2)
	{
		return __thiz.callObjectMethod(
			"openProxyFileDescriptor",
			"(ILandroid/os/ProxyFileDescriptorCallback;Landroid/os/Handler;)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void StorageManager::setCacheBehaviorGroup(java::io::File arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setCacheBehaviorGroup",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void StorageManager::setCacheBehaviorTombstone(java::io::File arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setCacheBehaviorTombstone",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean StorageManager::unmountObb(jstring arg0, jboolean arg1, android::os::storage::OnObbStateChangeListener arg2)
	{
		return __thiz.callMethod<jboolean>(
			"unmountObb",
			"(Ljava/lang/String;ZLandroid/os/storage/OnObbStateChangeListener;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean StorageManager::unmountObb(const QString &arg0, jboolean arg1, android::os::storage::OnObbStateChangeListener arg2)
	{
		return __thiz.callMethod<jboolean>(
			"unmountObb",
			"(Ljava/lang/String;ZLandroid/os/storage/OnObbStateChangeListener;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
} // namespace android::os::storage

