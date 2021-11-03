#include "../../content/Context.hpp"
#include "./AccelerateDecelerateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator(QAndroidJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"()V"
		) {}
	AccelerateDecelerateInterpolator::AccelerateDecelerateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AccelerateDecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat AccelerateDecelerateInterpolator::getInterpolation(jfloat arg0)
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

