#pragma once

#include "../graphics/Rect.def.hpp"
#include "../../JObject.hpp"
#include "./RectEvaluator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline RectEvaluator::RectEvaluator()
		: JObject(
			"android.animation.RectEvaluator",
			"()V"
		) {}
	inline RectEvaluator::RectEvaluator(android::graphics::Rect arg0)
		: JObject(
			"android.animation.RectEvaluator",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::Rect RectEvaluator::evaluate(jfloat arg0, android::graphics::Rect arg1, android::graphics::Rect arg2) const
	{
		return callObjectMethod(
			"evaluate",
			"(FLandroid/graphics/Rect;Landroid/graphics/Rect;)Landroid/graphics/Rect;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject RectEvaluator::evaluate(jfloat arg0, JObject arg1, JObject arg2) const
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
