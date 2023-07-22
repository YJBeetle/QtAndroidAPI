#pragma once

#include "../../java/lang/Integer.def.hpp"
#include "../../JObject.hpp"
#include "./IntEvaluator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline IntEvaluator::IntEvaluator()
		: JObject(
			"android.animation.IntEvaluator",
			"()V"
		) {}
	
	// Methods
	inline java::lang::Integer IntEvaluator::evaluate(jfloat arg0, java::lang::Integer arg1, java::lang::Integer arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(FLjava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject IntEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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
