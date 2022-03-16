#include "../../content/Context.hpp"
#include "./OvershootInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	OvershootInterpolator::OvershootInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.OvershootInterpolator",
			"()V"
		) {}
	OvershootInterpolator::OvershootInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.OvershootInterpolator",
			"(F)V",
			arg0
		) {}
	OvershootInterpolator::OvershootInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.OvershootInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat OvershootInterpolator::getInterpolation(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

