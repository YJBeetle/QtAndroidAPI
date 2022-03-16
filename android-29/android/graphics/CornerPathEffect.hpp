#pragma once

#include "./CornerPathEffect.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline CornerPathEffect::CornerPathEffect(jfloat arg0)
		: android::graphics::PathEffect(
			"android.graphics.CornerPathEffect",
			"(F)V",
			arg0
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./PathEffect.hpp"

