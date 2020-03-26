#pragma once

#ifndef ANDROID_ANIMATION_TIMEANIMATOR
#define ANDROID_ANIMATION_TIMEANIMATOR

#include "../../__JniBaseClass.hpp"
#include "Animator.hpp"
#include "ValueAnimator.hpp"


namespace __jni_impl::android::animation
{
	class TimeAnimator : public __jni_impl::android::animation::ValueAnimator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void start();
		void setTimeListener(__jni_impl::__JniBaseClass arg0);
		void setCurrentPlayTime(jlong arg0);
	};
} // namespace __jni_impl::android::animation


namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void TimeAnimator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.TimeAnimator",
			"()V");
	}
	
	// Methods
	void TimeAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void TimeAnimator::setTimeListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTimeListener",
			"(Landroid/animation/TimeAnimator$TimeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void TimeAnimator::setCurrentPlayTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class TimeAnimator : public __jni_impl::android::animation::TimeAnimator
	{
	public:
		TimeAnimator(QAndroidJniObject obj) { __thiz = obj; }
		TimeAnimator()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_TIMEANIMATOR

