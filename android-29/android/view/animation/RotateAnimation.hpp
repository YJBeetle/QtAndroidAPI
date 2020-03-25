#pragma once

#ifndef ANDROID_VIEW_ANIMATION_ROTATEANIMATION
#define ANDROID_VIEW_ANIMATION_ROTATEANIMATION

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
	class RotateAnimation : public __jni_impl::android::view::animation::Animation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5);
		void __constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void __constructor(jfloat arg0, jfloat arg1);
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
	void RotateAnimation::__constructor(jfloat arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(FFIFIF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void RotateAnimation::__constructor(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void RotateAnimation::__constructor(jfloat arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(FF)V",
			arg0,
			arg1);
	}
	void RotateAnimation::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.RotateAnimation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void RotateAnimation::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
} // namespace __jni_impl::android::view::animation

namespace android::view::animation
{
	class RotateAnimation : public __jni_impl::android::view::animation::RotateAnimation
	{
	public:
		RotateAnimation(QAndroidJniObject obj) { __thiz = obj; }
		RotateAnimation(jfloat arg0, jfloat arg1, jint arg2, jfloat arg3, jint arg4, jfloat arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		RotateAnimation(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		RotateAnimation(jfloat arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		RotateAnimation(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::animation

#endif // ANDROID_VIEW_ANIMATION_ROTATEANIMATION

