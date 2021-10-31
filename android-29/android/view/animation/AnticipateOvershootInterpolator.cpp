#include "../../content/Context.hpp"
#include "./AnticipateOvershootInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"()V"
		);
	}
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(F)V",
			arg0
		);
	}
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jfloat AnticipateOvershootInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

