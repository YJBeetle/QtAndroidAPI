#pragma once

#include "../../content/Context.def.hpp"
#include "./AnticipateOvershootInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline AnticipateOvershootInterpolator::AnticipateOvershootInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"()V"
		) {}
	inline AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(F)V",
			arg0
		) {}
	inline AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(jfloat arg0, jfloat arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jfloat AnticipateOvershootInterpolator::getInterpolation(jfloat arg0) const
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
