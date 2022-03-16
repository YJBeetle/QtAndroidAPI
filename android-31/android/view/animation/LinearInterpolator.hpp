#pragma once

#include "../../content/Context.def.hpp"
#include "./LinearInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline LinearInterpolator::LinearInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.LinearInterpolator",
			"()V"
		) {}
	inline LinearInterpolator::LinearInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.LinearInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat LinearInterpolator::getInterpolation(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

// Base class headers
#include "./BaseInterpolator.hpp"

