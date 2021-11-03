#include "../../content/Context.hpp"
#include "./CycleInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QAndroidJniObject forward
	CycleInterpolator::CycleInterpolator(QAndroidJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	CycleInterpolator::CycleInterpolator(jfloat arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.CycleInterpolator",
			"(F)V",
			arg0
		) {}
	CycleInterpolator::CycleInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.CycleInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jfloat CycleInterpolator::getInterpolation(jfloat arg0)
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

