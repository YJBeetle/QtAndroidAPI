#include "./Transition.hpp"
#include "./TransitionListenerAdapter.hpp"

namespace android::transition
{
	// Fields
	
	TransitionListenerAdapter::TransitionListenerAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransitionListenerAdapter::TransitionListenerAdapter()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionListenerAdapter",
			"()V"
		);
	}
	
	// Methods
	void TransitionListenerAdapter::onTransitionCancel(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionCancel",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionEnd(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionEnd",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionPause(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionPause",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionResume(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionResume",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
	void TransitionListenerAdapter::onTransitionStart(android::transition::Transition arg0)
	{
		__thiz.callMethod<void>(
			"onTransitionStart",
			"(Landroid/transition/Transition;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::transition

