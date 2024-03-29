#pragma once

#include "./MaskFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline MaskFilter::MaskFilter()
		: JObject(
			"android.graphics.MaskFilter",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
