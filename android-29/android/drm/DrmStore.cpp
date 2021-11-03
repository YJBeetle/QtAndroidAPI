#include "./DrmStore.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmStore::DrmStore(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmStore::DrmStore()
		: JObject(
			"android.drm.DrmStore",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

