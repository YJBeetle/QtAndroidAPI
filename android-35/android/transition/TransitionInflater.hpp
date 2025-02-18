#pragma once

#include "../content/Context.def.hpp"
#include "./Transition.def.hpp"
#include "./TransitionManager.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./TransitionInflater.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::transition::TransitionInflater TransitionInflater::from(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.transition.TransitionInflater",
			"from",
			"(Landroid/content/Context;)Landroid/transition/TransitionInflater;",
			arg0.object()
		);
	}
	inline android::transition::Transition TransitionInflater::inflateTransition(jint arg0) const
	{
		return callObjectMethod(
			"inflateTransition",
			"(I)Landroid/transition/Transition;",
			arg0
		);
	}
	inline android::transition::TransitionManager TransitionInflater::inflateTransitionManager(jint arg0, android::view::ViewGroup arg1) const
	{
		return callObjectMethod(
			"inflateTransitionManager",
			"(ILandroid/view/ViewGroup;)Landroid/transition/TransitionManager;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::transition

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
