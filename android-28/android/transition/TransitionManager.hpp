#pragma once

#include "./Scene.def.hpp"
#include "./Transition.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./TransitionManager.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline TransitionManager::TransitionManager()
		: JObject(
			"android.transition.TransitionManager",
			"()V"
		) {}
	
	// Methods
	inline void TransitionManager::beginDelayedTransition(android::view::ViewGroup arg0)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;)V",
			arg0.object()
		);
	}
	inline void TransitionManager::beginDelayedTransition(android::view::ViewGroup arg0, android::transition::Transition arg1)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"beginDelayedTransition",
			"(Landroid/view/ViewGroup;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TransitionManager::endTransitions(android::view::ViewGroup arg0)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"endTransitions",
			"(Landroid/view/ViewGroup;)V",
			arg0.object()
		);
	}
	inline void TransitionManager::go(android::transition::Scene arg0)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;)V",
			arg0.object()
		);
	}
	inline void TransitionManager::go(android::transition::Scene arg0, android::transition::Transition arg1)
	{
		callStaticMethod<void>(
			"android.transition.TransitionManager",
			"go",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TransitionManager::setTransition(android::transition::Scene arg0, android::transition::Transition arg1) const
	{
		callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TransitionManager::setTransition(android::transition::Scene arg0, android::transition::Scene arg1, android::transition::Transition arg2) const
	{
		callMethod<void>(
			"setTransition",
			"(Landroid/transition/Scene;Landroid/transition/Scene;Landroid/transition/Transition;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TransitionManager::transitionTo(android::transition::Scene arg0) const
	{
		callMethod<void>(
			"transitionTo",
			"(Landroid/transition/Scene;)V",
			arg0.object()
		);
	}
} // namespace android::transition

// Base class headers

