#pragma once

#include "../../JIntArray.hpp"
#include "../../JObject.hpp"
#include "./IntArrayEvaluator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline IntArrayEvaluator::IntArrayEvaluator()
		: JObject(
			"android.animation.IntArrayEvaluator",
			"()V"
		) {}
	inline IntArrayEvaluator::IntArrayEvaluator(JIntArray arg0)
		: JObject(
			"android.animation.IntArrayEvaluator",
			"([I)V",
			arg0.object<jintArray>()
		) {}
	
	// Methods
	inline JIntArray IntArrayEvaluator::evaluate(jfloat arg0, JIntArray arg1, JIntArray arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(F[I[I)[I",
			arg0,
			arg1.object<jintArray>(),
			arg2.object<jintArray>()
		);
	}
	inline JObject IntArrayEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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

