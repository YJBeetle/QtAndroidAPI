#pragma once

#include "../../content/Context.def.hpp"
#include "./CycleInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline CycleInterpolator::CycleInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.CycleInterpolator",
			"(F)V",
			arg0
		) {}
	inline CycleInterpolator::CycleInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.CycleInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat CycleInterpolator::getInterpolation(jfloat arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::animation;
#endif
