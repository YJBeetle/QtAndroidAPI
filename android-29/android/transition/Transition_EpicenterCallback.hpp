#pragma once

#include "../graphics/Rect.def.hpp"
#include "./Transition.def.hpp"
#include "./Transition_EpicenterCallback.def.hpp"

namespace android::transition
{
	// Fields
	
	// Constructors
	inline Transition_EpicenterCallback::Transition_EpicenterCallback()
		: JObject(
			"android.transition.Transition$EpicenterCallback",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::Rect Transition_EpicenterCallback::onGetEpicenter(android::transition::Transition arg0) const
	{
		return callObjectMethod(
			"onGetEpicenter",
			"(Landroid/transition/Transition;)Landroid/graphics/Rect;",
			arg0.object()
		);
	}
} // namespace android::transition

// Base class headers

