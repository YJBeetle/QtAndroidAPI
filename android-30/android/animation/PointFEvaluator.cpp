#include "../graphics/PointF.hpp"
#include "../../JObject.hpp"
#include "./PointFEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	PointFEvaluator::PointFEvaluator()
		: JObject(
			"android.animation.PointFEvaluator",
			"()V"
		) {}
	PointFEvaluator::PointFEvaluator(android::graphics::PointF arg0)
		: JObject(
			"android.animation.PointFEvaluator",
			"(Landroid/graphics/PointF;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::PointF PointFEvaluator::evaluate(jfloat arg0, android::graphics::PointF arg1, android::graphics::PointF arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/PointF;Landroid/graphics/PointF;)Landroid/graphics/PointF;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject PointFEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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

