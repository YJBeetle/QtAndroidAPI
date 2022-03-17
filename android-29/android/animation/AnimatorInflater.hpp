#pragma once

#include "./Animator.def.hpp"
#include "./StateListAnimator.def.hpp"
#include "../content/Context.def.hpp"
#include "./AnimatorInflater.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline AnimatorInflater::AnimatorInflater()
		: JObject(
			"android.animation.AnimatorInflater",
			"()V"
		) {}
	
	// Methods
	inline android::animation::Animator AnimatorInflater::loadAnimator(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadAnimator",
			"(Landroid/content/Context;I)Landroid/animation/Animator;",
			arg0.object(),
			arg1
		);
	}
	inline android::animation::StateListAnimator AnimatorInflater::loadStateListAnimator(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.animation.AnimatorInflater",
			"loadStateListAnimator",
			"(Landroid/content/Context;I)Landroid/animation/StateListAnimator;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::animation

// Base class headers

