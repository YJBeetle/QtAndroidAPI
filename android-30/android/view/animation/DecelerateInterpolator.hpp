#pragma once

#include "../../content/Context.def.hpp"
#include "./DecelerateInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline DecelerateInterpolator::DecelerateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.DecelerateInterpolator",
			"()V"
		) {}
	inline DecelerateInterpolator::DecelerateInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.DecelerateInterpolator",
			"(F)V",
			arg0
		) {}
	inline DecelerateInterpolator::DecelerateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.DecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat DecelerateInterpolator::getInterpolation(jfloat arg0) const
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
