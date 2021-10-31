#include "./PathEffect.hpp"
#include "./SumPathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	SumPathEffect::SumPathEffect(QAndroidJniObject obj) : android::graphics::PathEffect(obj) {}
	
	// Constructors
	SumPathEffect::SumPathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1)
		: android::graphics::PathEffect(
			"android.graphics.SumPathEffect",
			"(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::graphics
