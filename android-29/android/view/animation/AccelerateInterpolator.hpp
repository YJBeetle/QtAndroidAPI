#pragma once

#include "../../content/Context.def.hpp"
#include "./AccelerateInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline AccelerateInterpolator::AccelerateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateInterpolator",
			"()V"
		) {}
	inline AccelerateInterpolator::AccelerateInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateInterpolator",
			"(F)V",
			arg0
		) {}
	inline AccelerateInterpolator::AccelerateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat AccelerateInterpolator::getInterpolation(jfloat arg0) const
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

