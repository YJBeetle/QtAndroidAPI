#pragma once

#include "./BlurMaskFilter_Blur.def.hpp"
#include "./BlurMaskFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline BlurMaskFilter::BlurMaskFilter(jfloat arg0, android::graphics::BlurMaskFilter_Blur arg1)
		: android::graphics::MaskFilter(
			"android.graphics.BlurMaskFilter",
			"(FLandroid/graphics/BlurMaskFilter$Blur;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./MaskFilter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
