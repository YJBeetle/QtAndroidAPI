#pragma once

#include "./DiscretePathEffect.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline DiscretePathEffect::DiscretePathEffect(jfloat arg0, jfloat arg1)
		: android::graphics::PathEffect(
			"android.graphics.DiscretePathEffect",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./PathEffect.hpp"

