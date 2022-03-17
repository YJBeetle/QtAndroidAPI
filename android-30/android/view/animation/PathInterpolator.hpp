#pragma once

#include "../../content/Context.def.hpp"
#include "../../graphics/Path.def.hpp"
#include "./PathInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline PathInterpolator::PathInterpolator(android::graphics::Path arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		) {}
	inline PathInterpolator::PathInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PathInterpolator::PathInterpolator(jfloat arg0, jfloat arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(FF)V",
			arg0,
			arg1
		) {}
	inline PathInterpolator::PathInterpolator(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jfloat PathInterpolator::getInterpolation(jfloat arg0) const
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

