#include "../../content/Context.hpp"
#include "../../graphics/Path.hpp"
#include "./PathInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	PathInterpolator::PathInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PathInterpolator::PathInterpolator(android::graphics::Path arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
	PathInterpolator::PathInterpolator(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	PathInterpolator::PathInterpolator(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(FF)V",
			arg0,
			arg1
		);
	}
	PathInterpolator::PathInterpolator(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.PathInterpolator",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jfloat PathInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

