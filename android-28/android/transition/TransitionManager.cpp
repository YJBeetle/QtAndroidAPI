#include "./Scene.hpp"
#include "./Transition.hpp"
#include "../view/ViewGroup.hpp"
#include "./TransitionManager.hpp"

namespace android::transition
{
	// Fields
	
	// QJniObject forward
	TransitionManager::TransitionManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TransitionManager::TransitionManager()
		: JObject(
			"android.transition.TransitionManager",
			"()V"
		) {}
	
	// Methods
	void TransitionManager::beginDelayedTransition(android::view::ViewGroup arg0)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;)V",
			arg0.object()
		);
	}
	void TransitionManager::beginDelayedTransition(android::view::ViewGroup arg0, android::transition::Transition arg1)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TransitionManager::endTransitions(android::view::ViewGroup arg0)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"endTransitions",
			"(Landroid/view/ViewGroup;)V",
			arg0.object()
		);
	}
	void TransitionManager::go(android::transition::Scene arg0)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;)V",
			arg0.object()
		);
	}
	void TransitionManager::go(android::transition::Scene arg0, android::transition::Transition arg1)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TransitionManager::setTransition(android::transition::Scene arg0, android::transition::Transition arg1)
	{
		callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TransitionManager::setTransition(android::transition::Scene arg0, android::transition::Scene arg1, android::transition::Transition arg2)
	{
		callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void TransitionManager::transitionTo(android::transition::Scene arg0)
	{
		callMethod<void>(
			"transitionTo",
			"(Landroid/transition/Scene;)V",
			arg0.object()
		);
	}
} // namespace android::transition

