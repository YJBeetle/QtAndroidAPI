#include "../../content/Context.hpp"
#include "./AccelerateDecelerateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"()V"
		);
	}
	AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat AccelerateDecelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

