#include "./DrmStore.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmStore::DrmStore(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmStore::DrmStore()
		: __JniBaseClass(
			"android.drm.DrmStore",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

