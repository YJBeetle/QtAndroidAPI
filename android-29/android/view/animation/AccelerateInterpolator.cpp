#include "../../content/Context.hpp"
#include "./AccelerateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	AccelerateInterpolator::AccelerateInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccelerateInterpolator::AccelerateInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateInterpolator",
			"()V"
		);
	}
	AccelerateInterpolator::AccelerateInterpolator(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateInterpolator",
			"(F)V",
			arg0
		);
	}
	AccelerateInterpolator::AccelerateInterpolator(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat AccelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

