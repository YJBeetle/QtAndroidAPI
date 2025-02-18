#pragma once

#include "./MediaFeature.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaFeature::MediaFeature()
		: JObject(
			"android.media.MediaFeature",
			"()V"
		) {}
	
	// Methods
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
