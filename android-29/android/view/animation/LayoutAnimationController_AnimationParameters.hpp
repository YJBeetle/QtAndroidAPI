#pragma once

#ifndef ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_ANIMATIONPARAMETERS
#define ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_ANIMATIONPARAMETERS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::animation
{
	class LayoutAnimationController_AnimationParameters : public __JniBaseClass
	{
	public:
		// Fields
		jint count();
		jint index();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view::animation


namespace __jni_impl::android::view::animation
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
	
	// Constructors
	void LayoutAnimationController_AnimationParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.LayoutAnimationController$AnimationParameters",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class LayoutAnimationController_AnimationParameters : public __jni_impl::android::view::animation::LayoutAnimationController_AnimationParameters
	{
	public:
		LayoutAnimationController_AnimationParameters(QAndroidJniObject obj) { __thiz = obj; }
		LayoutAnimationController_AnimationParameters()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_LAYOUTANIMATIONCONTROLLER_ANIMATIONPARAMETERS

