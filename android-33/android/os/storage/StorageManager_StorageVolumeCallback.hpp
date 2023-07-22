#pragma once

#include "./StorageVolume.def.hpp"
#include "./StorageManager_StorageVolumeCallback.def.hpp"

namespace android::os::storage
{
	// Fields
	
	// Constructors
	inline StorageManager_StorageVolumeCallback::StorageManager_StorageVolumeCallback()
		: JObject(
			"android.os.storage.StorageManager$StorageVolumeCallback",
			"()V"
		) {}
	
	// Methods
	inline void StorageManager_StorageVolumeCallback::onStateChanged(android::os::storage::StorageVolume arg0) const
	{
		callMethod<void>(
			"onStateChanged",
			"(Landroid/os/storage/StorageVolume;)V",
			arg0.object()
		);
	}
} // namespace android::os::storage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::storage;
#endif
