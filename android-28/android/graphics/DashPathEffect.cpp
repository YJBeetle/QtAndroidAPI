#include "../../JFloatArray.hpp"
#include "./DashPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	DashPathEffect::DashPathEffect(JFloatArray arg0, jfloat arg1)
		: android::graphics::PathEffect(
			"android.graphics.DashPathEffect",
			"([FF)V",
			arg0.object<jfloatArray>(),
			arg1
		) {}
	
	// Methods
} // namespace android::graphics

