#pragma once

#include "./R_fraction.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline R_fraction::R_fraction()
		: JObject(
			"android.R$fraction",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
