#pragma once

#include "./LightingColorFilter.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline LightingColorFilter::LightingColorFilter(jint arg0, jint arg1)
		: android::graphics::ColorFilter(
			"android.graphics.LightingColorFilter",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint LightingColorFilter::getColorAdd() const
	{
		return callMethod<jint>(
			"getColorAdd",
			"()I"
		);
	}
	inline jint LightingColorFilter::getColorMultiply() const
	{
		return callMethod<jint>(
			"getColorMultiply",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers
#include "./ColorFilter.hpp"

