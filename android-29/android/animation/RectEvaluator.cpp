#include "../graphics/Rect.hpp"
#include "../../JObject.hpp"
#include "./RectEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	RectEvaluator::RectEvaluator()
		: JObject(
			"android.animation.RectEvaluator",
			"()V"
		) {}
	RectEvaluator::RectEvaluator(android::graphics::Rect arg0)
		: JObject(
			"android.animation.RectEvaluator",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::Rect RectEvaluator::evaluate(jfloat arg0, android::graphics::Rect arg1, android::graphics::Rect arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/Rect;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject RectEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>(),
			arg2.object<jobject>()
		);
	}
} // namespace android::animation

