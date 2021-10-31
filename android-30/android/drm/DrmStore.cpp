#include "./DrmStore.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	DrmStore::DrmStore(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmStore::DrmStore()
		: __JniBaseClass(
			"android.drm.DrmStore",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

