#include "./Path.hpp"
#include "./PathDashPathEffect_Style.hpp"
#include "./PathDashPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	PathDashPathEffect::PathDashPathEffect(android::graphics::Path arg0, jfloat arg1, jfloat arg2, android::graphics::PathDashPathEffect_Style arg3)
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

