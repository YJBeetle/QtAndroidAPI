#include "../../content/Context.hpp"
#include "../../graphics/Path.hpp"
#include "./PathInterpolator.hpp"

namespace android::view::animation
{
	// Fields
	
	// QJniObject forward
	PathInterpolator::PathInterpolator(QJniObject obj) : android::view::animation::BaseInterpolator(obj) {}
	
	// Constructors
	PathInterpolator::PathInterpolator(android::graphics::Path arg0)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		) {}
	PathInterpolator::PathInterpolator(android::content::Context arg0, JObject arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	PathInterpolator::PathInterpolator(jfloat arg0, jfloat arg1)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(FF)V",
			arg0,
			arg1
		) {}
	PathInterpolator::PathInterpolator(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		: android::view::animation::BaseInterpolator(
			"android.view.animation.PathInterpolator",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jfloat PathInterpolator::getInterpolation(jfloat arg0)
	{
		return callMethod<jfloat>(
			"getInterpolation",
			"(F)F",
			arg0
		);
	}
} // namespace android::view::animation

