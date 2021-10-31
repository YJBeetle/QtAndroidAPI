#include "./PathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	PathEffect::PathEffect(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PathEffect::PathEffect()
		: __JniBaseClass(
			"android.graphics.PathEffect",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

