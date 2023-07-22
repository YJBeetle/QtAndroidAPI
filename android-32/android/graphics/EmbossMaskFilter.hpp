#pragma once

#include "../../JFloatArray.hpp"
#include "./EmbossMaskFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline EmbossMaskFilter::EmbossMaskFilter(JFloatArray arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: android::graphics::MaskFilter(
			"android.graphics.EmbossMaskFilter",
			"([FFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./MaskFilter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
