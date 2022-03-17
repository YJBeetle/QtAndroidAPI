#pragma once

#include "./PathEffect.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline PathEffect::PathEffect()
		: JObject(
			"android.graphics.PathEffect",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
