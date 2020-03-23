#pragma once

#ifndef ANDROID_VIEW_ANIMATION_ACCELERATEDECELERATEINTERPOLATOR
#define ANDROID_VIEW_ANIMATION_ACCELERATEDECELERATEINTERPOLATOR

#include "BaseInterpolator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view::animation
{
	class AccelerateDecelerateInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void AccelerateDecelerateInterpolator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"()V");
	}
	void AccelerateDecelerateInterpolator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jfloat AccelerateDecelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class AccelerateDecelerateInterpolator : public __jni_impl::android::view::animation::AccelerateDecelerateInterpolator
	{
	public:
		AccelerateDecelerateInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		AccelerateDecelerateInterpolator()
		{
			__constructor();
		}
		AccelerateDecelerateInterpolator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_ACCELERATEDECELERATEINTERPOLATOR

