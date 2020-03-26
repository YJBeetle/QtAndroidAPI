#pragma once

#ifndef ANDROID_VIEW_ANIMATION_ACCELERATEINTERPOLATOR
#define ANDROID_VIEW_ANIMATION_ACCELERATEINTERPOLATOR

#include "../../../__JniBaseClass.hpp"
#include "BaseInterpolator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view::animation
{
	class AccelerateInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
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
	void AccelerateInterpolator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AccelerateInterpolator::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateInterpolator",
			"(F)V",
			arg0);
	}
	void AccelerateInterpolator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AccelerateInterpolator",
			"()V");
	}
	
	// Methods
	jfloat AccelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class AccelerateInterpolator : public __jni_impl::android::view::animation::AccelerateInterpolator
	{
	public:
		AccelerateInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		AccelerateInterpolator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AccelerateInterpolator(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		AccelerateInterpolator()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_ACCELERATEINTERPOLATOR

