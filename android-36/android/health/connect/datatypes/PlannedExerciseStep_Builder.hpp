#pragma once

#include "./ExerciseCompletionGoal.def.hpp"
#include "./ExercisePerformanceGoal.def.hpp"
#include "./PlannedExerciseStep.def.hpp"
#include "../../../../JString.hpp"
#include "./PlannedExerciseStep_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline PlannedExerciseStep_Builder::PlannedExerciseStep_Builder(jint arg0, jint arg1, android::health::connect::datatypes::ExerciseCompletionGoal arg2)
		: JObject(
			"android.health.connect.datatypes.PlannedExerciseStep$Builder",
			"(IILandroid/health/connect/datatypes/ExerciseCompletionGoal;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::PlannedExerciseStep_Builder PlannedExerciseStep_Builder::addPerformanceGoal(android::health::connect::datatypes::ExercisePerformanceGoal arg0) const
	{
		return callObjectMethod(
			"addPerformanceGoal",
			"(Landroid/health/connect/datatypes/ExercisePerformanceGoal;)Landroid/health/connect/datatypes/PlannedExerciseStep$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseStep PlannedExerciseStep_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/PlannedExerciseStep;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseStep_Builder PlannedExerciseStep_Builder::clearPerformanceGoals() const
	{
		return callObjectMethod(
			"clearPerformanceGoals",
			"()Landroid/health/connect/datatypes/PlannedExerciseStep$Builder;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseStep_Builder PlannedExerciseStep_Builder::setCompletionGoal(android::health::connect::datatypes::ExerciseCompletionGoal arg0) const
	{
		return callObjectMethod(
			"setCompletionGoal",
			"(Landroid/health/connect/datatypes/ExerciseCompletionGoal;)Landroid/health/connect/datatypes/PlannedExerciseStep$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseStep_Builder PlannedExerciseStep_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/PlannedExerciseStep$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseStep_Builder PlannedExerciseStep_Builder::setExerciseCategory(jint arg0) const
	{
		return callObjectMethod(
			"setExerciseCategory",
			"(I)Landroid/health/connect/datatypes/PlannedExerciseStep$Builder;",
			arg0
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseStep_Builder PlannedExerciseStep_Builder::setExerciseType(jint arg0) const
	{
		return callObjectMethod(
			"setExerciseType",
			"(I)Landroid/health/connect/datatypes/PlannedExerciseStep$Builder;",
			arg0
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseStep_Builder PlannedExerciseStep_Builder::setPerformanceGoals(JObject arg0) const
	{
		return callObjectMethod(
			"setPerformanceGoals",
			"(Ljava/util/List;)Landroid/health/connect/datatypes/PlannedExerciseStep$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
