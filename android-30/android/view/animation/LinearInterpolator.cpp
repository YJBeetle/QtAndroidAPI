#include "../../content/Context.hpp"
#include "./LinearInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	LinearInterpolator::LinearInterpolator(QJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	LinearInterpolator::LinearInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.LinearInterpolator",
			"()V"
		) {}
	LinearInterpolator::LinearInterpolator(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.LinearInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat LinearInterpolator::getInterpolation(jfloat arg0)
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

