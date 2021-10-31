#include "../../java/lang/Integer.hpp"
#include "./IntEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	IntEvaluator::IntEvaluator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IntEvaluator::IntEvaluator()
		: __JniBaseClass(
			"android.animation.IntEvaluator",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject IntEvaluator::evaluate(jfloat arg0, java::lang::Integer arg1, java::lang::Integer arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(FLjava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jobject IntEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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
