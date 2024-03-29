#pragma once

#include "./Path.def.hpp"
#include "./PathDashPathEffect_Style.def.hpp"
#include "./PathDashPathEffect.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline PathDashPathEffect::PathDashPathEffect(android::graphics::Path arg0, jfloat arg1, jfloat arg2, android::graphics::PathDashPathEffect_Style arg3)
		: android::graphics::PathEffect(
			"android.graphics.PathDashPathEffect",
			"(Landroid/graphics/Path;FFLandroid/graphics/PathDashPathEffect$Style;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./PathEffect.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
