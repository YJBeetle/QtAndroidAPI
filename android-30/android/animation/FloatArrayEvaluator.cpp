#include "../../JFloatArray.hpp"
#include "../../JObject.hpp"
#include "./FloatArrayEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	FloatArrayEvaluator::FloatArrayEvaluator(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FloatArrayEvaluator::FloatArrayEvaluator()
		: JObject(
			"android.animation.FloatArrayEvaluator",
			"()V"
		) {}
	FloatArrayEvaluator::FloatArrayEvaluator(JFloatArray arg0)
		: JObject(
			"android.animation.FloatArrayEvaluator",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	
	// Methods
	JFloatArray FloatArrayEvaluator::evaluate(jfloat arg0, JFloatArray arg1, JFloatArray arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(F[F[F)[F",
			arg0,
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>()
		);
	}
	JObject FloatArrayEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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

