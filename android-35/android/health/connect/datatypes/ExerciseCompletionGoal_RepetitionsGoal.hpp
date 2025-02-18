#pragma once

#include "../../../../JObject.hpp"
#include "./ExerciseCompletionGoal_RepetitionsGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseCompletionGoal_RepetitionsGoal::ExerciseCompletionGoal_RepetitionsGoal(jint arg0)
		: android::health::connect::datatypes::ExerciseCompletionGoal(
			"android.health.connect.datatypes.ExerciseCompletionGoal$RepetitionsGoal",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jboolean ExerciseCompletionGoal_RepetitionsGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ExerciseCompletionGoal_RepetitionsGoal::getRepetitions() const
	{
		return callMethod<jint>(
			"getRepetitions",
			"()I"
		);
	}
	inline jint ExerciseCompletionGoal_RepetitionsGoal::hashCode() const
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
