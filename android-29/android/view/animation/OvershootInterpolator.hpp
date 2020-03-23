#pragma once

#ifndef ANDROID_VIEW_ANIMATION_OVERSHOOTINTERPOLATOR
#define ANDROID_VIEW_ANIMATION_OVERSHOOTINTERPOLATOR

#include "BaseInterpolator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view::animation
{
	class OvershootInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jfloat arg0);
		void __constructor();
		
		// Methods
		jfloat getInterpolation(jfloat arg0);
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void OvershootInterpolator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.OvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void OvershootInterpolator::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.OvershootInterpolator",
			"(F)V",
			arg0);
	}
	void OvershootInterpolator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.OvershootInterpolator",
			"()V");
	}
	
	// Methods
	jfloat OvershootInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class OvershootInterpolator : public __jni_impl::android::view::animation::OvershootInterpolator
	{
	public:
		OvershootInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		OvershootInterpolator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OvershootInterpolator(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		OvershootInterpolator()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_OVERSHOOTINTERPOLATOR

