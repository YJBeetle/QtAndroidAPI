#pragma once

#include "./PorterDuff_Mode.def.hpp"
#include "./PorterDuffXfermode.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline PorterDuffXfermode::PorterDuffXfermode(android::graphics::PorterDuff_Mode arg0)
		: android::graphics::Xfermode(
			"android.graphics.PorterDuffXfermode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./Xfermode.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
