#pragma once

#include "./Animator.def.hpp"
#include "./AnimatorSet.def.hpp"
#include "./AnimatorSet_Builder.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::animation::AnimatorSet_Builder AnimatorSet_Builder::after(android::animation::Animator arg0) const
	{
		return callObjectMethod(
			"after",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	inline android::animation::AnimatorSet_Builder AnimatorSet_Builder::after(jlong arg0) const
	{
		return callObjectMethod(
			"after",
			"(J)Landroid/animation/AnimatorSet$Builder;",
			arg0
		);
	}
	inline android::animation::AnimatorSet_Builder AnimatorSet_Builder::before(android::animation::Animator arg0) const
	{
		return callObjectMethod(
			"before",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
	inline android::animation::AnimatorSet_Builder AnimatorSet_Builder::with(android::animation::Animator arg0) const
	{
		return callObjectMethod(
			"with",
			"(Landroid/animation/Animator;)Landroid/animation/AnimatorSet$Builder;",
			arg0.object()
		);
	}
} // namespace android::animation

// Base class headers

