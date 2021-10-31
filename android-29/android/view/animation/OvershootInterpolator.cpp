#include "../../content/Context.hpp"
#include "./OvershootInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	OvershootInterpolator::OvershootInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OvershootInterpolator::OvershootInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.OvershootInterpolator",
			"()V"
		);
	}
	OvershootInterpolator::OvershootInterpolator(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.OvershootInterpolator",
			"(F)V",
			arg0
		);
	}
	OvershootInterpolator::OvershootInterpolator(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.OvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat OvershootInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

