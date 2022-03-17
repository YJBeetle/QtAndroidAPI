#pragma once

#include "./Xfermode.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Xfermode::Xfermode()
		: JObject(
			"android.graphics.Xfermode",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
