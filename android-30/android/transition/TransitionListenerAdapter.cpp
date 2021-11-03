#include "./Transition.hpp"
#include "./TransitionListenerAdapter.hpp"

namespace android::transition
{
	// Fields
	
	// QAndroidJniObject forward
	TransitionListenerAdapter::TransitionListenerAdapter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TransitionListenerAdapter::TransitionListenerAdapter()
		: JObject(
			"android.transition.TransitionListenerAdapter",
			"()V"
		) {}
	
	// Methods
	void TransitionListenerAdapter::onTransitionCancel(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionCancel",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionEnd(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionEnd",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionPause(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionPause",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionResume(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionResume",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionStart(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionStart",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
} // namespace android::transition

