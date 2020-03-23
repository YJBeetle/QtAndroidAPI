#pragma once

#ifndef ANDROID_ANIMATION_ANIMATORLISTENERADAPTER
#define ANDROID_ANIMATION_ANIMATORLISTENERADAPTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}

namespace __jni_impl::android::animation
{
	class AnimatorListenerAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAnimationResume(__jni_impl::android::animation::Animator arg0);
		void onAnimationPause(__jni_impl::android::animation::Animator arg0);
		void onAnimationStart(__jni_impl::android::animation::Animator arg0);
		void onAnimationEnd(__jni_impl::android::animation::Animator arg0);
		void onAnimationRepeat(__jni_impl::android::animation::Animator arg0);
		void onAnimationCancel(__jni_impl::android::animation::Animator arg0);
	};
} // namespace __jni_impl::android::animation

#include "Animator.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void AnimatorListenerAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.AnimatorListenerAdapter",
			"()V");
	}
	
	// Methods
	void AnimatorListenerAdapter::onAnimationResume(__jni_impl::android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationResume",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object());
	}
	void AnimatorListenerAdapter::onAnimationPause(__jni_impl::android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationPause",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object());
	}
	void AnimatorListenerAdapter::onAnimationStart(__jni_impl::android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationStart",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object());
	}
	void AnimatorListenerAdapter::onAnimationEnd(__jni_impl::android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationEnd",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object());
	}
	void AnimatorListenerAdapter::onAnimationRepeat(__jni_impl::android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationRepeat",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object());
	}
	void AnimatorListenerAdapter::onAnimationCancel(__jni_impl::android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationCancel",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class AnimatorListenerAdapter : public __jni_impl::android::animation::AnimatorListenerAdapter
	{
	public:
		AnimatorListenerAdapter(QAndroidJniObject obj) { __thiz = obj; }
		AnimatorListenerAdapter()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_ANIMATORLISTENERADAPTER

