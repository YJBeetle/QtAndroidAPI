#include "./BaseInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	BaseInterpolator::BaseInterpolator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BaseInterpolator::BaseInterpolator()
		: __JniBaseClass(
			"android.view.animation.BaseInterpolator",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

