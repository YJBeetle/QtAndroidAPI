#include "./Animator.hpp"
#include "./AnimatorSet.hpp"
#include "./AnimatorSet_Builder.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	AnimatorSet_Builder::AnimatorSet_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AnimatorSet_Builder::after(android::animation::Animator arg0)
	{
		return callObjectMethod(
			"after",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AnimatorSet_Builder::after(jlong arg0)
	{
		return callObjectMethod(
			"after",
			"(J)Landroid/animation/AnimatorSet$Builder;",
			arg0
		);
	}
	QAndroidJniObject AnimatorSet_Builder::before(android::animation::Animator arg0)
	{
		return callObjectMethod(
			"before",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AnimatorSet_Builder::with(android::animation::Animator arg0)
	{
		return callObjectMethod(
			"with",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
} // namespace android::animation

