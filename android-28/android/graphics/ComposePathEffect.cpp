#include "./PathEffect.hpp"
#include "./ComposePathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	ComposePathEffect::ComposePathEffect(android::graphics::PathEffect arg0, android::graphics::PathEffect arg1)
		: android::graphics::PathEffect(
			"android.graphics.ComposePathEffect",
			"(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::graphics

