#pragma once

#ifndef ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION
#define ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION

#include "../../../__JniBaseClass.hpp"
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
	class TranslateAnimation : public __jni_impl::android::view::animation::Animation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5, jint arg6, jfloat arg7);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void initialize(jint arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::view::animation

#include "../../content/Context.hpp"
#include "Transformation.hpp"

namespace __jni_impl::android::view::animation
{
	// Fields
	
	// Constructors
	void TranslateAnimation::__constructor(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5, jint arg6, jfloat arg7)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.TranslateAnimation",
			"(IFIFIFIF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7);
	}
	void TranslateAnimation::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.TranslateAnimation",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void TranslateAnimation::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.TranslateAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void TranslateAnimation::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class TranslateAnimation : public __jni_impl::android::view::animation::TranslateAnimation
	{
	public:
		TranslateAnimation(QAndroidJniObject obj) { __thiz = obj; }
		TranslateAnimation(jint arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5, jint arg6, jfloat arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
		TranslateAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		TranslateAnimation(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_TRANSLATEANIMATION

