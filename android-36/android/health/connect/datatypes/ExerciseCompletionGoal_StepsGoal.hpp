#pragma once

#include "../../../../JObject.hpp"
#include "./ExerciseCompletionGoal_StepsGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseCompletionGoal_StepsGoal::ExerciseCompletionGoal_StepsGoal(jint arg0)
		: android::health::connect::datatypes::ExerciseCompletionGoal(
			"android.health.connect.datatypes.ExerciseCompletionGoal$StepsGoal",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jboolean ExerciseCompletionGoal_StepsGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ExerciseCompletionGoal_StepsGoal::getSteps() const
	{
		return callMethod<jint>(
			"getSteps",
			"()I"
		);
	}
	inline jint ExerciseCompletionGoal_StepsGoal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./ExerciseCompletionGoal.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
