#include "./FloatArrayEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	FloatArrayEvaluator::FloatArrayEvaluator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FloatArrayEvaluator::FloatArrayEvaluator()
		: __JniBaseClass(
			"android.animation.FloatArrayEvaluator",
			"()V"
		) {}
	FloatArrayEvaluator::FloatArrayEvaluator(jfloatArray arg0)
		: __JniBaseClass(
			"android.animation.FloatArrayEvaluator",
			"([F)V",
			arg0
		) {}
	
	// Methods
	jfloatArray FloatArrayEvaluator::evaluate(jfloat arg0, jfloatArray arg1, jfloatArray arg2)
	{
		return callObjectMethod(
			"evaluate",
			"(F[F[F)[F",
			arg0,
			arg1,
			arg2
		).object<jfloatArray>();
	}
	jobject FloatArrayEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
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

