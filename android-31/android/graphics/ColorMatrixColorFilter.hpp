#pragma once

#include "../../JFloatArray.hpp"
#include "./ColorMatrix.def.hpp"
#include "./ColorMatrixColorFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline ColorMatrixColorFilter::ColorMatrixColorFilter(JFloatArray arg0)
		: android::graphics::ColorFilter(
			"android.graphics.ColorMatrixColorFilter",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	inline ColorMatrixColorFilter::ColorMatrixColorFilter(android::graphics::ColorMatrix arg0)
		: android::graphics::ColorFilter(
			"android.graphics.ColorMatrixColorFilter",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ColorMatrixColorFilter::getColorMatrix(android::graphics::ColorMatrix arg0) const
	{
		callMethod<void>(
			"getColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

// Base class headers
#include "./ColorFilter.hpp"

