#include "../../java/lang/Integer.hpp"
#include "./IntEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	IntEvaluator::IntEvaluator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IntEvaluator::IntEvaluator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.IntEvaluator",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject IntEvaluator::evaluate(jfloat arg0, java::lang::Integer arg1, java::lang::Integer arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobject IntEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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

