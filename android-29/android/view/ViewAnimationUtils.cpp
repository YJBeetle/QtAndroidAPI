#include "../animation/Animator.hpp"
#include "./View.hpp"
#include "./ViewAnimationUtils.hpp"

namespace android::view
{
	// Fields
	
	ViewAnimationUtils::ViewAnimationUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ViewAnimationUtils::createCircularReveal(android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.ViewAnimationUtils",
			"createCircularReveal",
			"(Landroid/view/View;IIFF)Landroid/animation/Animator;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::view

