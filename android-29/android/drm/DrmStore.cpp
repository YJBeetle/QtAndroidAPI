#include "./DrmStore.hpp"

namespace android::drm
{
	// Fields
	
	DrmStore::DrmStore(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DrmStore::DrmStore()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore",
			"()V"
		);
	}
	
	// Methods
} // namespace android::drm

