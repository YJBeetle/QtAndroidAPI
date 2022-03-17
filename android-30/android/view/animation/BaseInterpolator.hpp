#pragma once

#include "./BaseInterpolator.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline BaseInterpolator::BaseInterpolator()
		: JObject(
			"android.view.animation.BaseInterpolator",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::animation;
#endif
