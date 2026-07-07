#pragma once

#include "./WindowInsetsAnimation.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline WindowInsetsAnimation::WindowInsetsAnimation(jint arg0, JObject arg1, jlong arg2)
		: JObject(
			"android.view.WindowInsetsAnimation",
			"(ILandroid/view/animation/Interpolator;J)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline jfloat WindowInsetsAnimation::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	inline jlong WindowInsetsAnimation::getDurationMillis() const
	{
		return callMethod<jlong>(
			"getDurationMillis",
			"()J"
		);
	}
	inline jfloat WindowInsetsAnimation::getFraction() const
	{
		return callMethod<jfloat>(
			"getFraction",
			"()F"
		);
	}
	inline jfloat WindowInsetsAnimation::getInterpolatedFraction() const
	{
		return callMethod<jfloat>(
			"getInterpolatedFraction",
			"()F"
		);
	}
	inline JObject WindowInsetsAnimation::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	inline jint WindowInsetsAnimation::getTypeMask() const
	{
		return callMethod<jint>(
			"getTypeMask",
			"()I"
		);
	}
	inline void WindowInsetsAnimation::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	inline void WindowInsetsAnimation::setFraction(jfloat arg0) const
	{
		callMethod<void>(
			"setFraction",
			"(F)V",
			arg0
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
