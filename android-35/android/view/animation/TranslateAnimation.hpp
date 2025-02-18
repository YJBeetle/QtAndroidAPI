#pragma once

#include "../../content/Context.def.hpp"
#include "./Transformation.def.hpp"
#include "./TranslateAnimation.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline TranslateAnimation::TranslateAnimation(android::content::Context arg0, JObject arg1)
		: android::view::animation::Animation(
			"android.view.animation.TranslateAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TranslateAnimation::TranslateAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: android::view::animation::Animation(
			"android.view.animation.TranslateAnimation",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	inline TranslateAnimation::TranslateAnimation(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5, jint arg6, jfloat arg7)
		: android::view::animation::Animation(
			"android.view.animation.TranslateAnimation",
			"(IFIFIFIF)V",
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
	inline void TranslateAnimation::initialize(jint arg0, jint arg1, jint arg2, jint arg3) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::animation;
#endif
