#include "../../content/Context.hpp"
#include "./BounceInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	BounceInterpolator::BounceInterpolator(QJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	BounceInterpolator::BounceInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.BounceInterpolator",
			"()V"
		) {}
	BounceInterpolator::BounceInterpolator(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.BounceInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat BounceInterpolator::getInterpolation(jfloat arg0)
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

