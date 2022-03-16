#include "./LayoutAnimationController_AnimationParameters.hpp"

namespace android::view::animation
{
	// Fields
	jint LayoutAnimationController_AnimationParameters::count()
	{
		return getField<jint>(
			"count"
		);
	}
	jint LayoutAnimationController_AnimationParameters::index()
	{
		return getField<jint>(
			"index"
		);
	}
	
	// Constructors
	LayoutAnimationController_AnimationParameters::LayoutAnimationController_AnimationParameters()
		: JObject(
			"android.view.animation.LayoutAnimationController$AnimationParameters",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

