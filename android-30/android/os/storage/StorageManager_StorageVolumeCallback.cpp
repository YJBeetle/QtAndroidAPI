#include "./StorageVolume.hpp"
#include "./StorageManager_StorageVolumeCallback.hpp"

namespace android::os::storage
{
	// Fields
	
	// QAndroidJniObject forward
	StorageManager_StorageVolumeCallback::StorageManager_StorageVolumeCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StorageManager_StorageVolumeCallback::StorageManager_StorageVolumeCallback()
		: JObject(
			"android.os.storage.StorageManager$StorageVolumeCallback",
			"()V"
		) {}
	
	// Methods
	void StorageManager_StorageVolumeCallback::onStateChanged(android::os::storage::StorageVolume arg0) const
	{
		callMethod<void>(
			"onStateChanged",
			"(Landroid/os/storage/StorageVolume;)V",
			arg0.object()
		);
	}
} // namespace android::os::storage

