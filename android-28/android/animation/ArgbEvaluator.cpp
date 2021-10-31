#include "./ArgbEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	ArgbEvaluator::ArgbEvaluator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ArgbEvaluator::ArgbEvaluator()
		: __JniBaseClass(
			"android.animation.ArgbEvaluator",
			"()V"
		) {}
	
	// Methods
	jobject ArgbEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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

