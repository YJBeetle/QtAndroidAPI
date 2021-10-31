#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os::storage
{
	class StorageVolume;
}

namespace android::os::storage
{
	class StorageManager_StorageVolumeCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StorageManager_StorageVolumeCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StorageManager_StorageVolumeCallback(QAndroidJniObject obj);
		
		// Constructors
		StorageManager_StorageVolumeCallback();
		
		// Methods
		void onStateChanged(android::os::storage::StorageVolume arg0);
	};
} // namespace android::os::storage

