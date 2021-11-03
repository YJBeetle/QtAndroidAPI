#include "./Animator.hpp"
#include "./AnimatorSet.hpp"
#include "./AnimatorSet_Builder.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	AnimatorSet_Builder::AnimatorSet_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::animation::AnimatorSet_Builder AnimatorSet_Builder::after(android::animation::Animator arg0) const
	{
		return callObjectMethod(
			"after",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	android::animation::AnimatorSet_Builder AnimatorSet_Builder::after(jlong arg0) const
	{
		return callObjectMethod(
			"after",
			"(J)Landroid/animation/AnimatorSet$Builder;",
			arg0
		);
	}
	android::animation::AnimatorSet_Builder AnimatorSet_Builder::before(android::animation::Animator arg0) const
	{
		return callObjectMethod(
			"before",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	android::animation::AnimatorSet_Builder AnimatorSet_Builder::with(android::animation::Animator arg0) const
	{
		return callObjectMethod(
			"with",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
} // namespace android::animation

