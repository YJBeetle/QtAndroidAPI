#pragma once

#include "./R_bool.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline R_bool::R_bool()
		: JObject(
			"android.R$bool",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
