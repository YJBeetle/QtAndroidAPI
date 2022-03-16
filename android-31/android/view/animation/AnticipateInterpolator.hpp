#pragma once

#include "../../content/Context.def.hpp"
#include "./AnticipateInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline AnticipateInterpolator::AnticipateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateInterpolator",
			"()V"
		) {}
	inline AnticipateInterpolator::AnticipateInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateInterpolator",
			"(F)V",
			arg0
		) {}
	inline AnticipateInterpolator::AnticipateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat AnticipateInterpolator::getInterpolation(jfloat arg0) const
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

