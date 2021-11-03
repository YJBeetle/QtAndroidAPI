#include "./PathEffect.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	PathEffect::PathEffect(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PathEffect::PathEffect()
		: JObject(
			"android.graphics.PathEffect",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

