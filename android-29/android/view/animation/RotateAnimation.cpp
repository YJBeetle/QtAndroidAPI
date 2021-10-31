#include "../../content/Context.hpp"
#include "./Transformation.hpp"
#include "./RotateAnimation.hpp"

namespace android::view::animation
{
	// Fields
	
	RotateAnimation::RotateAnimation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RotateAnimation::RotateAnimation(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RotateAnimation::RotateAnimation(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(FF)V",
			arg0,
			arg1
		);
	}
	RotateAnimation::RotateAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	RotateAnimation::RotateAnimation(jfloat arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(FFIFIF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	void RotateAnimation::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::view::animation

