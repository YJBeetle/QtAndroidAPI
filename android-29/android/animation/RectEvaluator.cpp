#include "../graphics/Rect.hpp"
#include "./RectEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	RectEvaluator::RectEvaluator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RectEvaluator::RectEvaluator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.RectEvaluator",
			"()V"
		);
	}
	RectEvaluator::RectEvaluator(android::graphics::Rect arg0)
	{
		__thiz = QAndroidJniObject(
			"android.animation.RectEvaluator",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RectEvaluator::evaluate(jfloat arg0, android::graphics::Rect arg1, android::graphics::Rect arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/Rect;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject RectEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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

