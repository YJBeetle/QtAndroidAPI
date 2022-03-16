#pragma once

#include "./Transition.def.hpp"
#include "./TransitionListenerAdapter.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline TransitionListenerAdapter::TransitionListenerAdapter()
		: JObject(
			"android.transition.TransitionListenerAdapter",
			"()V"
		) {}
	
	// Methods
	inline void TransitionListenerAdapter::onTransitionCancel(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionCancel",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void TransitionListenerAdapter::onTransitionEnd(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionEnd",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void TransitionListenerAdapter::onTransitionPause(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionPause",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void TransitionListenerAdapter::onTransitionResume(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionResume",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
	inline void TransitionListenerAdapter::onTransitionStart(android::transition::Transition arg0) const
	{
		callMethod<void>(
			"onTransitionStart",
			"(Landroid/transition/Transition;)V",
			arg0.object()
		);
	}
} // namespace android::transition

// Base class headers

