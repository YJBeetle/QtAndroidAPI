#pragma once

#ifndef ANDROID_VIEW_ANIMATION_ALPHAANIMATION
#define ANDROID_VIEW_ANIMATION_ALPHAANIMATION

#include "Animation.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view::animation
{
	class Transformation;
}

namespace __jni_impl::android::view::animation
{
	class AlphaAnimation : public __jni_impl::android::view::animation::Animation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jfloat arg0, jfloat arg1);
		
		// Methods
		jboolean willChangeTransformationMatrix();
		jboolean willChangeBounds();
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"
#include "Transformation.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void AlphaAnimation::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AlphaAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void AlphaAnimation::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.AlphaAnimation",
			"(FF)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean AlphaAnimation::willChangeTransformationMatrix()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z");
	}
	jboolean AlphaAnimation::willChangeBounds()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeBounds",
			"()Z");
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class AlphaAnimation : public __jni_impl::android::view::animation::AlphaAnimation
	{
	public:
		AlphaAnimation(QAndroidJniObject obj) { __thiz = obj; }
		AlphaAnimation(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AlphaAnimation(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_ALPHAANIMATION

