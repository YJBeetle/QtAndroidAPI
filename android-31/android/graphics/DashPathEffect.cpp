#include "./DashPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	DashPathEffect::DashPathEffect(QAndroidJniObject obj) : android::graphics::PathEffect(obj) {}
	
	// Constructors
	DashPathEffect::DashPathEffect(jfloatArray arg0, jfloat arg1)
		: android::graphics::PathEffect(
			"android.graphics.DashPathEffect",
			"([FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::graphics

