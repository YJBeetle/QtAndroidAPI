#include "../../content/Context.hpp"
#include "./AccelerateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	AccelerateInterpolator::AccelerateInterpolator(QJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	AccelerateInterpolator::AccelerateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateInterpolator",
			"()V"
		) {}
	AccelerateInterpolator::AccelerateInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateInterpolator",
			"(F)V",
			arg0
		) {}
	AccelerateInterpolator::AccelerateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat AccelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

