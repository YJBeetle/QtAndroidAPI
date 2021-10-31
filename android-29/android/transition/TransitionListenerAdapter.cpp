#include "./Transition.hpp"
#include "./TransitionListenerAdapter.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	TransitionListenerAdapter::TransitionListenerAdapter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TransitionListenerAdapter::TransitionListenerAdapter()
		: __JniBaseClass(
			"android.transition.TransitionListenerAdapter",
			"()V"
		) {}
	
	// Methods
	void TransitionListenerAdapter::onTransitionCancel(android::transition::Transition arg0)
	{
		callMethod<void>(
			"onTransitionCancel",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionEnd(android::transition::Transition arg0)
	{
		callMethod<void>(
			"onTransitionEnd",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionPause(android::transition::Transition arg0)
	{
		callMethod<void>(
			"onTransitionPause",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionResume(android::transition::Transition arg0)
	{
		callMethod<void>(
			"onTransitionResume",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	void TransitionListenerAdapter::onTransitionStart(android::transition::Transition arg0)
	{
		callMethod<void>(
			"onTransitionStart",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
} // namespace android::transition

