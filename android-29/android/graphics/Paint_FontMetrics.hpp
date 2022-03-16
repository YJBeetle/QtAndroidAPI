#pragma once

#include "./Paint_FontMetrics.def.hpp"

namespace android::graphics
{
	// Fields
	inline jfloat Paint_FontMetrics::ascent()
	{
		return getField<jfloat>(
			"ascent"
		);
	}
	inline jfloat Paint_FontMetrics::bottom()
	{
		return getField<jfloat>(
			"bottom"
		);
	}
	inline jfloat Paint_FontMetrics::descent()
	{
		return getField<jfloat>(
			"descent"
		);
	}
	inline jfloat Paint_FontMetrics::leading()
	{
		return getField<jfloat>(
			"leading"
		);
	}
	inline jfloat Paint_FontMetrics::top()
	{
		return getField<jfloat>(
			"top"
		);
	}
	
	// Constructors
	inline Paint_FontMetrics::Paint_FontMetrics()
		: JObject(
			"android.graphics.Paint$FontMetrics",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers

