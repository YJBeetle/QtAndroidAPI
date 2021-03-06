#pragma once

#ifndef ANDROID_ANIMATION_STATELISTANIMATOR
#define ANDROID_ANIMATION_STATELISTANIMATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}

namespace __jni_impl::android::animation
{
	class StateListAnimator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
		void addState(jintArray arg0, __jni_impl::android::animation::Animator arg1);
		void jumpToCurrentState();
	};
} // namespace __jni_impl::android::animation

#include "Animator.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void StateListAnimator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.StateListAnimator",
			"()V");
	}
	
	// Methods
	QAndroidJniObject StateListAnimator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/StateListAnimator;"
		);
	}
	void StateListAnimator::addState(jintArray arg0, __jni_impl::android::animation::Animator arg1)
	{
		__thiz.callMethod<void>(
			"addState",
			"([ILandroid/animation/Animator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void StateListAnimator::jumpToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class StateListAnimator : public __jni_impl::android::animation::StateListAnimator
	{
	public:
		StateListAnimator(QAndroidJniObject obj) { __thiz = obj; }
		StateListAnimator()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_STATELISTANIMATOR

