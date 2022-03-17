#pragma once

#include "./GridLayoutAnimationController_AnimationParameters.def.hpp"

namespace android::view::animation
{
	// Fields
	inline jint GridLayoutAnimationController_AnimationParameters::column()
	{
		return getField<jint>(
			"column"
		);
	}
	inline jint GridLayoutAnimationController_AnimationParameters::columnsCount()
	{
		return getField<jint>(
			"columnsCount"
		);
	}
	inline jint GridLayoutAnimationController_AnimationParameters::row()
	{
		return getField<jint>(
			"row"
		);
	}
	inline jint GridLayoutAnimationController_AnimationParameters::rowsCount()
	{
		return getField<jint>(
			"rowsCount"
		);
	}
	
	// Constructors
	inline GridLayoutAnimationController_AnimationParameters::GridLayoutAnimationController_AnimationParameters()
		: android::view::animation::LayoutAnimationController_AnimationParameters(
			"android.view.animation.GridLayoutAnimationController$AnimationParameters",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

// Base class headers
#include "./LayoutAnimationController_AnimationParameters.hpp"

