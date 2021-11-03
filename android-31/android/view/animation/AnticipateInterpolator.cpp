#include "../../content/Context.hpp"
#include "./AnticipateInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	AnticipateInterpolator::AnticipateInterpolator(QAndroidJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	AnticipateInterpolator::AnticipateInterpolator()
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateInterpolator",
			"()V"
		) {}
	AnticipateInterpolator::AnticipateInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateInterpolator",
			"(F)V",
			arg0
		) {}
	AnticipateInterpolator::AnticipateInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.AnticipateInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat AnticipateInterpolator::getInterpolation(jfloat arg0)
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

