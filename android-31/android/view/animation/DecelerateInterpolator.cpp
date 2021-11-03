#include "../../content/Context.hpp"
#include "./DecelerateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	DecelerateInterpolator::DecelerateInterpolator(QAndroidJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	DecelerateInterpolator::DecelerateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.DecelerateInterpolator",
			"()V"
		) {}
	DecelerateInterpolator::DecelerateInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.DecelerateInterpolator",
			"(F)V",
			arg0
		) {}
	DecelerateInterpolator::DecelerateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.DecelerateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat DecelerateInterpolator::getInterpolation(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

