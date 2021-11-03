#include "./IntArrayEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	IntArrayEvaluator::IntArrayEvaluator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IntArrayEvaluator::IntArrayEvaluator()
		: JObject(
			"android.animation.IntArrayEvaluator",
			"()V"
		) {}
	IntArrayEvaluator::IntArrayEvaluator(jintArray arg0)
		: JObject(
			"android.animation.IntArrayEvaluator",
			"([I)V",
			arg0
		) {}
	
	// Methods
	jintArray IntArrayEvaluator::evaluate(jfloat arg0, jintArray arg1, jintArray arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(F[I[I)[I",
			arg0,
			arg1,
			arg2
		).object<jintArray>();
	}
	jobject IntArrayEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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

