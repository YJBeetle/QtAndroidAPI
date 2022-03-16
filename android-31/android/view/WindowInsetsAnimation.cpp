#include "./WindowInsetsAnimation.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	WindowInsetsAnimation::WindowInsetsAnimation(jint arg0, JObject arg1, jlong arg2)
		: JObject(
			"android.view.WindowInsetsAnimation",
			"(ILandroid/view/animation/Interpolator;J)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jfloat WindowInsetsAnimation::getAlpha() const
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jlong WindowInsetsAnimation::getDurationMillis() const
	{
		return callMethod<jlong>(
			"getDurationMillis",
			"()J"
		);
	}
	jfloat WindowInsetsAnimation::getFraction() const
	{
		return callMethod<jfloat>(
			"getFraction",
			"()F"
		);
	}
	jfloat WindowInsetsAnimation::getInterpolatedFraction() const
	{
		return callMethod<jfloat>(
			"getInterpolatedFraction",
			"()F"
		);
	}
	JObject WindowInsetsAnimation::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint WindowInsetsAnimation::getTypeMask() const
	{
		return callMethod<jint>(
			"getTypeMask",
			"()I"
		);
	}
	void WindowInsetsAnimation::setAlpha(jfloat arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void WindowInsetsAnimation::setFraction(jfloat arg0) const
	{
		callMethod<void>(
			"setFraction",
			"(F)V",
			arg0
		);
	}
} // namespace android::view

