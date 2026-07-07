#pragma once

#include "../../JFloatArray.hpp"
#include "../../JObject.hpp"
#include "./FloatArrayEvaluator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline FloatArrayEvaluator::FloatArrayEvaluator()
		: JObject(
			"android.animation.FloatArrayEvaluator",
			"()V"
		) {}
	inline FloatArrayEvaluator::FloatArrayEvaluator(JFloatArray arg0)
		: JObject(
			"android.animation.FloatArrayEvaluator",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	
	// Methods
	inline JFloatArray FloatArrayEvaluator::evaluate(jfloat arg0, JFloatArray arg1, JFloatArray arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(F[F[F)[F",
			arg0,
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>()
		);
	}
	inline JObject FloatArrayEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::animation;
#endif
