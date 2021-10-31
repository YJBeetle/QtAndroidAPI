#include "../graphics/Rect.hpp"
#include "./RectEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	RectEvaluator::RectEvaluator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RectEvaluator::RectEvaluator()
		: __JniBaseClass(
			"android.animation.RectEvaluator",
			"()V"
		) {}
	RectEvaluator::RectEvaluator(android::graphics::Rect arg0)
		: __JniBaseClass(
			"android.animation.RectEvaluator",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::Rect RectEvaluator::evaluate(jfloat arg0, android::graphics::Rect arg1, android::graphics::Rect arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/Rect;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jobject RectEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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

