#include "../../content/Context.hpp"
#include "./BounceInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	BounceInterpolator::BounceInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BounceInterpolator::BounceInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.BounceInterpolator",
			"()V"
		);
	}
	BounceInterpolator::BounceInterpolator(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.BounceInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat BounceInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

