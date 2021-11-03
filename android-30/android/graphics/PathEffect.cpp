#include "./PathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	PathEffect::PathEffect(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PathEffect::PathEffect()
		: JObject(
			"android.graphics.PathEffect",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

