#include "../../content/Context.hpp"
#include "./AnticipateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	AnticipateInterpolator::AnticipateInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnticipateInterpolator::AnticipateInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateInterpolator",
			"()V"
		);
	}
	AnticipateInterpolator::AnticipateInterpolator(jfloat &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateInterpolator",
			"(F)V",
			arg0
		);
	}
	AnticipateInterpolator::AnticipateInterpolator(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AnticipateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat AnticipateInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

