#include "../../java/lang/Float.hpp"
#include "../../java/lang/Number.hpp"
#include "../../JObject.hpp"
#include "./FloatEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	FloatEvaluator::FloatEvaluator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FloatEvaluator::FloatEvaluator()
		: JObject(
			"android.animation.FloatEvaluator",
			"()V"
		) {}
	
	// Methods
	java::lang::Float FloatEvaluator::evaluate(jfloat arg0, java::lang::Number arg1, java::lang::Number arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(FLjava/lang/Number;Ljava/lang/Number;)Ljava/lang/Float;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	JObject FloatEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2)
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

