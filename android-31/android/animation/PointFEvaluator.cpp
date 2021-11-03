#include "../graphics/PointF.hpp"
#include "./PointFEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	PointFEvaluator::PointFEvaluator(QJniObject obj) : JObject(obj) {}
	
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
	android::graphics::PointF PointFEvaluator::evaluate(jfloat arg0, android::graphics::PointF arg1, android::graphics::PointF arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/PointF;Landroid/graphics/PointF;)Landroid/graphics/PointF;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jobject PointFEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
} // namespace android::animation

