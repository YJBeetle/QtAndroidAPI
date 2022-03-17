#pragma once

#include "./R_plurals.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline R_plurals::R_plurals()
		: JObject(
			"android.R$plurals",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
