#pragma once

#include "./Manifest.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline Manifest::Manifest()
		: JObject(
			"android.Manifest",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
