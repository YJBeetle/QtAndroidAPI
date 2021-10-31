#include "./CornerPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	CornerPathEffect::CornerPathEffect(QAndroidJniObject obj) : android::graphics::PathEffect(obj) {}
	
	// Constructors
	CornerPathEffect::CornerPathEffect(jfloat arg0)
		: android::graphics::PathEffect(
			"android.graphics.CornerPathEffect",
			"(F)V",
			arg0
		) {}
	
	// Methods
} // namespace android::graphics

