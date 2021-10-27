#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Animator.hpp"
#include "./ValueAnimator.hpp"


namespace __jni_impl::android::animation
{
	class TimeAnimator : public __jni_impl::android::animation::ValueAnimator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setCurrentPlayTime(jlong arg0);
		void setTimeListener(__jni_impl::__JniBaseClass arg0);
		void start();
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
			"()V"
		);
	}
	
	// Methods
	void TimeAnimator::setCurrentPlayTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCurrentPlayTime",
			"(J)V",
			arg0
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
	void TimeAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
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

