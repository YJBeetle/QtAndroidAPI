#include "./Animator.hpp"
#include "./AnimatorSet.hpp"
#include "./AnimatorSet_Builder.hpp"

namespace android::animation
{
	// Fields
	
	AnimatorSet_Builder::AnimatorSet_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject AnimatorSet_Builder::after(android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"after",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimatorSet_Builder::after(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"after",
			"(J)Landroid/animation/AnimatorSet$Builder;",
			arg0
		);
	}
	QAndroidJniObject AnimatorSet_Builder::before(android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"before",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AnimatorSet_Builder::with(android::animation::Animator arg0)
	{
		return __thiz.callObjectMethod(
			"with",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::animation

