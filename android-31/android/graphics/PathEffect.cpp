#include "./PathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	PathEffect::PathEffect(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PathEffect::PathEffect()
		: __JniBaseClass(
			"android.graphics.PathEffect",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

