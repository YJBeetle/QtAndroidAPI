#include "./BaseInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	BaseInterpolator::BaseInterpolator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	BaseInterpolator::BaseInterpolator()
		: JObject(
			"android.view.animation.BaseInterpolator",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

