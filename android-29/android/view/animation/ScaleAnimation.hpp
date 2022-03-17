#pragma once

#include "../../content/Context.def.hpp"
#include "./Transformation.def.hpp"
#include "./ScaleAnimation.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline ScaleAnimation::ScaleAnimation(android::content::Context arg0, JObject arg1)
		: android::view::animation::Animation(
			"android.view.animation.ScaleAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ScaleAnimation::ScaleAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: android::view::animation::Animation(
			"android.view.animation.ScaleAnimation",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	inline ScaleAnimation::ScaleAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
		: android::view::animation::Animation(
			"android.view.animation.ScaleAnimation",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	inline ScaleAnimation::ScaleAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jfloat arg5, jint arg6, jfloat arg7)
		: android::view::animation::Animation(
			"android.view.animation.ScaleAnimation",
			"(FFFFIFIF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		) {}
	
	// Methods
	inline void ScaleAnimation::initialize(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::view::animation

// Base class headers
#include "./Animation.hpp"

