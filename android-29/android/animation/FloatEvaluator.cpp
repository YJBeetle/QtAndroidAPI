#include "../../java/lang/Float.hpp"
#include "../../java/lang/Number.hpp"
#include "./FloatEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	FloatEvaluator::FloatEvaluator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FloatEvaluator::FloatEvaluator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.FloatEvaluator",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject FloatEvaluator::evaluate(jfloat arg0, java::lang::Number arg1, java::lang::Number arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Number;Ljava/lang/Number;)Ljava/lang/Float;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject FloatEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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

