#pragma once

#ifndef ANDROID_VIEW_ANIMATION_GRIDLAYOUTANIMATIONCONTROLLER_ANIMATIONPARAMETERS
#define ANDROID_VIEW_ANIMATION_GRIDLAYOUTANIMATIONCONTROLLER_ANIMATIONPARAMETERS

#include "../../../__JniBaseClass.hpp"
#include "LayoutAnimationController_AnimationParameters.hpp"


namespace __jni_impl::android::view::animation
{
	class GridLayoutAnimationController_AnimationParameters : public __jni_impl::android::view::animation::LayoutAnimationController_AnimationParameters
	{
	public:
		// Fields
		jint column();
		jint columnsCount();
		jint row();
		jint rowsCount();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view::animation


namespace __jni_impl::android::view::animation
{
	// Fields
	jint GridLayoutAnimationController_AnimationParameters::column()
	{
		return __thiz.getField<jint>(
			"column");
	}
	jint GridLayoutAnimationController_AnimationParameters::columnsCount()
	{
		return __thiz.getField<jint>(
			"columnsCount");
	}
	jint GridLayoutAnimationController_AnimationParameters::row()
	{
		return __thiz.getField<jint>(
			"row");
	}
	jint GridLayoutAnimationController_AnimationParameters::rowsCount()
	{
		return __thiz.getField<jint>(
			"rowsCount");
	}
	
	// Constructors
	void GridLayoutAnimationController_AnimationParameters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.GridLayoutAnimationController$AnimationParameters",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class GridLayoutAnimationController_AnimationParameters : public __jni_impl::android::view::animation::GridLayoutAnimationController_AnimationParameters
	{
	public:
		GridLayoutAnimationController_AnimationParameters(QAndroidJniObject obj) { __thiz = obj; }
		GridLayoutAnimationController_AnimationParameters()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_GRIDLAYOUTANIMATIONCONTROLLER_ANIMATIONPARAMETERS

