#pragma once

#include "./PaintFlagsDrawFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline PaintFlagsDrawFilter::PaintFlagsDrawFilter(jint arg0, jint arg1)
		: android::graphics::DrawFilter(
			"android.graphics.PaintFlagsDrawFilter",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./DrawFilter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
