#pragma once

#include "../content/Context.def.hpp"
#include "./AutoTransition.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline AutoTransition::AutoTransition()
		: android::transition::TransitionSet(
			"android.transition.AutoTransition",
			"()V"
		) {}
	inline AutoTransition::AutoTransition(android::content::Context arg0, JObject arg1)
		: android::transition::TransitionSet(
			"android.transition.AutoTransition",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::transition

// Base class headers
#include "./Transition.hpp"
#include "./TransitionSet.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
