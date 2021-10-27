#include "./BaseInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	BaseInterpolator::BaseInterpolator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BaseInterpolator::BaseInterpolator()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.BaseInterpolator",
			"()V"
		);
	}
	
	// Methods
} // namespace android::view::animation

