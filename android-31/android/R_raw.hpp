#pragma once

#include "./R_raw.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline R_raw::R_raw()
		: JObject(
			"android.R$raw",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
