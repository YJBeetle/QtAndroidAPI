#include "./BaseInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	BaseInterpolator::BaseInterpolator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BaseInterpolator::BaseInterpolator()
		: JObject(
			"android.view.animation.BaseInterpolator",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

