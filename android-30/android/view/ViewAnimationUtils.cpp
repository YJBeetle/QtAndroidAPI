#include "../animation/Animator.hpp"
#include "./View.hpp"
#include "./ViewAnimationUtils.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	ViewAnimationUtils::ViewAnimationUtils(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::animation::Animator ViewAnimationUtils::createCircularReveal(android::view::View arg0, jint arg1, jint arg2, jfloat arg3, jfloat arg4)
	{
		return callStaticObjectMethod(
			"android.view.ViewAnimationUtils",
			"createCircularReveal",
			"(Landroid/view/View;IIFF)Landroid/animation/Animator;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::view

