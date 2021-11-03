#include "../../java/lang/Integer.hpp"
#include "../../JObject.hpp"
#include "./IntEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	IntEvaluator::IntEvaluator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IntEvaluator::IntEvaluator()
		: JObject(
			"android.animation.IntEvaluator",
			"()V"
		) {}
	
	// Methods
	java::lang::Integer IntEvaluator::evaluate(jfloat arg0, java::lang::Integer arg1, java::lang::Integer arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(FLjava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject IntEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2)
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

