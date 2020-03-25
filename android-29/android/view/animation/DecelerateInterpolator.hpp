#pragma once

#ifndef ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR
#define ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR

#include "../../../__JniBaseClass.hpp"
#include "BaseInterpolator.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view::animation
{
	class DecelerateInterpolator : public __jni_impl::android::view::animation::BaseInterpolator
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
	void DecelerateInterpolator::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.DecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DecelerateInterpolator::__constructor(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.DecelerateInterpolator",
			"(F)V",
			arg0);
	}
	void DecelerateInterpolator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.DecelerateInterpolator",
			"()V");
	}
	
	// Methods
	jfloat DecelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class DecelerateInterpolator : public __jni_impl::android::view::animation::DecelerateInterpolator
	{
	public:
		DecelerateInterpolator(QAndroidJniObject obj) { __thiz = obj; }
		DecelerateInterpolator(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DecelerateInterpolator(jfloat arg0)
		{
			__constructor(
				arg0);
		}
		DecelerateInterpolator()
		{
			__constructor();
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR

