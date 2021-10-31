#include "./GridLayoutAnimationController_AnimationParameters.hpp"

namespace android::view::animation
{
	// Fields
	jint GridLayoutAnimationController_AnimationParameters::column()
	{
		return getField<jint>(
			"column"
		);
	}
	jint GridLayoutAnimationController_AnimationParameters::columnsCount()
	{
		return getField<jint>(
			"columnsCount"
		);
	}
	jint GridLayoutAnimationController_AnimationParameters::row()
	{
		return getField<jint>(
			"row"
		);
	}
	jint GridLayoutAnimationController_AnimationParameters::rowsCount()
	{
		return getField<jint>(
			"rowsCount"
		);
	}
	
	// QJniObject forward
	GridLayoutAnimationController_AnimationParameters::GridLayoutAnimationController_AnimationParameters(QJniObject obj) : android::view::animation::LayoutAnimationController_AnimationParameters(obj) {}
	
	// Constructors
	GridLayoutAnimationController_AnimationParameters::GridLayoutAnimationController_AnimationParameters()
		: android::view::animation::LayoutAnimationController_AnimationParameters(
			"android.view.animation.GridLayoutAnimationController$AnimationParameters",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

