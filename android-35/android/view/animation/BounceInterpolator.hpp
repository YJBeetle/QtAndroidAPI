#pragma once

#include "../../content/Context.def.hpp"
#include "./BounceInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline BounceInterpolator::BounceInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.BounceInterpolator",
			"()V"
		) {}
	inline BounceInterpolator::BounceInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.BounceInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat BounceInterpolator::getInterpolation(jfloat arg0) const
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
