#pragma once

#include "../../content/Context.def.hpp"
#include "./OvershootInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline OvershootInterpolator::OvershootInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.OvershootInterpolator",
			"()V"
		) {}
	inline OvershootInterpolator::OvershootInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.OvershootInterpolator",
			"(F)V",
			arg0
		) {}
	inline OvershootInterpolator::OvershootInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.OvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jfloat OvershootInterpolator::getInterpolation(jfloat arg0) const
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
