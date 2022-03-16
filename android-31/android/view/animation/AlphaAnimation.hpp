#pragma once

#include "../../content/Context.def.hpp"
#include "./Transformation.def.hpp"
#include "./AlphaAnimation.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline AlphaAnimation::AlphaAnimation(android::content::Context arg0, JObject arg1)
		: android::view::animation::Animation(
			"android.view.animation.AlphaAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AlphaAnimation::AlphaAnimation(jfloat arg0, jfloat arg1)
		: android::view::animation::Animation(
			"android.view.animation.AlphaAnimation",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean AlphaAnimation::willChangeBounds() const
	{
		return callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	inline jboolean AlphaAnimation::willChangeTransformationMatrix() const
	{
		return callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation

// Base class headers
#include "./Animation.hpp"

