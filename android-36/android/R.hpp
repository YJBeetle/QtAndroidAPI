#pragma once

#include "./R.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline R::R()
		: JObject(
			"android.R",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
