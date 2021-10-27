#include "./GridLayoutAnimationController_AnimationParameters.hpp"

namespace android::view::animation
{
	// Fields
	jint GridLayoutAnimationController_AnimationParameters::column()
	{
		return __thiz.getField<jint>(
			"column"
		);
	}
	jint GridLayoutAnimationController_AnimationParameters::columnsCount()
	{
		return __thiz.getField<jint>(
			"columnsCount"
		);
	}
	jint GridLayoutAnimationController_AnimationParameters::row()
	{
		return __thiz.getField<jint>(
			"row"
		);
	}
	jint GridLayoutAnimationController_AnimationParameters::rowsCount()
	{
		return __thiz.getField<jint>(
			"rowsCount"
		);
	}
	
	GridLayoutAnimationController_AnimationParameters::GridLayoutAnimationController_AnimationParameters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GridLayoutAnimationController_AnimationParameters::GridLayoutAnimationController_AnimationParameters()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.GridLayoutAnimationController$AnimationParameters",
			"()V"
		);
	}
	
	// Methods
} // namespace android::view::animation

