#include "./BaseInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	BaseInterpolator::BaseInterpolator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BaseInterpolator::BaseInterpolator()
		: __JniBaseClass(
			"android.view.animation.BaseInterpolator",
			"()V"
		) {}
	
	// Methods
} // namespace android::view::animation

