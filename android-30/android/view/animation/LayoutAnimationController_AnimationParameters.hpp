#pragma once

#include "./LayoutAnimationController_AnimationParameters.def.hpp"

namespace android::view::animation
{
	// Fields
	inline jint LayoutAnimationController_AnimationParameters::count()
	{
		return getField<jint>(
			"count"
		);
	}
	inline jint LayoutAnimationController_AnimationParameters::index()
	{
		return getField<jint>(
			"index"
		);
	}
	
	// Constructors
	inline LayoutAnimationController_AnimationParameters::LayoutAnimationController_AnimationParameters()
		: JObject(
			"android.view.animation.LayoutAnimationController$AnimationParameters",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

// Base class headers

