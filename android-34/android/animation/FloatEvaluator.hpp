#pragma once

#include "../../java/lang/Float.def.hpp"
#include "../../java/lang/Number.def.hpp"
#include "../../JObject.hpp"
#include "./FloatEvaluator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline FloatEvaluator::FloatEvaluator()
		: JObject(
			"android.animation.FloatEvaluator",
			"()V"
		) {}
	
	// Methods
	inline java::lang::Float FloatEvaluator::evaluate(jfloat arg0, java::lang::Number arg1, java::lang::Number arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(FLjava/lang/Number;Ljava/lang/Number;)Ljava/lang/Float;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject FloatEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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
