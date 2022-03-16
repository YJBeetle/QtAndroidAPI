#include "../../content/Context.hpp"
#include "./AnticipateOvershootInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"()V"
		) {}
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(F)V",
			arg0
		) {}
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AnticipateOvershootInterpolator::AnticipateOvershootInterpolator(jfloat arg0, jfloat arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateOvershootInterpolator",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jfloat AnticipateOvershootInterpolator::getInterpolation(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

