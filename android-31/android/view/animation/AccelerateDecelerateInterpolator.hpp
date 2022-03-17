#pragma once

#include "../../content/Context.def.hpp"
#include "./AccelerateDecelerateInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"()V"
		) {}
	inline AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat AccelerateDecelerateInterpolator::getInterpolation(jfloat arg0) const
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

