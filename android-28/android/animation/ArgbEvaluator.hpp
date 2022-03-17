#pragma once

#include "../../JObject.hpp"
#include "./ArgbEvaluator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline ArgbEvaluator::ArgbEvaluator()
		: JObject(
			"android.animation.ArgbEvaluator",
			"()V"
		) {}
	
	// Methods
	inline JObject ArgbEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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

