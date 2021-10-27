#include "./Animator.hpp"
#include "./AnimatorListenerAdapter.hpp"

namespace android::animation
{
	// Fields
	
	AnimatorListenerAdapter::AnimatorListenerAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnimatorListenerAdapter::AnimatorListenerAdapter()
	{
		__thiz = QAndroidJniObject(
			"android.animation.AnimatorListenerAdapter",
			"()V"
		);
	}
	
	// Methods
	void AnimatorListenerAdapter::onAnimationCancel(android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationCancel",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorListenerAdapter::onAnimationEnd(android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationEnd",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorListenerAdapter::onAnimationPause(android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationPause",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorListenerAdapter::onAnimationRepeat(android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationRepeat",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorListenerAdapter::onAnimationResume(android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationResume",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object()
		);
	}
	void AnimatorListenerAdapter::onAnimationStart(android::animation::Animator arg0)
	{
		__thiz.callMethod<void>(
			"onAnimationStart",
			"(Landroid/animation/Animator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::animation

