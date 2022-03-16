#pragma once

#include "./DrmStore.def.hpp"

namespace android::drm
{
	// Fields
	
	// Constructors
	inline DrmStore::DrmStore()
		: JObject(
			"android.drm.DrmStore",
			"()V"
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers

