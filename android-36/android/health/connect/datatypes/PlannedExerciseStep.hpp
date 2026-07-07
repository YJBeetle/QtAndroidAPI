#pragma once

#include "./ExerciseCompletionGoal.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "./PlannedExerciseStep.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint PlannedExerciseStep::EXERCISE_CATEGORY_ACTIVE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.PlannedExerciseStep",
			"EXERCISE_CATEGORY_ACTIVE"
		);
	}
	inline jint PlannedExerciseStep::EXERCISE_CATEGORY_COOLDOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.PlannedExerciseStep",
			"EXERCISE_CATEGORY_COOLDOWN"
		);
	}
	inline jint PlannedExerciseStep::EXERCISE_CATEGORY_RECOVERY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.PlannedExerciseStep",
			"EXERCISE_CATEGORY_RECOVERY"
		);
	}
	inline jint PlannedExerciseStep::EXERCISE_CATEGORY_REST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.PlannedExerciseStep",
			"EXERCISE_CATEGORY_REST"
		);
	}
	inline jint PlannedExerciseStep::EXERCISE_CATEGORY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.PlannedExerciseStep",
			"EXERCISE_CATEGORY_UNKNOWN"
		);
	}
	inline jint PlannedExerciseStep::EXERCISE_CATEGORY_WARMUP()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.PlannedExerciseStep",
			"EXERCISE_CATEGORY_WARMUP"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean PlannedExerciseStep::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::ExerciseCompletionGoal PlannedExerciseStep::getCompletionGoal() const
	{
		return callObjectMethod(
			"getCompletionGoal",
			"()Landroid/health/connect/datatypes/ExerciseCompletionGoal;"
		);
	}
	inline JString PlannedExerciseStep::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint PlannedExerciseStep::getExerciseCategory() const
	{
		return callMethod<jint>(
			"getExerciseCategory",
			"()I"
		);
	}
	inline jint PlannedExerciseStep::getExerciseType() const
	{
		return callMethod<jint>(
			"getExerciseType",
			"()I"
		);
	}
	inline JObject PlannedExerciseStep::getPerformanceGoals() const
	{
		return callObjectMethod(
			"getPerformanceGoals",
			"()Ljava/util/List;"
		);
	}
	inline jint PlannedExerciseStep::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
