#pragma once

#ifndef ANDROID_OS_STORAGE_STORAGEMANAGER
#define ANDROID_OS_STORAGE_STORAGEMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class UUID;
}
namespace __jni_impl::android::os::storage
{
	class OnObbStateChangeListener;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::os::storage
{
	class StorageVolume;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::os
{
	class ProxyFileDescriptorCallback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::os::storage
{
	class StorageManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_MANAGE_STORAGE();
		static jstring EXTRA_REQUESTED_BYTES();
		static jstring EXTRA_UUID();
		static QAndroidJniObject UUID_DEFAULT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean mountObb(jstring arg0, jstring arg1, __jni_impl::android::os::storage::OnObbStateChangeListener arg2);
		jboolean unmountObb(jstring arg0, jboolean arg1, __jni_impl::android::os::storage::OnObbStateChangeListener arg2);
		jboolean isObbMounted(jstring arg0);
		jstring getMountedObbPath(jstring arg0);
		QAndroidJniObject getUuidForPath(__jni_impl::java::io::File arg0);
		jboolean isAllocationSupported(__jni_impl::java::io::FileDescriptor arg0);
		QAndroidJniObject getStorageVolume(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject getStorageVolume(__jni_impl::java::io::File arg0);
		QAndroidJniObject getStorageVolumes();
		QAndroidJniObject getPrimaryStorageVolume();
		jboolean isEncrypted(__jni_impl::java::io::File arg0);
		QAndroidJniObject openProxyFileDescriptor(jint arg0, __jni_impl::android::os::ProxyFileDescriptorCallback arg1, __jni_impl::android::os::Handler arg2);
		jlong getCacheQuotaBytes(__jni_impl::java::util::UUID arg0);
		jlong getCacheSizeBytes(__jni_impl::java::util::UUID arg0);
		jlong getAllocatableBytes(__jni_impl::java::util::UUID arg0);
		void allocateBytes(__jni_impl::java::io::FileDescriptor arg0, jlong arg1);
		void allocateBytes(__jni_impl::java::util::UUID arg0, jlong arg1);
		void setCacheBehaviorGroup(__jni_impl::java::io::File arg0, jboolean arg1);
		jboolean isCacheBehaviorGroup(__jni_impl::java::io::File arg0);
		void setCacheBehaviorTombstone(__jni_impl::java::io::File arg0, jboolean arg1);
		jboolean isCacheBehaviorTombstone(__jni_impl::java::io::File arg0);
	};
} // namespace __jni_impl::android::os::storage

#include "../../../java/util/UUID.hpp"
#include "OnObbStateChangeListener.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "StorageVolume.hpp"
#include "../../net/Uri.hpp"
#include "../ParcelFileDescriptor.hpp"
#include "../ProxyFileDescriptorCallback.hpp"
#include "../Handler.hpp"

namespace __jni_impl::android::os::storage
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
	
	// Constructors
	void StorageManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.storage.StorageManager",
			"(V)V");
	}
	
	// Methods
	jboolean StorageManager::mountObb(jstring arg0, jstring arg1, __jni_impl::android::os::storage::OnObbStateChangeListener arg2)
	{
		return __thiz.callMethod<jboolean>(
			"mountObb",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/storage/OnObbStateChangeListener;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean StorageManager::unmountObb(jstring arg0, jboolean arg1, __jni_impl::android::os::storage::OnObbStateChangeListener arg2)
	{
		return __thiz.callMethod<jboolean>(
			"unmountObb",
			"(Ljava/lang/String;ZLandroid/os/storage/OnObbStateChangeListener;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
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
	jstring StorageManager::getMountedObbPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getMountedObbPath",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject StorageManager::getUuidForPath(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"getUuidForPath",
			"(Ljava/io/File;)Ljava/util/UUID;",
			arg0.__jniObject().object()
		);
	}
	jboolean StorageManager::isAllocationSupported(__jni_impl::java::io::FileDescriptor arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllocationSupported",
			"(Ljava/io/FileDescriptor;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StorageManager::getStorageVolume(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getStorageVolume",
			"(Landroid/net/Uri;)Landroid/os/storage/StorageVolume;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StorageManager::getStorageVolume(__jni_impl::java::io::File arg0)
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
	QAndroidJniObject StorageManager::getPrimaryStorageVolume()
	{
		return __thiz.callObjectMethod(
			"getPrimaryStorageVolume",
			"()Landroid/os/storage/StorageVolume;"
		);
	}
	jboolean StorageManager::isEncrypted(__jni_impl::java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEncrypted",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject StorageManager::openProxyFileDescriptor(jint arg0, __jni_impl::android::os::ProxyFileDescriptorCallback arg1, __jni_impl::android::os::Handler arg2)
	{
		return __thiz.callObjectMethod(
			"openProxyFileDescriptor",
			"(ILandroid/os/ProxyFileDescriptorCallback;Landroid/os/Handler;)Landroid/os/ParcelFileDescriptor;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jlong StorageManager::getCacheQuotaBytes(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getCacheQuotaBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	jlong StorageManager::getCacheSizeBytes(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getCacheSizeBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	jlong StorageManager::getAllocatableBytes(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callMethod<jlong>(
			"getAllocatableBytes",
			"(Ljava/util/UUID;)J",
			arg0.__jniObject().object()
		);
	}
	void StorageManager::allocateBytes(__jni_impl::java::io::FileDescriptor arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"allocateBytes",
			"(Ljava/io/FileDescriptor;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void StorageManager::allocateBytes(__jni_impl::java::util::UUID arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"allocateBytes",
			"(Ljava/util/UUID;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void StorageManager::setCacheBehaviorGroup(__jni_impl::java::io::File arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setCacheBehaviorGroup",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean StorageManager::isCacheBehaviorGroup(__jni_impl::java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCacheBehaviorGroup",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
	void StorageManager::setCacheBehaviorTombstone(__jni_impl::java::io::File arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setCacheBehaviorTombstone",
			"(Ljava/io/File;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean StorageManager::isCacheBehaviorTombstone(__jni_impl::java::io::File arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCacheBehaviorTombstone",
			"(Ljava/io/File;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::os::storage

namespace android::os::storage
{
	class StorageManager : public __jni_impl::android::os::storage::StorageManager
	{
	public:
		StorageManager(QAndroidJniObject obj) { __thiz = obj; }
		StorageManager()
		{
			__constructor();
		}
	};
} // namespace android::os::storage

#endif // ANDROID_OS_STORAGE_STORAGEMANAGER

