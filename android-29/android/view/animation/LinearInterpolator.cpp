#include "../../content/Context.hpp"
#include "./LinearInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	LinearInterpolator::LinearInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinearInterpolator::LinearInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LinearInterpolator",
			"()V"
		);
	}
	LinearInterpolator::LinearInterpolator(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LinearInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat LinearInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

