#include "../graphics/PointF.hpp"
#include "./PointFEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	PointFEvaluator::PointFEvaluator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PointFEvaluator::PointFEvaluator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.PointFEvaluator",
			"()V"
		);
	}
	PointFEvaluator::PointFEvaluator(android::graphics::PointF &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.animation.PointFEvaluator",
			"(Landroid/graphics/PointF;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PointFEvaluator::evaluate(jfloat arg0, android::graphics::PointF arg1, android::graphics::PointF arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/PointF;Landroid/graphics/PointF;)Landroid/graphics/PointF;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject PointFEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
} // namespace android::animation

