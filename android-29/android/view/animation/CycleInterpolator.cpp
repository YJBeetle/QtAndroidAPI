#include "../../content/Context.hpp"
#include "./CycleInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	CycleInterpolator::CycleInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CycleInterpolator::CycleInterpolator(jfloat &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.CycleInterpolator",
			"(F)V",
			arg0
		);
	}
	CycleInterpolator::CycleInterpolator(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.CycleInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jfloat CycleInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

