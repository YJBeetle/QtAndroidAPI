#include "./DrmStore.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	DrmStore::DrmStore(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DrmStore::DrmStore()
		: JObject(
			"android.drm.DrmStore",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

