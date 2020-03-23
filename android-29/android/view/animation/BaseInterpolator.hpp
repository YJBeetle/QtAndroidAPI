#pragma once

#ifndef ANDROID_VIEW_ANIMATION_BASEINTERPOLATOR
#define ANDROID_VIEW_ANIMATION_BASEINTERPOLATOR

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::animation
{
	class BaseInterpolator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view::animation


namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void BaseInterpolator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.BaseInterpolator",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class BaseInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
	{
	public:
		BaseInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		BaseInterpolator()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_BASEINTERPOLATOR

