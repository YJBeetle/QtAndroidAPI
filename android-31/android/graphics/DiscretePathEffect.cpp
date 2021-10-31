#include "./DiscretePathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	DiscretePathEffect::DiscretePathEffect(QAndroidJniObject obj) : android::graphics::PathEffect(obj) {}
	
	// Constructors
	DiscretePathEffect::DiscretePathEffect(jfloat arg0, jfloat arg1)
		: android::graphics::PathEffect(
			"android.graphics.DiscretePathEffect",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::graphics

