#include "../../JObject.hpp"
#include "./ArgbEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	ArgbEvaluator::ArgbEvaluator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ArgbEvaluator::ArgbEvaluator()
		: JObject(
			"android.animation.ArgbEvaluator",
			"()V"
		) {}
	
	// Methods
	JObject ArgbEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2)
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

