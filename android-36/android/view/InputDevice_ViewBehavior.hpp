#pragma once

#include "./InputDevice_ViewBehavior.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean InputDevice_ViewBehavior::shouldSmoothScroll(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"shouldSmoothScroll",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
