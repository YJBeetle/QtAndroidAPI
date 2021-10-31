#include "./WindowInsetsAnimation.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	WindowInsetsAnimation::WindowInsetsAnimation(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WindowInsetsAnimation::WindowInsetsAnimation(jint arg0, __JniBaseClass arg1, jlong arg2)
		: __JniBaseClass(
			"android.view.WindowInsetsAnimation",
			"(ILandroid/view/animation/Interpolator;J)V",
			arg0,
			arg1.object(),
			arg2
		) {}
	
	// Methods
	jfloat WindowInsetsAnimation::getAlpha()
	{
		return callMethod<jfloat>(
			"getAlpha",
			"()F"
		);
	}
	jlong WindowInsetsAnimation::getDurationMillis()
	{
		return callMethod<jlong>(
			"getDurationMillis",
			"()J"
		);
	}
	jfloat WindowInsetsAnimation::getFraction()
	{
		return callMethod<jfloat>(
			"getFraction",
			"()F"
		);
	}
	jfloat WindowInsetsAnimation::getInterpolatedFraction()
	{
		return callMethod<jfloat>(
			"getInterpolatedFraction",
			"()F"
		);
	}
	__JniBaseClass WindowInsetsAnimation::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint WindowInsetsAnimation::getTypeMask()
	{
		return callMethod<jint>(
			"getTypeMask",
			"()I"
		);
	}
	void WindowInsetsAnimation::setAlpha(jfloat arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(F)V",
			arg0
		);
	}
	void WindowInsetsAnimation::setFraction(jfloat arg0)
	{
		callMethod<void>(
			"setFraction",
			"(F)V",
			arg0
		);
	}
} // namespace android::view

