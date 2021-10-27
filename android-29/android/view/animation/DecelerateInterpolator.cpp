#include "../../content/Context.hpp"
#include "./DecelerateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	DecelerateInterpolator::DecelerateInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DecelerateInterpolator::DecelerateInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.DecelerateInterpolator",
			"()V"
		);
	}
	DecelerateInterpolator::DecelerateInterpolator(jfloat &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.DecelerateInterpolator",
			"(F)V",
			arg0
		);
	}
	DecelerateInterpolator::DecelerateInterpolator(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.DecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat DecelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

