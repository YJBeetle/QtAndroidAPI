#pragma once

#include "../../../JObject.hpp"

namespace android::os::storage
{
	class StorageVolume;
}

namespace android::os::storage
{
	class StorageManager_StorageVolumeCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StorageManager_StorageVolumeCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StorageManager_StorageVolumeCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StorageManager_StorageVolumeCallback();
		
		// Methods
		void onStateChanged(android::os::storage::StorageVolume arg0) const;
	};
} // namespace android::os::storage

