#include "./CornerPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	CornerPathEffect::CornerPathEffect(jfloat arg0)
		: android::graphics::PathEffect(
			"android.graphics.CornerPathEffect",
			"(F)V",
			arg0
		) {}
	
	// Methods
} // namespace android::graphics

