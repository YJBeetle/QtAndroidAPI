#include "./LayoutAnimationController_AnimationParameters.hpp"

namespace android::view::animation
{
	// Fields
	jint LayoutAnimationController_AnimationParameters::count()
	{
		return __thiz.getField<jint>(
			"count"
		);
	}
	jint LayoutAnimationController_AnimationParameters::index()
	{
		return __thiz.getField<jint>(
			"index"
		);
	}
	
	LayoutAnimationController_AnimationParameters::LayoutAnimationController_AnimationParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LayoutAnimationController_AnimationParameters::LayoutAnimationController_AnimationParameters()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController$AnimationParameters",
			"()V"
		);
	}
	
	// Methods
} // namespace android::view::animation

