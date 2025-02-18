#pragma once

#include "./PathEffect.def.hpp"
#include "./ComposePathEffect.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline ComposePathEffect::ComposePathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1)
		: android::graphics::PathEffect(
			"android.graphics.ComposePathEffect",
			"(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./PathEffect.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
